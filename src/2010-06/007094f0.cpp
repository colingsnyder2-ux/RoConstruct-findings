// roc 2010-06 007094f0  unit: RBX::KernelJoint  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007094f0
//
// 007094f0  d90564daa200         fld dword ptr [0xa2da64]
// 007094f6  8b442410             mov eax, dword ptr [esp + 0x10]
// 007094fa  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007094fe  8b542408             mov edx, dword ptr [esp + 8]
// 00709502  83ec08               sub esp, 8
// 00709505  d9542404             fst dword ptr [esp + 4]
// 00709509  d91c24               fstp dword ptr [esp]
// 0070950c  50                   push eax
// 0070950d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00709511  51                   push ecx
// 00709512  52                   push edx
// 00709513  50                   push eax
// 00709514  e887fdffff           call 0x7092a0
// 00709519  83c418               add esp, 0x18
// 0070951c  c3                   ret 
// library rbxgs/v8world\Joint.cpp (function ?canBuildJointTight@Joint@RBX@@KA_NPAVPrimitive@2@0W4NormalId@2@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Joint.cpp
