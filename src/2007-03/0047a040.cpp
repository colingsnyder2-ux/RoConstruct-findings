// roc 2007-03 0047a040  unit: seg_00470000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047a040
//
// 0047a040  8b81a4000000         mov eax, dword ptr [ecx + 0xa4]
// 0047a046  50                   push eax
// 0047a047  ff15b8d07700         call dword ptr [0x77d0b8]
// 0047a04d  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?swapGLBuffers@Win32Window@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
