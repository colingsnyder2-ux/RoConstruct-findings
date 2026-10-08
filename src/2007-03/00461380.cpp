// roc 2007-03 00461380  unit: seg_00460000  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00461380
//
// 00461380  8b442404             mov eax, dword ptr [esp + 4]
// 00461384  56                   push esi
// 00461385  8bf1                 mov esi, ecx
// 00461387  8b08                 mov ecx, dword ptr [eax]
// 00461389  890e                 mov dword ptr [esi], ecx
// 0046138b  8b5004               mov edx, dword ptr [eax + 4]
// 0046138e  895604               mov dword ptr [esi + 4], edx
// 00461391  8b4808               mov ecx, dword ptr [eax + 8]
// 00461394  894e08               mov dword ptr [esi + 8], ecx
// 00461397  8b500c               mov edx, dword ptr [eax + 0xc]
// 0046139a  89560c               mov dword ptr [esi + 0xc], edx
// 0046139d  0fb64810             movzx ecx, byte ptr [eax + 0x10]
// 004613a1  884e10               mov byte ptr [esi + 0x10], cl
// 004613a4  8b5014               mov edx, dword ptr [eax + 0x14]
// 004613a7  895614               mov dword ptr [esi + 0x14], edx
// 004613aa  8b4818               mov ecx, dword ptr [eax + 0x18]
// 004613ad  894e18               mov dword ptr [esi + 0x18], ecx
// 004613b0  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004613b3  89561c               mov dword ptr [esi + 0x1c], edx
// 004613b6  8b4820               mov ecx, dword ptr [eax + 0x20]
// 004613b9  894e20               mov dword ptr [esi + 0x20], ecx
// 004613bc  8b5024               mov edx, dword ptr [eax + 0x24]
// 004613bf  895624               mov dword ptr [esi + 0x24], edx
// 004613c2  0fb64828             movzx ecx, byte ptr [eax + 0x28]
// 004613c6  884e28               mov byte ptr [esi + 0x28], cl
// 004613c9  0fb65029             movzx edx, byte ptr [eax + 0x29]
// 004613cd  885629               mov byte ptr [esi + 0x29], dl
// 004613d0  0fb6482a             movzx ecx, byte ptr [eax + 0x2a]
// 004613d4  884e2a               mov byte ptr [esi + 0x2a], cl
// 004613d7  0fb6502b             movzx edx, byte ptr [eax + 0x2b]
// 004613db  88562b               mov byte ptr [esi + 0x2b], dl
// 004613de  83c040               add eax, 0x40
// 004613e1  dd40f0               fld qword ptr [eax - 0x10]
// 004613e4  50                   push eax
// 004613e5  dd5e30               fstp qword ptr [esi + 0x30]
// 004613e8  8b48f8               mov ecx, dword ptr [eax - 8]
// 004613eb  894e38               mov dword ptr [esi + 0x38], ecx
// 004613ee  0fb650fc             movzx edx, byte ptr [eax - 4]
// 004613f2  88563c               mov byte ptr [esi + 0x3c], dl
// 004613f5  0fb648fd             movzx ecx, byte ptr [eax - 3]
// 004613f9  884e3d               mov byte ptr [esi + 0x3d], cl
// 004613fc  0fb650fe             movzx edx, byte ptr [eax - 2]
// 00461400  8d4e40               lea ecx, [esi + 0x40]
// 00461403  88563e               mov byte ptr [esi + 0x3e], dl
// 00461406  ff154ce77700         call dword ptr [0x77e74c]
// 0046140c  8bc6                 mov eax, esi
// 0046140e  5e                   pop esi
// 0046140f  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ??4Settings@GWindow@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
