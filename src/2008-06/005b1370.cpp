// roc 2008-06 005b1370  unit: RBX::VHat::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b1370
//
// 005b1370  51                   push ecx
// 005b1371  6a28                 push 0x28
// 005b1373  c744240400000000     mov dword ptr [esp + 4], 0
// 005b137b  e8a0f50e00           call 0x6a0920
// 005b1380  83c404               add esp, 4
// 005b1383  85c0                 test eax, eax
// 005b1385  743a                 je 0x5b13c1
// 005b1387  c7000c4b8300         mov dword ptr [eax], 0x834b0c
// 005b138d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b1391  894808               mov dword ptr [eax + 8], ecx
// 005b1394  8b542410             mov edx, dword ptr [esp + 0x10]
// 005b1398  89500c               mov dword ptr [eax + 0xc], edx
// 005b139b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005b139f  894810               mov dword ptr [eax + 0x10], ecx
// 005b13a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 005b13a6  895018               mov dword ptr [eax + 0x18], edx
// 005b13a9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005b13ad  89481c               mov dword ptr [eax + 0x1c], ecx
// 005b13b0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b13b4  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b13b8  895020               mov dword ptr [eax + 0x20], edx
// 005b13bb  8901                 mov dword ptr [ecx], eax
// 005b13bd  8bc1                 mov eax, ecx
// 005b13bf  59                   pop ecx
// 005b13c0  c3                   ret 
// 005b13c1  8b442408             mov eax, dword ptr [esp + 8]
// 005b13c5  33c9                 xor ecx, ecx
// 005b13c7  8908                 mov dword ptr [eax], ecx
// 005b13c9  59                   pop ecx
// 005b13ca  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
