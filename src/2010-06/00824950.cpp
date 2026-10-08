// roc 2010-06 00824950  unit: CXTPControlGallery  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00824950
//
// 00824950  8b442408             mov eax, dword ptr [esp + 8]
// 00824954  56                   push esi
// 00824955  57                   push edi
// 00824956  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0082495a  50                   push eax
// 0082495b  57                   push edi
// 0082495c  8bf1                 mov esi, ecx
// 0082495e  e87daefcff           call 0x7ef7e0
// 00824963  8b8f28020000         mov ecx, dword ptr [edi + 0x228]
// 00824969  898e28020000         mov dword ptr [esi + 0x228], ecx
// 0082496f  8b9730020000         mov edx, dword ptr [edi + 0x230]
// 00824975  899630020000         mov dword ptr [esi + 0x230], edx
// 0082497b  8b872c020000         mov eax, dword ptr [edi + 0x22c]
// 00824981  89862c020000         mov dword ptr [esi + 0x22c], eax
// 00824987  8b8f34020000         mov ecx, dword ptr [edi + 0x234]
// 0082498d  898e34020000         mov dword ptr [esi + 0x234], ecx
// 00824993  8b9738020000         mov edx, dword ptr [edi + 0x238]
// 00824999  899638020000         mov dword ptr [esi + 0x238], edx
// 0082499f  8b873c020000         mov eax, dword ptr [edi + 0x23c]
// 008249a5  89863c020000         mov dword ptr [esi + 0x23c], eax
// 008249ab  8b8f40020000         mov ecx, dword ptr [edi + 0x240]
// 008249b1  898e40020000         mov dword ptr [esi + 0x240], ecx
// 008249b7  8b9748020000         mov edx, dword ptr [edi + 0x248]
// 008249bd  5f                   pop edi
// 008249be  899648020000         mov dword ptr [esi + 0x248], edx
// 008249c4  5e                   pop esi
// 008249c5  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?Copy@CXTPControlGallery@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
