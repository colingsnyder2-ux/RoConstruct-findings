// roc 2007-08 0047b4a0  unit: G3D::TextureManager::TextureArgs  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047b4a0
//
// 0047b4a0  8b442404             mov eax, dword ptr [esp + 4]
// 0047b4a4  56                   push esi
// 0047b4a5  8bf1                 mov esi, ecx
// 0047b4a7  8b08                 mov ecx, dword ptr [eax]
// 0047b4a9  890e                 mov dword ptr [esi], ecx
// 0047b4ab  8b5004               mov edx, dword ptr [eax + 4]
// 0047b4ae  895604               mov dword ptr [esi + 4], edx
// 0047b4b1  8b4808               mov ecx, dword ptr [eax + 8]
// 0047b4b4  894e08               mov dword ptr [esi + 8], ecx
// 0047b4b7  8b500c               mov edx, dword ptr [eax + 0xc]
// 0047b4ba  89560c               mov dword ptr [esi + 0xc], edx
// 0047b4bd  0fb64810             movzx ecx, byte ptr [eax + 0x10]
// 0047b4c1  884e10               mov byte ptr [esi + 0x10], cl
// 0047b4c4  8b5014               mov edx, dword ptr [eax + 0x14]
// 0047b4c7  895614               mov dword ptr [esi + 0x14], edx
// 0047b4ca  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0047b4cd  894e18               mov dword ptr [esi + 0x18], ecx
// 0047b4d0  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0047b4d3  89561c               mov dword ptr [esi + 0x1c], edx
// 0047b4d6  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0047b4d9  894e20               mov dword ptr [esi + 0x20], ecx
// 0047b4dc  8b5024               mov edx, dword ptr [eax + 0x24]
// 0047b4df  895624               mov dword ptr [esi + 0x24], edx
// 0047b4e2  0fb64828             movzx ecx, byte ptr [eax + 0x28]
// 0047b4e6  884e28               mov byte ptr [esi + 0x28], cl
// 0047b4e9  0fb65029             movzx edx, byte ptr [eax + 0x29]
// 0047b4ed  885629               mov byte ptr [esi + 0x29], dl
// 0047b4f0  0fb6482a             movzx ecx, byte ptr [eax + 0x2a]
// 0047b4f4  884e2a               mov byte ptr [esi + 0x2a], cl
// 0047b4f7  0fb6502b             movzx edx, byte ptr [eax + 0x2b]
// 0047b4fb  88562b               mov byte ptr [esi + 0x2b], dl
// 0047b4fe  83c040               add eax, 0x40
// 0047b501  dd40f0               fld qword ptr [eax - 0x10]
// 0047b504  50                   push eax
// 0047b505  dd5e30               fstp qword ptr [esi + 0x30]
// 0047b508  8b48f8               mov ecx, dword ptr [eax - 8]
// 0047b50b  894e38               mov dword ptr [esi + 0x38], ecx
// 0047b50e  0fb650fc             movzx edx, byte ptr [eax - 4]
// 0047b512  88563c               mov byte ptr [esi + 0x3c], dl
// 0047b515  0fb648fd             movzx ecx, byte ptr [eax - 3]
// 0047b519  884e3d               mov byte ptr [esi + 0x3d], cl
// 0047b51c  0fb650fe             movzx edx, byte ptr [eax - 2]
// 0047b520  8d4e40               lea ecx, [esi + 0x40]
// 0047b523  88563e               mov byte ptr [esi + 0x3e], dl
// 0047b526  ff159ce67700         call dword ptr [0x77e69c]
// 0047b52c  8bc6                 mov eax, esi
// 0047b52e  5e                   pop esi
// 0047b52f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??4Settings@GWindow@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
