// from server: 100% by auto
// roc 2008-06 007fb0c0  unit: seg_007f0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb0c0
//
// 007fb0c0  8b0d8cf59600         mov ecx, dword ptr [0x96f58c]
// 007fb0c6  85c9                 test ecx, ecx
// 007fb0c8  740c                 je 0x7fb0d6
// 007fb0ca  8b01                 mov eax, dword ptr [ecx]
// 007fb0cc  8b909c000000         mov edx, dword ptr [eax + 0x9c]
// 007fb0d2  6a01                 push 1
// 007fb0d4  ffd2                 call edx
// 007fb0d6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??__F?_shareWindow@Win32Window@G3D@@0V?$auto_ptr@VWin32Window@G3D@@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
