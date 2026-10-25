// from server: 100% by king_originala
// roc 2008-06 0055e270  unit: RBX::VInstance::?$NonFactoryProduct  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055e270
//
// 0055e270  6aff                 push -1
// 0055e272  6868e97c00           push 0x7ce968
// 0055e277  64a100000000         mov eax, dword ptr fs:[0]
// 0055e27d  50                   push eax
// 0055e27e  64892500000000       mov dword ptr fs:[0], esp
// 0055e285  51                   push ecx
// 0055e286  56                   push esi
// 0055e287  8bf1                 mov esi, ecx
// 0055e289  83ec20               sub esp, 0x20
// 0055e28c  8bc4                 mov eax, esp
// 0055e28e  c70000000000         mov dword ptr [eax], 0
// 0055e294  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0055e298  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0055e2a0  89642424             mov dword ptr [esp + 0x24], esp
// 0055e2a4  85c9                 test ecx, ecx
// 0055e2a6  7418                 je 0x55e2c0
// 0055e2a8  8908                 mov dword ptr [eax], ecx
// 0055e2aa  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0055e2ae  8b11                 mov edx, dword ptr [ecx]
// 0055e2b0  83c008               add eax, 8
// 0055e2b3  6a00                 push 0
// 0055e2b5  50                   push eax
// 0055e2b6  8d442450             lea eax, [esp + 0x50]
// 0055e2ba  50                   push eax
// 0055e2bb  ffd2                 call edx
// 0055e2bd  83c40c               add esp, 0xc
// 0055e2c0  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0055e2c4  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0055e2c8  50                   push eax
// 0055e2c9  51                   push ecx
// 0055e2ca  8bce                 mov ecx, esi
// 0055e2cc  e88ff8ffff           call 0x55db60
// 0055e2d1  8b442420             mov eax, dword ptr [esp + 0x20]
// 0055e2d5  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0055e2dd  85c0                 test eax, eax
// 0055e2df  7415                 je 0x55e2f6
// 0055e2e1  8b00                 mov eax, dword ptr [eax]
// 0055e2e3  85c0                 test eax, eax
// 0055e2e5  740f                 je 0x55e2f6
// 0055e2e7  8d542428             lea edx, [esp + 0x28]
// 0055e2eb  6a01                 push 1
// 0055e2ed  52                   push edx
// 0055e2ee  8bca                 mov ecx, edx
// 0055e2f0  51                   push ecx
// 0055e2f1  ffd0                 call eax
// 0055e2f3  83c40c               add esp, 0xc
// 0055e2f6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055e2fa  8bc6                 mov eax, esi
// 0055e2fc  64890d00000000       mov dword ptr fs:[0], ecx
// 0055e303  5e                   pop esi
// 0055e304  83c410               add esp, 0x10
// 0055e307  c22800               ret 0x28

struct Table {
    void (__cdecl *manage)(void*, void*, int);
};

struct Function {
    Table* table;
    unsigned char padding[4];
    unsigned char data[24];

    Function(const Function&);
    ~Function();
};

inline Function::Function(const Function& other) : table(0)
{
    if (other.table) {
        table = other.table;
        other.table->manage(
            const_cast<unsigned char*>(other.data), data, 0);
    }
}

inline Function::~Function()
{
    if (table) {
        void (__cdecl *manage)(void*, void*, int) = table->manage;
        if (manage)
            manage(data, data, 1);
    }
}

struct Base {
    Base(void*, void*, Function);
};

struct S : Base {
    S(void*, void*, Function);
};

S::S(void* first, void* second, Function function)
    : Base(first, second, function)
{
}
