// roc 2009-12 004d5730  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d5730
//
// 004d5730  8b442404             mov eax, dword ptr [esp + 4]
// 004d5734  56                   push esi
// 004d5735  8bf1                 mov esi, ecx
// 004d5737  8b08                 mov ecx, dword ptr [eax]
// 004d5739  890e                 mov dword ptr [esi], ecx
// 004d573b  8b5004               mov edx, dword ptr [eax + 4]
// 004d573e  895604               mov dword ptr [esi + 4], edx
// 004d5741  8b4808               mov ecx, dword ptr [eax + 8]
// 004d5744  894e08               mov dword ptr [esi + 8], ecx
// 004d5747  8b500c               mov edx, dword ptr [eax + 0xc]
// 004d574a  89560c               mov dword ptr [esi + 0xc], edx
// 004d574d  0fb64810             movzx ecx, byte ptr [eax + 0x10]
// 004d5751  884e10               mov byte ptr [esi + 0x10], cl
// 004d5754  8b5014               mov edx, dword ptr [eax + 0x14]
// 004d5757  895614               mov dword ptr [esi + 0x14], edx
// 004d575a  8b4818               mov ecx, dword ptr [eax + 0x18]
// 004d575d  894e18               mov dword ptr [esi + 0x18], ecx
// 004d5760  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004d5763  89561c               mov dword ptr [esi + 0x1c], edx
// 004d5766  8b4820               mov ecx, dword ptr [eax + 0x20]
// 004d5769  894e20               mov dword ptr [esi + 0x20], ecx
// 004d576c  8b5024               mov edx, dword ptr [eax + 0x24]
// 004d576f  895624               mov dword ptr [esi + 0x24], edx
// 004d5772  0fb64828             movzx ecx, byte ptr [eax + 0x28]
// 004d5776  884e28               mov byte ptr [esi + 0x28], cl
// 004d5779  0fb65029             movzx edx, byte ptr [eax + 0x29]
// 004d577d  885629               mov byte ptr [esi + 0x29], dl
// 004d5780  0fb6482a             movzx ecx, byte ptr [eax + 0x2a]
// 004d5784  884e2a               mov byte ptr [esi + 0x2a], cl
// 004d5787  0fb6502b             movzx edx, byte ptr [eax + 0x2b]
// 004d578b  88562b               mov byte ptr [esi + 0x2b], dl
// 004d578e  83c040               add eax, 0x40
// 004d5791  dd40f0               fld qword ptr [eax - 0x10]
// 004d5794  50                   push eax
// 004d5795  dd5e30               fstp qword ptr [esi + 0x30]
// 004d5798  8b48f8               mov ecx, dword ptr [eax - 8]
// 004d579b  894e38               mov dword ptr [esi + 0x38], ecx
// 004d579e  0fb650fc             movzx edx, byte ptr [eax - 4]
// 004d57a2  88563c               mov byte ptr [esi + 0x3c], dl
// 004d57a5  0fb648fd             movzx ecx, byte ptr [eax - 3]
// 004d57a9  884e3d               mov byte ptr [esi + 0x3d], cl
// 004d57ac  0fb650fe             movzx edx, byte ptr [eax - 2]
// 004d57b0  8d4e40               lea ecx, [esi + 0x40]
// 004d57b3  88563e               mov byte ptr [esi + 0x3e], dl
// 004d57b6  ff159cb69800         call dword ptr [0x98b69c]
// 004d57bc  8bc6                 mov eax, esi
// 004d57be  5e                   pop esi
// 004d57bf  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??4Settings@GWindow@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
