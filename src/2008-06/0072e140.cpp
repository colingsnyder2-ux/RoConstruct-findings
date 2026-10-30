// from server: 100% by auto
// roc 2008-06 0072e140  unit: CXTPControlGallery  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072e140
//
// 0072e140  8b442408             mov eax, dword ptr [esp + 8]
// 0072e144  56                   push esi
// 0072e145  57                   push edi
// 0072e146  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0072e14a  50                   push eax
// 0072e14b  57                   push edi
// 0072e14c  8bf1                 mov esi, ecx
// 0072e14e  e84d9efbff           call 0x6e7fa0
// 0072e153  8b8f28020000         mov ecx, dword ptr [edi + 0x228]
// 0072e159  898e28020000         mov dword ptr [esi + 0x228], ecx
// 0072e15f  8b9730020000         mov edx, dword ptr [edi + 0x230]
// 0072e165  899630020000         mov dword ptr [esi + 0x230], edx
// 0072e16b  8b872c020000         mov eax, dword ptr [edi + 0x22c]
// 0072e171  89862c020000         mov dword ptr [esi + 0x22c], eax
// 0072e177  8b8f34020000         mov ecx, dword ptr [edi + 0x234]
// 0072e17d  898e34020000         mov dword ptr [esi + 0x234], ecx
// 0072e183  8b9738020000         mov edx, dword ptr [edi + 0x238]
// 0072e189  899638020000         mov dword ptr [esi + 0x238], edx
// 0072e18f  8b873c020000         mov eax, dword ptr [edi + 0x23c]
// 0072e195  89863c020000         mov dword ptr [esi + 0x23c], eax
// 0072e19b  8b8f40020000         mov ecx, dword ptr [edi + 0x240]
// 0072e1a1  898e40020000         mov dword ptr [esi + 0x240], ecx
// 0072e1a7  8b9748020000         mov edx, dword ptr [edi + 0x248]
// 0072e1ad  5f                   pop edi
// 0072e1ae  899648020000         mov dword ptr [esi + 0x248], edx
// 0072e1b4  5e                   pop esi
// 0072e1b5  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?Copy@CXTPControlGallery@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
