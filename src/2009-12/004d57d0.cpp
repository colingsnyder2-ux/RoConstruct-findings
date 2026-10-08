// roc 2009-12 004d57d0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d57d0
//
// 004d57d0  8b442404             mov eax, dword ptr [esp + 4]
// 004d57d4  56                   push esi
// 004d57d5  8bf1                 mov esi, ecx
// 004d57d7  8b08                 mov ecx, dword ptr [eax]
// 004d57d9  890e                 mov dword ptr [esi], ecx
// 004d57db  8b5004               mov edx, dword ptr [eax + 4]
// 004d57de  895604               mov dword ptr [esi + 4], edx
// 004d57e1  8b4808               mov ecx, dword ptr [eax + 8]
// 004d57e4  894e08               mov dword ptr [esi + 8], ecx
// 004d57e7  8b500c               mov edx, dword ptr [eax + 0xc]
// 004d57ea  89560c               mov dword ptr [esi + 0xc], edx
// 004d57ed  0fb64810             movzx ecx, byte ptr [eax + 0x10]
// 004d57f1  884e10               mov byte ptr [esi + 0x10], cl
// 004d57f4  8b5014               mov edx, dword ptr [eax + 0x14]
// 004d57f7  895614               mov dword ptr [esi + 0x14], edx
// 004d57fa  8b4818               mov ecx, dword ptr [eax + 0x18]
// 004d57fd  894e18               mov dword ptr [esi + 0x18], ecx
// 004d5800  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004d5803  89561c               mov dword ptr [esi + 0x1c], edx
// 004d5806  8b4820               mov ecx, dword ptr [eax + 0x20]
// 004d5809  894e20               mov dword ptr [esi + 0x20], ecx
// 004d580c  8b5024               mov edx, dword ptr [eax + 0x24]
// 004d580f  895624               mov dword ptr [esi + 0x24], edx
// 004d5812  0fb64828             movzx ecx, byte ptr [eax + 0x28]
// 004d5816  884e28               mov byte ptr [esi + 0x28], cl
// 004d5819  0fb65029             movzx edx, byte ptr [eax + 0x29]
// 004d581d  885629               mov byte ptr [esi + 0x29], dl
// 004d5820  0fb6482a             movzx ecx, byte ptr [eax + 0x2a]
// 004d5824  884e2a               mov byte ptr [esi + 0x2a], cl
// 004d5827  0fb6502b             movzx edx, byte ptr [eax + 0x2b]
// 004d582b  88562b               mov byte ptr [esi + 0x2b], dl
// 004d582e  83c040               add eax, 0x40
// 004d5831  dd40f0               fld qword ptr [eax - 0x10]
// 004d5834  50                   push eax
// 004d5835  dd5e30               fstp qword ptr [esi + 0x30]
// 004d5838  8b48f8               mov ecx, dword ptr [eax - 8]
// 004d583b  894e38               mov dword ptr [esi + 0x38], ecx
// 004d583e  0fb650fc             movzx edx, byte ptr [eax - 4]
// 004d5842  88563c               mov byte ptr [esi + 0x3c], dl
// 004d5845  0fb648fd             movzx ecx, byte ptr [eax - 3]
// 004d5849  884e3d               mov byte ptr [esi + 0x3d], cl
// 004d584c  0fb650fe             movzx edx, byte ptr [eax - 2]
// 004d5850  8d4e40               lea ecx, [esi + 0x40]
// 004d5853  88563e               mov byte ptr [esi + 0x3e], dl
// 004d5856  ff15f0b69800         call dword ptr [0x98b6f0]
// 004d585c  8bc6                 mov eax, esi
// 004d585e  5e                   pop esi
// 004d585f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??4Settings@GWindow@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
