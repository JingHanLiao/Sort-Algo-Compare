這次的實驗主要是測試不同 sort algo 的數據比較來得到哪一個演算法速度較快，測試的參數為沒有被排序的數字數量，數字數量的範圍是 1000 個數字~96000 個數字，要比較的演算法有三種，第一種為 Insert sort，第二種為 Quick sort，第三種為 Merge sort。

當三個演算法都測試好之後，就會把剛才測試的數據寫入 sort_compare.csv 檔案裡面，first column 代表沒有被排序的數字數量，接下來是Insert sort和Quick sort與Merge sort的執行時間(Sec)，這樣就可以觀察各個演算法的執行時間速度之差異。

![image](https://github.com/JingHanLiao/Sort_Algo_Compare-/blob/master/IMG/sort.png)

如果要更方便的觀察三個演算法的比較差異，可以使用圖表的方式來呈現三個演算法的執行速度之比較，這裡使用了 gnuplot 製圖程式來把 sort_compare.csv 檔裡面的數據製作成圖表，這樣就可以很清楚之看到哪一個演算法執行時間較快。

![image](https://github.com/JingHanLiao/Sort_Algo_Compare-/blob/master/IMG/final.png)

最後根據圖表可以知道，Merge sort 和 Quick sort 的執行時間較相近，所以這兩個演算法的效率以及執行時間都差不多，反而最不好的演算法為 Insert sort，Insert sort 跟其他兩個演算法的執行時間差的非常多而且執行時間較慢，所以比起 Insert sort，Merge sort 和 Quick sort 都是很好的排序演算法。
