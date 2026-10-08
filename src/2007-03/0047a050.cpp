// roc 2007-03 0047a050  unit: seg_00470000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047a050
//
// 0047a050  8b81e8010000         mov eax, dword ptr [ecx + 0x1e8]
// 0047a056  6a00                 push 0
// 0047a058  6a00                 push 0
// 0047a05a  6a10                 push 0x10
// 0047a05c  50                   push eax
// 0047a05d  ff1548ee7700         call dword ptr [0x77ee48]
// 0047a063  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?close@Win32Window@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
