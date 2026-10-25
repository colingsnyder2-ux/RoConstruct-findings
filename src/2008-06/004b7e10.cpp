// from server: 100% by king_originala
// roc 2008-06 004b7e10  unit: RBX::Network::VReplicator::?$SignalDesc  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b7e10
//
// 004b7e10  53                   push ebx
// 004b7e11  56                   push esi
// 004b7e12  57                   push edi
// 004b7e13  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004b7e17  807f2d00             cmp byte ptr [edi + 0x2d], 0
// 004b7e1b  8bd9                 mov ebx, ecx
// 004b7e1d  8bf7                 mov esi, edi
// 004b7e1f  7526                 jne 0x4b7e47
// 004b7e21  8b4608               mov eax, dword ptr [esi + 8]
// 004b7e24  50                   push eax
// 004b7e25  8bcb                 mov ecx, ebx
// 004b7e27  e8e4ffffff           call 0x4b7e10
// 004b7e2c  8b36                 mov esi, dword ptr [esi]
// 004b7e2e  8d4f14               lea ecx, [edi + 0x14]
// 004b7e31  e86a01ffff           call 0x4a7fa0
// 004b7e36  57                   push edi
// 004b7e37  e83e881e00           call 0x6a067a
// 004b7e3c  83c404               add esp, 4
// 004b7e3f  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 004b7e43  8bfe                 mov edi, esi
// 004b7e45  74da                 je 0x4b7e21
// 004b7e47  5f                   pop edi
// 004b7e48  5e                   pop esi
// 004b7e49  5b                   pop ebx
// 004b7e4a  c20400               ret 4

struct Value {
    char data[24];
    ~Value();
};

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    char padding[8];
    Value value;
    unsigned char color;
    unsigned char nil;
};

extern "C" void __cdecl release(void*);

struct S {
    void erase(Node* node);
};

void S::erase(Node* node)
{
    for (Node* next = node; !next->nil; node = next) {
        erase(next->right);
        next = next->left;
        node->value.~Value();
        release(node);
    }
}
