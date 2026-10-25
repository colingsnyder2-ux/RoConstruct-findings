// from server: 100% by king_originala
// roc 2008-06 00433280  unit: CBrowserFrameWnd  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00433280
//
// 00433280  6aff                 push -1
// 00433282  681afa7b00           push 0x7bfa1a
// 00433287  64a100000000         mov eax, dword ptr fs:[0]
// 0043328d  50                   push eax
// 0043328e  64892500000000       mov dword ptr fs:[0], esp
// 00433295  51                   push ecx
// 00433296  56                   push esi
// 00433297  68ec000000           push 0xec
// 0043329c  e87fd62600           call 0x6a0920
// 004332a1  8bf0                 mov esi, eax
// 004332a3  83c404               add esp, 4
// 004332a6  89742404             mov dword ptr [esp + 4], esi
// 004332aa  33c0                 xor eax, eax
// 004332ac  89442410             mov dword ptr [esp + 0x10], eax
// 004332b0  3bf0                 cmp esi, eax
// 004332b2  740f                 je 0x4332c3
// 004332b4  8bce                 mov ecx, esi
// 004332b6  e8a5e62a00           call 0x6e1960
// 004332bb  c7065c228100         mov dword ptr [esi], 0x81225c
// 004332c1  8bc6                 mov eax, esi
// 004332c3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004332c7  5e                   pop esi
// 004332c8  64890d00000000       mov dword ptr fs:[0], ecx
// 004332cf  83c410               add esp, 0x10
// 004332d2  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*) throw();

struct FrameBase
{
    FrameBase();
    virtual ~FrameBase();
    char storage[232];
};

struct CBrowserFrameWnd : FrameBase
{
    virtual ~CBrowserFrameWnd();
};

CBrowserFrameWnd* func_00433280()
{
    return new CBrowserFrameWnd;
}
