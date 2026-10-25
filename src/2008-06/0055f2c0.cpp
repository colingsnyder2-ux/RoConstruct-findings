// from server: 100% by king_originala
// roc 2008-06 0055f2c0  unit: RBX::VContentProvider::?$DescribedNonCreatable  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055f2c0
//
// 0055f2c0  64a100000000         mov eax, dword ptr fs:[0]
// 0055f2c6  6aff                 push -1
// 0055f2c8  6858ea7c00           push 0x7cea58
// 0055f2cd  50                   push eax
// 0055f2ce  64892500000000       mov dword ptr fs:[0], esp
// 0055f2d5  53                   push ebx
// 0055f2d6  55                   push ebp
// 0055f2d7  56                   push esi
// 0055f2d8  57                   push edi
// 0055f2d9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0055f2dd  807f3d00             cmp byte ptr [edi + 0x3d], 0
// 0055f2e1  8bd9                 mov ebx, ecx
// 0055f2e3  8bf7                 mov esi, edi
// 0055f2e5  7545                 jne 0x55f32c
// 0055f2e7  8b4608               mov eax, dword ptr [esi + 8]
// 0055f2ea  50                   push eax
// 0055f2eb  8bcb                 mov ecx, ebx
// 0055f2ed  e8ceffffff           call 0x55f2c0
// 0055f2f2  8b36                 mov esi, dword ptr [esi]
// 0055f2f4  8d6f0c               lea ebp, [edi + 0xc]
// 0055f2f7  896c2420             mov dword ptr [esp + 0x20], ebp
// 0055f2fb  8d4d20               lea ecx, [ebp + 0x20]
// 0055f2fe  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0055f306  e85539ecff           call 0x422c60
// 0055f30b  8bcd                 mov ecx, ebp
// 0055f30d  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0055f315  ff1568248000         call dword ptr [0x802468]
// 0055f31b  57                   push edi
// 0055f31c  e859131400           call 0x6a067a
// 0055f321  83c404               add esp, 4
// 0055f324  807e3d00             cmp byte ptr [esi + 0x3d], 0
// 0055f328  8bfe                 mov edi, esi
// 0055f32a  74bb                 je 0x55f2e7
// 0055f32c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0055f330  5f                   pop edi
// 0055f331  5e                   pop esi
// 0055f332  5d                   pop ebp
// 0055f333  64890d00000000       mov dword ptr fs:[0], ecx
// 0055f33a  5b                   pop ebx
// 0055f33b  83c40c               add esp, 0xc
// 0055f33e  c20400               ret 4

extern void (__thiscall *destroy_string)(void *);
void __cdecl operator delete(void *);

struct StringStorage
{
    char storage[32];
    ~StringStorage();
};

inline StringStorage::~StringStorage()
{
    destroy_string(this);
}

struct Member
{
    char storage[16];
    ~Member();
};

struct Value : StringStorage
{
    Member member;
    ~Value();
};

inline Value::~Value()
{
}

struct Node
{
    Node *left;
    Node *parent;
    Node *right;
    Value value;
    unsigned char color;
    unsigned char isNil;
};

struct S
{
    void erase(Node *);
};

void S::erase(Node *node)
{
    Node *cursor = node;
    while (!cursor->isNil)
    {
        erase(cursor->right);
        cursor = cursor->left;
        node->value.~Value();
        operator delete(node);
        node = cursor;
    }
}
