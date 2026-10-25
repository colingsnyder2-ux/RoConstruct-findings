// from server: 100% by king_originala
// roc 2008-06 005e55e0  unit: RBX::JointsService  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e55e0
//
// 005e55e0  6aff                 push -1
// 005e55e2  683b467d00           push 0x7d463b
// 005e55e7  64a100000000         mov eax, dword ptr fs:[0]
// 005e55ed  50                   push eax
// 005e55ee  64892500000000       mov dword ptr fs:[0], esp
// 005e55f5  83ec08               sub esp, 8
// 005e55f8  c7042400000000       mov dword ptr [esp], 0
// 005e55ff  6854010000           push 0x154
// 005e5604  c644240400           mov byte ptr [esp + 4], 0
// 005e5609  ff15b0288000         call dword ptr [0x8028b0]
// 005e560f  83c404               add esp, 4
// 005e5612  89442404             mov dword ptr [esp + 4], eax
// 005e5616  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e561e  85c0                 test eax, eax
// 005e5620  740e                 je 0x5e5630
// 005e5622  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e5626  51                   push ecx
// 005e5627  8bc8                 mov ecx, eax
// 005e5629  e8e2f0ffff           call 0x5e4710
// 005e562e  eb02                 jmp 0x5e5632
// 005e5630  33c0                 xor eax, eax
// 005e5632  8b1424               mov edx, dword ptr [esp]
// 005e5635  56                   push esi
// 005e5636  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005e563a  52                   push edx
// 005e563b  50                   push eax
// 005e563c  8bce                 mov ecx, esi
// 005e563e  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005e5646  e825cfecff           call 0x4b2570
// 005e564b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e564f  8bc6                 mov eax, esi
// 005e5651  5e                   pop esi
// 005e5652  64890d00000000       mov dword ptr fs:[0], ecx
// 005e5659  83c414               add esp, 0x14
// 005e565c  c3                   ret 

typedef unsigned int size_t;

extern "C" void *(__cdecl *malloc)(size_t);
extern "C" void __cdecl free(void *);

struct Product {
    char storage[0x154];

    Product(const char *);
    static void *operator new(size_t) throw();
    static void operator delete(void *);
};

__forceinline void *Product::operator new(size_t size) throw()
{
    return malloc(size);
}

__forceinline void Product::operator delete(void *p)
{
    free(p);
}

struct Tag {
    union {
        int value;
        char flag;
    };

    Tag();
};

__forceinline Tag::Tag()
{
    value = 0;
    flag = 0;
}

struct Result {
    void *object;
    void *control;

    Result(Product *, Tag);
};

Result __cdecl create(const char *text)
{
    Tag tag;
    return Result(new Product(text), tag);
}
