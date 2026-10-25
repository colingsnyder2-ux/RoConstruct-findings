// from server: 100% by king_originala
// roc 2008-06 00653a10  unit: RBX::ScoreHud  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00653a10
//
// 00653a10  64a100000000         mov eax, dword ptr fs:[0]
// 00653a16  6aff                 push -1
// 00653a18  68a9c87d00           push 0x7dc8a9
// 00653a1d  50                   push eax
// 00653a1e  64892500000000       mov dword ptr fs:[0], esp
// 00653a25  53                   push ebx
// 00653a26  55                   push ebp
// 00653a27  56                   push esi
// 00653a28  57                   push edi
// 00653a29  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00653a2d  807f4900             cmp byte ptr [edi + 0x49], 0
// 00653a31  8bd9                 mov ebx, ecx
// 00653a33  8bf7                 mov esi, edi
// 00653a35  7545                 jne 0x653a7c
// 00653a37  8b4608               mov eax, dword ptr [esi + 8]
// 00653a3a  50                   push eax
// 00653a3b  8bcb                 mov ecx, ebx
// 00653a3d  e8ceffffff           call 0x653a10
// 00653a42  8b36                 mov esi, dword ptr [esi]
// 00653a44  8d6f0c               lea ebp, [edi + 0xc]
// 00653a47  896c2420             mov dword ptr [esp + 0x20], ebp
// 00653a4b  8d4d1c               lea ecx, [ebp + 0x1c]
// 00653a4e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00653a56  e81576e1ff           call 0x46b070
// 00653a5b  8bcd                 mov ecx, ebp
// 00653a5d  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00653a65  ff1568248000         call dword ptr [0x802468]
// 00653a6b  57                   push edi
// 00653a6c  e809cc0400           call 0x6a067a
// 00653a71  83c404               add esp, 4
// 00653a74  807e4900             cmp byte ptr [esi + 0x49], 0
// 00653a78  8bfe                 mov edi, esi
// 00653a7a  74bb                 je 0x653a37
// 00653a7c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00653a80  5f                   pop edi
// 00653a81  5e                   pop esi
// 00653a82  5d                   pop ebp
// 00653a83  64890d00000000       mov dword ptr fs:[0], ecx
// 00653a8a  5b                   pop ebx
// 00653a8b  83c40c               add esp, 0xc
// 00653a8e  c20400               ret 4

struct String;
extern void (__thiscall *destroyString)(String *);
extern void __cdecl operator delete(void *);

struct String {
    char storage[28];
    __forceinline ~String();
};

struct Value {
    char storage[32];
    ~Value();
};

struct Pair {
    String first;
    Value second;
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    Pair value;
    unsigned char color;
    unsigned char nil;
};

struct S {
    void erase(Node *);
};

__forceinline String::~String()
{
    destroyString(this);
}

void S::erase(Node *node)
{
    for (Node *current = node; !current->nil; node = current) {
        erase(current->right);
        current = current->left;
        node->value.~Pair();
        operator delete(node);
    }
}
