// roc 2011-06 0074a9e0  unit: RBX::SleepStage  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0074a9e0
//
// 0074a9e0  d905f05ca700         fld dword ptr [0xa75cf0]
// 0074a9e6  8b442410             mov eax, dword ptr [esp + 0x10]
// 0074a9ea  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0074a9ee  8b542408             mov edx, dword ptr [esp + 8]
// 0074a9f2  83ec08               sub esp, 8
// 0074a9f5  d9542404             fst dword ptr [esp + 4]
// 0074a9f9  d91c24               fstp dword ptr [esp]
// 0074a9fc  50                   push eax
// 0074a9fd  8b442410             mov eax, dword ptr [esp + 0x10]
// 0074aa01  51                   push ecx
// 0074aa02  52                   push edx
// 0074aa03  50                   push eax
// 0074aa04  e857fdffff           call 0x74a760
// 0074aa09  83c418               add esp, 0x18
// 0074aa0c  c3                   ret 
// library rbxgs/v8world\Joint.cpp (function ?canBuildJointLoose@Joint@RBX@@KA_NPAVPrimitive@2@0W4NormalId@2@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Joint.cpp
