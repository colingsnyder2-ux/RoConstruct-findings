// from server: 29% by colin
// roc 2007-08 0045be30  unit: Scintilla::CScintillaCtrl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045be30
//
// 0045be30  6aff                 push -1
// 0045be32  6818257400           push 0x742518
// 0045be37  64a100000000         mov eax, dword ptr fs:[0]
// 0045be3d  50                   push eax
// 0045be3e  51                   push ecx
// 0045be3f  56                   push esi
// 0045be40  a188518b00           mov eax, dword ptr [0x8b5188]
// 0045be45  33c4                 xor eax, esp
// 0045be47  50                   push eax
// 0045be48  8d44240c             lea eax, [esp + 0xc]
// 0045be4c  64a300000000         mov dword ptr fs:[0], eax
// 0045be52  8bf1                 mov esi, ecx
// 0045be54  89742408             mov dword ptr [esp + 8], esi
// 0045be58  c70634407900         mov dword ptr [esi], 0x794034
// 0045be5e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0045be66  e8813e1d00           call 0x62fcec
// 0045be6b  8bce                 mov ecx, esi
// 0045be6d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0045be75  e866471d00           call 0x6305e0
// 0045be7a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0045be7e  64890d00000000       mov dword ptr fs:[0], ecx
// 0045be85  59                   pop ecx
// 0045be86  5e                   pop esi
// 0045be87  83c410               add esp, 0x10
// 0045be8a  c3                   ret 

struct Scintilla_CScintillaCtrl {
    void* vtable;
    void Destroy();
    void Release();
    Scintilla_CScintillaCtrl();
};

extern "C" void __stdcall sub_62fcec();
extern "C" void __stdcall sub_6305e0();

Scintilla_CScintillaCtrl::Scintilla_CScintillaCtrl()
{
    vtable = (void*)0x794034;
    sub_62fcec();
    Release();
}
