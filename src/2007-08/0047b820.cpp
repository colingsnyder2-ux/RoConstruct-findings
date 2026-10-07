// roc 2007-08 0047b820  unit: G3D::Win32Window  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047b820
//
// 0047b820  83ec08               sub esp, 8
// 0047b823  db81d0010000         fild dword ptr [ecx + 0x1d0]
// 0047b829  dc442414             fadd qword ptr [esp + 0x14]
// 0047b82d  dd1c24               fstp qword ptr [esp]
// 0047b830  dd0424               fld qword ptr [esp]
// 0047b833  db5c2414             fistp dword ptr [esp + 0x14]
// 0047b837  db81cc010000         fild dword ptr [ecx + 0x1cc]
// 0047b83d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0047b841  dc44240c             fadd qword ptr [esp + 0xc]
// 0047b845  dd1c24               fstp qword ptr [esp]
// 0047b848  dd0424               fld qword ptr [esp]
// 0047b84b  db5c240c             fistp dword ptr [esp + 0xc]
// 0047b84f  50                   push eax
// 0047b850  8b442410             mov eax, dword ptr [esp + 0x10]
// 0047b854  50                   push eax
// 0047b855  ff155ced7700         call dword ptr [0x77ed5c]
// 0047b85b  83c408               add esp, 8
// 0047b85e  c21000               ret 0x10
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?setRelativeMousePosition@Win32Window@G3D@@UAEXNN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
