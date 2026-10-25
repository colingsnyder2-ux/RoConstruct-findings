// from server: 100% by king_originala
// roc 2008-06 00669340  unit: RBX::TreeStage  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00669340
//
// 00669340  83ec0c               sub esp, 0xc
// 00669343  56                   push esi
// 00669344  8bf1                 mov esi, ecx
// 00669346  807e1400             cmp byte ptr [esi + 0x14], 0
// 0066934a  7431                 je 0x66937d
// 0066934c  57                   push edi
// 0066934d  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00669351  807f1c00             cmp byte ptr [edi + 0x1c], 0
// 00669355  897c2418             mov dword ptr [esp + 0x18], edi
// 00669359  751a                 jne 0x669375
// 0066935b  8d442418             lea eax, [esp + 0x18]
// 0066935f  50                   push eax
// 00669360  8d4c240c             lea ecx, [esp + 0xc]
// 00669364  51                   push ecx
// 00669365  8d4e58               lea ecx, [esi + 0x58]
// 00669368  e8d3f8f7ff           call 0x5e8c40
// 0066936d  b001                 mov al, 1
// 0066936f  884614               mov byte ptr [esi + 0x14], al
// 00669372  88471c               mov byte ptr [edi + 0x1c], al
// 00669375  5f                   pop edi
// 00669376  5e                   pop esi
// 00669377  83c40c               add esp, 0xc
// 0066937a  c20400               ret 4
// 0066937d  8b542414             mov edx, dword ptr [esp + 0x14]
// 00669381  52                   push edx
// 00669382  e819fcffff           call 0x668fa0
// 00669387  5e                   pop esi
// 00669388  83c40c               add esp, 0xc
// 0066938b  c20400               ret 4

struct Node {
    char padding[0x1c];
    bool marked;
};

struct InsertResult {
    void* first;
    void* second;
    bool inserted;
};

struct Container {
    InsertResult insert(Node* const& node);
};

struct TreeStage {
    char padding0[0x14];
    bool active;
    char padding1[0x43];
    Container pending;

    void fallback(Node* node);
    void process(Node* node);
};

void TreeStage::process(Node* node)
{
    if (active) {
        bool marked = node->marked;
        Node* value = node;
        if (!marked) {
            pending.insert(value);
            active = true;
            node->marked = true;
        }
    } else {
        fallback(node);
    }
}
