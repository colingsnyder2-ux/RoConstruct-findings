// roc 2009-12 004d5ba0  unit: G3D::Win32Window  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d5ba0
//
// 004d5ba0  83ec08               sub esp, 8
// 004d5ba3  56                   push esi
// 004d5ba4  8d442404             lea eax, [esp + 4]
// 004d5ba8  50                   push eax
// 004d5ba9  8bf1                 mov esi, ecx
// 004d5bab  ff1538cc9800         call dword ptr [0x98cc38]
// 004d5bb1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d5bb5  2b8ecc010000         sub ecx, dword ptr [esi + 0x1cc]
// 004d5bbb  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d5bbf  8b442408             mov eax, dword ptr [esp + 8]
// 004d5bc3  890a                 mov dword ptr [edx], ecx
// 004d5bc5  2b86d0010000         sub eax, dword ptr [esi + 0x1d0]
// 004d5bcb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d5bcf  8901                 mov dword ptr [ecx], eax
// 004d5bd1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004d5bd5  c60100               mov byte ptr [ecx], 0
// 004d5bd8  80beb000000000       cmp byte ptr [esi + 0xb0], 0
// 004d5bdf  0f95c2               setne dl
// 004d5be2  8811                 mov byte ptr [ecx], dl
// 004d5be4  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 004d5beb  0f95c0               setne al
// 004d5bee  02c0                 add al, al
// 004d5bf0  0ac2                 or al, dl
// 004d5bf2  8801                 mov byte ptr [ecx], al
// 004d5bf4  80beb200000000       cmp byte ptr [esi + 0xb2], 0
// 004d5bfb  5e                   pop esi
// 004d5bfc  0f95c2               setne dl
// 004d5bff  02d2                 add dl, dl
// 004d5c01  02d2                 add dl, dl
// 004d5c03  0ad0                 or dl, al
// 004d5c05  8811                 mov byte ptr [ecx], dl
// 004d5c07  83c408               add esp, 8
// 004d5c0a  c20c00               ret 0xc
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getRelativeMouseState@Win32Window@G3D@@UBEXAAH0AAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
