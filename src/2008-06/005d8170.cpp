// roc 2008-06 005d8170  unit: RBX::Humanoid  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d8170
//
// 005d8170  51                   push ecx
// 005d8171  6a28                 push 0x28
// 005d8173  c744240400000000     mov dword ptr [esp + 4], 0
// 005d817b  e8a0870c00           call 0x6a0920
// 005d8180  83c404               add esp, 4
// 005d8183  85c0                 test eax, eax
// 005d8185  743a                 je 0x5d81c1
// 005d8187  c70008d38300         mov dword ptr [eax], 0x83d308
// 005d818d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d8191  894808               mov dword ptr [eax + 8], ecx
// 005d8194  8b542410             mov edx, dword ptr [esp + 0x10]
// 005d8198  89500c               mov dword ptr [eax + 0xc], edx
// 005d819b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005d819f  894810               mov dword ptr [eax + 0x10], ecx
// 005d81a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 005d81a6  895018               mov dword ptr [eax + 0x18], edx
// 005d81a9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005d81ad  89481c               mov dword ptr [eax + 0x1c], ecx
// 005d81b0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d81b4  8b542420             mov edx, dword ptr [esp + 0x20]
// 005d81b8  895020               mov dword ptr [eax + 0x20], edx
// 005d81bb  8901                 mov dword ptr [ecx], eax
// 005d81bd  8bc1                 mov eax, ecx
// 005d81bf  59                   pop ecx
// 005d81c0  c3                   ret 
// 005d81c1  8b442408             mov eax, dword ptr [esp + 8]
// 005d81c5  33c9                 xor ecx, ecx
// 005d81c7  8908                 mov dword ptr [eax], ecx
// 005d81c9  59                   pop ecx
// 005d81ca  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
