 class Solution {
 2 public:
 3     ListNode *rotateRight(ListNode *head, int k) {
 4         if (!head) return NULL;
 5         int n = 0;
 6         ListNode *cur = head;
 7         while (cur) {
 8             ++n;
 9             cur = cur->next;
10         }
11         k %= n;
12         ListNode *fast = head, *slow = head;
13         for (int i = 0; i < k; ++i) {
14             if (fast) fast = fast->next;
15         }
16         if (!fast) return head;
17         while (fast->next) {
18             fast = fast->next;
19             slow = slow->next;
20         }
21         fast->next = head;
22         fast = slow->next;
23         slow->next = NULL;
24         return fast;
25     }
26 };