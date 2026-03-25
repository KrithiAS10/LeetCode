class Solution {
    public int maxProfit(int[] prices) {
        int minProfit=Integer.MAX_VALUE;
        int maxProfit=Integer.MIN_VALUE;
        int[] arr1=new int[prices.length];
        int[] arr2=new int[prices.length];
        int maxSofar=0;
        for(int i=0;i<prices.length;i++){
            minProfit=Math.min(minProfit,prices[i]);
            arr1[i]=Math.max((i>0?arr1[i-1]:0),prices[i]-minProfit);
        }
        System.out.println("");
        for(int i=prices.length-1;i>=0;i--){
            maxProfit=Math.max(maxProfit,prices[i]);
            arr2[i]=Math.max((i<(prices.length-1)?arr2[i+1]:0),maxProfit-prices[i]);
        }
        for(int i=0;i<prices.length;i++){
            maxSofar=Math.max(maxSofar,arr1[i]+arr2[i]);
        }
        return maxSofar;
    }
}
