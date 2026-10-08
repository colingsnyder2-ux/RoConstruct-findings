// roc 2007-03 00479e40  unit: seg_00470000  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00479e40
//
// 00479e40  8b442404             mov eax, dword ptr [esp + 4]
// 00479e44  56                   push esi
// 00479e45  8bf1                 mov esi, ecx
// 00479e47  8b08                 mov ecx, dword ptr [eax]
// 00479e49  890e                 mov dword ptr [esi], ecx
// 00479e4b  8b5004               mov edx, dword ptr [eax + 4]
// 00479e4e  895604               mov dword ptr [esi + 4], edx
// 00479e51  8b4808               mov ecx, dword ptr [eax + 8]
// 00479e54  894e08               mov dword ptr [esi + 8], ecx
// 00479e57  8b500c               mov edx, dword ptr [eax + 0xc]
// 00479e5a  89560c               mov dword ptr [esi + 0xc], edx
// 00479e5d  0fb64810             movzx ecx, byte ptr [eax + 0x10]
// 00479e61  884e10               mov byte ptr [esi + 0x10], cl
// 00479e64  8b5014               mov edx, dword ptr [eax + 0x14]
// 00479e67  895614               mov dword ptr [esi + 0x14], edx
// 00479e6a  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00479e6d  894e18               mov dword ptr [esi + 0x18], ecx
// 00479e70  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00479e73  89561c               mov dword ptr [esi + 0x1c], edx
// 00479e76  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00479e79  894e20               mov dword ptr [esi + 0x20], ecx
// 00479e7c  8b5024               mov edx, dword ptr [eax + 0x24]
// 00479e7f  895624               mov dword ptr [esi + 0x24], edx
// 00479e82  0fb64828             movzx ecx, byte ptr [eax + 0x28]
// 00479e86  884e28               mov byte ptr [esi + 0x28], cl
// 00479e89  0fb65029             movzx edx, byte ptr [eax + 0x29]
// 00479e8d  885629               mov byte ptr [esi + 0x29], dl
// 00479e90  0fb6482a             movzx ecx, byte ptr [eax + 0x2a]
// 00479e94  884e2a               mov byte ptr [esi + 0x2a], cl
// 00479e97  0fb6502b             movzx edx, byte ptr [eax + 0x2b]
// 00479e9b  88562b               mov byte ptr [esi + 0x2b], dl
// 00479e9e  83c040               add eax, 0x40
// 00479ea1  dd40f0               fld qword ptr [eax - 0x10]
// 00479ea4  50                   push eax
// 00479ea5  dd5e30               fstp qword ptr [esi + 0x30]
// 00479ea8  8b48f8               mov ecx, dword ptr [eax - 8]
// 00479eab  894e38               mov dword ptr [esi + 0x38], ecx
// 00479eae  0fb650fc             movzx edx, byte ptr [eax - 4]
// 00479eb2  88563c               mov byte ptr [esi + 0x3c], dl
// 00479eb5  0fb648fd             movzx ecx, byte ptr [eax - 3]
// 00479eb9  884e3d               mov byte ptr [esi + 0x3d], cl
// 00479ebc  0fb650fe             movzx edx, byte ptr [eax - 2]
// 00479ec0  8d4e40               lea ecx, [esi + 0x40]
// 00479ec3  88563e               mov byte ptr [esi + 0x3e], dl
// 00479ec6  ff157ce77700         call dword ptr [0x77e77c]
// 00479ecc  8bc6                 mov eax, esi
// 00479ece  5e                   pop esi
// 00479ecf  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ??4Settings@GWindow@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
