// from server: 100% by king_originala
// roc 2008-06 00602650  unit: RBX::UnifiedImageWidget  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00602650
//
// 00602650  6aff                 push -1
// 00602652  683b467d00           push 0x7d463b
// 00602657  64a100000000         mov eax, dword ptr fs:[0]
// 0060265d  50                   push eax
// 0060265e  64892500000000       mov dword ptr fs:[0], esp
// 00602665  83ec08               sub esp, 8
// 00602668  c7042400000000       mov dword ptr [esp], 0
// 0060266f  6864010000           push 0x164
// 00602674  c644240400           mov byte ptr [esp + 4], 0
// 00602679  ff15b0288000         call dword ptr [0x8028b0]
// 0060267f  83c404               add esp, 4
// 00602682  89442404             mov dword ptr [esp + 4], eax
// 00602686  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0060268e  85c0                 test eax, eax
// 00602690  7418                 je 0x6026aa
// 00602692  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00602696  8b542420             mov edx, dword ptr [esp + 0x20]
// 0060269a  51                   push ecx
// 0060269b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0060269f  52                   push edx
// 006026a0  51                   push ecx
// 006026a1  8bc8                 mov ecx, eax
// 006026a3  e8d8500500           call 0x657780
// 006026a8  eb02                 jmp 0x6026ac
// 006026aa  33c0                 xor eax, eax
// 006026ac  8b1424               mov edx, dword ptr [esp]
// 006026af  56                   push esi
// 006026b0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006026b4  52                   push edx
// 006026b5  50                   push eax
// 006026b6  8bce                 mov ecx, esi
// 006026b8  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 006026c0  e82bf4ffff           call 0x601af0
// 006026c5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006026c9  8bc6                 mov eax, esi
// 006026cb  5e                   pop esi
// 006026cc  64890d00000000       mov dword ptr fs:[0], ecx
// 006026d3  83c414               add esp, 0x14
// 006026d6  c3                   ret 

extern "C" {
    extern void* (__cdecl *allocate)(unsigned int);
}

inline void* __cdecl operator new(unsigned int size)
{
    return allocate(size);
}

void __cdecl operator delete(void*);

struct Product {
    unsigned char storage[0x164];
    Product(void*, void*, void*);
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

Result __cdecl create(void* first, void* second, void* third)
{
    Deleter deleter = { 0 };
    *(volatile unsigned char*)&deleter.unused = 0;
    return Result(new Product(first, second, third), deleter);
}
