// roc 2007-03 0047a3c0  unit: seg_00470000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047a3c0
//
// 0047a3c0  8b81a8000000         mov eax, dword ptr [ecx + 0xa8]
// 0047a3c6  8b89a4000000         mov ecx, dword ptr [ecx + 0xa4]
// 0047a3cc  50                   push eax
// 0047a3cd  51                   push ecx
// 0047a3ce  ff1550ec7700         call dword ptr [0x77ec50]
// 0047a3d4  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?reallyMakeCurrent@Win32Window@G3D@@MBEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
