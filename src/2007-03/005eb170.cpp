// roc 2007-03 005eb170  unit: seg_005e0000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005eb170
//
// 005eb170  d90500837a00         fld dword ptr [0x7a8300]
// 005eb176  8b442410             mov eax, dword ptr [esp + 0x10]
// 005eb17a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005eb17e  8b542408             mov edx, dword ptr [esp + 8]
// 005eb182  83ec08               sub esp, 8
// 005eb185  d9542404             fst dword ptr [esp + 4]
// 005eb189  d91c24               fstp dword ptr [esp]
// 005eb18c  50                   push eax
// 005eb18d  8b442410             mov eax, dword ptr [esp + 0x10]
// 005eb191  51                   push ecx
// 005eb192  52                   push edx
// 005eb193  50                   push eax
// 005eb194  e807ffffff           call 0x5eb0a0
// 005eb199  83c418               add esp, 0x18
// 005eb19c  c3                   ret 
// library rbxgs/v8world\Joint.cpp (function ?canBuildJointTight@Joint@RBX@@KA_NPAVPrimitive@2@0W4NormalId@2@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Joint.cpp
