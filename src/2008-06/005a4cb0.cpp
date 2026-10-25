// from server: 100% by king_originala
// roc 2008-06 005a4cb0  unit: RBX::VWorkspace::?$BoundFuncDesc  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a4cb0
//
// 005a4cb0  6aff                 push -1
// 005a4cb2  684c2d7d00           push 0x7d2d4c
// 005a4cb7  64a100000000         mov eax, dword ptr fs:[0]
// 005a4cbd  50                   push eax
// 005a4cbe  64892500000000       mov dword ptr fs:[0], esp
// 005a4cc5  83ec10               sub esp, 0x10
// 005a4cc8  56                   push esi
// 005a4cc9  c744240800000000     mov dword ptr [esp + 8], 0
// 005a4cd1  6878010000           push 0x178
// 005a4cd6  c744242001000000     mov dword ptr [esp + 0x20], 1
// 005a4cde  c644240800           mov byte ptr [esp + 8], 0
// 005a4ce3  ff15b0288000         call dword ptr [0x8028b0]
// 005a4ce9  8bf0                 mov esi, eax
// 005a4ceb  83c404               add esp, 4
// 005a4cee  8974240c             mov dword ptr [esp + 0xc], esi
// 005a4cf2  c644241c02           mov byte ptr [esp + 0x1c], 2
// 005a4cf7  85f6                 test esi, esi
// 005a4cf9  7438                 je 0x5a4d33
// 005a4cfb  83ec20               sub esp, 0x20
// 005a4cfe  8bc4                 mov eax, esp
// 005a4d00  c70000000000         mov dword ptr [eax], 0
// 005a4d06  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005a4d0a  89642430             mov dword ptr [esp + 0x30], esp
// 005a4d0e  85c9                 test ecx, ecx
// 005a4d10  7418                 je 0x5a4d2a
// 005a4d12  8908                 mov dword ptr [eax], ecx
// 005a4d14  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005a4d18  8b11                 mov edx, dword ptr [ecx]
// 005a4d1a  83c008               add eax, 8
// 005a4d1d  6a00                 push 0
// 005a4d1f  50                   push eax
// 005a4d20  8d442458             lea eax, [esp + 0x58]
// 005a4d24  50                   push eax
// 005a4d25  ffd2                 call edx
// 005a4d27  83c40c               add esp, 0xc
// 005a4d2a  8bce                 mov ecx, esi
// 005a4d2c  e85ff4ffff           call 0x5a4190
// 005a4d31  eb02                 jmp 0x5a4d35
// 005a4d33  33c0                 xor eax, eax
// 005a4d35  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a4d39  8b742424             mov esi, dword ptr [esp + 0x24]
// 005a4d3d  51                   push ecx
// 005a4d3e  50                   push eax
// 005a4d3f  8bce                 mov ecx, esi
// 005a4d41  c644242401           mov byte ptr [esp + 0x24], 1
// 005a4d46  e8b575ebff           call 0x45c300
// 005a4d4b  8b442428             mov eax, dword ptr [esp + 0x28]
// 005a4d4f  c744240801000000     mov dword ptr [esp + 8], 1
// 005a4d57  c644241c00           mov byte ptr [esp + 0x1c], 0
// 005a4d5c  85c0                 test eax, eax
// 005a4d5e  7415                 je 0x5a4d75
// 005a4d60  8b00                 mov eax, dword ptr [eax]
// 005a4d62  85c0                 test eax, eax
// 005a4d64  740f                 je 0x5a4d75
// 005a4d66  8d542430             lea edx, [esp + 0x30]
// 005a4d6a  6a01                 push 1
// 005a4d6c  52                   push edx
// 005a4d6d  8bca                 mov ecx, edx
// 005a4d6f  51                   push ecx
// 005a4d70  ffd0                 call eax
// 005a4d72  83c40c               add esp, 0xc
// 005a4d75  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a4d79  8bc6                 mov eax, esi
// 005a4d7b  64890d00000000       mov dword ptr fs:[0], ecx
// 005a4d82  5e                   pop esi
// 005a4d83  83c41c               add esp, 0x1c
// 005a4d86  c3                   ret 

typedef unsigned int size_t;

extern "C" void *(__cdecl *allocate_memory)(size_t);

struct Function
{
    typedef void (__cdecl *Manager)(void *, void *, int);

    Manager *manager;
    unsigned int reserved;
    unsigned char storage[24];

    Function(const Function &);
    ~Function();
};

inline Function::Function(const Function &other)
{
    manager = 0;
    if (other.manager)
    {
        manager = other.manager;
        (*other.manager)((void *)other.storage, storage, 0);
    }
}

inline Function::~Function()
{
    if (manager)
    {
        Manager operation = *manager;
        if (operation)
            operation(storage, storage, 1);
    }
}

struct Object
{
    unsigned char storage[0x178];

    Object(Function);
    static void *operator new(size_t);
    static void operator delete(void *);
};

inline void *Object::operator new(size_t size)
{
    return allocate_memory(size);
}

struct Empty
{
};

struct Result
{
    Object *pointer;
    void *control;

    Result(Object *, Empty);
    ~Result();
};

Result create(Function function)
{
    return Result(new Object(function), Empty());
}
