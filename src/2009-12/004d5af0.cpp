// roc 2009-12 004d5af0  unit: G3D::Win32Window  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d5af0
//
// 004d5af0  83ec08               sub esp, 8
// 004d5af3  db81d0010000         fild dword ptr [ecx + 0x1d0]
// 004d5af9  dc442414             fadd qword ptr [esp + 0x14]
// 004d5afd  dd1c24               fstp qword ptr [esp]
// 004d5b00  dd0424               fld qword ptr [esp]
// 004d5b03  db5c2414             fistp dword ptr [esp + 0x14]
// 004d5b07  db81cc010000         fild dword ptr [ecx + 0x1cc]
// 004d5b0d  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d5b11  dc44240c             fadd qword ptr [esp + 0xc]
// 004d5b15  dd1c24               fstp qword ptr [esp]
// 004d5b18  dd0424               fld qword ptr [esp]
// 004d5b1b  db5c240c             fistp dword ptr [esp + 0xc]
// 004d5b1f  50                   push eax
// 004d5b20  8b442410             mov eax, dword ptr [esp + 0x10]
// 004d5b24  50                   push eax
// 004d5b25  ff1524ca9800         call dword ptr [0x98ca24]
// 004d5b2b  83c408               add esp, 8
// 004d5b2e  c21000               ret 0x10
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?setRelativeMousePosition@Win32Window@G3D@@UAEXNN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
