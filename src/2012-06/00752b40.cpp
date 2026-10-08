// roc 2012-06 00752b40  unit: RBX::PartInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00752b40
//
// 00752b40  51                   push ecx
// 00752b41  6a28                 push 0x28
// 00752b43  c744240400000000     mov dword ptr [esp + 4], 0
// 00752b4b  e8caf52200           call 0x98211a
// 00752b50  83c404               add esp, 4
// 00752b53  85c0                 test eax, eax
// 00752b55  7432                 je 0x752b89
// 00752b57  c70064c5ba00         mov dword ptr [eax], 0xbac564
// 00752b5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00752b61  894808               mov dword ptr [eax + 8], ecx
// 00752b64  8b542410             mov edx, dword ptr [esp + 0x10]
// 00752b68  89500c               mov dword ptr [eax + 0xc], edx
// 00752b6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00752b6f  894810               mov dword ptr [eax + 0x10], ecx
// 00752b72  8b542418             mov edx, dword ptr [esp + 0x18]
// 00752b76  895018               mov dword ptr [eax + 0x18], edx
// 00752b79  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00752b7d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00752b80  8b542420             mov edx, dword ptr [esp + 0x20]
// 00752b84  895020               mov dword ptr [eax + 0x20], edx
// 00752b87  eb02                 jmp 0x752b8b
// 00752b89  33c0                 xor eax, eax
// 00752b8b  56                   push esi
// 00752b8c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00752b90  6a00                 push 0
// 00752b92  8906                 mov dword ptr [esi], eax
// 00752b94  e87bf52200           call 0x982114
// 00752b99  83c404               add esp, 4
// 00752b9c  8bc6                 mov eax, esi
// 00752b9e  5e                   pop esi
// 00752b9f  59                   pop ecx
// 00752ba0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
