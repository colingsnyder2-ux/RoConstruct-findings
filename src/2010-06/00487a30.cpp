// roc 2010-06 00487a30  unit: G3D::Win32Window  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00487a30
//
// 00487a30  83ec08               sub esp, 8
// 00487a33  db81d0010000         fild dword ptr [ecx + 0x1d0]
// 00487a39  dc442414             fadd qword ptr [esp + 0x14]
// 00487a3d  dd1c24               fstp qword ptr [esp]
// 00487a40  dd0424               fld qword ptr [esp]
// 00487a43  db5c2414             fistp dword ptr [esp + 0x14]
// 00487a47  db81cc010000         fild dword ptr [ecx + 0x1cc]
// 00487a4d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00487a51  dc44240c             fadd qword ptr [esp + 0xc]
// 00487a55  dd1c24               fstp qword ptr [esp]
// 00487a58  dd0424               fld qword ptr [esp]
// 00487a5b  db5c240c             fistp dword ptr [esp + 0xc]
// 00487a5f  50                   push eax
// 00487a60  8b442410             mov eax, dword ptr [esp + 0x10]
// 00487a64  50                   push eax
// 00487a65  ff15b0bb9e00         call dword ptr [0x9ebbb0]
// 00487a6b  83c408               add esp, 8
// 00487a6e  c21000               ret 0x10
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?setRelativeMousePosition@Win32Window@G3D@@UAEXNN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
