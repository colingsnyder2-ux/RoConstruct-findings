// roc 2008-06 0047ee00  unit: G3D::Win32Window  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047ee00
//
// 0047ee00  83ec08               sub esp, 8
// 0047ee03  db81d0010000         fild dword ptr [ecx + 0x1d0]
// 0047ee09  dc442414             fadd qword ptr [esp + 0x14]
// 0047ee0d  dd1c24               fstp qword ptr [esp]
// 0047ee10  dd0424               fld qword ptr [esp]
// 0047ee13  db5c2414             fistp dword ptr [esp + 0x14]
// 0047ee17  db81cc010000         fild dword ptr [ecx + 0x1cc]
// 0047ee1d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0047ee21  dc44240c             fadd qword ptr [esp + 0xc]
// 0047ee25  dd1c24               fstp qword ptr [esp]
// 0047ee28  dd0424               fld qword ptr [esp]
// 0047ee2b  db5c240c             fistp dword ptr [esp + 0xc]
// 0047ee2f  50                   push eax
// 0047ee30  8b442410             mov eax, dword ptr [esp + 0x10]
// 0047ee34  50                   push eax
// 0047ee35  ff15002d8000         call dword ptr [0x802d00]
// 0047ee3b  83c408               add esp, 8
// 0047ee3e  c21000               ret 0x10
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?setRelativeMousePosition@Win32Window@G3D@@UAEXNN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
