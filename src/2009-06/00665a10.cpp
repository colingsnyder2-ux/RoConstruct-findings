// roc 2009-06 00665a10  unit: RBX::BasicPartInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00665a10
//
// 00665a10  51                   push ecx
// 00665a11  6a28                 push 0x28
// 00665a13  c744240400000000     mov dword ptr [esp + 4], 0
// 00665a1b  e818300b00           call 0x718a38
// 00665a20  83c404               add esp, 4
// 00665a23  85c0                 test eax, eax
// 00665a25  7432                 je 0x665a59
// 00665a27  c70088288e00         mov dword ptr [eax], 0x8e2888
// 00665a2d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00665a31  894808               mov dword ptr [eax + 8], ecx
// 00665a34  8b542410             mov edx, dword ptr [esp + 0x10]
// 00665a38  89500c               mov dword ptr [eax + 0xc], edx
// 00665a3b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00665a3f  894810               mov dword ptr [eax + 0x10], ecx
// 00665a42  8b542418             mov edx, dword ptr [esp + 0x18]
// 00665a46  895018               mov dword ptr [eax + 0x18], edx
// 00665a49  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00665a4d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00665a50  8b542420             mov edx, dword ptr [esp + 0x20]
// 00665a54  895020               mov dword ptr [eax + 0x20], edx
// 00665a57  eb02                 jmp 0x665a5b
// 00665a59  33c0                 xor eax, eax
// 00665a5b  56                   push esi
// 00665a5c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00665a60  6a00                 push 0
// 00665a62  8906                 mov dword ptr [esi], eax
// 00665a64  e8c92f0b00           call 0x718a32
// 00665a69  83c404               add esp, 4
// 00665a6c  8bc6                 mov eax, esi
// 00665a6e  5e                   pop esi
// 00665a6f  59                   pop ecx
// 00665a70  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
