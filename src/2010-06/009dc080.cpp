// roc 2010-06 009dc080  unit: seg_009d0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dc080
//
// 009dc080  8b0d4c36c000         mov ecx, dword ptr [0xc0364c]
// 009dc086  85c9                 test ecx, ecx
// 009dc088  740c                 je 0x9dc096
// 009dc08a  8b01                 mov eax, dword ptr [ecx]
// 009dc08c  8b909c000000         mov edx, dword ptr [eax + 0x9c]
// 009dc092  6a01                 push 1
// 009dc094  ffd2                 call edx
// 009dc096  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??__F?_shareWindow@Win32Window@G3D@@0V?$auto_ptr@VWin32Window@G3D@@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
