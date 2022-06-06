void deleteNode(Node *del) {
       Node *tmp = del->next;
       del->data = (del->next)->data;
       del->next = (del->next)->next;
       free(tmp);
}