// roc 2008-06 0072e070  unit: CXTPControlGallery  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072e070
//
// 0072e070  57                   push edi
// 0072e071  8bf9                 mov edi, ecx
// 0072e073  8b877cfeffff         mov eax, dword ptr [edi - 0x184]
// 0072e079  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 0072e07f  8d8f7cfeffff         lea ecx, [edi - 0x184]
// 0072e085  ffd2                 call edx
// 0072e087  85c0                 test eax, eax
// 0072e089  0f8480000000         je 0x72e10f
// 0072e08f  8b442408             mov eax, dword ptr [esp + 8]
// 0072e093  8b08                 mov ecx, dword ptr [eax]
// 0072e095  56                   push esi
// 0072e096  8b742410             mov esi, dword ptr [esp + 0x10]
// 0072e09a  894e44               mov dword ptr [esi + 0x44], ecx
// 0072e09d  8b5004               mov edx, dword ptr [eax + 4]
// 0072e0a0  895648               mov dword ptr [esi + 0x48], edx
// 0072e0a3  8b4808               mov ecx, dword ptr [eax + 8]
// 0072e0a6  894e4c               mov dword ptr [esi + 0x4c], ecx
// 0072e0a9  8b500c               mov edx, dword ptr [eax + 0xc]
// 0072e0ac  895650               mov dword ptr [esi + 0x50], edx
// 0072e0af  8b4804               mov ecx, dword ptr [eax + 4]
// 0072e0b2  894e10               mov dword ptr [esi + 0x10], ecx
// 0072e0b5  8b500c               mov edx, dword ptr [eax + 0xc]
// 0072e0b8  895614               mov dword ptr [esi + 0x14], edx
// 0072e0bb  8b08                 mov ecx, dword ptr [eax]
// 0072e0bd  894e18               mov dword ptr [esi + 0x18], ecx
// 0072e0c0  8b5008               mov edx, dword ptr [eax + 8]
// 0072e0c3  8b442414             mov eax, dword ptr [esp + 0x14]
// 0072e0c7  89561c               mov dword ptr [esi + 0x1c], edx
// 0072e0ca  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0072e0cd  894e0c               mov dword ptr [esi + 0xc], ecx
// 0072e0d0  8b5010               mov edx, dword ptr [eax + 0x10]
// 0072e0d3  895608               mov dword ptr [esi + 8], edx
// 0072e0d6  8b4808               mov ecx, dword ptr [eax + 8]
// 0072e0d9  890e                 mov dword ptr [esi], ecx
// 0072e0db  8b500c               mov edx, dword ptr [eax + 0xc]
// 0072e0de  895604               mov dword ptr [esi + 4], edx
// 0072e0e1  8b07                 mov eax, dword ptr [edi]
// 0072e0e3  8b5024               mov edx, dword ptr [eax + 0x24]
// 0072e0e6  8bcf                 mov ecx, edi
// 0072e0e8  ffd2                 call edx
// 0072e0ea  8b4014               mov eax, dword ptr [eax + 0x14]
// 0072e0ed  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0072e0f0  03c1                 add eax, ecx
// 0072e0f2  894624               mov dword ptr [esi + 0x24], eax
// 0072e0f5  894628               mov dword ptr [esi + 0x28], eax
// 0072e0f8  8b17                 mov edx, dword ptr [edi]
// 0072e0fa  8b4224               mov eax, dword ptr [edx + 0x24]
// 0072e0fd  8bcf                 mov ecx, edi
// 0072e0ff  ffd0                 call eax
// 0072e101  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0072e104  034e28               add ecx, dword ptr [esi + 0x28]
// 0072e107  894e38               mov dword ptr [esi + 0x38], ecx
// 0072e10a  5e                   pop esi
// 0072e10b  5f                   pop edi
// 0072e10c  c20c00               ret 0xc
// 0072e10f  8b542410             mov edx, dword ptr [esp + 0x10]
// 0072e113  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0072e117  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0072e11b  52                   push edx
// 0072e11c  50                   push eax
// 0072e11d  51                   push ecx
// 0072e11e  8bcf                 mov ecx, edi
// 0072e120  e8dbff0600           call 0x79e100
// 0072e125  5f                   pop edi
// 0072e126  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlGallery.cpp (function ?CalcScrollBarInfo@CXTPControlGallery@@MAEXPAUtagRECT@@PAUSCROLLBARPOSINFO@CXTPScrollBase@@PAUtagSCROLLINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlGallery.cpp
