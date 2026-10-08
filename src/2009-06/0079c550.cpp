// roc 2009-06 0079c550  unit: CXTPControlGallery  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079c550
//
// 0079c550  56                   push esi
// 0079c551  8bf1                 mov esi, ecx
// 0079c553  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 0079c559  8b5024               mov edx, dword ptr [eax + 0x24]
// 0079c55c  8d8e84010000         lea ecx, [esi + 0x184]
// 0079c562  57                   push edi
// 0079c563  ffd2                 call edx
// 0079c565  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0079c569  8b38                 mov edi, dword ptr [eax]
// 0079c56b  83ec10               sub esp, 0x10
// 0079c56e  8bd4                 mov edx, esp
// 0079c570  890a                 mov dword ptr [edx], ecx
// 0079c572  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0079c576  894a04               mov dword ptr [edx + 4], ecx
// 0079c579  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0079c57d  894a08               mov dword ptr [edx + 8], ecx
// 0079c580  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0079c584  894a0c               mov dword ptr [edx + 0xc], ecx
// 0079c587  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0079c58b  56                   push esi
// 0079c58c  8bc8                 mov ecx, eax
// 0079c58e  8b4704               mov eax, dword ptr [edi + 4]
// 0079c591  52                   push edx
// 0079c592  ffd0                 call eax
// 0079c594  5f                   pop edi
// 0079c595  5e                   pop esi
// 0079c596  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?FillControl@CXTPControlGallery@@IAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
