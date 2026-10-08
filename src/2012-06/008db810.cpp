// roc 2012-06 008db810  unit: RBX::SkateboardPlatform  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008db810
//
// 008db810  51                   push ecx
// 008db811  6a28                 push 0x28
// 008db813  c744240400000000     mov dword ptr [esp + 4], 0
// 008db81b  e8fa680a00           call 0x98211a
// 008db820  83c404               add esp, 4
// 008db823  85c0                 test eax, eax
// 008db825  7432                 je 0x8db859
// 008db827  c70084a4be00         mov dword ptr [eax], 0xbea484
// 008db82d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008db831  894808               mov dword ptr [eax + 8], ecx
// 008db834  8b542410             mov edx, dword ptr [esp + 0x10]
// 008db838  89500c               mov dword ptr [eax + 0xc], edx
// 008db83b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008db83f  894810               mov dword ptr [eax + 0x10], ecx
// 008db842  8b542418             mov edx, dword ptr [esp + 0x18]
// 008db846  895018               mov dword ptr [eax + 0x18], edx
// 008db849  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008db84d  89481c               mov dword ptr [eax + 0x1c], ecx
// 008db850  8b542420             mov edx, dword ptr [esp + 0x20]
// 008db854  895020               mov dword ptr [eax + 0x20], edx
// 008db857  eb02                 jmp 0x8db85b
// 008db859  33c0                 xor eax, eax
// 008db85b  56                   push esi
// 008db85c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008db860  6a00                 push 0
// 008db862  8906                 mov dword ptr [esi], eax
// 008db864  e8ab680a00           call 0x982114
// 008db869  83c404               add esp, 4
// 008db86c  8bc6                 mov eax, esi
// 008db86e  5e                   pop esi
// 008db86f  59                   pop ecx
// 008db870  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
