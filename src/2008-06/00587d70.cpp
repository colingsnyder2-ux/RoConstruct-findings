// from server: 100% by king_originala
// roc 2008-06 00587d70  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00587d70
//
// 00587d70  53                   push ebx
// 00587d71  56                   push esi
// 00587d72  57                   push edi
// 00587d73  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00587d77  807f1900             cmp byte ptr [edi + 0x19], 0
// 00587d7b  8bd9                 mov ebx, ecx
// 00587d7d  8bf7                 mov esi, edi
// 00587d7f  752d                 jne 0x587dae
// 00587d81  8b4608               mov eax, dword ptr [esi + 8]
// 00587d84  50                   push eax
// 00587d85  8bcb                 mov ecx, ebx
// 00587d87  e8e4ffffff           call 0x587d70
// 00587d8c  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00587d8f  8b36                 mov esi, dword ptr [esi]
// 00587d91  85c9                 test ecx, ecx
// 00587d93  7408                 je 0x587d9d
// 00587d95  8b11                 mov edx, dword ptr [ecx]
// 00587d97  8b02                 mov eax, dword ptr [edx]
// 00587d99  6a01                 push 1
// 00587d9b  ffd0                 call eax
// 00587d9d  57                   push edi
// 00587d9e  e8d7881100           call 0x6a067a
// 00587da3  83c404               add esp, 4
// 00587da6  807e1900             cmp byte ptr [esi + 0x19], 0
// 00587daa  8bfe                 mov edi, esi
// 00587dac  74d3                 je 0x587d81
// 00587dae  5f                   pop edi
// 00587daf  5e                   pop esi
// 00587db0  5b                   pop ebx
// 00587db1  c20400               ret 4

struct Object
{
    virtual ~Object();
};

struct Node
{
    Node* left;
    Node* parent;
    Node* right;
    unsigned int reserved[2];
    Object* value;
    unsigned char color;
    unsigned char nil;
};

extern "C" void __cdecl func_006a067a(void*);

struct S
{
    void f(Node* root);
};

void S::f(Node* root)
{
    for (Node* node = root; !node->nil; root = node)
    {
        f(node->right);
        node = node->left;
        delete root->value;
        func_006a067a(root);
    }
}
