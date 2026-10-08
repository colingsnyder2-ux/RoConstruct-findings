// roc 2007-08 0060a200  unit: RBX::RotatePJoint  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060a200
//
// 0060a200  d9057c837a00         fld dword ptr [0x7a837c]
// 0060a206  8b442410             mov eax, dword ptr [esp + 0x10]
// 0060a20a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060a20e  8b542408             mov edx, dword ptr [esp + 8]
// 0060a212  83ec08               sub esp, 8
// 0060a215  d9542404             fst dword ptr [esp + 4]
// 0060a219  d91c24               fstp dword ptr [esp]
// 0060a21c  50                   push eax
// 0060a21d  8b442410             mov eax, dword ptr [esp + 0x10]
// 0060a221  51                   push ecx
// 0060a222  52                   push edx
// 0060a223  50                   push eax
// 0060a224  e807ffffff           call 0x60a130
// 0060a229  83c418               add esp, 0x18
// 0060a22c  c3                   ret 
// library rbxgs/v8world\Joint.cpp (function ?canBuildJointTight@Joint@RBX@@KA_NPAVPrimitive@2@0W4NormalId@2@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Joint.cpp
