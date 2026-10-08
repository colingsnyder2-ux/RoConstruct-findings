// roc 2009-06 00665a80  unit: RBX::BasicPartInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00665a80
//
// 00665a80  51                   push ecx
// 00665a81  6a28                 push 0x28
// 00665a83  c744240400000000     mov dword ptr [esp + 4], 0
// 00665a8b  e8a82f0b00           call 0x718a38
// 00665a90  83c404               add esp, 4
// 00665a93  85c0                 test eax, eax
// 00665a95  7432                 je 0x665ac9
// 00665a97  c7009c288e00         mov dword ptr [eax], 0x8e289c
// 00665a9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00665aa1  894808               mov dword ptr [eax + 8], ecx
// 00665aa4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00665aa8  89500c               mov dword ptr [eax + 0xc], edx
// 00665aab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00665aaf  894810               mov dword ptr [eax + 0x10], ecx
// 00665ab2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00665ab6  895018               mov dword ptr [eax + 0x18], edx
// 00665ab9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00665abd  89481c               mov dword ptr [eax + 0x1c], ecx
// 00665ac0  8b542420             mov edx, dword ptr [esp + 0x20]
// 00665ac4  895020               mov dword ptr [eax + 0x20], edx
// 00665ac7  eb02                 jmp 0x665acb
// 00665ac9  33c0                 xor eax, eax
// 00665acb  56                   push esi
// 00665acc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00665ad0  6a00                 push 0
// 00665ad2  8906                 mov dword ptr [esi], eax
// 00665ad4  e8592f0b00           call 0x718a32
// 00665ad9  83c404               add esp, 4
// 00665adc  8bc6                 mov eax, esi
// 00665ade  5e                   pop esi
// 00665adf  59                   pop ecx
// 00665ae0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
