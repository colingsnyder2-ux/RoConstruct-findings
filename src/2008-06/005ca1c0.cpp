// from server: 100% by king_originala
// roc 2008-06 005ca1c0  unit: RBX::Stats::Item  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ca1c0
//
// 005ca1c0  6aff                 push -1
// 005ca1c2  683b467d00           push 0x7d463b
// 005ca1c7  64a100000000         mov eax, dword ptr fs:[0]
// 005ca1cd  50                   push eax
// 005ca1ce  64892500000000       mov dword ptr fs:[0], esp
// 005ca1d5  83ec08               sub esp, 8
// 005ca1d8  c7042400000000       mov dword ptr [esp], 0
// 005ca1df  6860010000           push 0x160
// 005ca1e4  c644240400           mov byte ptr [esp + 4], 0
// 005ca1e9  ff15b0288000         call dword ptr [0x8028b0]
// 005ca1ef  83c404               add esp, 4
// 005ca1f2  89442404             mov dword ptr [esp + 4], eax
// 005ca1f6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005ca1fe  85c0                 test eax, eax
// 005ca200  740e                 je 0x5ca210
// 005ca202  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005ca206  51                   push ecx
// 005ca207  8bc8                 mov ecx, eax
// 005ca209  e862fdffff           call 0x5c9f70
// 005ca20e  eb02                 jmp 0x5ca212
// 005ca210  33c0                 xor eax, eax
// 005ca212  8b1424               mov edx, dword ptr [esp]
// 005ca215  56                   push esi
// 005ca216  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005ca21a  52                   push edx
// 005ca21b  50                   push eax
// 005ca21c  8bce                 mov ecx, esi
// 005ca21e  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005ca226  e8b5f0ffff           call 0x5c92e0
// 005ca22b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ca22f  8bc6                 mov eax, esi
// 005ca231  5e                   pop esi
// 005ca232  64890d00000000       mov dword ptr fs:[0], ecx
// 005ca239  83c414               add esp, 0x14
// 005ca23c  c3                   ret 

extern "C" void* (__cdecl *malloc)(unsigned int);
extern "C" void __cdecl free(void*);

inline void* __cdecl operator new(unsigned int size) throw()
{
    return malloc(size);
}

inline void __cdecl operator delete(void* p) throw()
{
    free(p);
}

struct TypedMemItem
{
    char storage[0x160];
    TypedMemItem(int value);
};

struct Deleter
{
    int value;

    Deleter() : value(0)
    {
        *(volatile unsigned char*)&value = 0;
    }

    void operator()(TypedMemItem* p) const;
};

struct S
{
    S(TypedMemItem* p, Deleter deleter);
    static S f(int value);
};

S S::f(int value)
{
    Deleter deleter;
    return S(new TypedMemItem(value), deleter);
}
