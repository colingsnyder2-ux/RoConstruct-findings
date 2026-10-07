// roc 2010-06 00487710  unit: G3D::VARArea  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00487710
//
// 00487710  8b442404             mov eax, dword ptr [esp + 4]
// 00487714  56                   push esi
// 00487715  8bf1                 mov esi, ecx
// 00487717  8b08                 mov ecx, dword ptr [eax]
// 00487719  890e                 mov dword ptr [esi], ecx
// 0048771b  8b5004               mov edx, dword ptr [eax + 4]
// 0048771e  895604               mov dword ptr [esi + 4], edx
// 00487721  8b4808               mov ecx, dword ptr [eax + 8]
// 00487724  894e08               mov dword ptr [esi + 8], ecx
// 00487727  8b500c               mov edx, dword ptr [eax + 0xc]
// 0048772a  89560c               mov dword ptr [esi + 0xc], edx
// 0048772d  0fb64810             movzx ecx, byte ptr [eax + 0x10]
// 00487731  884e10               mov byte ptr [esi + 0x10], cl
// 00487734  8b5014               mov edx, dword ptr [eax + 0x14]
// 00487737  895614               mov dword ptr [esi + 0x14], edx
// 0048773a  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0048773d  894e18               mov dword ptr [esi + 0x18], ecx
// 00487740  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00487743  89561c               mov dword ptr [esi + 0x1c], edx
// 00487746  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00487749  894e20               mov dword ptr [esi + 0x20], ecx
// 0048774c  8b5024               mov edx, dword ptr [eax + 0x24]
// 0048774f  895624               mov dword ptr [esi + 0x24], edx
// 00487752  0fb64828             movzx ecx, byte ptr [eax + 0x28]
// 00487756  884e28               mov byte ptr [esi + 0x28], cl
// 00487759  0fb65029             movzx edx, byte ptr [eax + 0x29]
// 0048775d  885629               mov byte ptr [esi + 0x29], dl
// 00487760  0fb6482a             movzx ecx, byte ptr [eax + 0x2a]
// 00487764  884e2a               mov byte ptr [esi + 0x2a], cl
// 00487767  0fb6502b             movzx edx, byte ptr [eax + 0x2b]
// 0048776b  88562b               mov byte ptr [esi + 0x2b], dl
// 0048776e  83c040               add eax, 0x40
// 00487771  dd40f0               fld qword ptr [eax - 0x10]
// 00487774  50                   push eax
// 00487775  dd5e30               fstp qword ptr [esi + 0x30]
// 00487778  8b48f8               mov ecx, dword ptr [eax - 8]
// 0048777b  894e38               mov dword ptr [esi + 0x38], ecx
// 0048777e  0fb650fc             movzx edx, byte ptr [eax - 4]
// 00487782  88563c               mov byte ptr [esi + 0x3c], dl
// 00487785  0fb648fd             movzx ecx, byte ptr [eax - 3]
// 00487789  884e3d               mov byte ptr [esi + 0x3d], cl
// 0048778c  0fb650fe             movzx edx, byte ptr [eax - 2]
// 00487790  8d4e40               lea ecx, [esi + 0x40]
// 00487793  88563e               mov byte ptr [esi + 0x3e], dl
// 00487796  ff150ca49e00         call dword ptr [0x9ea40c]
// 0048779c  8bc6                 mov eax, esi
// 0048779e  5e                   pop esi
// 0048779f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??4Settings@GWindow@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
