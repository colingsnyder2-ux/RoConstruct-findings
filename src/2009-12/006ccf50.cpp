// roc 2009-12 006ccf50  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ccf50
//
// 006ccf50  51                   push ecx
// 006ccf51  6a28                 push 0x28
// 006ccf53  c744240400000000     mov dword ptr [esp + 4], 0
// 006ccf5b  e800691200           call 0x7f3860
// 006ccf60  83c404               add esp, 4
// 006ccf63  85c0                 test eax, eax
// 006ccf65  7432                 je 0x6ccf99
// 006ccf67  c70010799d00         mov dword ptr [eax], 0x9d7910
// 006ccf6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ccf71  894808               mov dword ptr [eax + 8], ecx
// 006ccf74  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ccf78  89500c               mov dword ptr [eax + 0xc], edx
// 006ccf7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ccf7f  894810               mov dword ptr [eax + 0x10], ecx
// 006ccf82  8b542418             mov edx, dword ptr [esp + 0x18]
// 006ccf86  895018               mov dword ptr [eax + 0x18], edx
// 006ccf89  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ccf8d  89481c               mov dword ptr [eax + 0x1c], ecx
// 006ccf90  8b542420             mov edx, dword ptr [esp + 0x20]
// 006ccf94  895020               mov dword ptr [eax + 0x20], edx
// 006ccf97  eb02                 jmp 0x6ccf9b
// 006ccf99  33c0                 xor eax, eax
// 006ccf9b  56                   push esi
// 006ccf9c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ccfa0  6a00                 push 0
// 006ccfa2  8906                 mov dword ptr [esi], eax
// 006ccfa4  e8b1681200           call 0x7f385a
// 006ccfa9  83c404               add esp, 4
// 006ccfac  8bc6                 mov eax, esi
// 006ccfae  5e                   pop esi
// 006ccfaf  59                   pop ecx
// 006ccfb0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
