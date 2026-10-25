// from server: 100% by king_originala
// roc 2008-06 006335a0  unit: RBX::Network::VPlayer::?$BoundPropGetSet  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006335a0
//
// 006335a0  64a100000000         mov eax, dword ptr fs:[0]
// 006335a6  6aff                 push -1
// 006335a8  68d8f47b00           push 0x7bf4d8
// 006335ad  50                   push eax
// 006335ae  64892500000000       mov dword ptr fs:[0], esp
// 006335b5  83ec2c               sub esp, 0x2c
// 006335b8  56                   push esi
// 006335b9  57                   push edi
// 006335ba  8bf9                 mov edi, ecx
// 006335bc  833f00               cmp dword ptr [edi], 0
// 006335bf  7517                 jne 0x6335d8
// 006335c1  8d4c240c             lea ecx, [esp + 0xc]
// 006335c5  e82669ddff           call 0x409ef0
// 006335ca  50                   push eax
// 006335cb  c744244000000000     mov dword ptr [esp + 0x40], 0
// 006335d3  e8286fddff           call 0x40a500
// 006335d8  83ec30               sub esp, 0x30
// 006335db  8bf4                 mov esi, esp
// 006335dd  8d442474             lea eax, [esp + 0x74]
// 006335e1  89642438             mov dword ptr [esp + 0x38], esp
// 006335e5  50                   push eax
// 006335e6  8bce                 mov ecx, esi
// 006335e8  e833fcedff           call 0x513220
// 006335ed  d9842498000000       fld dword ptr [esp + 0x98]
// 006335f4  d95e24               fstp dword ptr [esi + 0x24]
// 006335f7  83c708               add edi, 8
// 006335fa  d984249c000000       fld dword ptr [esp + 0x9c]
// 00633601  57                   push edi
// 00633602  d95e28               fstp dword ptr [esi + 0x28]
// 00633605  d98424a4000000       fld dword ptr [esp + 0xa4]
// 0063360c  d95e2c               fstp dword ptr [esi + 0x2c]
// 0063360f  8b4ff8               mov ecx, dword ptr [edi - 8]
// 00633612  8b5104               mov edx, dword ptr [ecx + 4]
// 00633615  ffd2                 call edx
// 00633617  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0063361b  83c434               add esp, 0x34
// 0063361e  5f                   pop edi
// 0063361f  64890d00000000       mov dword ptr fs:[0], ecx
// 00633626  5e                   pop esi
// 00633627  83c438               add esp, 0x38
// 0063362a  c23000               ret 0x30

struct Error
{
    char data[40];
    Error();
    ~Error();
};

extern __declspec(noreturn) void throw_error(const Error&);

struct Matrix
{
    float data[9];
    Matrix(const Matrix&);
};

struct Value
{
    Matrix rotation;
    float x;
    float y;
    float z;
};

struct FunctionTable
{
    void (__cdecl *first)();
    void (__cdecl *invoke)(void*, Value);
};

struct S
{
    FunctionTable* table;
    unsigned int reserved;
    char storage[1];

    void f(Value value);
};

void S::f(Value value)
{
    if (table == 0)
        throw_error(Error());

    table->invoke(storage, value);
}
