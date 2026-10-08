// roc 2011-06 0067d2c0  unit: RBX::ExtrudedPartInstance  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0067d2c0
//
// 0067d2c0  51                   push ecx
// 0067d2c1  6a28                 push 0x28
// 0067d2c3  c744240400000000     mov dword ptr [esp + 4], 0
// 0067d2cb  e88ecd1800           call 0x80a05e
// 0067d2d0  83c404               add esp, 4
// 0067d2d3  85c0                 test eax, eax
// 0067d2d5  743a                 je 0x67d311
// 0067d2d7  c70078dfa900         mov dword ptr [eax], 0xa9df78
// 0067d2dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067d2e1  894808               mov dword ptr [eax + 8], ecx
// 0067d2e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0067d2e8  89500c               mov dword ptr [eax + 0xc], edx
// 0067d2eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0067d2ef  894810               mov dword ptr [eax + 0x10], ecx
// 0067d2f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0067d2f6  895018               mov dword ptr [eax + 0x18], edx
// 0067d2f9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0067d2fd  89481c               mov dword ptr [eax + 0x1c], ecx
// 0067d300  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0067d304  8b542420             mov edx, dword ptr [esp + 0x20]
// 0067d308  895020               mov dword ptr [eax + 0x20], edx
// 0067d30b  8901                 mov dword ptr [ecx], eax
// 0067d30d  8bc1                 mov eax, ecx
// 0067d30f  59                   pop ecx
// 0067d310  c3                   ret 
// 0067d311  8b442408             mov eax, dword ptr [esp + 8]
// 0067d315  33c9                 xor ecx, ecx
// 0067d317  8908                 mov dword ptr [eax], ecx
// 0067d319  59                   pop ecx
// 0067d31a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
