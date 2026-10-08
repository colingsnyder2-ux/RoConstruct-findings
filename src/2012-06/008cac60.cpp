// roc 2012-06 008cac60  unit: RBX::VFlagStand::?$FactoryProduct  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008cac60
//
// 008cac60  51                   push ecx
// 008cac61  6a28                 push 0x28
// 008cac63  c744240400000000     mov dword ptr [esp + 4], 0
// 008cac6b  e8aa740b00           call 0x98211a
// 008cac70  83c404               add esp, 4
// 008cac73  85c0                 test eax, eax
// 008cac75  7432                 je 0x8caca9
// 008cac77  c7004c74be00         mov dword ptr [eax], 0xbe744c
// 008cac7d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008cac81  894808               mov dword ptr [eax + 8], ecx
// 008cac84  8b542410             mov edx, dword ptr [esp + 0x10]
// 008cac88  89500c               mov dword ptr [eax + 0xc], edx
// 008cac8b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008cac8f  894810               mov dword ptr [eax + 0x10], ecx
// 008cac92  8b542418             mov edx, dword ptr [esp + 0x18]
// 008cac96  895018               mov dword ptr [eax + 0x18], edx
// 008cac99  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008cac9d  89481c               mov dword ptr [eax + 0x1c], ecx
// 008caca0  8b542420             mov edx, dword ptr [esp + 0x20]
// 008caca4  895020               mov dword ptr [eax + 0x20], edx
// 008caca7  eb02                 jmp 0x8cacab
// 008caca9  33c0                 xor eax, eax
// 008cacab  56                   push esi
// 008cacac  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008cacb0  6a00                 push 0
// 008cacb2  8906                 mov dword ptr [esi], eax
// 008cacb4  e85b740b00           call 0x982114
// 008cacb9  83c404               add esp, 4
// 008cacbc  8bc6                 mov eax, esi
// 008cacbe  5e                   pop esi
// 008cacbf  59                   pop ecx
// 008cacc0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
