// from server: 100% by tester
// roc 2008-06 004af0c0  unit: RBX::Network::Replicator::MarkerItem  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004af0c0
//
// 004af0c0  53                   push ebx
// 004af0c1  56                   push esi
// 004af0c2  57                   push edi
// 004af0c3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004af0c7  807f3d00             cmp byte ptr [edi + 0x3d], 0
// 004af0cb  8bd9                 mov ebx, ecx
// 004af0cd  8bf7                 mov esi, edi
// 004af0cf  7526                 jne 0x4af0f7
// 004af0d1  8b4608               mov eax, dword ptr [esi + 8]
// 004af0d4  50                   push eax
// 004af0d5  8bcb                 mov ecx, ebx
// 004af0d7  e8e4ffffff           call 0x4af0c0
// 004af0dc  8b36                 mov esi, dword ptr [esi]
// 004af0de  8d4f10               lea ecx, [edi + 0x10]
// 004af0e1  e8dac7ffff           call 0x4ab8c0
// 004af0e6  57                   push edi
// 004af0e7  e88e151f00           call 0x6a067a
// 004af0ec  83c404               add esp, 4
// 004af0ef  807e3d00             cmp byte ptr [esi + 0x3d], 0
// 004af0f3  8bfe                 mov edi, esi
// 004af0f5  74da                 je 0x4af0d1
// 004af0f7  5f                   pop edi
// 004af0f8  5e                   pop esi
// 004af0f9  5b                   pop ebx
// 004af0fa  c20400               ret 4

void __cdecl operator delete(void*);

struct Value {
    ~Value();
};

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    char padding[4];
    Value value;
    char padding2[44];
    char isnil;
};

struct Tree {
    void erase(Node* root);
};

void Tree::erase(Node* root)
{
    for (Node* node = root; !node->isnil; root = node) {
        erase(node->right);
        node = node->left;
        root->value.~Value();
        operator delete(root);
    }
}
