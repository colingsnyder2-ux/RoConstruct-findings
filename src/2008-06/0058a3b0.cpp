// from server: 100% by tester
// roc 2008-06 0058a3b0  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058a3b0
//
// 0058a3b0  53                   push ebx
// 0058a3b1  56                   push esi
// 0058a3b2  57                   push edi
// 0058a3b3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0058a3b7  807f4900             cmp byte ptr [edi + 0x49], 0
// 0058a3bb  8bd9                 mov ebx, ecx
// 0058a3bd  8bf7                 mov esi, edi
// 0058a3bf  7526                 jne 0x58a3e7
// 0058a3c1  8b4608               mov eax, dword ptr [esi + 8]
// 0058a3c4  50                   push eax
// 0058a3c5  8bcb                 mov ecx, ebx
// 0058a3c7  e8e4ffffff           call 0x58a3b0
// 0058a3cc  8b36                 mov esi, dword ptr [esi]
// 0058a3ce  8d4f10               lea ecx, [edi + 0x10]
// 0058a3d1  e84af3ffff           call 0x589720
// 0058a3d6  57                   push edi
// 0058a3d7  e89e621100           call 0x6a067a
// 0058a3dc  83c404               add esp, 4
// 0058a3df  807e4900             cmp byte ptr [esi + 0x49], 0
// 0058a3e3  8bfe                 mov edi, esi
// 0058a3e5  74da                 je 0x58a3c1
// 0058a3e7  5f                   pop edi
// 0058a3e8  5e                   pop esi
// 0058a3e9  5b                   pop ebx
// 0058a3ea  c20400               ret 4

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
    char padding2[56];
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
