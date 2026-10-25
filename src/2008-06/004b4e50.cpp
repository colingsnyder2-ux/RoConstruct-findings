// from server: 100% by tester
// roc 2008-06 004b4e50  unit: RBX::Network::Replicator::DeleteInstanceItem  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b4e50
//
// 004b4e50  6aff                 push -1
// 004b4e52  683b467d00           push 0x7d463b
// 004b4e57  64a100000000         mov eax, dword ptr fs:[0]
// 004b4e5d  50                   push eax
// 004b4e5e  64892500000000       mov dword ptr fs:[0], esp
// 004b4e65  83ec08               sub esp, 8
// 004b4e68  c7042400000000       mov dword ptr [esp], 0
// 004b4e6f  6858010000           push 0x158
// 004b4e74  c644240400           mov byte ptr [esp + 4], 0
// 004b4e79  ff15b0288000         call dword ptr [0x8028b0]
// 004b4e7f  83c404               add esp, 4
// 004b4e82  89442404             mov dword ptr [esp + 4], eax
// 004b4e86  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b4e8e  85c0                 test eax, eax
// 004b4e90  7409                 je 0x4b4e9b
// 004b4e92  8bc8                 mov ecx, eax
// 004b4e94  e8479dfaff           call 0x45ebe0
// 004b4e99  eb02                 jmp 0x4b4e9d
// 004b4e9b  33c0                 xor eax, eax
// 004b4e9d  8b0c24               mov ecx, dword ptr [esp]
// 004b4ea0  56                   push esi
// 004b4ea1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004b4ea5  51                   push ecx
// 004b4ea6  50                   push eax
// 004b4ea7  8bce                 mov ecx, esi
// 004b4ea9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004b4eb1  e80a85ffff           call 0x4ad3c0
// 004b4eb6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b4eba  8bc6                 mov eax, esi
// 004b4ebc  5e                   pop esi
// 004b4ebd  64890d00000000       mov dword ptr fs:[0], ecx
// 004b4ec4  83c414               add esp, 0x14
// 004b4ec7  c3                   ret 

extern "C" {
    extern void* (__cdecl *allocate)(unsigned int);
}

inline void* __cdecl operator new(unsigned int size)
{
    return allocate(size);
}

void __cdecl operator delete(void*);

struct Product {
    unsigned char storage[0x158];
    Product();
};

struct Deleter {
    union {
        unsigned int value;
        unsigned char unused;
    };
};

struct Result {
    Result(Product*, Deleter);
};

Result __cdecl create()
{
    Deleter deleter = { 0 };
    *(volatile unsigned char*)&deleter.unused = 0;
    return Result(new Product, deleter);
}
