// from server: 100% by king_originala
// roc 2008-06 00653aa0  unit: RBX::ScoreHud  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00653aa0
//
// 00653aa0  53                   push ebx
// 00653aa1  56                   push esi
// 00653aa2  57                   push edi
// 00653aa3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00653aa7  807f3100             cmp byte ptr [edi + 0x31], 0
// 00653aab  8bd9                 mov ebx, ecx
// 00653aad  8bf7                 mov esi, edi
// 00653aaf  7526                 jne 0x653ad7
// 00653ab1  8b4608               mov eax, dword ptr [esi + 8]
// 00653ab4  50                   push eax
// 00653ab5  8bcb                 mov ecx, ebx
// 00653ab7  e8e4ffffff           call 0x653aa0
// 00653abc  8b36                 mov esi, dword ptr [esi]
// 00653abe  8d4f10               lea ecx, [edi + 0x10]
// 00653ac1  e8aa75e1ff           call 0x46b070
// 00653ac6  57                   push edi
// 00653ac7  e8aecb0400           call 0x6a067a
// 00653acc  83c404               add esp, 4
// 00653acf  807e3100             cmp byte ptr [esi + 0x31], 0
// 00653ad3  8bfe                 mov edi, esi
// 00653ad5  74da                 je 0x653ab1
// 00653ad7  5f                   pop edi
// 00653ad8  5e                   pop esi
// 00653ad9  5b                   pop ebx
// 00653ada  c20400               ret 4

struct Value {
    char storage[32];
    ~Value();
};

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    unsigned long padding;
    Value value;
    unsigned char color;
    unsigned char nil;
};

extern "C" void __cdecl release(void*);

struct S {
    void erase(Node* root);
};

void S::erase(Node* root)
{
    Node* current = root;
    while (!current->nil) {
        erase(current->right);
        current = current->left;
        root->value.~Value();
        release(root);
        root = current;
    }
}
