// roc 2008-06 005b1310  unit: RBX::VHat::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b1310
//
// 005b1310  51                   push ecx
// 005b1311  6a28                 push 0x28
// 005b1313  c744240400000000     mov dword ptr [esp + 4], 0
// 005b131b  e800f60e00           call 0x6a0920
// 005b1320  83c404               add esp, 4
// 005b1323  85c0                 test eax, eax
// 005b1325  743a                 je 0x5b1361
// 005b1327  c700f84a8300         mov dword ptr [eax], 0x834af8
// 005b132d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b1331  894808               mov dword ptr [eax + 8], ecx
// 005b1334  8b542410             mov edx, dword ptr [esp + 0x10]
// 005b1338  89500c               mov dword ptr [eax + 0xc], edx
// 005b133b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005b133f  894810               mov dword ptr [eax + 0x10], ecx
// 005b1342  8b542418             mov edx, dword ptr [esp + 0x18]
// 005b1346  895018               mov dword ptr [eax + 0x18], edx
// 005b1349  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005b134d  89481c               mov dword ptr [eax + 0x1c], ecx
// 005b1350  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b1354  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b1358  895020               mov dword ptr [eax + 0x20], edx
// 005b135b  8901                 mov dword ptr [ecx], eax
// 005b135d  8bc1                 mov eax, ecx
// 005b135f  59                   pop ecx
// 005b1360  c3                   ret 
// 005b1361  8b442408             mov eax, dword ptr [esp + 8]
// 005b1365  33c9                 xor ecx, ecx
// 005b1367  8908                 mov dword ptr [eax], ecx
// 005b1369  59                   pop ecx
// 005b136a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
