// from server: 100% by auto
// roc 2009-06 004a8b60  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a8b60
//
// 004a8b60  8b442404             mov eax, dword ptr [esp + 4]
// 004a8b64  56                   push esi
// 004a8b65  8bf1                 mov esi, ecx
// 004a8b67  8b08                 mov ecx, dword ptr [eax]
// 004a8b69  890e                 mov dword ptr [esi], ecx
// 004a8b6b  8b5004               mov edx, dword ptr [eax + 4]
// 004a8b6e  895604               mov dword ptr [esi + 4], edx
// 004a8b71  8b4808               mov ecx, dword ptr [eax + 8]
// 004a8b74  894e08               mov dword ptr [esi + 8], ecx
// 004a8b77  8b500c               mov edx, dword ptr [eax + 0xc]
// 004a8b7a  89560c               mov dword ptr [esi + 0xc], edx
// 004a8b7d  0fb64810             movzx ecx, byte ptr [eax + 0x10]
// 004a8b81  884e10               mov byte ptr [esi + 0x10], cl
// 004a8b84  8b5014               mov edx, dword ptr [eax + 0x14]
// 004a8b87  895614               mov dword ptr [esi + 0x14], edx
// 004a8b8a  8b4818               mov ecx, dword ptr [eax + 0x18]
// 004a8b8d  894e18               mov dword ptr [esi + 0x18], ecx
// 004a8b90  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004a8b93  89561c               mov dword ptr [esi + 0x1c], edx
// 004a8b96  8b4820               mov ecx, dword ptr [eax + 0x20]
// 004a8b99  894e20               mov dword ptr [esi + 0x20], ecx
// 004a8b9c  8b5024               mov edx, dword ptr [eax + 0x24]
// 004a8b9f  895624               mov dword ptr [esi + 0x24], edx
// 004a8ba2  0fb64828             movzx ecx, byte ptr [eax + 0x28]
// 004a8ba6  884e28               mov byte ptr [esi + 0x28], cl
// 004a8ba9  0fb65029             movzx edx, byte ptr [eax + 0x29]
// 004a8bad  885629               mov byte ptr [esi + 0x29], dl
// 004a8bb0  0fb6482a             movzx ecx, byte ptr [eax + 0x2a]
// 004a8bb4  884e2a               mov byte ptr [esi + 0x2a], cl
// 004a8bb7  0fb6502b             movzx edx, byte ptr [eax + 0x2b]
// 004a8bbb  88562b               mov byte ptr [esi + 0x2b], dl
// 004a8bbe  83c040               add eax, 0x40
// 004a8bc1  dd40f0               fld qword ptr [eax - 0x10]
// 004a8bc4  50                   push eax
// 004a8bc5  dd5e30               fstp qword ptr [esi + 0x30]
// 004a8bc8  8b48f8               mov ecx, dword ptr [eax - 8]
// 004a8bcb  894e38               mov dword ptr [esi + 0x38], ecx
// 004a8bce  0fb650fc             movzx edx, byte ptr [eax - 4]
// 004a8bd2  88563c               mov byte ptr [esi + 0x3c], dl
// 004a8bd5  0fb648fd             movzx ecx, byte ptr [eax - 3]
// 004a8bd9  884e3d               mov byte ptr [esi + 0x3d], cl
// 004a8bdc  0fb650fe             movzx edx, byte ptr [eax - 2]
// 004a8be0  8d4e40               lea ecx, [esi + 0x40]
// 004a8be3  88563e               mov byte ptr [esi + 0x3e], dl
// 004a8be6  ff1564e48900         call dword ptr [0x89e464]
// 004a8bec  8bc6                 mov eax, esi
// 004a8bee  5e                   pop esi
// 004a8bef  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??4Settings@GWindow@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
