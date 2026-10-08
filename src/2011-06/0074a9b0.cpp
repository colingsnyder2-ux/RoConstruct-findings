// roc 2011-06 0074a9b0  unit: RBX::SleepStage  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0074a9b0
//
// 0074a9b0  d90588f8a800         fld dword ptr [0xa8f888]
// 0074a9b6  8b442410             mov eax, dword ptr [esp + 0x10]
// 0074a9ba  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0074a9be  8b542408             mov edx, dword ptr [esp + 8]
// 0074a9c2  83ec08               sub esp, 8
// 0074a9c5  d9542404             fst dword ptr [esp + 4]
// 0074a9c9  d91c24               fstp dword ptr [esp]
// 0074a9cc  50                   push eax
// 0074a9cd  8b442410             mov eax, dword ptr [esp + 0x10]
// 0074a9d1  51                   push ecx
// 0074a9d2  52                   push edx
// 0074a9d3  50                   push eax
// 0074a9d4  e887fdffff           call 0x74a760
// 0074a9d9  83c418               add esp, 0x18
// 0074a9dc  c3                   ret 
// library rbxgs/v8world\Joint.cpp (function ?canBuildJointTight@Joint@RBX@@KA_NPAVPrimitive@2@0W4NormalId@2@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Joint.cpp
