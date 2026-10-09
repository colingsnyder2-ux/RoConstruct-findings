// roc 2009-12 006decf0  unit: RBX::ExtrudedPartInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006decf0
//
// 006decf0  51                   push ecx
// 006decf1  6a28                 push 0x28
// 006decf3  c744240400000000     mov dword ptr [esp + 4], 0
// 006decfb  e8604b1100           call 0x7f3860
// 006ded00  83c404               add esp, 4
// 006ded03  85c0                 test eax, eax
// 006ded05  7432                 je 0x6ded39
// 006ded07  c700d09f9d00         mov dword ptr [eax], 0x9d9fd0
// 006ded0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ded11  894808               mov dword ptr [eax + 8], ecx
// 006ded14  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ded18  89500c               mov dword ptr [eax + 0xc], edx
// 006ded1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ded1f  894810               mov dword ptr [eax + 0x10], ecx
// 006ded22  8b542418             mov edx, dword ptr [esp + 0x18]
// 006ded26  895018               mov dword ptr [eax + 0x18], edx
// 006ded29  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ded2d  89481c               mov dword ptr [eax + 0x1c], ecx
// 006ded30  8b542420             mov edx, dword ptr [esp + 0x20]
// 006ded34  895020               mov dword ptr [eax + 0x20], edx
// 006ded37  eb02                 jmp 0x6ded3b
// 006ded39  33c0                 xor eax, eax
// 006ded3b  56                   push esi
// 006ded3c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ded40  6a00                 push 0
// 006ded42  8906                 mov dword ptr [esi], eax
// 006ded44  e8114b1100           call 0x7f385a
// 006ded49  83c404               add esp, 4
// 006ded4c  8bc6                 mov eax, esi
// 006ded4e  5e                   pop esi
// 006ded4f  59                   pop ecx
// 006ded50  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
