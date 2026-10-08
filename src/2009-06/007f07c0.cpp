// roc 2009-06 007f07c0  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridOffice2003Theme  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f07c0
//
// 007f07c0  56                   push esi
// 007f07c1  57                   push edi
// 007f07c2  8bf1                 mov esi, ecx
// 007f07c4  e8a7e9ffff           call 0x7ef170
// 007f07c9  33ff                 xor edi, edi
// 007f07cb  897e78               mov dword ptr [esi + 0x78], edi
// 007f07ce  e84d43f6ff           call 0x754b20
// 007f07d3  8bc8                 mov ecx, eax
// 007f07d5  e8a63df6ff           call 0x754580
// 007f07da  85c0                 test eax, eax
// 007f07dc  0f85c5000000         jne 0x7f08a7
// 007f07e2  e83943f6ff           call 0x754b20
// 007f07e7  8bc8                 mov ecx, eax
// 007f07e9  e8e240f6ff           call 0x7548d0
// 007f07ee  48                   dec eax
// 007f07ef  83f804               cmp eax, 4
// 007f07f2  0f87af000000         ja 0x7f08a7
// 007f07f8  ff2485ac087f00       jmp dword ptr [eax*4 + 0x7f08ac]
// 007f07ff  c74634ddecfe00       mov dword ptr [esi + 0x34], 0xfeecdd
// 007f0806  c746407ba4e000       mov dword ptr [esi + 0x40], 0xe0a47b
// 007f080d  8b4638               mov eax, dword ptr [esi + 0x38]
// 007f0810  83f8ff               cmp eax, -1
// 007f0813  7503                 jne 0x7f0818
// 007f0815  8b4634               mov eax, dword ptr [esi + 0x34]
// 007f0818  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 007f081b  894138               mov dword ptr [ecx + 0x38], eax
// 007f081e  8b5674               mov edx, dword ptr [esi + 0x74]
// 007f0821  c74250a9c7f000       mov dword ptr [edx + 0x50], 0xf0c7a9
// 007f0828  8b4674               mov eax, dword ptr [esi + 0x74]
// 007f082b  897868               mov dword ptr [eax + 0x68], edi
// 007f082e  5f                   pop edi
// 007f082f  c7467801000000       mov dword ptr [esi + 0x78], 1
// 007f0836  5e                   pop esi
// 007f0837  c3                   ret 
// 007f0838  c74634f3f2e700       mov dword ptr [esi + 0x34], 0xe7f2f3
// 007f083f  c74640bcbbb100       mov dword ptr [esi + 0x40], 0xb1bbbc
// 007f0846  8b4638               mov eax, dword ptr [esi + 0x38]
// 007f0849  83f8ff               cmp eax, -1
// 007f084c  7503                 jne 0x7f0851
// 007f084e  8b4634               mov eax, dword ptr [esi + 0x34]
// 007f0851  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 007f0854  894138               mov dword ptr [ecx + 0x38], eax
// 007f0857  8b5674               mov edx, dword ptr [esi + 0x74]
// 007f085a  c74250c5d49f00       mov dword ptr [edx + 0x50], 0x9fd4c5
// 007f0861  8b4674               mov eax, dword ptr [esi + 0x74]
// 007f0864  897868               mov dword ptr [eax + 0x68], edi
// 007f0867  5f                   pop edi
// 007f0868  c7467801000000       mov dword ptr [esi + 0x78], 1
// 007f086f  5e                   pop esi
// 007f0870  c3                   ret 
// 007f0871  c74634eeeef400       mov dword ptr [esi + 0x34], 0xf4eeee
// 007f0878  c74640a1a0bb00       mov dword ptr [esi + 0x40], 0xbba0a1
// 007f087f  8b4638               mov eax, dword ptr [esi + 0x38]
// 007f0882  83f8ff               cmp eax, -1
// 007f0885  7503                 jne 0x7f088a
// 007f0887  8b4634               mov eax, dword ptr [esi + 0x34]
// 007f088a  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 007f088d  894138               mov dword ptr [ecx + 0x38], eax
// 007f0890  8b5674               mov edx, dword ptr [esi + 0x74]
// 007f0893  c74250c0c0d300       mov dword ptr [edx + 0x50], 0xd3c0c0
// 007f089a  8b4674               mov eax, dword ptr [esi + 0x74]
// 007f089d  897868               mov dword ptr [eax + 0x68], edi
// 007f08a0  c7467801000000       mov dword ptr [esi + 0x78], 1
// 007f08a7  5f                   pop edi
// 007f08a8  5e                   pop esi
// 007f08a9  c3                   ret 
// 007f08aa  8bff                 mov edi, edi
// 007f08ac  ff07                 inc dword ptr [edi]
// 007f08ae  7f00                 jg 0x7f08b0
// 007f08b0  3808                 cmp byte ptr [eax], cl
// 007f08b2  7f00                 jg 0x7f08b4
// 007f08b4  7108                 jno 0x7f08be
// 007f08b6  7f00                 jg 0x7f08b8
// 007f08b8  ff07                 inc dword ptr [edi]
// 007f08ba  7f00                 jg 0x7f08bc
// 007f08bc  ff07                 inc dword ptr [edi]
// 007f08be  7f00                 jg 0x7f08c0
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?RefreshMetrics@CXTPPropertyGridOffice2003Theme@XTPPropertyGridPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
