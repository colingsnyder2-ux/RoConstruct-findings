// from server: 67% by colin
// roc 2007-08 0066ea20  unit: CXTPDockingPaneManager  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066ea20
//
// 0066ea20  83b9d000000000       cmp dword ptr [ecx + 0xd0], 0
// 0066ea27  742a                 je 0x66ea53
// 0066ea29  e832f7ffff           call 0x66e160
// 0066ea2e  8b4004               mov eax, dword ptr [eax + 4]
// 0066ea31  85c0                 test eax, eax
// 0066ea33  741e                 je 0x66ea53
// 0066ea35  8b542404             mov edx, dword ptr [esp + 4]
// 0066ea39  8da42400000000       lea esp, [esp]
// 0066ea40  8bc8                 mov ecx, eax
// 0066ea42  8b4908               mov ecx, dword ptr [ecx + 8]
// 0066ea45  3991b8000000         cmp dword ptr [ecx + 0xb8], edx
// 0066ea4b  8b00                 mov eax, dword ptr [eax]
// 0066ea4d  7409                 je 0x66ea58
// 0066ea4f  85c0                 test eax, eax
// 0066ea51  75ed                 jne 0x66ea40
// 0066ea53  33c0                 xor eax, eax
// 0066ea55  c20400               ret 4
// 0066ea58  8bc1                 mov eax, ecx
// 0066ea5a  c20400               ret 4

struct Node {
    Node* next;
    void* field4;
    struct Payload* data;
};

struct Payload {
    char pad[0xb8];
    int key;
};

struct CXTPDockingPaneManager {
    char pad[0xd0];
    int field_d0;
    Node* find(int);
    Node* func_0066e160();
};

Node* CXTPDockingPaneManager::func_0066e160()
{
    return 0;
}

Node* CXTPDockingPaneManager::find(int key)
{
    if (field_d0 == 0)
        return 0;
    Node* n = func_0066e160();
    n = *(Node**)((char*)n + 4);
    if (n == 0)
        return 0;
    do {
        Payload* p = (Payload*)n->data;
        if (p->key == key)
            return n;
        n = n->next;
    } while (n != 0);
    return 0;
}
