// from server: 100% by king_originala
// roc 2008-06 0048e790  unit: RBX::VRunService::?$SignalDesc  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048e790
//
// 0048e790  6aff                 push -1
// 0048e792  683b467d00           push 0x7d463b
// 0048e797  64a100000000         mov eax, dword ptr fs:[0]
// 0048e79d  50                   push eax
// 0048e79e  64892500000000       mov dword ptr fs:[0], esp
// 0048e7a5  83ec08               sub esp, 8
// 0048e7a8  c7042400000000       mov dword ptr [esp], 0
// 0048e7af  68a8010000           push 0x1a8
// 0048e7b4  c644240400           mov byte ptr [esp + 4], 0
// 0048e7b9  ff15b0288000         call dword ptr [0x8028b0]
// 0048e7bf  83c404               add esp, 4
// 0048e7c2  89442404             mov dword ptr [esp + 4], eax
// 0048e7c6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0048e7ce  85c0                 test eax, eax
// 0048e7d0  7409                 je 0x48e7db
// 0048e7d2  8bc8                 mov ecx, eax
// 0048e7d4  e8c72d1400           call 0x5d15a0
// 0048e7d9  eb02                 jmp 0x48e7dd
// 0048e7db  33c0                 xor eax, eax
// 0048e7dd  8b0c24               mov ecx, dword ptr [esp]
// 0048e7e0  56                   push esi
// 0048e7e1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0048e7e5  51                   push ecx
// 0048e7e6  50                   push eax
// 0048e7e7  8bce                 mov ecx, esi
// 0048e7e9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0048e7f1  e8eafeffff           call 0x48e6e0
// 0048e7f6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048e7fa  8bc6                 mov eax, esi
// 0048e7fc  5e                   pop esi
// 0048e7fd  64890d00000000       mov dword ptr fs:[0], ecx
// 0048e804  83c414               add esp, 0x14
// 0048e807  c3                   ret 

extern "C" void* (__cdecl *malloc)(unsigned int);

inline void* __cdecl operator new(unsigned int size)
{
    return malloc(size);
}

void __cdecl operator delete(void*);

struct Object
{
    char storage[0x1a8];
    Object();
};

struct Result
{
    void* object;
    void* control;
    Result(Object*, int);
};

Result __cdecl makeResult()
{
    union
    {
        volatile int value;
        volatile unsigned char byte;
    } tag;

    tag.value = 0;
    tag.byte = 0;
    return Result(new Object, tag.value);
}
