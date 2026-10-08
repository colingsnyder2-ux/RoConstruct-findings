// from server: 100% by auto
// roc 2010-06 00487670  unit: G3D::VARArea  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00487670
//
// 00487670  8b442404             mov eax, dword ptr [esp + 4]
// 00487674  56                   push esi
// 00487675  8bf1                 mov esi, ecx
// 00487677  8b08                 mov ecx, dword ptr [eax]
// 00487679  890e                 mov dword ptr [esi], ecx
// 0048767b  8b5004               mov edx, dword ptr [eax + 4]
// 0048767e  895604               mov dword ptr [esi + 4], edx
// 00487681  8b4808               mov ecx, dword ptr [eax + 8]
// 00487684  894e08               mov dword ptr [esi + 8], ecx
// 00487687  8b500c               mov edx, dword ptr [eax + 0xc]
// 0048768a  89560c               mov dword ptr [esi + 0xc], edx
// 0048768d  0fb64810             movzx ecx, byte ptr [eax + 0x10]
// 00487691  884e10               mov byte ptr [esi + 0x10], cl
// 00487694  8b5014               mov edx, dword ptr [eax + 0x14]
// 00487697  895614               mov dword ptr [esi + 0x14], edx
// 0048769a  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0048769d  894e18               mov dword ptr [esi + 0x18], ecx
// 004876a0  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004876a3  89561c               mov dword ptr [esi + 0x1c], edx
// 004876a6  8b4820               mov ecx, dword ptr [eax + 0x20]
// 004876a9  894e20               mov dword ptr [esi + 0x20], ecx
// 004876ac  8b5024               mov edx, dword ptr [eax + 0x24]
// 004876af  895624               mov dword ptr [esi + 0x24], edx
// 004876b2  0fb64828             movzx ecx, byte ptr [eax + 0x28]
// 004876b6  884e28               mov byte ptr [esi + 0x28], cl
// 004876b9  0fb65029             movzx edx, byte ptr [eax + 0x29]
// 004876bd  885629               mov byte ptr [esi + 0x29], dl
// 004876c0  0fb6482a             movzx ecx, byte ptr [eax + 0x2a]
// 004876c4  884e2a               mov byte ptr [esi + 0x2a], cl
// 004876c7  0fb6502b             movzx edx, byte ptr [eax + 0x2b]
// 004876cb  88562b               mov byte ptr [esi + 0x2b], dl
// 004876ce  83c040               add eax, 0x40
// 004876d1  dd40f0               fld qword ptr [eax - 0x10]
// 004876d4  50                   push eax
// 004876d5  dd5e30               fstp qword ptr [esi + 0x30]
// 004876d8  8b48f8               mov ecx, dword ptr [eax - 8]
// 004876db  894e38               mov dword ptr [esi + 0x38], ecx
// 004876de  0fb650fc             movzx edx, byte ptr [eax - 4]
// 004876e2  88563c               mov byte ptr [esi + 0x3c], dl
// 004876e5  0fb648fd             movzx ecx, byte ptr [eax - 3]
// 004876e9  884e3d               mov byte ptr [esi + 0x3d], cl
// 004876ec  0fb650fe             movzx edx, byte ptr [eax - 2]
// 004876f0  8d4e40               lea ecx, [esi + 0x40]
// 004876f3  88563e               mov byte ptr [esi + 0x3e], dl
// 004876f6  ff1568a49e00         call dword ptr [0x9ea468]
// 004876fc  8bc6                 mov eax, esi
// 004876fe  5e                   pop esi
// 004876ff  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??4Settings@GWindow@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
