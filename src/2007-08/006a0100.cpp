// roc 2007-08 006a0100  unit: CSelectionCaption  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a0100
//
// 006a0100  83ec20               sub esp, 0x20
// 006a0103  56                   push esi
// 006a0104  8bf1                 mov esi, ecx
// 006a0106  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 006a010c  50                   push eax
// 006a010d  ff15bced7700         call dword ptr [0x77edbc]
// 006a0113  85c0                 test eax, eax
// 006a0115  752c                 jne 0x6a0143
// 006a0117  8d4c2414             lea ecx, [esp + 0x14]
// 006a011b  e840fefdff           call 0x67ff60
// 006a0120  8b10                 mov edx, dword ptr [eax]
// 006a0122  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006a0126  8911                 mov dword ptr [ecx], edx
// 006a0128  8b5004               mov edx, dword ptr [eax + 4]
// 006a012b  895104               mov dword ptr [ecx + 4], edx
// 006a012e  8b5008               mov edx, dword ptr [eax + 8]
// 006a0131  895108               mov dword ptr [ecx + 8], edx
// 006a0134  8b400c               mov eax, dword ptr [eax + 0xc]
// 006a0137  89410c               mov dword ptr [ecx + 0xc], eax
// 006a013a  8bc1                 mov eax, ecx
// 006a013c  5e                   pop esi
// 006a013d  83c420               add esp, 0x20
// 006a0140  c20400               ret 4
// 006a0143  f686c800000004       test byte ptr [esi + 0xc8], 4
// 006a014a  57                   push edi
// 006a014b  751b                 jne 0x6a0168
// 006a014d  8b16                 mov edx, dword ptr [esi]
// 006a014f  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 006a0153  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 006a0159  57                   push edi
// 006a015a  8bce                 mov ecx, esi
// 006a015c  ffd0                 call eax
// 006a015e  8bc7                 mov eax, edi
// 006a0160  5f                   pop edi
// 006a0161  5e                   pop esi
// 006a0162  83c420               add esp, 0x20
// 006a0165  c20400               ret 4
// 006a0168  56                   push esi
// 006a0169  8d4c240c             lea ecx, [esp + 0xc]
// 006a016d  e88efefdff           call 0x680000
// 006a0172  8b442414             mov eax, dword ptr [esp + 0x14]
// 006a0176  2b44240c             sub eax, dword ptr [esp + 0xc]
// 006a017a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006a017e  2b4c2408             sub ecx, dword ptr [esp + 8]
// 006a0182  83e80f               sub eax, 0xf
// 006a0185  99                   cdq 
// 006a0186  2bc2                 sub eax, edx
// 006a0188  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006a018c  83e912               sub ecx, 0x12
// 006a018f  d1f8                 sar eax, 1
// 006a0191  890a                 mov dword ptr [edx], ecx
// 006a0193  8d7110               lea esi, [ecx + 0x10]
// 006a0196  8d780f               lea edi, [eax + 0xf]
// 006a0199  894204               mov dword ptr [edx + 4], eax
// 006a019c  897208               mov dword ptr [edx + 8], esi
// 006a019f  897a0c               mov dword ptr [edx + 0xc], edi
// 006a01a2  5f                   pop edi
// 006a01a3  8bc2                 mov eax, edx
// 006a01a5  5e                   pop esi
// 006a01a6  83c420               add esp, 0x20
// 006a01a9  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTCaption.cpp (function ?GetButtonRect@CXTCaption@@MBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaption.cpp
