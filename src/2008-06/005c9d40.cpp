// from server: 100% by king_originala
// roc 2008-06 005c9d40  unit: RBX::Stats::TypedMemItem  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c9d40
//
// 005c9d40  6aff                 push -1
// 005c9d42  683b467d00           push 0x7d463b
// 005c9d47  64a100000000         mov eax, dword ptr fs:[0]
// 005c9d4d  50                   push eax
// 005c9d4e  64892500000000       mov dword ptr fs:[0], esp
// 005c9d55  83ec08               sub esp, 8
// 005c9d58  c7042400000000       mov dword ptr [esp], 0
// 005c9d5f  6878010000           push 0x178
// 005c9d64  c644240400           mov byte ptr [esp + 4], 0
// 005c9d69  ff15b0288000         call dword ptr [0x8028b0]
// 005c9d6f  83c404               add esp, 4
// 005c9d72  89442404             mov dword ptr [esp + 4], eax
// 005c9d76  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c9d7e  85c0                 test eax, eax
// 005c9d80  740e                 je 0x5c9d90
// 005c9d82  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005c9d86  51                   push ecx
// 005c9d87  8bc8                 mov ecx, eax
// 005c9d89  e842feffff           call 0x5c9bd0
// 005c9d8e  eb02                 jmp 0x5c9d92
// 005c9d90  33c0                 xor eax, eax
// 005c9d92  8b1424               mov edx, dword ptr [esp]
// 005c9d95  56                   push esi
// 005c9d96  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005c9d9a  52                   push edx
// 005c9d9b  50                   push eax
// 005c9d9c  8bce                 mov ecx, esi
// 005c9d9e  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005c9da6  e8e5f5ffff           call 0x5c9390
// 005c9dab  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c9daf  8bc6                 mov eax, esi
// 005c9db1  5e                   pop esi
// 005c9db2  64890d00000000       mov dword ptr fs:[0], ecx
// 005c9db9  83c414               add esp, 0x14
// 005c9dbc  c3                   ret 

extern "C" void* (__cdecl *malloc)(unsigned int);
void __cdecl operator delete(void*);

struct Item {
    char storage[0x178];

    Item(int);
    static void* operator new(unsigned int size)
    {
        return malloc(size);
    }
    static void operator delete(void* p)
    {
        ::operator delete(p);
    }
};

struct Tag {
    union {
        int value;
        char byte;
    };

    Tag() : value(0)
    {
        byte = 0;
    }
};

struct Result {
    Result(Item*, Tag);
};

Result makeItem(int argument)
{
    Tag tag;
    return Result(new Item(argument), tag);
}
