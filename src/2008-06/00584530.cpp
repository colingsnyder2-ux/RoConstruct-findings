// roc 2008-06 00584530  unit: RBX::ModelInstance  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00584530
//
// 00584530  51                   push ecx
// 00584531  6a28                 push 0x28
// 00584533  c744240400000000     mov dword ptr [esp + 4], 0
// 0058453b  e8e0c31100           call 0x6a0920
// 00584540  83c404               add esp, 4
// 00584543  85c0                 test eax, eax
// 00584545  743a                 je 0x584581
// 00584547  c700ac0c8300         mov dword ptr [eax], 0x830cac
// 0058454d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00584551  894808               mov dword ptr [eax + 8], ecx
// 00584554  8b542410             mov edx, dword ptr [esp + 0x10]
// 00584558  89500c               mov dword ptr [eax + 0xc], edx
// 0058455b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058455f  894810               mov dword ptr [eax + 0x10], ecx
// 00584562  8b542418             mov edx, dword ptr [esp + 0x18]
// 00584566  895018               mov dword ptr [eax + 0x18], edx
// 00584569  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0058456d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00584570  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00584574  8b542420             mov edx, dword ptr [esp + 0x20]
// 00584578  895020               mov dword ptr [eax + 0x20], edx
// 0058457b  8901                 mov dword ptr [ecx], eax
// 0058457d  8bc1                 mov eax, ecx
// 0058457f  59                   pop ecx
// 00584580  c3                   ret 
// 00584581  8b442408             mov eax, dword ptr [esp + 8]
// 00584585  33c9                 xor ecx, ecx
// 00584587  8908                 mov dword ptr [eax], ecx
// 00584589  59                   pop ecx
// 0058458a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
