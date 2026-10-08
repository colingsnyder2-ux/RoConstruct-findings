// roc 2011-06 00690c50  unit: RBX::FormFactorPart  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00690c50
//
// 00690c50  51                   push ecx
// 00690c51  6a28                 push 0x28
// 00690c53  c744240400000000     mov dword ptr [esp + 4], 0
// 00690c5b  e8fe931700           call 0x80a05e
// 00690c60  83c404               add esp, 4
// 00690c63  85c0                 test eax, eax
// 00690c65  743a                 je 0x690ca1
// 00690c67  c700ac06aa00         mov dword ptr [eax], 0xaa06ac
// 00690c6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00690c71  894808               mov dword ptr [eax + 8], ecx
// 00690c74  8b542410             mov edx, dword ptr [esp + 0x10]
// 00690c78  89500c               mov dword ptr [eax + 0xc], edx
// 00690c7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00690c7f  894810               mov dword ptr [eax + 0x10], ecx
// 00690c82  8b542418             mov edx, dword ptr [esp + 0x18]
// 00690c86  895018               mov dword ptr [eax + 0x18], edx
// 00690c89  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00690c8d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00690c90  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00690c94  8b542420             mov edx, dword ptr [esp + 0x20]
// 00690c98  895020               mov dword ptr [eax + 0x20], edx
// 00690c9b  8901                 mov dword ptr [ecx], eax
// 00690c9d  8bc1                 mov eax, ecx
// 00690c9f  59                   pop ecx
// 00690ca0  c3                   ret 
// 00690ca1  8b442408             mov eax, dword ptr [esp + 8]
// 00690ca5  33c9                 xor ecx, ecx
// 00690ca7  8908                 mov dword ptr [eax], ecx
// 00690ca9  59                   pop ecx
// 00690caa  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
