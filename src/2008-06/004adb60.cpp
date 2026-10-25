// from server: 100% by tester
// roc 2008-06 004adb60  unit: RBX::Network::Replicator::ChangePropertyItem  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004adb60
//
// 004adb60  6aff                 push -1
// 004adb62  683b467d00           push 0x7d463b
// 004adb67  64a100000000         mov eax, dword ptr fs:[0]
// 004adb6d  50                   push eax
// 004adb6e  64892500000000       mov dword ptr fs:[0], esp
// 004adb75  83ec08               sub esp, 8
// 004adb78  c7042400000000       mov dword ptr [esp], 0
// 004adb7f  68e0020000           push 0x2e0
// 004adb84  c644240400           mov byte ptr [esp + 4], 0
// 004adb89  ff15b0288000         call dword ptr [0x8028b0]
// 004adb8f  83c404               add esp, 4
// 004adb92  89442404             mov dword ptr [esp + 4], eax
// 004adb96  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004adb9e  85c0                 test eax, eax
// 004adba0  7409                 je 0x4adbab
// 004adba2  8bc8                 mov ecx, eax
// 004adba4  e8973e1300           call 0x5e1a40
// 004adba9  eb02                 jmp 0x4adbad
// 004adbab  33c0                 xor eax, eax
// 004adbad  8b0c24               mov ecx, dword ptr [esp]
// 004adbb0  56                   push esi
// 004adbb1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004adbb5  51                   push ecx
// 004adbb6  50                   push eax
// 004adbb7  8bce                 mov ecx, esi
// 004adbb9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004adbc1  e8aaf8ffff           call 0x4ad470
// 004adbc6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004adbca  8bc6                 mov eax, esi
// 004adbcc  5e                   pop esi
// 004adbcd  64890d00000000       mov dword ptr fs:[0], ecx
// 004adbd4  83c414               add esp, 0x14
// 004adbd7  c3                   ret 

extern "C" {
    extern void* (__cdecl *allocate)(unsigned int);
}

inline void* __cdecl operator new(unsigned int size)
{
    return allocate(size);
}

void __cdecl operator delete(void*);

struct Product {
    unsigned char storage[0x2e0];
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
