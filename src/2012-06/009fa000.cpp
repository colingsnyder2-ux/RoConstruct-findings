// roc 2012-06 009fa000  unit: CXTPControlGallery  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fa000
//
// 009fa000  8b442408             mov eax, dword ptr [esp + 8]
// 009fa004  56                   push esi
// 009fa005  57                   push edi
// 009fa006  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009fa00a  50                   push eax
// 009fa00b  57                   push edi
// 009fa00c  8bf1                 mov esi, ecx
// 009fa00e  e8edf4fcff           call 0x9c9500
// 009fa013  8b8f28020000         mov ecx, dword ptr [edi + 0x228]
// 009fa019  898e28020000         mov dword ptr [esi + 0x228], ecx
// 009fa01f  8b9730020000         mov edx, dword ptr [edi + 0x230]
// 009fa025  899630020000         mov dword ptr [esi + 0x230], edx
// 009fa02b  8b872c020000         mov eax, dword ptr [edi + 0x22c]
// 009fa031  89862c020000         mov dword ptr [esi + 0x22c], eax
// 009fa037  8b8f34020000         mov ecx, dword ptr [edi + 0x234]
// 009fa03d  898e34020000         mov dword ptr [esi + 0x234], ecx
// 009fa043  8b9738020000         mov edx, dword ptr [edi + 0x238]
// 009fa049  899638020000         mov dword ptr [esi + 0x238], edx
// 009fa04f  8b873c020000         mov eax, dword ptr [edi + 0x23c]
// 009fa055  89863c020000         mov dword ptr [esi + 0x23c], eax
// 009fa05b  8b8f40020000         mov ecx, dword ptr [edi + 0x240]
// 009fa061  898e40020000         mov dword ptr [esi + 0x240], ecx
// 009fa067  8b9748020000         mov edx, dword ptr [edi + 0x248]
// 009fa06d  5f                   pop edi
// 009fa06e  899648020000         mov dword ptr [esi + 0x248], edx
// 009fa074  5e                   pop esi
// 009fa075  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?Copy@CXTPControlGallery@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
