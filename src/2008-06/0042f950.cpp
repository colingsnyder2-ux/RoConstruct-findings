// from server: 100% by tester
// roc 2008-06 0042f950  unit: CPatchedControlComboBox  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042f950
//
// 0042f950  6aff                 push -1
// 0042f952  681afa7b00           push 0x7bfa1a
// 0042f957  64a100000000         mov eax, dword ptr fs:[0]
// 0042f95d  50                   push eax
// 0042f95e  64892500000000       mov dword ptr fs:[0], esp
// 0042f965  51                   push ecx
// 0042f966  56                   push esi
// 0042f967  68cc000000           push 0xcc
// 0042f96c  e8af0f2700           call 0x6a0920
// 0042f971  8bf0                 mov esi, eax
// 0042f973  83c404               add esp, 4
// 0042f976  89742404             mov dword ptr [esp + 4], esi
// 0042f97a  33c0                 xor eax, eax
// 0042f97c  89442410             mov dword ptr [esp + 0x10], eax
// 0042f980  3bf0                 cmp esi, eax
// 0042f982  740f                 je 0x42f993
// 0042f984  8bce                 mov ecx, esi
// 0042f986  e825422700           call 0x6a3bb0
// 0042f98b  c70604088100         mov dword ptr [esi], 0x810804
// 0042f991  8bc6                 mov eax, esi
// 0042f993  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042f997  5e                   pop esi
// 0042f998  64890d00000000       mov dword ptr fs:[0], ecx
// 0042f99f  83c410               add esp, 0x10
// 0042f9a2  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*) throw();

struct FrameBase
{
    FrameBase();
    virtual ~FrameBase();
    char storage[200];
};

struct CBrowserFrameWnd : FrameBase
{
    virtual ~CBrowserFrameWnd();
};

CBrowserFrameWnd* func_00433280()
{
    return new CBrowserFrameWnd;
}
