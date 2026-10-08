// roc 2010-06 008246d0  unit: CXTPControlGallery  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008246d0
//
// 008246d0  56                   push esi
// 008246d1  8bf1                 mov esi, ecx
// 008246d3  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 008246d9  8b5024               mov edx, dword ptr [eax + 0x24]
// 008246dc  8d8e84010000         lea ecx, [esi + 0x184]
// 008246e2  57                   push edi
// 008246e3  ffd2                 call edx
// 008246e5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008246e9  8b38                 mov edi, dword ptr [eax]
// 008246eb  83ec10               sub esp, 0x10
// 008246ee  8bd4                 mov edx, esp
// 008246f0  890a                 mov dword ptr [edx], ecx
// 008246f2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008246f6  894a04               mov dword ptr [edx + 4], ecx
// 008246f9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008246fd  894a08               mov dword ptr [edx + 8], ecx
// 00824700  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00824704  894a0c               mov dword ptr [edx + 0xc], ecx
// 00824707  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0082470b  56                   push esi
// 0082470c  8bc8                 mov ecx, eax
// 0082470e  8b4704               mov eax, dword ptr [edi + 4]
// 00824711  52                   push edx
// 00824712  ffd0                 call eax
// 00824714  5f                   pop edi
// 00824715  5e                   pop esi
// 00824716  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?FillControl@CXTPControlGallery@@IAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
