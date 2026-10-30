// roc 2009-12 008774d0  unit: CXTPControlGallery  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008774d0
//
// 008774d0  56                   push esi
// 008774d1  8bf1                 mov esi, ecx
// 008774d3  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 008774d9  8b5024               mov edx, dword ptr [eax + 0x24]
// 008774dc  8d8e84010000         lea ecx, [esi + 0x184]
// 008774e2  57                   push edi
// 008774e3  ffd2                 call edx
// 008774e5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008774e9  8b38                 mov edi, dword ptr [eax]
// 008774eb  83ec10               sub esp, 0x10
// 008774ee  8bd4                 mov edx, esp
// 008774f0  890a                 mov dword ptr [edx], ecx
// 008774f2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008774f6  894a04               mov dword ptr [edx + 4], ecx
// 008774f9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008774fd  894a08               mov dword ptr [edx + 8], ecx
// 00877500  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00877504  894a0c               mov dword ptr [edx + 0xc], ecx
// 00877507  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0087750b  56                   push esi
// 0087750c  8bc8                 mov ecx, eax
// 0087750e  8b4704               mov eax, dword ptr [edi + 4]
// 00877511  52                   push edx
// 00877512  ffd0                 call eax
// 00877514  5f                   pop edi
// 00877515  5e                   pop esi
// 00877516  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?FillControl@CXTPControlGallery@@IAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
