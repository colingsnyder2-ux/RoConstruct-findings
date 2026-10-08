// roc 2007-03 005eb1a0  unit: seg_005e0000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005eb1a0
//
// 005eb1a0  d90510507900         fld dword ptr [0x795010]
// 005eb1a6  8b442410             mov eax, dword ptr [esp + 0x10]
// 005eb1aa  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005eb1ae  8b542408             mov edx, dword ptr [esp + 8]
// 005eb1b2  83ec08               sub esp, 8
// 005eb1b5  d9542404             fst dword ptr [esp + 4]
// 005eb1b9  d91c24               fstp dword ptr [esp]
// 005eb1bc  50                   push eax
// 005eb1bd  8b442410             mov eax, dword ptr [esp + 0x10]
// 005eb1c1  51                   push ecx
// 005eb1c2  52                   push edx
// 005eb1c3  50                   push eax
// 005eb1c4  e8d7feffff           call 0x5eb0a0
// 005eb1c9  83c418               add esp, 0x18
// 005eb1cc  c3                   ret 
// library rbxgs/v8world\Joint.cpp (function ?canBuildJointLoose@Joint@RBX@@KA_NPAVPrimitive@2@0W4NormalId@2@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Joint.cpp
