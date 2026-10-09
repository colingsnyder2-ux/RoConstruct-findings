// roc 2009-12 006ab3c0  unit: RBX::VHat::?$FactoryProduct  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ab3c0
//
// 006ab3c0  51                   push ecx
// 006ab3c1  6a28                 push 0x28
// 006ab3c3  c744240400000000     mov dword ptr [esp + 4], 0
// 006ab3cb  e890841400           call 0x7f3860
// 006ab3d0  83c404               add esp, 4
// 006ab3d3  85c0                 test eax, eax
// 006ab3d5  7432                 je 0x6ab409
// 006ab3d7  c70084319d00         mov dword ptr [eax], 0x9d3184
// 006ab3dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ab3e1  894808               mov dword ptr [eax + 8], ecx
// 006ab3e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ab3e8  89500c               mov dword ptr [eax + 0xc], edx
// 006ab3eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ab3ef  894810               mov dword ptr [eax + 0x10], ecx
// 006ab3f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006ab3f6  895018               mov dword ptr [eax + 0x18], edx
// 006ab3f9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ab3fd  89481c               mov dword ptr [eax + 0x1c], ecx
// 006ab400  8b542420             mov edx, dword ptr [esp + 0x20]
// 006ab404  895020               mov dword ptr [eax + 0x20], edx
// 006ab407  eb02                 jmp 0x6ab40b
// 006ab409  33c0                 xor eax, eax
// 006ab40b  56                   push esi
// 006ab40c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ab410  6a00                 push 0
// 006ab412  8906                 mov dword ptr [esi], eax
// 006ab414  e841841400           call 0x7f385a
// 006ab419  83c404               add esp, 4
// 006ab41c  8bc6                 mov eax, esi
// 006ab41e  5e                   pop esi
// 006ab41f  59                   pop ecx
// 006ab420  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
