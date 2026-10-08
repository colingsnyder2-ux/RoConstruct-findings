// roc 2007-03 00778050  unit: seg_00770000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00778050
//
// 00778050  8b0d347d8b00         mov ecx, dword ptr [0x8b7d34]
// 00778056  85c9                 test ecx, ecx
// 00778058  740c                 je 0x778066
// 0077805a  8b01                 mov eax, dword ptr [ecx]
// 0077805c  8b909c000000         mov edx, dword ptr [eax + 0x9c]
// 00778062  6a01                 push 1
// 00778064  ffd2                 call edx
// 00778066  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ??__F?_shareWindow@Win32Window@G3D@@0V?$auto_ptr@VWin32Window@G3D@@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
