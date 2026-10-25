// from server: 100% by tester
// roc 2008-06 00433310  unit: CNullDoc  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00433310
//
// 00433310  6aff                 push -1
// 00433312  681afa7b00           push 0x7bfa1a
// 00433317  64a100000000         mov eax, dword ptr fs:[0]
// 0043331d  50                   push eax
// 0043331e  64892500000000       mov dword ptr fs:[0], esp
// 00433325  51                   push ecx
// 00433326  56                   push esi
// 00433327  6a54                 push 0x54
// 00433329  e8f2d52600           call 0x6a0920
// 0043332e  8bf0                 mov esi, eax
// 00433330  83c404               add esp, 4
// 00433333  89742404             mov dword ptr [esp + 4], esi
// 00433337  33c0                 xor eax, eax
// 00433339  89442410             mov dword ptr [esp + 0x10], eax
// 0043333d  3bf0                 cmp esi, eax
// 0043333f  740f                 je 0x433350
// 00433341  8bce                 mov ecx, esi
// 00433343  e838d62600           call 0x6a0980
// 00433348  c706cccf8000         mov dword ptr [esi], 0x80cfcc
// 0043334e  8bc6                 mov eax, esi
// 00433350  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00433354  5e                   pop esi
// 00433355  64890d00000000       mov dword ptr fs:[0], ecx
// 0043335c  83c410               add esp, 0x10
// 0043335f  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*) throw();

struct FrameBase
{
    FrameBase();
    virtual ~FrameBase();
    char storage[80];
};

struct CBrowserFrameWnd : FrameBase
{
    virtual ~CBrowserFrameWnd();
};

CBrowserFrameWnd* func_00433280()
{
    return new CBrowserFrameWnd;
}
