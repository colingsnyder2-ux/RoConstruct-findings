// roc 2012-06 00752da0  unit: RBX::PartInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00752da0
//
// 00752da0  51                   push ecx
// 00752da1  6a28                 push 0x28
// 00752da3  c744240400000000     mov dword ptr [esp + 4], 0
// 00752dab  e86af32200           call 0x98211a
// 00752db0  83c404               add esp, 4
// 00752db3  85c0                 test eax, eax
// 00752db5  7432                 je 0x752de9
// 00752db7  c700dcc5ba00         mov dword ptr [eax], 0xbac5dc
// 00752dbd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00752dc1  894808               mov dword ptr [eax + 8], ecx
// 00752dc4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00752dc8  89500c               mov dword ptr [eax + 0xc], edx
// 00752dcb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00752dcf  894810               mov dword ptr [eax + 0x10], ecx
// 00752dd2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00752dd6  895018               mov dword ptr [eax + 0x18], edx
// 00752dd9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00752ddd  89481c               mov dword ptr [eax + 0x1c], ecx
// 00752de0  8b542420             mov edx, dword ptr [esp + 0x20]
// 00752de4  895020               mov dword ptr [eax + 0x20], edx
// 00752de7  eb02                 jmp 0x752deb
// 00752de9  33c0                 xor eax, eax
// 00752deb  56                   push esi
// 00752dec  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00752df0  6a00                 push 0
// 00752df2  8906                 mov dword ptr [esi], eax
// 00752df4  e81bf32200           call 0x982114
// 00752df9  83c404               add esp, 4
// 00752dfc  8bc6                 mov eax, esi
// 00752dfe  5e                   pop esi
// 00752dff  59                   pop ecx
// 00752e00  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
