// roc 2010-06 0066da40  unit: RBX::Humanoid  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066da40
//
// 0066da40  51                   push ecx
// 0066da41  6a28                 push 0x28
// 0066da43  c744240400000000     mov dword ptr [esp + 4], 0
// 0066da4b  e8509f1300           call 0x7a79a0
// 0066da50  83c404               add esp, 4
// 0066da53  85c0                 test eax, eax
// 0066da55  7432                 je 0x66da89
// 0066da57  c70070c8a300         mov dword ptr [eax], 0xa3c870
// 0066da5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066da61  894808               mov dword ptr [eax + 8], ecx
// 0066da64  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066da68  89500c               mov dword ptr [eax + 0xc], edx
// 0066da6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066da6f  894810               mov dword ptr [eax + 0x10], ecx
// 0066da72  8b542418             mov edx, dword ptr [esp + 0x18]
// 0066da76  895018               mov dword ptr [eax + 0x18], edx
// 0066da79  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066da7d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0066da80  8b542420             mov edx, dword ptr [esp + 0x20]
// 0066da84  895020               mov dword ptr [eax + 0x20], edx
// 0066da87  eb02                 jmp 0x66da8b
// 0066da89  33c0                 xor eax, eax
// 0066da8b  56                   push esi
// 0066da8c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066da90  6a00                 push 0
// 0066da92  8906                 mov dword ptr [esi], eax
// 0066da94  e8019f1300           call 0x7a799a
// 0066da99  83c404               add esp, 4
// 0066da9c  8bc6                 mov eax, esi
// 0066da9e  5e                   pop esi
// 0066da9f  59                   pop ecx
// 0066daa0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
