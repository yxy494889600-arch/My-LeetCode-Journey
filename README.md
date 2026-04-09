# 💡 刷题笔记与坑点总结
* LCR 120. 寻找文件副本：注意空间换时间的思路，一开始用的for双循环挨个找重复元素，后用集合set（红黑树），但`unordered_set`（哈希表）更快，都比双循环快得多。
* LCR 136. 删除链表节点：在算法题的语境下，区分两个概念：头指针 (`head`)：指向第一个实际存数据节点。头结点 (`Dummy Node`)：“空节点”，它本身不存有效数据。
*  LCR 141. 链表倒序：一开始用申请额外内存，后面学会三指针法，pre,cur,next，初始pre置空，cur指向head。循环体中，先用 `next = cur->next` 备份，再改 `cur->next = pre`，最后整体平移。
* LCR 136.140.141. 链表结构体：`ListNode() : val(0), next(nullptr) {};ListNode(int x) : val(x), next(nullptr) {};ListNode(int x, ListNode *next) : val(x), next(next) {}
  };`ListNode用法：ListNode* nextNode = new ListNode(5);// 创建新节点 3，并直接让它的 next 指向 5 ListNode* node = new ListNode(3, nextNode);
