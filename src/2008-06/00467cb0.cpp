// from server: 100% by colin
// roc 2008-06 00467cb0  unit: DxUserInput  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00467cb0
//
// 00467cb0  6aff                 push -1
// 00467cb2  6868367c00           push 0x7c3668
// 00467cb7  64a100000000         mov eax, dword ptr fs:[0]
// 00467cbd  50                   push eax
// 00467cbe  64892500000000       mov dword ptr fs:[0], esp
// 00467cc5  83ec08               sub esp, 8
// 00467cc8  56                   push esi
// 00467cc9  57                   push edi
// 00467cca  8bf1                 mov esi, ecx
// 00467ccc  8d7e34               lea edi, [esi + 0x34]
// 00467ccf  57                   push edi
// 00467cd0  897c240c             mov dword ptr [esp + 0xc], edi
// 00467cd4  ff15d4228000         call dword ptr [0x8022d4]
// 00467cda  c644240c01           mov byte ptr [esp + 0xc], 1
// 00467cdf  8b8668010000         mov eax, dword ptr [esi + 0x168]
// 00467ce5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00467ce9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00467cf1  85c0                 test eax, eax
// 00467cf3  7420                 je 0x467d15
// 00467cf5  3bc8                 cmp ecx, eax
// 00467cf7  751c                 jne 0x467d15
// 00467cf9  57                   push edi
// 00467cfa  ff15f4218000         call dword ptr [0x8021f4]
// 00467d00  5f                   pop edi
// 00467d01  b001                 mov al, 1
// 00467d03  5e                   pop esi
// 00467d04  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00467d08  64890d00000000       mov dword ptr fs:[0], ecx
// 00467d0f  83c414               add esp, 0x14
// 00467d12  c20400               ret 4
// 00467d15  51                   push ecx
// 00467d16  e8c51a0000           call 0x4697e0
// 00467d1b  83c404               add esp, 4
// 00467d1e  f644306880           test byte ptr [eax + esi + 0x68], 0x80
// 00467d23  57                   push edi
// 00467d24  75d4                 jne 0x467cfa
// 00467d26  ff15f4218000         call dword ptr [0x8021f4]
// 00467d2c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00467d30  5f                   pop edi
// 00467d31  32c0                 xor al, al
// 00467d33  5e                   pop esi
// 00467d34  64890d00000000       mov dword ptr fs:[0], ecx
// 00467d3b  83c414               add esp, 0x14
// 00467d3e  c20400               ret 4

extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(void *);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void *);
extern int __cdecl translateKey(int);

struct Lock {
    void *section;
    bool locked;
    Lock(void *);
    ~Lock();
};

inline Lock::Lock(void *p) : section(p)
{
    EnterCriticalSection(section);
    locked = true;
}

inline Lock::~Lock()
{
    if (locked)
        LeaveCriticalSection(section);
}

struct S {
    char pad0[0x34];
    char section[24];
    char pad1[0x1c];
    unsigned char keys[256];
    int specialKey;
    bool f(int);
};

bool S::f(int key)
{
    Lock lock(section);
    if (specialKey && key == specialKey)
        return true;
    if (keys[translateKey(key)] & 0x80)
        return true;
    return false;
}
