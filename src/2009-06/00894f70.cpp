// roc 2009-06 00894f70  unit: seg_00890000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894f70
//
// 00894f70  8b0deccea300         mov ecx, dword ptr [0xa3ceec]
// 00894f76  85c9                 test ecx, ecx
// 00894f78  740c                 je 0x894f86
// 00894f7a  8b01                 mov eax, dword ptr [ecx]
// 00894f7c  8b909c000000         mov edx, dword ptr [eax + 0x9c]
// 00894f82  6a01                 push 1
// 00894f84  ffd2                 call edx
// 00894f86  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??__F?_shareWindow@Win32Window@G3D@@0V?$auto_ptr@VWin32Window@G3D@@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
