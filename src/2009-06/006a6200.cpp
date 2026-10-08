// roc 2009-06 006a6200  unit: CXTCaptionButtonTheme  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a6200
//
// 006a6200  d9053c7d8d00         fld dword ptr [0x8d7d3c]
// 006a6206  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a620a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a620e  8b542408             mov edx, dword ptr [esp + 8]
// 006a6212  83ec08               sub esp, 8
// 006a6215  d9542404             fst dword ptr [esp + 4]
// 006a6219  d91c24               fstp dword ptr [esp]
// 006a621c  50                   push eax
// 006a621d  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a6221  51                   push ecx
// 006a6222  52                   push edx
// 006a6223  50                   push eax
// 006a6224  e827ffffff           call 0x6a6150
// 006a6229  83c418               add esp, 0x18
// 006a622c  c3                   ret 
// library rbxgs/v8world\Joint.cpp (function ?canBuildJointTight@Joint@RBX@@KA_NPAVPrimitive@2@0W4NormalId@2@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Joint.cpp
