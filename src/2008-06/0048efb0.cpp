// from server: 100% by king_originala
// roc 2008-06 0048efb0  unit: RBX::PAVRunService::?$sp_counted_impl_pd  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048efb0
//
// 0048efb0  6aff                 push -1
// 0048efb2  683b467d00           push 0x7d463b
// 0048efb7  64a100000000         mov eax, dword ptr fs:[0]
// 0048efbd  50                   push eax
// 0048efbe  64892500000000       mov dword ptr fs:[0], esp
// 0048efc5  83ec08               sub esp, 8
// 0048efc8  c7042400000000       mov dword ptr [esp], 0
// 0048efcf  6824040000           push 0x424
// 0048efd4  c644240400           mov byte ptr [esp + 4], 0
// 0048efd9  ff15b0288000         call dword ptr [0x8028b0]
// 0048efdf  83c404               add esp, 4
// 0048efe2  89442404             mov dword ptr [esp + 4], eax
// 0048efe6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0048efee  85c0                 test eax, eax
// 0048eff0  740b                 je 0x48effd
// 0048eff2  6a01                 push 1
// 0048eff4  8bc8                 mov ecx, eax
// 0048eff6  e895441400           call 0x5d3490
// 0048effb  eb02                 jmp 0x48efff
// 0048effd  33c0                 xor eax, eax
// 0048efff  8b0c24               mov ecx, dword ptr [esp]
// 0048f002  56                   push esi
// 0048f003  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0048f007  51                   push ecx
// 0048f008  50                   push eax
// 0048f009  8bce                 mov ecx, esi
// 0048f00b  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0048f013  e8e8feffff           call 0x48ef00
// 0048f018  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048f01c  8bc6                 mov eax, esi
// 0048f01e  5e                   pop esi
// 0048f01f  64890d00000000       mov dword ptr fs:[0], ecx
// 0048f026  83c414               add esp, 0x14
// 0048f029  c3                   ret 

extern "C" {
    extern void* (__cdecl *malloc)(unsigned int);
    void __cdecl free(void*);
}

inline void* __cdecl operator new(unsigned int size) throw()
{
    return malloc(size);
}

inline void __cdecl operator delete(void* p) throw()
{
    free(p);
}

struct Object {
    char storage[0x424];
    Object(int);
};

struct Result {
    Result(Object*, unsigned int);
};

Result f()
{
    volatile unsigned int deleter = 0;
    *reinterpret_cast<volatile unsigned char*>(&deleter) = 0;
    return Result(new Object(1), deleter);
}
