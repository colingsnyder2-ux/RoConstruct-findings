// from server: 26% by colin
// roc 2007-08 006f44e0  unit: CXTPCustomizeToolbarsPage  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f44e0
//
// 006f44e0  6aff                 push -1
// 006f44e2  68288d7600           push 0x768d28
// 006f44e7  64a100000000         mov eax, dword ptr fs:[0]
// 006f44ed  50                   push eax
// 006f44ee  51                   push ecx
// 006f44ef  56                   push esi
// 006f44f0  a188518b00           mov eax, dword ptr [0x8b5188]
// 006f44f5  33c4                 xor eax, esp
// 006f44f7  50                   push eax
// 006f44f8  8d44240c             lea eax, [esp + 0xc]
// 006f44fc  64a300000000         mov dword ptr fs:[0], eax
// 006f4502  8bf1                 mov esi, ecx
// 006f4504  89742408             mov dword ptr [esp + 8], esi
// 006f4508  c706f4bc7d00         mov dword ptr [esi], 0x7dbcf4
// 006f450e  8d4e5c               lea ecx, [esi + 0x5c]
// 006f4511  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006f4519  e842acfaff           call 0x69f160
// 006f451e  8bce                 mov ecx, esi
// 006f4520  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006f4528  e8f9420400           call 0x738826
// 006f452d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f4531  64890d00000000       mov dword ptr fs:[0], ecx
// 006f4538  59                   pop ecx
// 006f4539  5e                   pop esi
// 006f453a  83c410               add esp, 0x10
// 006f453d  c3                   ret 

struct CXTPCustomizeToolbarsPage {
    void sub_69F160();
    void sub_738826();
    void dtor();
};

void CXTPCustomizeToolbarsPage::dtor()
{
    *(void**)this = (void*)0x7dbcf4;
    ((CXTPCustomizeToolbarsPage*)((char*)this + 0x5c))->sub_69F160();
    sub_738826();
}
