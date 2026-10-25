// from server: 100% by colin
// roc 2008-06 005c3080  unit: RBX::VDebrisService::?$FactoryProduct::Creator  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c3080
//
// 005c3080  6aff                 push -1
// 005c3082  683b467d00           push 0x7d463b
// 005c3087  64a100000000         mov eax, dword ptr fs:[0]
// 005c308d  50                   push eax
// 005c308e  64892500000000       mov dword ptr fs:[0], esp
// 005c3095  83ec08               sub esp, 8
// 005c3098  c7042400000000       mov dword ptr [esp], 0
// 005c309f  683c040000           push 0x43c
// 005c30a4  c644240400           mov byte ptr [esp + 4], 0
// 005c30a9  ff15b0288000         call dword ptr [0x8028b0]
// 005c30af  83c404               add esp, 4
// 005c30b2  89442404             mov dword ptr [esp + 4], eax
// 005c30b6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c30be  85c0                 test eax, eax
// 005c30c0  740b                 je 0x5c30cd
// 005c30c2  6a01                 push 1
// 005c30c4  8bc8                 mov ecx, eax
// 005c30c6  e8c5a20700           call 0x63d390
// 005c30cb  eb02                 jmp 0x5c30cf
// 005c30cd  33c0                 xor eax, eax
// 005c30cf  8b0c24               mov ecx, dword ptr [esp]
// 005c30d2  56                   push esi
// 005c30d3  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005c30d7  51                   push ecx
// 005c30d8  50                   push eax
// 005c30d9  8bce                 mov ecx, esi
// 005c30db  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005c30e3  e8e8feffff           call 0x5c2fd0
// 005c30e8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c30ec  8bc6                 mov eax, esi
// 005c30ee  5e                   pop esi
// 005c30ef  64890d00000000       mov dword ptr fs:[0], ecx
// 005c30f6  83c414               add esp, 0x14
// 005c30f9  c3                   ret 

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
    char storage[0x43c];
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
