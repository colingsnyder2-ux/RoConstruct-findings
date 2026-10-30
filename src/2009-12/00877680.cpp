// roc 2009-12 00877680  unit: CXTPControlGallery  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00877680
//
// 00877680  57                   push edi
// 00877681  8bf9                 mov edi, ecx
// 00877683  8b877cfeffff         mov eax, dword ptr [edi - 0x184]
// 00877689  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 0087768f  8d8f7cfeffff         lea ecx, [edi - 0x184]
// 00877695  ffd2                 call edx
// 00877697  85c0                 test eax, eax
// 00877699  0f8480000000         je 0x87771f
// 0087769f  8b442408             mov eax, dword ptr [esp + 8]
// 008776a3  8b08                 mov ecx, dword ptr [eax]
// 008776a5  56                   push esi
// 008776a6  8b742410             mov esi, dword ptr [esp + 0x10]
// 008776aa  894e44               mov dword ptr [esi + 0x44], ecx
// 008776ad  8b5004               mov edx, dword ptr [eax + 4]
// 008776b0  895648               mov dword ptr [esi + 0x48], edx
// 008776b3  8b4808               mov ecx, dword ptr [eax + 8]
// 008776b6  894e4c               mov dword ptr [esi + 0x4c], ecx
// 008776b9  8b500c               mov edx, dword ptr [eax + 0xc]
// 008776bc  895650               mov dword ptr [esi + 0x50], edx
// 008776bf  8b4804               mov ecx, dword ptr [eax + 4]
// 008776c2  894e10               mov dword ptr [esi + 0x10], ecx
// 008776c5  8b500c               mov edx, dword ptr [eax + 0xc]
// 008776c8  895614               mov dword ptr [esi + 0x14], edx
// 008776cb  8b08                 mov ecx, dword ptr [eax]
// 008776cd  894e18               mov dword ptr [esi + 0x18], ecx
// 008776d0  8b5008               mov edx, dword ptr [eax + 8]
// 008776d3  8b442414             mov eax, dword ptr [esp + 0x14]
// 008776d7  89561c               mov dword ptr [esi + 0x1c], edx
// 008776da  8b4814               mov ecx, dword ptr [eax + 0x14]
// 008776dd  894e0c               mov dword ptr [esi + 0xc], ecx
// 008776e0  8b5010               mov edx, dword ptr [eax + 0x10]
// 008776e3  895608               mov dword ptr [esi + 8], edx
// 008776e6  8b4808               mov ecx, dword ptr [eax + 8]
// 008776e9  890e                 mov dword ptr [esi], ecx
// 008776eb  8b500c               mov edx, dword ptr [eax + 0xc]
// 008776ee  895604               mov dword ptr [esi + 4], edx
// 008776f1  8b07                 mov eax, dword ptr [edi]
// 008776f3  8b5024               mov edx, dword ptr [eax + 0x24]
// 008776f6  8bcf                 mov ecx, edi
// 008776f8  ffd2                 call edx
// 008776fa  8b4014               mov eax, dword ptr [eax + 0x14]
// 008776fd  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00877700  03c1                 add eax, ecx
// 00877702  894624               mov dword ptr [esi + 0x24], eax
// 00877705  894628               mov dword ptr [esi + 0x28], eax
// 00877708  8b17                 mov edx, dword ptr [edi]
// 0087770a  8b4224               mov eax, dword ptr [edx + 0x24]
// 0087770d  8bcf                 mov ecx, edi
// 0087770f  ffd0                 call eax
// 00877711  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00877714  034e28               add ecx, dword ptr [esi + 0x28]
// 00877717  894e38               mov dword ptr [esi + 0x38], ecx
// 0087771a  5e                   pop esi
// 0087771b  5f                   pop edi
// 0087771c  c20c00               ret 0xc
// 0087771f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00877723  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00877727  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0087772b  52                   push edx
// 0087772c  50                   push eax
// 0087772d  51                   push ecx
// 0087772e  8bcf                 mov ecx, edi
// 00877730  e8cb340700           call 0x8eac00
// 00877735  5f                   pop edi
// 00877736  c20c00               ret 0xc
// copied from an identical function in another client (function ?CalcScrollBarInfo@CXTPControlGallery@@MAEXPAUtagRECT@@PAUSCROLLBARPOSINFO@CXTPScrollBase@@PAUtagSCROLLINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlGallery.cpp