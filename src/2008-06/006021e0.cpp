// from server: 100% by king_originala
// roc 2008-06 006021e0  unit: RBX::UnifiedImageWidget  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006021e0
//
// 006021e0  6aff                 push -1
// 006021e2  688b837d00           push 0x7d838b
// 006021e7  64a100000000         mov eax, dword ptr fs:[0]
// 006021ed  50                   push eax
// 006021ee  64892500000000       mov dword ptr fs:[0], esp
// 006021f5  83ec0c               sub esp, 0xc
// 006021f8  56                   push esi
// 006021f9  c744240400000000     mov dword ptr [esp + 4], 0
// 00602201  686c010000           push 0x16c
// 00602206  c644240800           mov byte ptr [esp + 8], 0
// 0060220b  ff15b0288000         call dword ptr [0x8028b0]
// 00602211  83c404               add esp, 4
// 00602214  89442408             mov dword ptr [esp + 8], eax
// 00602218  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00602220  85c0                 test eax, eax
// 00602222  7429                 je 0x60224d
// 00602224  d944242c             fld dword ptr [esp + 0x2c]
// 00602228  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0060222c  83ec08               sub esp, 8
// 0060222f  8bd4                 mov edx, esp
// 00602231  d91a                 fstp dword ptr [edx]
// 00602233  89642414             mov dword ptr [esp + 0x14], esp
// 00602237  d9442438             fld dword ptr [esp + 0x38]
// 0060223b  51                   push ecx
// 0060223c  d95a04               fstp dword ptr [edx + 4]
// 0060223f  8b542430             mov edx, dword ptr [esp + 0x30]
// 00602243  52                   push edx
// 00602244  8bc8                 mov ecx, eax
// 00602246  e805eeffff           call 0x601050
// 0060224b  eb02                 jmp 0x60224f
// 0060224d  33c0                 xor eax, eax
// 0060224f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00602253  8b742420             mov esi, dword ptr [esp + 0x20]
// 00602257  51                   push ecx
// 00602258  50                   push eax
// 00602259  8bce                 mov ecx, esi
// 0060225b  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00602263  e838f4ffff           call 0x6016a0
// 00602268  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0060226c  8bc6                 mov eax, esi
// 0060226e  64890d00000000       mov dword ptr fs:[0], ecx
// 00602275  5e                   pop esi
// 00602276  83c418               add esp, 0x18
// 00602279  c3                   ret 

extern "C" {
    extern void* (__cdecl *allocate)(unsigned int);
}

inline void* __cdecl operator new(unsigned int size)
{
    return allocate(size);
}

void __cdecl operator delete(void*);

struct Vector2 {
    float x;
    float y;

    Vector2(const Vector2& other) : x(other.x), y(other.y) {}
};

struct Product {
    unsigned char storage[0x16c];
    Product(void*, void*, Vector2);
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

Result __cdecl create(void* first, void* second, Vector2 size)
{
    Deleter deleter = { 0 };
    *(volatile unsigned char*)&deleter.unused = 0;
    return Result(new Product(first, second, size), deleter);
}
