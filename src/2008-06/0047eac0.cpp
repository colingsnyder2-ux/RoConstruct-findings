// roc 2008-06 0047eac0  unit: G3D::TextureManager::TextureArgs  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047eac0
//
// 0047eac0  8b442404             mov eax, dword ptr [esp + 4]
// 0047eac4  56                   push esi
// 0047eac5  8bf1                 mov esi, ecx
// 0047eac7  8b08                 mov ecx, dword ptr [eax]
// 0047eac9  890e                 mov dword ptr [esi], ecx
// 0047eacb  8b5004               mov edx, dword ptr [eax + 4]
// 0047eace  895604               mov dword ptr [esi + 4], edx
// 0047ead1  8b4808               mov ecx, dword ptr [eax + 8]
// 0047ead4  894e08               mov dword ptr [esi + 8], ecx
// 0047ead7  8b500c               mov edx, dword ptr [eax + 0xc]
// 0047eada  89560c               mov dword ptr [esi + 0xc], edx
// 0047eadd  0fb64810             movzx ecx, byte ptr [eax + 0x10]
// 0047eae1  884e10               mov byte ptr [esi + 0x10], cl
// 0047eae4  8b5014               mov edx, dword ptr [eax + 0x14]
// 0047eae7  895614               mov dword ptr [esi + 0x14], edx
// 0047eaea  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0047eaed  894e18               mov dword ptr [esi + 0x18], ecx
// 0047eaf0  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0047eaf3  89561c               mov dword ptr [esi + 0x1c], edx
// 0047eaf6  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0047eaf9  894e20               mov dword ptr [esi + 0x20], ecx
// 0047eafc  8b5024               mov edx, dword ptr [eax + 0x24]
// 0047eaff  895624               mov dword ptr [esi + 0x24], edx
// 0047eb02  0fb64828             movzx ecx, byte ptr [eax + 0x28]
// 0047eb06  884e28               mov byte ptr [esi + 0x28], cl
// 0047eb09  0fb65029             movzx edx, byte ptr [eax + 0x29]
// 0047eb0d  885629               mov byte ptr [esi + 0x29], dl
// 0047eb10  0fb6482a             movzx ecx, byte ptr [eax + 0x2a]
// 0047eb14  884e2a               mov byte ptr [esi + 0x2a], cl
// 0047eb17  0fb6502b             movzx edx, byte ptr [eax + 0x2b]
// 0047eb1b  88562b               mov byte ptr [esi + 0x2b], dl
// 0047eb1e  83c040               add eax, 0x40
// 0047eb21  dd40f0               fld qword ptr [eax - 0x10]
// 0047eb24  50                   push eax
// 0047eb25  dd5e30               fstp qword ptr [esi + 0x30]
// 0047eb28  8b48f8               mov ecx, dword ptr [eax - 8]
// 0047eb2b  894e38               mov dword ptr [esi + 0x38], ecx
// 0047eb2e  0fb650fc             movzx edx, byte ptr [eax - 4]
// 0047eb32  88563c               mov byte ptr [esi + 0x3c], dl
// 0047eb35  0fb648fd             movzx ecx, byte ptr [eax - 3]
// 0047eb39  884e3d               mov byte ptr [esi + 0x3d], cl
// 0047eb3c  0fb650fe             movzx edx, byte ptr [eax - 2]
// 0047eb40  8d4e40               lea ecx, [esi + 0x40]
// 0047eb43  88563e               mov byte ptr [esi + 0x3e], dl
// 0047eb46  ff155c248000         call dword ptr [0x80245c]
// 0047eb4c  8bc6                 mov eax, esi
// 0047eb4e  5e                   pop esi
// 0047eb4f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??4Settings@GWindow@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
