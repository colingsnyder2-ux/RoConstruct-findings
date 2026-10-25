// from server: 100% by king_originala
// roc 2008-06 00432520  unit: CMainFrame  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00432520
//
// 00432520  6aff                 push -1
// 00432522  683b467d00           push 0x7d463b
// 00432527  64a100000000         mov eax, dword ptr fs:[0]
// 0043252d  50                   push eax
// 0043252e  64892500000000       mov dword ptr fs:[0], esp
// 00432535  83ec08               sub esp, 8
// 00432538  c7042400000000       mov dword ptr [esp], 0
// 0043253f  68d8010000           push 0x1d8
// 00432544  c644240400           mov byte ptr [esp + 4], 0
// 00432549  ff15b0288000         call dword ptr [0x8028b0]
// 0043254f  83c404               add esp, 4
// 00432552  89442404             mov dword ptr [esp + 4], eax
// 00432556  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0043255e  85c0                 test eax, eax
// 00432560  740b                 je 0x43256d
// 00432562  6a01                 push 1
// 00432564  8bc8                 mov ecx, eax
// 00432566  e8c5fc1700           call 0x5b2230
// 0043256b  eb02                 jmp 0x43256f
// 0043256d  33c0                 xor eax, eax
// 0043256f  8b0c24               mov ecx, dword ptr [esp]
// 00432572  56                   push esi
// 00432573  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00432577  51                   push ecx
// 00432578  50                   push eax
// 00432579  8bce                 mov ecx, esi
// 0043257b  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00432583  e8e8feffff           call 0x432470
// 00432588  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0043258c  8bc6                 mov eax, esi
// 0043258e  5e                   pop esi
// 0043258f  64890d00000000       mov dword ptr fs:[0], ecx
// 00432596  83c414               add esp, 0x14
// 00432599  c3                   ret 

extern "C" void* (__cdecl *malloc)(unsigned int);
void __cdecl operator delete(void*);

inline void* __cdecl operator new(unsigned int size)
{
    return malloc(size);
}

struct Object {
    unsigned char storage[472];
    Object(int);
};

struct Result {
    Object* pointer;
    void* control;
    Result(Object*, int);
};

Result create()
{
    int tag = 0;
    *reinterpret_cast<volatile unsigned char*>(&tag) = 0;
    return Result(new Object(1), tag);
}
