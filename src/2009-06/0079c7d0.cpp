// roc 2009-06 0079c7d0  unit: CXTPControlGallery  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079c7d0
//
// 0079c7d0  8b442408             mov eax, dword ptr [esp + 8]
// 0079c7d4  56                   push esi
// 0079c7d5  57                   push edi
// 0079c7d6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0079c7da  50                   push eax
// 0079c7db  57                   push edi
// 0079c7dc  8bf1                 mov esi, ecx
// 0079c7de  e8dd40fcff           call 0x7608c0
// 0079c7e3  8b8f28020000         mov ecx, dword ptr [edi + 0x228]
// 0079c7e9  898e28020000         mov dword ptr [esi + 0x228], ecx
// 0079c7ef  8b9730020000         mov edx, dword ptr [edi + 0x230]
// 0079c7f5  899630020000         mov dword ptr [esi + 0x230], edx
// 0079c7fb  8b872c020000         mov eax, dword ptr [edi + 0x22c]
// 0079c801  89862c020000         mov dword ptr [esi + 0x22c], eax
// 0079c807  8b8f34020000         mov ecx, dword ptr [edi + 0x234]
// 0079c80d  898e34020000         mov dword ptr [esi + 0x234], ecx
// 0079c813  8b9738020000         mov edx, dword ptr [edi + 0x238]
// 0079c819  899638020000         mov dword ptr [esi + 0x238], edx
// 0079c81f  8b873c020000         mov eax, dword ptr [edi + 0x23c]
// 0079c825  89863c020000         mov dword ptr [esi + 0x23c], eax
// 0079c82b  8b8f40020000         mov ecx, dword ptr [edi + 0x240]
// 0079c831  898e40020000         mov dword ptr [esi + 0x240], ecx
// 0079c837  8b9748020000         mov edx, dword ptr [edi + 0x248]
// 0079c83d  5f                   pop edi
// 0079c83e  899648020000         mov dword ptr [esi + 0x248], edx
// 0079c844  5e                   pop esi
// 0079c845  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?Copy@CXTPControlGallery@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
