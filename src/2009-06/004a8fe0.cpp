// roc 2009-06 004a8fe0  unit: G3D::Win32Window  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a8fe0
//
// 004a8fe0  83ec08               sub esp, 8
// 004a8fe3  56                   push esi
// 004a8fe4  8d442404             lea eax, [esp + 4]
// 004a8fe8  50                   push eax
// 004a8fe9  8bf1                 mov esi, ecx
// 004a8feb  ff152cee8900         call dword ptr [0x89ee2c]
// 004a8ff1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a8ff5  2b8ecc010000         sub ecx, dword ptr [esi + 0x1cc]
// 004a8ffb  8b542410             mov edx, dword ptr [esp + 0x10]
// 004a8fff  8b442408             mov eax, dword ptr [esp + 8]
// 004a9003  890a                 mov dword ptr [edx], ecx
// 004a9005  2b86d0010000         sub eax, dword ptr [esi + 0x1d0]
// 004a900b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a900f  8901                 mov dword ptr [ecx], eax
// 004a9011  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004a9015  c60100               mov byte ptr [ecx], 0
// 004a9018  80beb000000000       cmp byte ptr [esi + 0xb0], 0
// 004a901f  0f95c2               setne dl
// 004a9022  8811                 mov byte ptr [ecx], dl
// 004a9024  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 004a902b  0f95c0               setne al
// 004a902e  02c0                 add al, al
// 004a9030  0ac2                 or al, dl
// 004a9032  8801                 mov byte ptr [ecx], al
// 004a9034  80beb200000000       cmp byte ptr [esi + 0xb2], 0
// 004a903b  5e                   pop esi
// 004a903c  0f95c2               setne dl
// 004a903f  02d2                 add dl, dl
// 004a9041  02d2                 add dl, dl
// 004a9043  0ad0                 or dl, al
// 004a9045  8811                 mov byte ptr [ecx], dl
// 004a9047  83c408               add esp, 8
// 004a904a  c20c00               ret 0xc
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getRelativeMouseState@Win32Window@G3D@@UBEXAAH0AAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
