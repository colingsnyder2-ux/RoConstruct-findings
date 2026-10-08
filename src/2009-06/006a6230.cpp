// roc 2009-06 006a6230  unit: CXTCaptionButtonTheme  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a6230
//
// 006a6230  d90540d08b00         fld dword ptr [0x8bd040]
// 006a6236  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a623a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a623e  8b542408             mov edx, dword ptr [esp + 8]
// 006a6242  83ec08               sub esp, 8
// 006a6245  d9542404             fst dword ptr [esp + 4]
// 006a6249  d91c24               fstp dword ptr [esp]
// 006a624c  50                   push eax
// 006a624d  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a6251  51                   push ecx
// 006a6252  52                   push edx
// 006a6253  50                   push eax
// 006a6254  e8f7feffff           call 0x6a6150
// 006a6259  83c418               add esp, 0x18
// 006a625c  c3                   ret 
// library rbxgs/v8world\Joint.cpp (function ?canBuildJointLoose@Joint@RBX@@KA_NPAVPrimitive@2@0W4NormalId@2@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Joint.cpp
