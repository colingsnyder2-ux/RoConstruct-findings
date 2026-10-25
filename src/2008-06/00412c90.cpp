// from server: 100% by tester
// roc 2008-06 00412c90  unit: CChildFrame  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00412c90
//
// 00412c90  6aff                 push -1
// 00412c92  681afa7b00           push 0x7bfa1a
// 00412c97  64a100000000         mov eax, dword ptr fs:[0]
// 00412c9d  50                   push eax
// 00412c9e  64892500000000       mov dword ptr fs:[0], esp
// 00412ca5  51                   push ecx
// 00412ca6  56                   push esi
// 00412ca7  68f0000000           push 0xf0
// 00412cac  e86fdc2800           call 0x6a0920
// 00412cb1  8bf0                 mov esi, eax
// 00412cb3  83c404               add esp, 4
// 00412cb6  89742404             mov dword ptr [esp + 4], esi
// 00412cba  33c0                 xor eax, eax
// 00412cbc  89442410             mov dword ptr [esp + 0x10], eax
// 00412cc0  3bf0                 cmp esi, eax
// 00412cc2  740f                 je 0x412cd3
// 00412cc4  8bce                 mov ecx, esi
// 00412cc6  e859e12800           call 0x6a0e24
// 00412ccb  c706a4e48000         mov dword ptr [esi], 0x80e4a4
// 00412cd1  8bc6                 mov eax, esi
// 00412cd3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00412cd7  5e                   pop esi
// 00412cd8  64890d00000000       mov dword ptr fs:[0], ecx
// 00412cdf  83c410               add esp, 0x10
// 00412ce2  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*) throw();

struct FrameBase
{
    FrameBase();
    virtual ~FrameBase();
    char storage[236];
};

struct CBrowserFrameWnd : FrameBase
{
    virtual ~CBrowserFrameWnd();
};

CBrowserFrameWnd* func_00433280()
{
    return new CBrowserFrameWnd;
}
