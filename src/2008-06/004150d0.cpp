// from server: 100% by tester
// roc 2008-06 004150d0  unit: boost::detail::sp_counted_base  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004150d0
//
// 004150d0  6aff                 push -1
// 004150d2  683b467d00           push 0x7d463b
// 004150d7  64a100000000         mov eax, dword ptr fs:[0]
// 004150dd  50                   push eax
// 004150de  64892500000000       mov dword ptr fs:[0], esp
// 004150e5  83ec08               sub esp, 8
// 004150e8  c7042400000000       mov dword ptr [esp], 0
// 004150ef  68a4010000           push 0x1a4
// 004150f4  c644240400           mov byte ptr [esp + 4], 0
// 004150f9  ff15b0288000         call dword ptr [0x8028b0]
// 004150ff  83c404               add esp, 4
// 00415102  89442404             mov dword ptr [esp + 4], eax
// 00415106  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041510e  85c0                 test eax, eax
// 00415110  7409                 je 0x41511b
// 00415112  8bc8                 mov ecx, eax
// 00415114  e8775a1700           call 0x58ab90
// 00415119  eb02                 jmp 0x41511d
// 0041511b  33c0                 xor eax, eax
// 0041511d  8b0c24               mov ecx, dword ptr [esp]
// 00415120  56                   push esi
// 00415121  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00415125  51                   push ecx
// 00415126  50                   push eax
// 00415127  8bce                 mov ecx, esi
// 00415129  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00415131  e8eafeffff           call 0x415020
// 00415136  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041513a  8bc6                 mov eax, esi
// 0041513c  5e                   pop esi
// 0041513d  64890d00000000       mov dword ptr fs:[0], ecx
// 00415144  83c414               add esp, 0x14
// 00415147  c3                   ret 

extern "C" {
    extern void* (__cdecl *allocate)(unsigned int);
}

inline void* __cdecl operator new(unsigned int size)
{
    return allocate(size);
}

void __cdecl operator delete(void*);

struct Product {
    unsigned char storage[0x1a4];
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
