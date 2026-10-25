// from server: 100% by atomic.potato
// roc 2008-06 0041e9c0  unit: RBX::VTexture::?$FactoryProduct::Creator  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041e9c0
//
// 0041e9c0  6aff                 push -1
// 0041e9c2  683b467d00           push 0x7d463b
// 0041e9c7  64a100000000         mov eax, dword ptr fs:[0]
// 0041e9cd  50                   push eax
// 0041e9ce  64892500000000       mov dword ptr fs:[0], esp
// 0041e9d5  83ec08               sub esp, 8
// 0041e9d8  c7042400000000       mov dword ptr [esp], 0
// 0041e9df  6804040000           push 0x404
// 0041e9e4  c644240400           mov byte ptr [esp + 4], 0
// 0041e9e9  ff15b0288000         call dword ptr [0x8028b0]
// 0041e9ef  83c404               add esp, 4
// 0041e9f2  89442404             mov dword ptr [esp + 4], eax
// 0041e9f6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041e9fe  85c0                 test eax, eax
// 0041ea00  740b                 je 0x41ea0d
// 0041ea02  6a01                 push 1
// 0041ea04  8bc8                 mov ecx, eax
// 0041ea06  e8c5ea1700           call 0x59d4d0
// 0041ea0b  eb02                 jmp 0x41ea0f
// 0041ea0d  33c0                 xor eax, eax
// 0041ea0f  8b0c24               mov ecx, dword ptr [esp]
// 0041ea12  56                   push esi
// 0041ea13  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0041ea17  51                   push ecx
// 0041ea18  50                   push eax
// 0041ea19  8bce                 mov ecx, esi
// 0041ea1b  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0041ea23  e8e8feffff           call 0x41e910
// 0041ea28  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041ea2c  8bc6                 mov eax, esi
// 0041ea2e  5e                   pop esi
// 0041ea2f  64890d00000000       mov dword ptr fs:[0], ecx
// 0041ea36  83c414               add esp, 0x14
// 0041ea39  c3                   ret 

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
    char storage[0x404];
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
