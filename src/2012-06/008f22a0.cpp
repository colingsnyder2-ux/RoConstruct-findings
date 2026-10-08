// roc 2012-06 008f22a0  unit: RBX::Joint  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008f22a0
//
// 008f22a0  d9056c32b600         fld dword ptr [0xb6326c]
// 008f22a6  8b442410             mov eax, dword ptr [esp + 0x10]
// 008f22aa  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f22ae  8b542408             mov edx, dword ptr [esp + 8]
// 008f22b2  83ec08               sub esp, 8
// 008f22b5  d9542404             fst dword ptr [esp + 4]
// 008f22b9  d91c24               fstp dword ptr [esp]
// 008f22bc  50                   push eax
// 008f22bd  8b442410             mov eax, dword ptr [esp + 0x10]
// 008f22c1  51                   push ecx
// 008f22c2  52                   push edx
// 008f22c3  50                   push eax
// 008f22c4  e857fdffff           call 0x8f2020
// 008f22c9  83c418               add esp, 0x18
// 008f22cc  c3                   ret 
// library rbxgs/v8world\Joint.cpp (function ?canBuildJointLoose@Joint@RBX@@KA_NPAVPrimitive@2@0W4NormalId@2@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Joint.cpp
