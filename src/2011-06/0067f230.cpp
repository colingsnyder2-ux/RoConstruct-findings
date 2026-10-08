// roc 2011-06 0067f230  unit: RBX::HUMAN::VHumanoidState::?$sp_counted_impl_p  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0067f230
//
// 0067f230  51                   push ecx
// 0067f231  6a28                 push 0x28
// 0067f233  c744240400000000     mov dword ptr [esp + 4], 0
// 0067f23b  e81eae1800           call 0x80a05e
// 0067f240  83c404               add esp, 4
// 0067f243  85c0                 test eax, eax
// 0067f245  743a                 je 0x67f281
// 0067f247  c70048e7a900         mov dword ptr [eax], 0xa9e748
// 0067f24d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067f251  894808               mov dword ptr [eax + 8], ecx
// 0067f254  8b542410             mov edx, dword ptr [esp + 0x10]
// 0067f258  89500c               mov dword ptr [eax + 0xc], edx
// 0067f25b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0067f25f  894810               mov dword ptr [eax + 0x10], ecx
// 0067f262  8b542418             mov edx, dword ptr [esp + 0x18]
// 0067f266  895018               mov dword ptr [eax + 0x18], edx
// 0067f269  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0067f26d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0067f270  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0067f274  8b542420             mov edx, dword ptr [esp + 0x20]
// 0067f278  895020               mov dword ptr [eax + 0x20], edx
// 0067f27b  8901                 mov dword ptr [ecx], eax
// 0067f27d  8bc1                 mov eax, ecx
// 0067f27f  59                   pop ecx
// 0067f280  c3                   ret 
// 0067f281  8b442408             mov eax, dword ptr [esp + 8]
// 0067f285  33c9                 xor ecx, ecx
// 0067f287  8908                 mov dword ptr [eax], ecx
// 0067f289  59                   pop ecx
// 0067f28a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
