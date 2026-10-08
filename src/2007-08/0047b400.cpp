// from server: 100% by auto
// roc 2007-08 0047b400  unit: G3D::TextureManager::TextureArgs  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047b400
//
// 0047b400  8b442404             mov eax, dword ptr [esp + 4]
// 0047b404  56                   push esi
// 0047b405  8bf1                 mov esi, ecx
// 0047b407  8b08                 mov ecx, dword ptr [eax]
// 0047b409  890e                 mov dword ptr [esi], ecx
// 0047b40b  8b5004               mov edx, dword ptr [eax + 4]
// 0047b40e  895604               mov dword ptr [esi + 4], edx
// 0047b411  8b4808               mov ecx, dword ptr [eax + 8]
// 0047b414  894e08               mov dword ptr [esi + 8], ecx
// 0047b417  8b500c               mov edx, dword ptr [eax + 0xc]
// 0047b41a  89560c               mov dword ptr [esi + 0xc], edx
// 0047b41d  0fb64810             movzx ecx, byte ptr [eax + 0x10]
// 0047b421  884e10               mov byte ptr [esi + 0x10], cl
// 0047b424  8b5014               mov edx, dword ptr [eax + 0x14]
// 0047b427  895614               mov dword ptr [esi + 0x14], edx
// 0047b42a  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0047b42d  894e18               mov dword ptr [esi + 0x18], ecx
// 0047b430  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0047b433  89561c               mov dword ptr [esi + 0x1c], edx
// 0047b436  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0047b439  894e20               mov dword ptr [esi + 0x20], ecx
// 0047b43c  8b5024               mov edx, dword ptr [eax + 0x24]
// 0047b43f  895624               mov dword ptr [esi + 0x24], edx
// 0047b442  0fb64828             movzx ecx, byte ptr [eax + 0x28]
// 0047b446  884e28               mov byte ptr [esi + 0x28], cl
// 0047b449  0fb65029             movzx edx, byte ptr [eax + 0x29]
// 0047b44d  885629               mov byte ptr [esi + 0x29], dl
// 0047b450  0fb6482a             movzx ecx, byte ptr [eax + 0x2a]
// 0047b454  884e2a               mov byte ptr [esi + 0x2a], cl
// 0047b457  0fb6502b             movzx edx, byte ptr [eax + 0x2b]
// 0047b45b  88562b               mov byte ptr [esi + 0x2b], dl
// 0047b45e  83c040               add eax, 0x40
// 0047b461  dd40f0               fld qword ptr [eax - 0x10]
// 0047b464  50                   push eax
// 0047b465  dd5e30               fstp qword ptr [esi + 0x30]
// 0047b468  8b48f8               mov ecx, dword ptr [eax - 8]
// 0047b46b  894e38               mov dword ptr [esi + 0x38], ecx
// 0047b46e  0fb650fc             movzx edx, byte ptr [eax - 4]
// 0047b472  88563c               mov byte ptr [esi + 0x3c], dl
// 0047b475  0fb648fd             movzx ecx, byte ptr [eax - 3]
// 0047b479  884e3d               mov byte ptr [esi + 0x3d], cl
// 0047b47c  0fb650fe             movzx edx, byte ptr [eax - 2]
// 0047b480  8d4e40               lea ecx, [esi + 0x40]
// 0047b483  88563e               mov byte ptr [esi + 0x3e], dl
// 0047b486  ff1590e67700         call dword ptr [0x77e690]
// 0047b48c  8bc6                 mov eax, esi
// 0047b48e  5e                   pop esi
// 0047b48f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??4Settings@GWindow@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
