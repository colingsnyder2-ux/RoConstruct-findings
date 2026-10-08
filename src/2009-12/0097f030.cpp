// roc 2009-12 0097f030  unit: seg_00970000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097f030
//
// 0097f030  8b0d9cd6b700         mov ecx, dword ptr [0xb7d69c]
// 0097f036  85c9                 test ecx, ecx
// 0097f038  740c                 je 0x97f046
// 0097f03a  8b01                 mov eax, dword ptr [ecx]
// 0097f03c  8b909c000000         mov edx, dword ptr [eax + 0x9c]
// 0097f042  6a01                 push 1
// 0097f044  ffd2                 call edx
// 0097f046  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??__F?_shareWindow@Win32Window@G3D@@0V?$auto_ptr@VWin32Window@G3D@@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
