// roc 2010-06 006ee720  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006ee720
//
// 006ee720  51                   push ecx
// 006ee721  6a28                 push 0x28
// 006ee723  c744240400000000     mov dword ptr [esp + 4], 0
// 006ee72b  e870920b00           call 0x7a79a0
// 006ee730  83c404               add esp, 4
// 006ee733  85c0                 test eax, eax
// 006ee735  7432                 je 0x6ee769
// 006ee737  c700e4a0a400         mov dword ptr [eax], 0xa4a0e4
// 006ee73d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ee741  894808               mov dword ptr [eax + 8], ecx
// 006ee744  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ee748  89500c               mov dword ptr [eax + 0xc], edx
// 006ee74b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ee74f  894810               mov dword ptr [eax + 0x10], ecx
// 006ee752  8b542418             mov edx, dword ptr [esp + 0x18]
// 006ee756  895018               mov dword ptr [eax + 0x18], edx
// 006ee759  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ee75d  89481c               mov dword ptr [eax + 0x1c], ecx
// 006ee760  8b542420             mov edx, dword ptr [esp + 0x20]
// 006ee764  895020               mov dword ptr [eax + 0x20], edx
// 006ee767  eb02                 jmp 0x6ee76b
// 006ee769  33c0                 xor eax, eax
// 006ee76b  56                   push esi
// 006ee76c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ee770  6a00                 push 0
// 006ee772  8906                 mov dword ptr [esi], eax
// 006ee774  e821920b00           call 0x7a799a
// 006ee779  83c404               add esp, 4
// 006ee77c  8bc6                 mov eax, esi
// 006ee77e  5e                   pop esi
// 006ee77f  59                   pop ecx
// 006ee780  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
