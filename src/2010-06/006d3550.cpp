// roc 2010-06 006d3550  unit: RBX::VBasicPartInstance::?$SeatImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d3550
//
// 006d3550  51                   push ecx
// 006d3551  6a28                 push 0x28
// 006d3553  c744240400000000     mov dword ptr [esp + 4], 0
// 006d355b  e840440d00           call 0x7a79a0
// 006d3560  83c404               add esp, 4
// 006d3563  85c0                 test eax, eax
// 006d3565  7432                 je 0x6d3599
// 006d3567  c7000c58a400         mov dword ptr [eax], 0xa4580c
// 006d356d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d3571  894808               mov dword ptr [eax + 8], ecx
// 006d3574  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d3578  89500c               mov dword ptr [eax + 0xc], edx
// 006d357b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006d357f  894810               mov dword ptr [eax + 0x10], ecx
// 006d3582  8b542418             mov edx, dword ptr [esp + 0x18]
// 006d3586  895018               mov dword ptr [eax + 0x18], edx
// 006d3589  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006d358d  89481c               mov dword ptr [eax + 0x1c], ecx
// 006d3590  8b542420             mov edx, dword ptr [esp + 0x20]
// 006d3594  895020               mov dword ptr [eax + 0x20], edx
// 006d3597  eb02                 jmp 0x6d359b
// 006d3599  33c0                 xor eax, eax
// 006d359b  56                   push esi
// 006d359c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006d35a0  6a00                 push 0
// 006d35a2  8906                 mov dword ptr [esi], eax
// 006d35a4  e8f1430d00           call 0x7a799a
// 006d35a9  83c404               add esp, 4
// 006d35ac  8bc6                 mov eax, esi
// 006d35ae  5e                   pop esi
// 006d35af  59                   pop ecx
// 006d35b0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
