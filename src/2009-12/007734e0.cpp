// roc 2009-12 007734e0  unit: CXTCaptionButtonTheme  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007734e0
//
// 007734e0  d90520169b00         fld dword ptr [0x9b1620]
// 007734e6  8b442410             mov eax, dword ptr [esp + 0x10]
// 007734ea  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007734ee  8b542408             mov edx, dword ptr [esp + 8]
// 007734f2  83ec08               sub esp, 8
// 007734f5  d9542404             fst dword ptr [esp + 4]
// 007734f9  d91c24               fstp dword ptr [esp]
// 007734fc  50                   push eax
// 007734fd  8b442410             mov eax, dword ptr [esp + 0x10]
// 00773501  51                   push ecx
// 00773502  52                   push edx
// 00773503  50                   push eax
// 00773504  e8f7feffff           call 0x773400
// 00773509  83c418               add esp, 0x18
// 0077350c  c3                   ret 
// library rbxgs/v8world\Joint.cpp (function ?canBuildJointLoose@Joint@RBX@@KA_NPAVPrimitive@2@0W4NormalId@2@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Joint.cpp
