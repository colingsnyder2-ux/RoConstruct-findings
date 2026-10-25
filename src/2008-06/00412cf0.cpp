// from server: 100% by tester
// roc 2008-06 00412cf0  unit: CChildFrame  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00412cf0
//
// 00412cf0  6aff                 push -1
// 00412cf2  681afa7b00           push 0x7bfa1a
// 00412cf7  64a100000000         mov eax, dword ptr fs:[0]
// 00412cfd  50                   push eax
// 00412cfe  64892500000000       mov dword ptr fs:[0], esp
// 00412d05  51                   push ecx
// 00412d06  56                   push esi
// 00412d07  68f0000000           push 0xf0
// 00412d0c  e80fdc2800           call 0x6a0920
// 00412d11  8bf0                 mov esi, eax
// 00412d13  83c404               add esp, 4
// 00412d16  89742404             mov dword ptr [esp + 4], esi
// 00412d1a  33c0                 xor eax, eax
// 00412d1c  89442410             mov dword ptr [esp + 0x10], eax
// 00412d20  3bf0                 cmp esi, eax
// 00412d22  740f                 je 0x412d33
// 00412d24  8bce                 mov ecx, esi
// 00412d26  e8f9e02800           call 0x6a0e24
// 00412d2b  c70684e68000         mov dword ptr [esi], 0x80e684
// 00412d31  8bc6                 mov eax, esi
// 00412d33  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00412d37  5e                   pop esi
// 00412d38  64890d00000000       mov dword ptr fs:[0], ecx
// 00412d3f  83c410               add esp, 0x10
// 00412d42  c3                   ret 

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
