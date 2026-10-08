// roc 2008-06 005fdcf0  unit: RBX::Tool  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fdcf0
//
// 005fdcf0  51                   push ecx
// 005fdcf1  6a28                 push 0x28
// 005fdcf3  c744240400000000     mov dword ptr [esp + 4], 0
// 005fdcfb  e8202c0a00           call 0x6a0920
// 005fdd00  83c404               add esp, 4
// 005fdd03  85c0                 test eax, eax
// 005fdd05  743a                 je 0x5fdd41
// 005fdd07  c700e8178400         mov dword ptr [eax], 0x8417e8
// 005fdd0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005fdd11  894808               mov dword ptr [eax + 8], ecx
// 005fdd14  8b542410             mov edx, dword ptr [esp + 0x10]
// 005fdd18  89500c               mov dword ptr [eax + 0xc], edx
// 005fdd1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005fdd1f  894810               mov dword ptr [eax + 0x10], ecx
// 005fdd22  8b542418             mov edx, dword ptr [esp + 0x18]
// 005fdd26  895018               mov dword ptr [eax + 0x18], edx
// 005fdd29  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005fdd2d  89481c               mov dword ptr [eax + 0x1c], ecx
// 005fdd30  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fdd34  8b542420             mov edx, dword ptr [esp + 0x20]
// 005fdd38  895020               mov dword ptr [eax + 0x20], edx
// 005fdd3b  8901                 mov dword ptr [ecx], eax
// 005fdd3d  8bc1                 mov eax, ecx
// 005fdd3f  59                   pop ecx
// 005fdd40  c3                   ret 
// 005fdd41  8b442408             mov eax, dword ptr [esp + 8]
// 005fdd45  33c9                 xor ecx, ecx
// 005fdd47  8908                 mov dword ptr [eax], ecx
// 005fdd49  59                   pop ecx
// 005fdd4a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
