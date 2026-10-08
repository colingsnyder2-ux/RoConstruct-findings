// roc 2010-06 00709520  unit: RBX::KernelJoint  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00709520
//
// 00709520  d905d027a100         fld dword ptr [0xa127d0]
// 00709526  8b442410             mov eax, dword ptr [esp + 0x10]
// 0070952a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070952e  8b542408             mov edx, dword ptr [esp + 8]
// 00709532  83ec08               sub esp, 8
// 00709535  d9542404             fst dword ptr [esp + 4]
// 00709539  d91c24               fstp dword ptr [esp]
// 0070953c  50                   push eax
// 0070953d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00709541  51                   push ecx
// 00709542  52                   push edx
// 00709543  50                   push eax
// 00709544  e857fdffff           call 0x7092a0
// 00709549  83c418               add esp, 0x18
// 0070954c  c3                   ret 
// library rbxgs/v8world\Joint.cpp (function ?canBuildJointLoose@Joint@RBX@@KA_NPAVPrimitive@2@0W4NormalId@2@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Joint.cpp
