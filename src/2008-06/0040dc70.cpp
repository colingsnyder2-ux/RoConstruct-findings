// from server: 100% by tester
// roc 2008-06 0040dc70  unit: RBX::Reflection::Metadata::VClass::?$FactoryProduct  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040dc70
//
// 0040dc70  6aff                 push -1
// 0040dc72  683b467d00           push 0x7d463b
// 0040dc77  64a100000000         mov eax, dword ptr fs:[0]
// 0040dc7d  50                   push eax
// 0040dc7e  64892500000000       mov dword ptr fs:[0], esp
// 0040dc85  83ec08               sub esp, 8
// 0040dc88  c7042400000000       mov dword ptr [esp], 0
// 0040dc8f  6858010000           push 0x158
// 0040dc94  c644240400           mov byte ptr [esp + 4], 0
// 0040dc99  ff15b0288000         call dword ptr [0x8028b0]
// 0040dc9f  83c404               add esp, 4
// 0040dca2  89442404             mov dword ptr [esp + 4], eax
// 0040dca6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040dcae  85c0                 test eax, eax
// 0040dcb0  7409                 je 0x40dcbb
// 0040dcb2  8bc8                 mov ecx, eax
// 0040dcb4  e8e7feffff           call 0x40dba0
// 0040dcb9  eb02                 jmp 0x40dcbd
// 0040dcbb  33c0                 xor eax, eax
// 0040dcbd  8b0c24               mov ecx, dword ptr [esp]
// 0040dcc0  56                   push esi
// 0040dcc1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0040dcc5  51                   push ecx
// 0040dcc6  50                   push eax
// 0040dcc7  8bce                 mov ecx, esi
// 0040dcc9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0040dcd1  e8aadcffff           call 0x40b980
// 0040dcd6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040dcda  8bc6                 mov eax, esi
// 0040dcdc  5e                   pop esi
// 0040dcdd  64890d00000000       mov dword ptr fs:[0], ecx
// 0040dce4  83c414               add esp, 0x14
// 0040dce7  c3                   ret 

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
