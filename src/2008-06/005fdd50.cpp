// roc 2008-06 005fdd50  unit: RBX::Tool  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fdd50
//
// 005fdd50  51                   push ecx
// 005fdd51  6a28                 push 0x28
// 005fdd53  c744240400000000     mov dword ptr [esp + 4], 0
// 005fdd5b  e8c02b0a00           call 0x6a0920
// 005fdd60  83c404               add esp, 4
// 005fdd63  85c0                 test eax, eax
// 005fdd65  743a                 je 0x5fdda1
// 005fdd67  c700fc178400         mov dword ptr [eax], 0x8417fc
// 005fdd6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005fdd71  894808               mov dword ptr [eax + 8], ecx
// 005fdd74  8b542410             mov edx, dword ptr [esp + 0x10]
// 005fdd78  89500c               mov dword ptr [eax + 0xc], edx
// 005fdd7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005fdd7f  894810               mov dword ptr [eax + 0x10], ecx
// 005fdd82  8b542418             mov edx, dword ptr [esp + 0x18]
// 005fdd86  895018               mov dword ptr [eax + 0x18], edx
// 005fdd89  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005fdd8d  89481c               mov dword ptr [eax + 0x1c], ecx
// 005fdd90  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fdd94  8b542420             mov edx, dword ptr [esp + 0x20]
// 005fdd98  895020               mov dword ptr [eax + 0x20], edx
// 005fdd9b  8901                 mov dword ptr [ecx], eax
// 005fdd9d  8bc1                 mov eax, ecx
// 005fdd9f  59                   pop ecx
// 005fdda0  c3                   ret 
// 005fdda1  8b442408             mov eax, dword ptr [esp + 8]
// 005fdda5  33c9                 xor ecx, ecx
// 005fdda7  8908                 mov dword ptr [eax], ecx
// 005fdda9  59                   pop ecx
// 005fddaa  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
