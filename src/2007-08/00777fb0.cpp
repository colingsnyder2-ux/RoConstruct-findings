// from server: 100% by auto
// roc 2007-08 00777fb0  unit: seg_00770000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777fb0
//
// 00777fb0  8b0d74d68b00         mov ecx, dword ptr [0x8bd674]
// 00777fb6  85c9                 test ecx, ecx
// 00777fb8  740c                 je 0x777fc6
// 00777fba  8b01                 mov eax, dword ptr [ecx]
// 00777fbc  8b909c000000         mov edx, dword ptr [eax + 0x9c]
// 00777fc2  6a01                 push 1
// 00777fc4  ffd2                 call edx
// 00777fc6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??__F?_shareWindow@Win32Window@G3D@@0V?$auto_ptr@VWin32Window@G3D@@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
