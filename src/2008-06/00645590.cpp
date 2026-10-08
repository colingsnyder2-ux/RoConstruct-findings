// roc 2008-06 00645590  unit: RBX::HUMAN::Climbing  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00645590
//
// 00645590  d90530c48100         fld dword ptr [0x81c430]
// 00645596  8b442410             mov eax, dword ptr [esp + 0x10]
// 0064559a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064559e  8b542408             mov edx, dword ptr [esp + 8]
// 006455a2  83ec08               sub esp, 8
// 006455a5  d9542404             fst dword ptr [esp + 4]
// 006455a9  d91c24               fstp dword ptr [esp]
// 006455ac  50                   push eax
// 006455ad  8b442410             mov eax, dword ptr [esp + 0x10]
// 006455b1  51                   push ecx
// 006455b2  52                   push edx
// 006455b3  50                   push eax
// 006455b4  e8f7feffff           call 0x6454b0
// 006455b9  83c418               add esp, 0x18
// 006455bc  c3                   ret 
// library rbxgs/v8world\Joint.cpp (function ?canBuildJointLoose@Joint@RBX@@KA_NPAVPrimitive@2@0W4NormalId@2@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Joint.cpp
