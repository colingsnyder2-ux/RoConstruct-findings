// from server: 100% by king_originala
// roc 2008-06 0055f3b0  unit: RBX::VContentProvider::?$DescribedNonCreatable  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055f3b0
//
// 0055f3b0  6aff                 push -1
// 0055f3b2  6899ea7c00           push 0x7cea99
// 0055f3b7  64a100000000         mov eax, dword ptr fs:[0]
// 0055f3bd  50                   push eax
// 0055f3be  64892500000000       mov dword ptr fs:[0], esp
// 0055f3c5  83ec28               sub esp, 0x28
// 0055f3c8  53                   push ebx
// 0055f3c9  33db                 xor ebx, ebx
// 0055f3cb  56                   push esi
// 0055f3cc  895c2408             mov dword ptr [esp + 8], ebx
// 0055f3d0  83ec20               sub esp, 0x20
// 0055f3d3  8bc4                 mov eax, esp
// 0055f3d5  8918                 mov dword ptr [eax], ebx
// 0055f3d7  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0055f3db  c744245801000000     mov dword ptr [esp + 0x58], 1
// 0055f3e3  8964242c             mov dword ptr [esp + 0x2c], esp
// 0055f3e7  3bcb                 cmp ecx, ebx
// 0055f3e9  741a                 je 0x55f405
// 0055f3eb  8908                 mov dword ptr [eax], ecx
// 0055f3ed  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0055f3f1  8b11                 mov edx, dword ptr [ecx]
// 0055f3f3  83c008               add eax, 8
// 0055f3f6  53                   push ebx
// 0055f3f7  50                   push eax
// 0055f3f8  8d842480000000       lea eax, [esp + 0x80]
// 0055f3ff  50                   push eax
// 0055f400  ffd2                 call edx
// 0055f402  83c40c               add esp, 0xc
// 0055f405  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0055f409  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0055f40d  50                   push eax
// 0055f40e  51                   push ecx
// 0055f40f  8d4c2438             lea ecx, [esp + 0x38]
// 0055f413  e858eeffff           call 0x55e270
// 0055f418  8b742440             mov esi, dword ptr [esp + 0x40]
// 0055f41c  8b542444             mov edx, dword ptr [esp + 0x44]
// 0055f420  8916                 mov dword ptr [esi], edx
// 0055f422  895e08               mov dword ptr [esi + 8], ebx
// 0055f425  8b08                 mov ecx, dword ptr [eax]
// 0055f427  c644243802           mov byte ptr [esp + 0x38], 2
// 0055f42c  3bcb                 cmp ecx, ebx
// 0055f42e  7415                 je 0x55f445
// 0055f430  894e08               mov dword ptr [esi + 8], ecx
// 0055f433  8b08                 mov ecx, dword ptr [eax]
// 0055f435  53                   push ebx
// 0055f436  8d5610               lea edx, [esi + 0x10]
// 0055f439  83c008               add eax, 8
// 0055f43c  52                   push edx
// 0055f43d  50                   push eax
// 0055f43e  8b01                 mov eax, dword ptr [ecx]
// 0055f440  ffd0                 call eax
// 0055f442  83c40c               add esp, 0xc
// 0055f445  8b442410             mov eax, dword ptr [esp + 0x10]
// 0055f449  c744240801000000     mov dword ptr [esp + 8], 1
// 0055f451  c644243801           mov byte ptr [esp + 0x38], 1
// 0055f456  3bc3                 cmp eax, ebx
// 0055f458  7419                 je 0x55f473
// 0055f45a  8b00                 mov eax, dword ptr [eax]
// 0055f45c  3bc3                 cmp eax, ebx
// 0055f45e  740f                 je 0x55f46f
// 0055f460  8d4c2418             lea ecx, [esp + 0x18]
// 0055f464  6a01                 push 1
// 0055f466  51                   push ecx
// 0055f467  8bd1                 mov edx, ecx
// 0055f469  52                   push edx
// 0055f46a  ffd0                 call eax
// 0055f46c  83c40c               add esp, 0xc
// 0055f46f  895c2410             mov dword ptr [esp + 0x10], ebx
// 0055f473  8b442450             mov eax, dword ptr [esp + 0x50]
// 0055f477  885c2438             mov byte ptr [esp + 0x38], bl
// 0055f47b  3bc3                 cmp eax, ebx
// 0055f47d  7415                 je 0x55f494
// 0055f47f  8b00                 mov eax, dword ptr [eax]
// 0055f481  3bc3                 cmp eax, ebx
// 0055f483  740f                 je 0x55f494
// 0055f485  8d4c2458             lea ecx, [esp + 0x58]
// 0055f489  6a01                 push 1
// 0055f48b  51                   push ecx
// 0055f48c  8bd1                 mov edx, ecx
// 0055f48e  52                   push edx
// 0055f48f  ffd0                 call eax
// 0055f491  83c40c               add esp, 0xc
// 0055f494  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0055f498  8bc6                 mov eax, esi
// 0055f49a  5e                   pop esi
// 0055f49b  64890d00000000       mov dword ptr fs:[0], ecx
// 0055f4a2  5b                   pop ebx
// 0055f4a3  83c434               add esp, 0x34
// 0055f4a6  c3                   ret 

typedef void (__cdecl *Manager)(const void *, void *, int);

struct Function {
    Manager *manager;
    union Storage {
        double alignment[3];
        char bytes[24];
    } storage;

    Function(int, int, Function);
    Function(const Function &);
    ~Function();
};

struct Result {
    void *value;
    Function function;

    Result(void *, const Function &);
};

inline Function::Function(const Function &other) : manager(0)
{
    if (other.manager) {
        manager = other.manager;
        (*other.manager)(&other.storage, &storage, 0);
    }
}

inline Function::~Function()
{
    if (manager) {
        Manager m = *manager;
        if (m)
            m(&storage, &storage, 1);
        manager = 0;
    }
}

inline Result::Result(void *p, const Function &f)
    : value(p), function(f)
{
}

Result __cdecl reconstruct(void *p, int a, int b, Function f)
{
    return Result(p, Function(a, b, f));
}
