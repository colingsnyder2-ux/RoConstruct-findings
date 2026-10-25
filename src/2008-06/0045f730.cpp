// from server: 100% by king_originala
// roc 2008-06 0045f730  unit: RBX::Stats::Item  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045f730
//
// 0045f730  6aff                 push -1
// 0045f732  683b467d00           push 0x7d463b
// 0045f737  64a100000000         mov eax, dword ptr fs:[0]
// 0045f73d  50                   push eax
// 0045f73e  64892500000000       mov dword ptr fs:[0], esp
// 0045f745  83ec08               sub esp, 8
// 0045f748  c7042400000000       mov dword ptr [esp], 0
// 0045f74f  6878010000           push 0x178
// 0045f754  c644240400           mov byte ptr [esp + 4], 0
// 0045f759  ff15b0288000         call dword ptr [0x8028b0]
// 0045f75f  83c404               add esp, 4
// 0045f762  89442404             mov dword ptr [esp + 4], eax
// 0045f766  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0045f76e  85c0                 test eax, eax
// 0045f770  740e                 je 0x45f780
// 0045f772  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0045f776  51                   push ecx
// 0045f777  8bc8                 mov ecx, eax
// 0045f779  e8c2fbffff           call 0x45f340
// 0045f77e  eb02                 jmp 0x45f782
// 0045f780  33c0                 xor eax, eax
// 0045f782  8b1424               mov edx, dword ptr [esp]
// 0045f785  56                   push esi
// 0045f786  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0045f78a  52                   push edx
// 0045f78b  50                   push eax
// 0045f78c  8bce                 mov ecx, esi
// 0045f78e  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0045f796  e855c9ffff           call 0x45c0f0
// 0045f79b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0045f79f  8bc6                 mov eax, esi
// 0045f7a1  5e                   pop esi
// 0045f7a2  64890d00000000       mov dword ptr fs:[0], ecx
// 0045f7a9  83c414               add esp, 0x14
// 0045f7ac  c3                   ret 

extern void* (__cdecl *allocate)(unsigned int);
void __cdecl operator delete(void*);

inline void* __cdecl operator new(unsigned int size)
{
    return allocate(size);
}

struct Empty
{
    unsigned int value;
};

struct Item
{
    unsigned char storage[0x178];
    Item(const char* name);
};

struct Result
{
    Item* object;
    void* control;

    Result(Item* p, Empty tag);
};

Result f(const char* name)
{
    Empty tag = {0};
    *(volatile unsigned char*)&tag = 0;
    return Result(new Item(name), tag);
}
