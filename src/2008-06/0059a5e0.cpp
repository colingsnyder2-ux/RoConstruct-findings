// roc 2008-06 0059a5e0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059a5e0
//
// 0059a5e0  51                   push ecx
// 0059a5e1  6a28                 push 0x28
// 0059a5e3  c744240400000000     mov dword ptr [esp + 4], 0
// 0059a5eb  e830631000           call 0x6a0920
// 0059a5f0  83c404               add esp, 4
// 0059a5f3  85c0                 test eax, eax
// 0059a5f5  743a                 je 0x59a631
// 0059a5f7  c700682b8300         mov dword ptr [eax], 0x832b68
// 0059a5fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059a601  894808               mov dword ptr [eax + 8], ecx
// 0059a604  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059a608  89500c               mov dword ptr [eax + 0xc], edx
// 0059a60b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059a60f  894810               mov dword ptr [eax + 0x10], ecx
// 0059a612  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059a616  895018               mov dword ptr [eax + 0x18], edx
// 0059a619  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059a61d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0059a620  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059a624  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059a628  895020               mov dword ptr [eax + 0x20], edx
// 0059a62b  8901                 mov dword ptr [ecx], eax
// 0059a62d  8bc1                 mov eax, ecx
// 0059a62f  59                   pop ecx
// 0059a630  c3                   ret 
// 0059a631  8b442408             mov eax, dword ptr [esp + 8]
// 0059a635  33c9                 xor ecx, ecx
// 0059a637  8908                 mov dword ptr [eax], ecx
// 0059a639  59                   pop ecx
// 0059a63a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
