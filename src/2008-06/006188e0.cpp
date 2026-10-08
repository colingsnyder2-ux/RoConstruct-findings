// roc 2008-06 006188e0  unit: RBX::Flag  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006188e0
//
// 006188e0  51                   push ecx
// 006188e1  6a28                 push 0x28
// 006188e3  c744240400000000     mov dword ptr [esp + 4], 0
// 006188eb  e830800800           call 0x6a0920
// 006188f0  83c404               add esp, 4
// 006188f3  85c0                 test eax, eax
// 006188f5  743a                 je 0x618931
// 006188f7  c700f03d8400         mov dword ptr [eax], 0x843df0
// 006188fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00618901  894808               mov dword ptr [eax + 8], ecx
// 00618904  8b542410             mov edx, dword ptr [esp + 0x10]
// 00618908  89500c               mov dword ptr [eax + 0xc], edx
// 0061890b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0061890f  894810               mov dword ptr [eax + 0x10], ecx
// 00618912  8b542418             mov edx, dword ptr [esp + 0x18]
// 00618916  895018               mov dword ptr [eax + 0x18], edx
// 00618919  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0061891d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00618920  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00618924  8b542420             mov edx, dword ptr [esp + 0x20]
// 00618928  895020               mov dword ptr [eax + 0x20], edx
// 0061892b  8901                 mov dword ptr [ecx], eax
// 0061892d  8bc1                 mov eax, ecx
// 0061892f  59                   pop ecx
// 00618930  c3                   ret 
// 00618931  8b442408             mov eax, dword ptr [esp + 8]
// 00618935  33c9                 xor ecx, ecx
// 00618937  8908                 mov dword ptr [eax], ecx
// 00618939  59                   pop ecx
// 0061893a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
