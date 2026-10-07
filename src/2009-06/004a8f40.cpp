// roc 2009-06 004a8f40  unit: G3D::Win32Window  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a8f40
//
// 004a8f40  83ec08               sub esp, 8
// 004a8f43  db81d0010000         fild dword ptr [ecx + 0x1d0]
// 004a8f49  dc442414             fadd qword ptr [esp + 0x14]
// 004a8f4d  dd1c24               fstp qword ptr [esp]
// 004a8f50  dd0424               fld qword ptr [esp]
// 004a8f53  db5c2414             fistp dword ptr [esp + 0x14]
// 004a8f57  db81cc010000         fild dword ptr [ecx + 0x1cc]
// 004a8f5d  8b442414             mov eax, dword ptr [esp + 0x14]
// 004a8f61  dc44240c             fadd qword ptr [esp + 0xc]
// 004a8f65  dd1c24               fstp qword ptr [esp]
// 004a8f68  dd0424               fld qword ptr [esp]
// 004a8f6b  db5c240c             fistp dword ptr [esp + 0xc]
// 004a8f6f  50                   push eax
// 004a8f70  8b442410             mov eax, dword ptr [esp + 0x10]
// 004a8f74  50                   push eax
// 004a8f75  ff158ced8900         call dword ptr [0x89ed8c]
// 004a8f7b  83c408               add esp, 8
// 004a8f7e  c21000               ret 0x10
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?setRelativeMousePosition@Win32Window@G3D@@UAEXNN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
