// roc 2007-08 0060a230  unit: RBX::RotatePJoint  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060a230
//
// 0060a230  d905005c7900         fld dword ptr [0x795c00]
// 0060a236  8b442410             mov eax, dword ptr [esp + 0x10]
// 0060a23a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060a23e  8b542408             mov edx, dword ptr [esp + 8]
// 0060a242  83ec08               sub esp, 8
// 0060a245  d9542404             fst dword ptr [esp + 4]
// 0060a249  d91c24               fstp dword ptr [esp]
// 0060a24c  50                   push eax
// 0060a24d  8b442410             mov eax, dword ptr [esp + 0x10]
// 0060a251  51                   push ecx
// 0060a252  52                   push edx
// 0060a253  50                   push eax
// 0060a254  e8d7feffff           call 0x60a130
// 0060a259  83c418               add esp, 0x18
// 0060a25c  c3                   ret 
// library rbxgs/v8world\Joint.cpp (function ?canBuildJointLoose@Joint@RBX@@KA_NPAVPrimitive@2@0W4NormalId@2@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Joint.cpp
