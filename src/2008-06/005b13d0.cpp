// roc 2008-06 005b13d0  unit: RBX::VHat::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b13d0
//
// 005b13d0  51                   push ecx
// 005b13d1  6a28                 push 0x28
// 005b13d3  c744240400000000     mov dword ptr [esp + 4], 0
// 005b13db  e840f50e00           call 0x6a0920
// 005b13e0  83c404               add esp, 4
// 005b13e3  85c0                 test eax, eax
// 005b13e5  743a                 je 0x5b1421
// 005b13e7  c700204b8300         mov dword ptr [eax], 0x834b20
// 005b13ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b13f1  894808               mov dword ptr [eax + 8], ecx
// 005b13f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005b13f8  89500c               mov dword ptr [eax + 0xc], edx
// 005b13fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005b13ff  894810               mov dword ptr [eax + 0x10], ecx
// 005b1402  8b542418             mov edx, dword ptr [esp + 0x18]
// 005b1406  895018               mov dword ptr [eax + 0x18], edx
// 005b1409  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005b140d  89481c               mov dword ptr [eax + 0x1c], ecx
// 005b1410  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b1414  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b1418  895020               mov dword ptr [eax + 0x20], edx
// 005b141b  8901                 mov dword ptr [ecx], eax
// 005b141d  8bc1                 mov eax, ecx
// 005b141f  59                   pop ecx
// 005b1420  c3                   ret 
// 005b1421  8b442408             mov eax, dword ptr [esp + 8]
// 005b1425  33c9                 xor ecx, ecx
// 005b1427  8908                 mov dword ptr [eax], ecx
// 005b1429  59                   pop ecx
// 005b142a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
