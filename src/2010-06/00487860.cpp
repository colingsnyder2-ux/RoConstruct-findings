// roc 2010-06 00487860  unit: G3D::Win32Window  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00487860
//
// 00487860  56                   push esi
// 00487861  8bb1e8010000         mov esi, dword ptr [ecx + 0x1e8]
// 00487867  ff155cba9e00         call dword ptr [0x9eba5c]
// 0048786d  3bf0                 cmp esi, eax
// 0048786f  7512                 jne 0x487883
// 00487871  56                   push esi
// 00487872  ff15e8bb9e00         call dword ptr [0x9ebbe8]
// 00487878  85c0                 test eax, eax
// 0048787a  7407                 je 0x487883
// 0048787c  b801000000           mov eax, 1
// 00487881  5e                   pop esi
// 00487882  c3                   ret 
// 00487883  33c0                 xor eax, eax
// 00487885  5e                   pop esi
// 00487886  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?hasFocus@Win32Window@G3D@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
