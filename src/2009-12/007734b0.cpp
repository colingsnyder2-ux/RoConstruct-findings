// roc 2009-12 007734b0  unit: CXTCaptionButtonTheme  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007734b0
//
// 007734b0  d905143e9b00         fld dword ptr [0x9b3e14]
// 007734b6  8b442410             mov eax, dword ptr [esp + 0x10]
// 007734ba  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007734be  8b542408             mov edx, dword ptr [esp + 8]
// 007734c2  83ec08               sub esp, 8
// 007734c5  d9542404             fst dword ptr [esp + 4]
// 007734c9  d91c24               fstp dword ptr [esp]
// 007734cc  50                   push eax
// 007734cd  8b442410             mov eax, dword ptr [esp + 0x10]
// 007734d1  51                   push ecx
// 007734d2  52                   push edx
// 007734d3  50                   push eax
// 007734d4  e827ffffff           call 0x773400
// 007734d9  83c418               add esp, 0x18
// 007734dc  c3                   ret 
// library rbxgs/v8world\Joint.cpp (function ?canBuildJointTight@Joint@RBX@@KA_NPAVPrimitive@2@0W4NormalId@2@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Joint.cpp
