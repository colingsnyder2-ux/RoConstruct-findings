// roc 2011-06 0067f1d0  unit: RBX::HUMAN::VHumanoidState::?$sp_counted_impl_p  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0067f1d0
//
// 0067f1d0  51                   push ecx
// 0067f1d1  6a28                 push 0x28
// 0067f1d3  c744240400000000     mov dword ptr [esp + 4], 0
// 0067f1db  e87eae1800           call 0x80a05e
// 0067f1e0  83c404               add esp, 4
// 0067f1e3  85c0                 test eax, eax
// 0067f1e5  743a                 je 0x67f221
// 0067f1e7  c70034e7a900         mov dword ptr [eax], 0xa9e734
// 0067f1ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067f1f1  894808               mov dword ptr [eax + 8], ecx
// 0067f1f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0067f1f8  89500c               mov dword ptr [eax + 0xc], edx
// 0067f1fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0067f1ff  894810               mov dword ptr [eax + 0x10], ecx
// 0067f202  8b542418             mov edx, dword ptr [esp + 0x18]
// 0067f206  895018               mov dword ptr [eax + 0x18], edx
// 0067f209  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0067f20d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0067f210  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0067f214  8b542420             mov edx, dword ptr [esp + 0x20]
// 0067f218  895020               mov dword ptr [eax + 0x20], edx
// 0067f21b  8901                 mov dword ptr [ecx], eax
// 0067f21d  8bc1                 mov eax, ecx
// 0067f21f  59                   pop ecx
// 0067f220  c3                   ret 
// 0067f221  8b442408             mov eax, dword ptr [esp + 8]
// 0067f225  33c9                 xor ecx, ecx
// 0067f227  8908                 mov dword ptr [eax], ecx
// 0067f229  59                   pop ecx
// 0067f22a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
