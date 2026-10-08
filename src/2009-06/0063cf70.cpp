// roc 2009-06 0063cf70  unit: RBX::VHat::?$FactoryProduct  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0063cf70
//
// 0063cf70  51                   push ecx
// 0063cf71  6a28                 push 0x28
// 0063cf73  c744240400000000     mov dword ptr [esp + 4], 0
// 0063cf7b  e8b8ba0d00           call 0x718a38
// 0063cf80  83c404               add esp, 4
// 0063cf83  85c0                 test eax, eax
// 0063cf85  7432                 je 0x63cfb9
// 0063cf87  c7007cb98d00         mov dword ptr [eax], 0x8db97c
// 0063cf8d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063cf91  894808               mov dword ptr [eax + 8], ecx
// 0063cf94  8b542410             mov edx, dword ptr [esp + 0x10]
// 0063cf98  89500c               mov dword ptr [eax + 0xc], edx
// 0063cf9b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063cf9f  894810               mov dword ptr [eax + 0x10], ecx
// 0063cfa2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0063cfa6  895018               mov dword ptr [eax + 0x18], edx
// 0063cfa9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0063cfad  89481c               mov dword ptr [eax + 0x1c], ecx
// 0063cfb0  8b542420             mov edx, dword ptr [esp + 0x20]
// 0063cfb4  895020               mov dword ptr [eax + 0x20], edx
// 0063cfb7  eb02                 jmp 0x63cfbb
// 0063cfb9  33c0                 xor eax, eax
// 0063cfbb  56                   push esi
// 0063cfbc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063cfc0  6a00                 push 0
// 0063cfc2  8906                 mov dword ptr [esi], eax
// 0063cfc4  e869ba0d00           call 0x718a32
// 0063cfc9  83c404               add esp, 4
// 0063cfcc  8bc6                 mov eax, esi
// 0063cfce  5e                   pop esi
// 0063cfcf  59                   pop ecx
// 0063cfd0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
