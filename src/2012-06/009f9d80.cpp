// roc 2012-06 009f9d80  unit: CXTPControlGallery  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f9d80
//
// 009f9d80  56                   push esi
// 009f9d81  8bf1                 mov esi, ecx
// 009f9d83  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 009f9d89  8b5024               mov edx, dword ptr [eax + 0x24]
// 009f9d8c  8d8e84010000         lea ecx, [esi + 0x184]
// 009f9d92  57                   push edi
// 009f9d93  ffd2                 call edx
// 009f9d95  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009f9d99  8b38                 mov edi, dword ptr [eax]
// 009f9d9b  83ec10               sub esp, 0x10
// 009f9d9e  8bd4                 mov edx, esp
// 009f9da0  890a                 mov dword ptr [edx], ecx
// 009f9da2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009f9da6  894a04               mov dword ptr [edx + 4], ecx
// 009f9da9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009f9dad  894a08               mov dword ptr [edx + 8], ecx
// 009f9db0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009f9db4  894a0c               mov dword ptr [edx + 0xc], ecx
// 009f9db7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009f9dbb  56                   push esi
// 009f9dbc  8bc8                 mov ecx, eax
// 009f9dbe  8b4704               mov eax, dword ptr [edi + 4]
// 009f9dc1  52                   push edx
// 009f9dc2  ffd0                 call eax
// 009f9dc4  5f                   pop edi
// 009f9dc5  5e                   pop esi
// 009f9dc6  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?FillControl@CXTPControlGallery@@IAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
