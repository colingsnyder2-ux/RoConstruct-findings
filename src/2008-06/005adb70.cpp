// from server: 100% by king_originala
// roc 2008-06 005adb70  unit: RBX::VScriptContext::?$BoundFuncDesc  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005adb70
//
// 005adb70  6aff                 push -1
// 005adb72  683b467d00           push 0x7d463b
// 005adb77  64a100000000         mov eax, dword ptr fs:[0]
// 005adb7d  50                   push eax
// 005adb7e  64892500000000       mov dword ptr fs:[0], esp
// 005adb85  83ec08               sub esp, 8
// 005adb88  c7042400000000       mov dword ptr [esp], 0
// 005adb8f  6858010000           push 0x158
// 005adb94  c644240400           mov byte ptr [esp + 4], 0
// 005adb99  ff15b0288000         call dword ptr [0x8028b0]
// 005adb9f  83c404               add esp, 4
// 005adba2  89442404             mov dword ptr [esp + 4], eax
// 005adba6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005adbae  85c0                 test eax, eax
// 005adbb0  740e                 je 0x5adbc0
// 005adbb2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005adbb6  51                   push ecx
// 005adbb7  8bc8                 mov ecx, eax
// 005adbb9  e852fcffff           call 0x5ad810
// 005adbbe  eb02                 jmp 0x5adbc2
// 005adbc0  33c0                 xor eax, eax
// 005adbc2  8b1424               mov edx, dword ptr [esp]
// 005adbc5  56                   push esi
// 005adbc6  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005adbca  52                   push edx
// 005adbcb  50                   push eax
// 005adbcc  8bce                 mov ecx, esi
// 005adbce  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005adbd6  e8e5f7efff           call 0x4ad3c0
// 005adbdb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005adbdf  8bc6                 mov eax, esi
// 005adbe1  5e                   pop esi
// 005adbe2  64890d00000000       mov dword ptr fs:[0], ecx
// 005adbe9  83c414               add esp, 0x14
// 005adbec  c3                   ret 

typedef unsigned int size_t;

extern "C" void * (__cdecl *malloc)(size_t);
extern "C" void __cdecl free(void *);

struct Empty
{
};

struct Object
{
    char storage[0x158];

    Object(void *);

    static void *operator new(size_t n)
    {
        return malloc(n);
    }

    static void operator delete(void *p)
    {
        free(p);
    }
};

struct Result
{
    void *object;
    void *control;

    Result(Object *, Empty);
    ~Result();
};

Result __cdecl f(void *arg)
{
    return Result(new Object(arg), Empty());
}
