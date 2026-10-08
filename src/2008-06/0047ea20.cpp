// from server: 100% by auto
// roc 2008-06 0047ea20  unit: G3D::TextureManager::TextureArgs  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047ea20
//
// 0047ea20  8b442404             mov eax, dword ptr [esp + 4]
// 0047ea24  56                   push esi
// 0047ea25  8bf1                 mov esi, ecx
// 0047ea27  8b08                 mov ecx, dword ptr [eax]
// 0047ea29  890e                 mov dword ptr [esi], ecx
// 0047ea2b  8b5004               mov edx, dword ptr [eax + 4]
// 0047ea2e  895604               mov dword ptr [esi + 4], edx
// 0047ea31  8b4808               mov ecx, dword ptr [eax + 8]
// 0047ea34  894e08               mov dword ptr [esi + 8], ecx
// 0047ea37  8b500c               mov edx, dword ptr [eax + 0xc]
// 0047ea3a  89560c               mov dword ptr [esi + 0xc], edx
// 0047ea3d  0fb64810             movzx ecx, byte ptr [eax + 0x10]
// 0047ea41  884e10               mov byte ptr [esi + 0x10], cl
// 0047ea44  8b5014               mov edx, dword ptr [eax + 0x14]
// 0047ea47  895614               mov dword ptr [esi + 0x14], edx
// 0047ea4a  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0047ea4d  894e18               mov dword ptr [esi + 0x18], ecx
// 0047ea50  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0047ea53  89561c               mov dword ptr [esi + 0x1c], edx
// 0047ea56  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0047ea59  894e20               mov dword ptr [esi + 0x20], ecx
// 0047ea5c  8b5024               mov edx, dword ptr [eax + 0x24]
// 0047ea5f  895624               mov dword ptr [esi + 0x24], edx
// 0047ea62  0fb64828             movzx ecx, byte ptr [eax + 0x28]
// 0047ea66  884e28               mov byte ptr [esi + 0x28], cl
// 0047ea69  0fb65029             movzx edx, byte ptr [eax + 0x29]
// 0047ea6d  885629               mov byte ptr [esi + 0x29], dl
// 0047ea70  0fb6482a             movzx ecx, byte ptr [eax + 0x2a]
// 0047ea74  884e2a               mov byte ptr [esi + 0x2a], cl
// 0047ea77  0fb6502b             movzx edx, byte ptr [eax + 0x2b]
// 0047ea7b  88562b               mov byte ptr [esi + 0x2b], dl
// 0047ea7e  83c040               add eax, 0x40
// 0047ea81  dd40f0               fld qword ptr [eax - 0x10]
// 0047ea84  50                   push eax
// 0047ea85  dd5e30               fstp qword ptr [esi + 0x30]
// 0047ea88  8b48f8               mov ecx, dword ptr [eax - 8]
// 0047ea8b  894e38               mov dword ptr [esi + 0x38], ecx
// 0047ea8e  0fb650fc             movzx edx, byte ptr [eax - 4]
// 0047ea92  88563c               mov byte ptr [esi + 0x3c], dl
// 0047ea95  0fb648fd             movzx ecx, byte ptr [eax - 3]
// 0047ea99  884e3d               mov byte ptr [esi + 0x3d], cl
// 0047ea9c  0fb650fe             movzx edx, byte ptr [eax - 2]
// 0047eaa0  8d4e40               lea ecx, [esi + 0x40]
// 0047eaa3  88563e               mov byte ptr [esi + 0x3e], dl
// 0047eaa6  ff150c248000         call dword ptr [0x80240c]
// 0047eaac  8bc6                 mov eax, esi
// 0047eaae  5e                   pop esi
// 0047eaaf  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??4Settings@GWindow@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
