// from server: 100% by tester
// roc 2008-06 0040d310  unit: RBX::Reflection::Metadata::Item  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040d310
//
// 0040d310  6aff                 push -1
// 0040d312  683b467d00           push 0x7d463b
// 0040d317  64a100000000         mov eax, dword ptr fs:[0]
// 0040d31d  50                   push eax
// 0040d31e  64892500000000       mov dword ptr fs:[0], esp
// 0040d325  83ec08               sub esp, 8
// 0040d328  c7042400000000       mov dword ptr [esp], 0
// 0040d32f  6830010000           push 0x130
// 0040d334  c644240400           mov byte ptr [esp + 4], 0
// 0040d339  ff15b0288000         call dword ptr [0x8028b0]
// 0040d33f  83c404               add esp, 4
// 0040d342  89442404             mov dword ptr [esp + 4], eax
// 0040d346  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040d34e  85c0                 test eax, eax
// 0040d350  7409                 je 0x40d35b
// 0040d352  8bc8                 mov ecx, eax
// 0040d354  e897fbffff           call 0x40cef0
// 0040d359  eb02                 jmp 0x40d35d
// 0040d35b  33c0                 xor eax, eax
// 0040d35d  8b0c24               mov ecx, dword ptr [esp]
// 0040d360  56                   push esi
// 0040d361  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0040d365  51                   push ecx
// 0040d366  50                   push eax
// 0040d367  8bce                 mov ecx, esi
// 0040d369  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0040d371  e88aecffff           call 0x40c000
// 0040d376  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040d37a  8bc6                 mov eax, esi
// 0040d37c  5e                   pop esi
// 0040d37d  64890d00000000       mov dword ptr fs:[0], ecx
// 0040d384  83c414               add esp, 0x14
// 0040d387  c3                   ret 

extern "C" {
    extern void* (__cdecl *allocate)(unsigned int);
}

inline void* __cdecl operator new(unsigned int size)
{
    return allocate(size);
}

void __cdecl operator delete(void*);

struct Product {
    unsigned char storage[0x130];
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
