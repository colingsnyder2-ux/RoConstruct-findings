// roc 2011-06 00881770  unit: CXTPControlGallery  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00881770
//
// 00881770  56                   push esi
// 00881771  8bf1                 mov esi, ecx
// 00881773  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 00881779  8b5024               mov edx, dword ptr [eax + 0x24]
// 0088177c  8d8e84010000         lea ecx, [esi + 0x184]
// 00881782  57                   push edi
// 00881783  ffd2                 call edx
// 00881785  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00881789  8b38                 mov edi, dword ptr [eax]
// 0088178b  83ec10               sub esp, 0x10
// 0088178e  8bd4                 mov edx, esp
// 00881790  890a                 mov dword ptr [edx], ecx
// 00881792  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00881796  894a04               mov dword ptr [edx + 4], ecx
// 00881799  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0088179d  894a08               mov dword ptr [edx + 8], ecx
// 008817a0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008817a4  894a0c               mov dword ptr [edx + 0xc], ecx
// 008817a7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008817ab  56                   push esi
// 008817ac  8bc8                 mov ecx, eax
// 008817ae  8b4704               mov eax, dword ptr [edi + 4]
// 008817b1  52                   push edx
// 008817b2  ffd0                 call eax
// 008817b4  5f                   pop edi
// 008817b5  5e                   pop esi
// 008817b6  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?FillControl@CXTPControlGallery@@IAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
