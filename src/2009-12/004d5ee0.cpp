// roc 2009-12 004d5ee0  unit: G3D::Win32Window  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d5ee0
//
// 004d5ee0  807c240400           cmp byte ptr [esp + 4], 0
// 004d5ee5  7409                 je 0x4d5ef0
// 004d5ee7  c60602               mov byte ptr [esi], 2
// 004d5eea  c6460201             mov byte ptr [esi + 2], 1
// 004d5eee  eb07                 jmp 0x4d5ef7
// 004d5ef0  c60603               mov byte ptr [esi], 3
// 004d5ef3  c6460200             mov byte ptr [esi + 2], 0
// 004d5ef7  b820000000           mov eax, 0x20
// 004d5efc  68a0d7b700           push 0xb7d7a0
// 004d5f01  66894610             mov word ptr [esi + 0x10], ax
// 004d5f05  894e08               mov dword ptr [esi + 8], ecx
// 004d5f08  c6460400             mov byte ptr [esi + 4], 0
// 004d5f0c  ff1500ca9800         call dword ptr [0x98ca00]
// 004d5f12  b980000000           mov ecx, 0x80
// 004d5f17  33c0                 xor eax, eax
// 004d5f19  840d40d8b700         test byte ptr [0xb7d840], cl
// 004d5f1f  7403                 je 0x4d5f24
// 004d5f21  8d4181               lea eax, [ecx - 0x7f]
// 004d5f24  840d41d8b700         test byte ptr [0xb7d841], cl
// 004d5f2a  7403                 je 0x4d5f2f
// 004d5f2c  83c802               or eax, 2
// 004d5f2f  840d42d8b700         test byte ptr [0xb7d842], cl
// 004d5f35  7403                 je 0x4d5f3a
// 004d5f37  83c840               or eax, 0x40
// 004d5f3a  840d43d8b700         test byte ptr [0xb7d843], cl
// 004d5f40  7402                 je 0x4d5f44
// 004d5f42  0bc1                 or eax, ecx
// 004d5f44  840d44d8b700         test byte ptr [0xb7d844], cl
// 004d5f4a  7405                 je 0x4d5f51
// 004d5f4c  0d00010000           or eax, 0x100
// 004d5f51  840d45d8b700         test byte ptr [0xb7d845], cl
// 004d5f57  7405                 je 0x4d5f5e
// 004d5f59  0d00020000           or eax, 0x200
// 004d5f5e  89460c               mov dword ptr [esi + 0xc], eax
// 004d5f61  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?mouseButton@G3D@@YAX_NHKAATSDL_Event@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
