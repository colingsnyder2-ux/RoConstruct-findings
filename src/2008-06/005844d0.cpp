// roc 2008-06 005844d0  unit: RBX::ModelInstance  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005844d0
//
// 005844d0  51                   push ecx
// 005844d1  6a28                 push 0x28
// 005844d3  c744240400000000     mov dword ptr [esp + 4], 0
// 005844db  e840c41100           call 0x6a0920
// 005844e0  83c404               add esp, 4
// 005844e3  85c0                 test eax, eax
// 005844e5  743a                 je 0x584521
// 005844e7  c700980c8300         mov dword ptr [eax], 0x830c98
// 005844ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005844f1  894808               mov dword ptr [eax + 8], ecx
// 005844f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005844f8  89500c               mov dword ptr [eax + 0xc], edx
// 005844fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005844ff  894810               mov dword ptr [eax + 0x10], ecx
// 00584502  8b542418             mov edx, dword ptr [esp + 0x18]
// 00584506  895018               mov dword ptr [eax + 0x18], edx
// 00584509  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0058450d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00584510  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00584514  8b542420             mov edx, dword ptr [esp + 0x20]
// 00584518  895020               mov dword ptr [eax + 0x20], edx
// 0058451b  8901                 mov dword ptr [ecx], eax
// 0058451d  8bc1                 mov eax, ecx
// 0058451f  59                   pop ecx
// 00584520  c3                   ret 
// 00584521  8b442408             mov eax, dword ptr [esp + 8]
// 00584525  33c9                 xor ecx, ecx
// 00584527  8908                 mov dword ptr [eax], ecx
// 00584529  59                   pop ecx
// 0058452a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
