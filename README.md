# ![](https://drive.google.com/uc?id=10INx5_pkhMcYRdx_OO4rXNXxcsvPtBYq) 二元搜尋（Binary Search）
> ##### 理論請自行找，網路上有很多相關的文章，這邊只關注於範例實作的部分.

---

<!--ts-->
## 目錄
* [簡介](#簡介)
* [示意圖](#示意圖)
* [實作範例](#實作範例)
* [參考資料](#參考資料)
<!--te-->

---

## 簡介
二分搜索（Binary Search）是一種高效的搜索算法，用於在已排序的數列中尋找目標元素。<br>
它的基本思想是通過比較目標元素與數列的中間元素，來縮小搜索範圍。<br>
<br>
以下是二分搜索的一般步驟：<br>
- 初始化左右指針，左指針指向數列的起始位置，右指針指向數列的結束位置。
- 在每個迭代步驟中，計算左右指針的中間位置。
- 比較目標元素與中間位置的元素。如果目標元素等於中間位置的元素，則找到了目標元素，搜索結束。<br>
  如果目標元素小於中間位置的元素，則更新右指針為中間位置的前一個位置。<br>
  如果目標元素大於中間位置的元素，則更新左指針為中間位置的後一個位置。<br>
- 重複執行步驟2和步驟3，直到找到目標元素或左指針大於右指針，表示目標元素不存在於數列中。

<br>

請注意，二分搜索算法要求數列已經按照升序（由小到大）排序。<br>
如果數列未排序，需要先進行排序操作，然後再進行二分搜索。<br>

---

## 示意圖:
<img src="https://drive.google.com/uc?id=1Dqzu_sezyH8agfnDRqFTWcBFzlFrpg8k" height="70%" width="70%"/>

> 圖片來源：[iThome鐵人賽(Frank) - 演算法 二分搜尋法 Binary Search](https://ithelp.ithome.com.tw/articles/10280844) 

---

## 實作範例:
- [Example](https://github.com/RC-Dev-Tech/algorithm-binary-search/blob/main/C%2B%2B/main.cpp) - Binary Search (C++)

---

## 參考資料
* [Wiki - Binary Search](https://zh.wikipedia.org/wiki/%E4%BA%8C%E5%88%86%E6%90%9C%E5%B0%8B%E6%BC%94%E7%AE%97%E6%B3%95) <br>
* [iThome鐵人賽(Frank) - 二分搜尋法 Binary Search](https://ithelp.ithome.com.tw/articles/10280844) <br>

---

<!--ts-->
#### [目錄 ↩](#目錄)
<!--te-->
---
