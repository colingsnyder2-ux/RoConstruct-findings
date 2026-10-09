// from server: 18% by colin
// roc 2007-08 0042ee40  unit: CWrapperView  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042ee40
//
// 0042ee40  6aff                 push -1
// 0042ee42  68f8257400           push 0x7425f8
// 0042ee47  64a100000000         mov eax, dword ptr fs:[0]
// 0042ee4d  50                   push eax
// 0042ee4e  51                   push ecx
// 0042ee4f  56                   push esi
// 0042ee50  a188518b00           mov eax, dword ptr [0x8b5188]
// 0042ee55  33c4                 xor eax, esp
// 0042ee57  50                   push eax
// 0042ee58  8d44240c             lea eax, [esp + 0xc]
// 0042ee5c  64a300000000         mov dword ptr fs:[0], eax
// 0042ee62  8bf1                 mov esi, ecx
// 0042ee64  89742408             mov dword ptr [esp + 8], esi
// 0042ee68  8d4e58               lea ecx, [esi + 0x58]
// 0042ee6b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0042ee73  e8a870ffff           call 0x425f20
// 0042ee78  8bce                 mov ecx, esi
// 0042ee7a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0042ee82  e87b162000           call 0x630502
// 0042ee87  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042ee8b  64890d00000000       mov dword ptr fs:[0], ecx
// 0042ee92  59                   pop ecx
// 0042ee93  5e                   pop esi
// 0042ee94  83c410               add esp, 0x10
// 0042ee97  c3                   ret 

extern "C" void __stdcall func_00425f20();
extern "C" void __stdcall func_00630502();

struct CWrapperView
{
    char pad[0x58];
    int field_58;
    void func_0042ee40();
};

void CWrapperView::func_0042ee40()
{
    func_00425f20();
    func_00630502();
}
