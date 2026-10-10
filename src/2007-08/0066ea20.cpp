// from server: 80% by colin
struct Node {
    Node* next;
    Node* field4;
    struct Payload* data;
};

struct Payload {
    char pad[0xb8];
    int key;
};

struct CXTPDockingPaneManager {
    char pad[0xd0];
    int field_d0;
    Node* func_0066e160();
    Node* find(int key);
};

Node* CXTPDockingPaneManager::find(int key)
{
    if (field_d0 == 0)
        return 0;
    Node* n = func_0066e160();
    n = n->field4;
    if (n == 0)
        return 0;
    do {
        Payload* p = n->data;
        if (p->key == key)
            return n;
        n = n->next;
    } while (n != 0);
    return 0;
}
