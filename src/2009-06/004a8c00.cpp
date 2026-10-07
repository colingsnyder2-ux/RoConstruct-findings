// roc 2009-06 004a8c00  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a8c00
//
// 004a8c00  8b442404             mov eax, dword ptr [esp + 4]
// 004a8c04  56                   push esi
// 004a8c05  8bf1                 mov esi, ecx
// 004a8c07  8b08                 mov ecx, dword ptr [eax]
// 004a8c09  890e                 mov dword ptr [esi], ecx
// 004a8c0b  8b5004               mov edx, dword ptr [eax + 4]
// 004a8c0e  895604               mov dword ptr [esi + 4], edx
// 004a8c11  8b4808               mov ecx, dword ptr [eax + 8]
// 004a8c14  894e08               mov dword ptr [esi + 8], ecx
// 004a8c17  8b500c               mov edx, dword ptr [eax + 0xc]
// 004a8c1a  89560c               mov dword ptr [esi + 0xc], edx
// 004a8c1d  0fb64810             movzx ecx, byte ptr [eax + 0x10]
// 004a8c21  884e10               mov byte ptr [esi + 0x10], cl
// 004a8c24  8b5014               mov edx, dword ptr [eax + 0x14]
// 004a8c27  895614               mov dword ptr [esi + 0x14], edx
// 004a8c2a  8b4818               mov ecx, dword ptr [eax + 0x18]
// 004a8c2d  894e18               mov dword ptr [esi + 0x18], ecx
// 004a8c30  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004a8c33  89561c               mov dword ptr [esi + 0x1c], edx
// 004a8c36  8b4820               mov ecx, dword ptr [eax + 0x20]
// 004a8c39  894e20               mov dword ptr [esi + 0x20], ecx
// 004a8c3c  8b5024               mov edx, dword ptr [eax + 0x24]
// 004a8c3f  895624               mov dword ptr [esi + 0x24], edx
// 004a8c42  0fb64828             movzx ecx, byte ptr [eax + 0x28]
// 004a8c46  884e28               mov byte ptr [esi + 0x28], cl
// 004a8c49  0fb65029             movzx edx, byte ptr [eax + 0x29]
// 004a8c4d  885629               mov byte ptr [esi + 0x29], dl
// 004a8c50  0fb6482a             movzx ecx, byte ptr [eax + 0x2a]
// 004a8c54  884e2a               mov byte ptr [esi + 0x2a], cl
// 004a8c57  0fb6502b             movzx edx, byte ptr [eax + 0x2b]
// 004a8c5b  88562b               mov byte ptr [esi + 0x2b], dl
// 004a8c5e  83c040               add eax, 0x40
// 004a8c61  dd40f0               fld qword ptr [eax - 0x10]
// 004a8c64  50                   push eax
// 004a8c65  dd5e30               fstp qword ptr [esi + 0x30]
// 004a8c68  8b48f8               mov ecx, dword ptr [eax - 8]
// 004a8c6b  894e38               mov dword ptr [esi + 0x38], ecx
// 004a8c6e  0fb650fc             movzx edx, byte ptr [eax - 4]
// 004a8c72  88563c               mov byte ptr [esi + 0x3c], dl
// 004a8c75  0fb648fd             movzx ecx, byte ptr [eax - 3]
// 004a8c79  884e3d               mov byte ptr [esi + 0x3d], cl
// 004a8c7c  0fb650fe             movzx edx, byte ptr [eax - 2]
// 004a8c80  8d4e40               lea ecx, [esi + 0x40]
// 004a8c83  88563e               mov byte ptr [esi + 0x3e], dl
// 004a8c86  ff15b8e48900         call dword ptr [0x89e4b8]
// 004a8c8c  8bc6                 mov eax, esi
// 004a8c8e  5e                   pop esi
// 004a8c8f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??4Settings@GWindow@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
