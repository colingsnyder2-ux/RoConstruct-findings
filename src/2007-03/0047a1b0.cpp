// roc 2007-03 0047a1b0  unit: seg_00470000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047a1b0
//
// 0047a1b0  83ec08               sub esp, 8
// 0047a1b3  db81d0010000         fild dword ptr [ecx + 0x1d0]
// 0047a1b9  dc442414             fadd qword ptr [esp + 0x14]
// 0047a1bd  dd1c24               fstp qword ptr [esp]
// 0047a1c0  dd0424               fld qword ptr [esp]
// 0047a1c3  db5c2414             fistp dword ptr [esp + 0x14]
// 0047a1c7  db81cc010000         fild dword ptr [ecx + 0x1cc]
// 0047a1cd  8b442414             mov eax, dword ptr [esp + 0x14]
// 0047a1d1  dc44240c             fadd qword ptr [esp + 0xc]
// 0047a1d5  dd1c24               fstp qword ptr [esp]
// 0047a1d8  dd0424               fld qword ptr [esp]
// 0047a1db  db5c240c             fistp dword ptr [esp + 0xc]
// 0047a1df  50                   push eax
// 0047a1e0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0047a1e4  50                   push eax
// 0047a1e5  ff15d4ed7700         call dword ptr [0x77edd4]
// 0047a1eb  83c408               add esp, 8
// 0047a1ee  c21000               ret 0x10
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?setRelativeMousePosition@Win32Window@G3D@@UAEXNN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
