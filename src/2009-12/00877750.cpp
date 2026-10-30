// roc 2009-12 00877750  unit: CXTPControlGallery  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00877750
//
// 00877750  8b442408             mov eax, dword ptr [esp + 8]
// 00877754  56                   push esi
// 00877755  57                   push edi
// 00877756  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0087775a  50                   push eax
// 0087775b  57                   push edi
// 0087775c  8bf1                 mov esi, ecx
// 0087775e  e82d3ffcff           call 0x83b690
// 00877763  8b8f28020000         mov ecx, dword ptr [edi + 0x228]
// 00877769  898e28020000         mov dword ptr [esi + 0x228], ecx
// 0087776f  8b9730020000         mov edx, dword ptr [edi + 0x230]
// 00877775  899630020000         mov dword ptr [esi + 0x230], edx
// 0087777b  8b872c020000         mov eax, dword ptr [edi + 0x22c]
// 00877781  89862c020000         mov dword ptr [esi + 0x22c], eax
// 00877787  8b8f34020000         mov ecx, dword ptr [edi + 0x234]
// 0087778d  898e34020000         mov dword ptr [esi + 0x234], ecx
// 00877793  8b9738020000         mov edx, dword ptr [edi + 0x238]
// 00877799  899638020000         mov dword ptr [esi + 0x238], edx
// 0087779f  8b873c020000         mov eax, dword ptr [edi + 0x23c]
// 008777a5  89863c020000         mov dword ptr [esi + 0x23c], eax
// 008777ab  8b8f40020000         mov ecx, dword ptr [edi + 0x240]
// 008777b1  898e40020000         mov dword ptr [esi + 0x240], ecx
// 008777b7  8b9748020000         mov edx, dword ptr [edi + 0x248]
// 008777bd  5f                   pop edi
// 008777be  899648020000         mov dword ptr [esi + 0x248], edx
// 008777c4  5e                   pop esi
// 008777c5  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?Copy@CXTPControlGallery@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
