// from server: 100% by tester
// roc 2008-06 00442100  unit: TextureItem  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00442100
//
// 00442100  53                   push ebx
// 00442101  56                   push esi
// 00442102  57                   push edi
// 00442103  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00442107  807f2900             cmp byte ptr [edi + 0x29], 0
// 0044210b  8bd9                 mov ebx, ecx
// 0044210d  8bf7                 mov esi, edi
// 0044210f  7526                 jne 0x442137
// 00442111  8b4608               mov eax, dword ptr [esi + 8]
// 00442114  50                   push eax
// 00442115  8bcb                 mov ecx, ebx
// 00442117  e8e4ffffff           call 0x442100
// 0044211c  8b36                 mov esi, dword ptr [esi]
// 0044211e  8d4f10               lea ecx, [edi + 0x10]
// 00442121  e8ba0e1600           call 0x5a2fe0
// 00442126  57                   push edi
// 00442127  e84ee52500           call 0x6a067a
// 0044212c  83c404               add esp, 4
// 0044212f  807e2900             cmp byte ptr [esi + 0x29], 0
// 00442133  8bfe                 mov edi, esi
// 00442135  74da                 je 0x442111
// 00442137  5f                   pop edi
// 00442138  5e                   pop esi
// 00442139  5b                   pop ebx
// 0044213a  c20400               ret 4

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
    char padding2[24];
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
