// from server: 100% by king_originala
// roc 2008-06 005da290  unit: RBX::VHumanoid::?$BoundFuncDesc  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005da290
//
// 005da290  6aff                 push -1
// 005da292  689b5e7d00           push 0x7d5e9b
// 005da297  64a100000000         mov eax, dword ptr fs:[0]
// 005da29d  50                   push eax
// 005da29e  64892500000000       mov dword ptr fs:[0], esp
// 005da2a5  51                   push ecx
// 005da2a6  56                   push esi
// 005da2a7  8bf1                 mov esi, ecx
// 005da2a9  89742404             mov dword ptr [esp + 4], esi
// 005da2ad  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 005da2b0  c744241001000000     mov dword ptr [esp + 0x10], 1
// 005da2b8  85c9                 test ecx, ecx
// 005da2ba  7408                 je 0x5da2c4
// 005da2bc  8b01                 mov eax, dword ptr [ecx]
// 005da2be  8b10                 mov edx, dword ptr [eax]
// 005da2c0  6a01                 push 1
// 005da2c2  ffd2                 call edx
// 005da2c4  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 005da2c7  c644241000           mov byte ptr [esp + 0x10], 0
// 005da2cc  85c9                 test ecx, ecx
// 005da2ce  7408                 je 0x5da2d8
// 005da2d0  8b01                 mov eax, dword ptr [ecx]
// 005da2d2  8b10                 mov edx, dword ptr [eax]
// 005da2d4  6a01                 push 1
// 005da2d6  ffd2                 call edx
// 005da2d8  8d4e18               lea ecx, [esi + 0x18]
// 005da2db  c744241002000000     mov dword ptr [esp + 0x10], 2
// 005da2e3  e8f8f6e3ff           call 0x4199e0
// 005da2e8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005da2ec  c70630b78000         mov dword ptr [esi], 0x80b730
// 005da2f2  5e                   pop esi
// 005da2f3  64890d00000000       mov dword ptr fs:[0], ecx
// 005da2fa  83c410               add esp, 0x10
// 005da2fd  c3                   ret 

struct Object {
    virtual ~Object();
};

struct Value {
    char storage[0x30];
    ~Value();
};

struct Base {
    virtual ~Base();
    char padding[0x14];
};

struct __declspec(novtable) Descriptor : Base {
    Value value;
    ~Descriptor();
};

struct Owner {
    Object* pointer;
    unsigned int reserved;
    ~Owner();
};

struct __declspec(novtable) S : Descriptor {
    Owner first;
    Owner second;
    ~S();
};

inline Base::~Base()
{
}

inline Descriptor::~Descriptor()
{
}

inline Owner::~Owner()
{
    if (pointer)
        delete pointer;
}

S::~S()
{
}
