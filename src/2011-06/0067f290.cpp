// roc 2011-06 0067f290  unit: RBX::HUMAN::VHumanoidState::?$sp_counted_impl_p  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0067f290
//
// 0067f290  51                   push ecx
// 0067f291  6a28                 push 0x28
// 0067f293  c744240400000000     mov dword ptr [esp + 4], 0
// 0067f29b  e8bead1800           call 0x80a05e
// 0067f2a0  83c404               add esp, 4
// 0067f2a3  85c0                 test eax, eax
// 0067f2a5  743a                 je 0x67f2e1
// 0067f2a7  c7005ce7a900         mov dword ptr [eax], 0xa9e75c
// 0067f2ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067f2b1  894808               mov dword ptr [eax + 8], ecx
// 0067f2b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0067f2b8  89500c               mov dword ptr [eax + 0xc], edx
// 0067f2bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0067f2bf  894810               mov dword ptr [eax + 0x10], ecx
// 0067f2c2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0067f2c6  895018               mov dword ptr [eax + 0x18], edx
// 0067f2c9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0067f2cd  89481c               mov dword ptr [eax + 0x1c], ecx
// 0067f2d0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0067f2d4  8b542420             mov edx, dword ptr [esp + 0x20]
// 0067f2d8  895020               mov dword ptr [eax + 0x20], edx
// 0067f2db  8901                 mov dword ptr [ecx], eax
// 0067f2dd  8bc1                 mov eax, ecx
// 0067f2df  59                   pop ecx
// 0067f2e0  c3                   ret 
// 0067f2e1  8b442408             mov eax, dword ptr [esp + 8]
// 0067f2e5  33c9                 xor ecx, ecx
// 0067f2e7  8908                 mov dword ptr [eax], ecx
// 0067f2e9  59                   pop ecx
// 0067f2ea  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
