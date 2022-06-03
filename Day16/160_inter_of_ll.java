/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode head1, ListNode head2) {
        ListNode cur1=head1;
        ListNode cur2=head2;
        while(cur1!=null&&cur2!=null){
            if(cur1==cur2){
                return cur1;
            }
            cur1=cur1.next;
            cur2=cur2.next;
            if(cur1 == null) { 
                cur1 = head2;
            } else if(cur2 == null) { 
                cur2 = head1;
            }
        }
        return null;
    }
}