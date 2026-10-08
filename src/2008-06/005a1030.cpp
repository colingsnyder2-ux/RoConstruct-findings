// roc 2008-06 005a1030  unit: RBX::PartTool  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a1030
//
// 005a1030  51                   push ecx
// 005a1031  6a28                 push 0x28
// 005a1033  c744240400000000     mov dword ptr [esp + 4], 0
// 005a103b  e8e0f80f00           call 0x6a0920
// 005a1040  83c404               add esp, 4
// 005a1043  85c0                 test eax, eax
// 005a1045  743a                 je 0x5a1081
// 005a1047  c70040388300         mov dword ptr [eax], 0x833840
// 005a104d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a1051  894808               mov dword ptr [eax + 8], ecx
// 005a1054  8b542410             mov edx, dword ptr [esp + 0x10]
// 005a1058  89500c               mov dword ptr [eax + 0xc], edx
// 005a105b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a105f  894810               mov dword ptr [eax + 0x10], ecx
// 005a1062  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a1066  895018               mov dword ptr [eax + 0x18], edx
// 005a1069  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a106d  89481c               mov dword ptr [eax + 0x1c], ecx
// 005a1070  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a1074  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a1078  895020               mov dword ptr [eax + 0x20], edx
// 005a107b  8901                 mov dword ptr [ecx], eax
// 005a107d  8bc1                 mov eax, ecx
// 005a107f  59                   pop ecx
// 005a1080  c3                   ret 
// 005a1081  8b442408             mov eax, dword ptr [esp + 8]
// 005a1085  33c9                 xor ecx, ecx
// 005a1087  8908                 mov dword ptr [eax], ecx
// 005a1089  59                   pop ecx
// 005a108a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
