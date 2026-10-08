// roc 2008-06 005d2280  unit: RBX::P8PartInstance::?$GetSetImpl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d2280
//
// 005d2280  51                   push ecx
// 005d2281  6a28                 push 0x28
// 005d2283  c744240400000000     mov dword ptr [esp + 4], 0
// 005d228b  e890e60c00           call 0x6a0920
// 005d2290  83c404               add esp, 4
// 005d2293  85c0                 test eax, eax
// 005d2295  743a                 je 0x5d22d1
// 005d2297  c70090bc8300         mov dword ptr [eax], 0x83bc90
// 005d229d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d22a1  894808               mov dword ptr [eax + 8], ecx
// 005d22a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005d22a8  89500c               mov dword ptr [eax + 0xc], edx
// 005d22ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005d22af  894810               mov dword ptr [eax + 0x10], ecx
// 005d22b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 005d22b6  895018               mov dword ptr [eax + 0x18], edx
// 005d22b9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005d22bd  89481c               mov dword ptr [eax + 0x1c], ecx
// 005d22c0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d22c4  8b542420             mov edx, dword ptr [esp + 0x20]
// 005d22c8  895020               mov dword ptr [eax + 0x20], edx
// 005d22cb  8901                 mov dword ptr [ecx], eax
// 005d22cd  8bc1                 mov eax, ecx
// 005d22cf  59                   pop ecx
// 005d22d0  c3                   ret 
// 005d22d1  8b442408             mov eax, dword ptr [esp + 8]
// 005d22d5  33c9                 xor ecx, ecx
// 005d22d7  8908                 mov dword ptr [eax], ecx
// 005d22d9  59                   pop ecx
// 005d22da  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
