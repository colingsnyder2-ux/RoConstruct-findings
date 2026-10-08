// roc 2011-06 008819f0  unit: CXTPControlGallery  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008819f0
//
// 008819f0  8b442408             mov eax, dword ptr [esp + 8]
// 008819f4  56                   push esi
// 008819f5  57                   push edi
// 008819f6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008819fa  50                   push eax
// 008819fb  57                   push edi
// 008819fc  8bf1                 mov esi, ecx
// 008819fe  e82df6fcff           call 0x851030
// 00881a03  8b8f28020000         mov ecx, dword ptr [edi + 0x228]
// 00881a09  898e28020000         mov dword ptr [esi + 0x228], ecx
// 00881a0f  8b9730020000         mov edx, dword ptr [edi + 0x230]
// 00881a15  899630020000         mov dword ptr [esi + 0x230], edx
// 00881a1b  8b872c020000         mov eax, dword ptr [edi + 0x22c]
// 00881a21  89862c020000         mov dword ptr [esi + 0x22c], eax
// 00881a27  8b8f34020000         mov ecx, dword ptr [edi + 0x234]
// 00881a2d  898e34020000         mov dword ptr [esi + 0x234], ecx
// 00881a33  8b9738020000         mov edx, dword ptr [edi + 0x238]
// 00881a39  899638020000         mov dword ptr [esi + 0x238], edx
// 00881a3f  8b873c020000         mov eax, dword ptr [edi + 0x23c]
// 00881a45  89863c020000         mov dword ptr [esi + 0x23c], eax
// 00881a4b  8b8f40020000         mov ecx, dword ptr [edi + 0x240]
// 00881a51  898e40020000         mov dword ptr [esi + 0x240], ecx
// 00881a57  8b9748020000         mov edx, dword ptr [edi + 0x248]
// 00881a5d  5f                   pop edi
// 00881a5e  899648020000         mov dword ptr [esi + 0x248], edx
// 00881a64  5e                   pop esi
// 00881a65  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?Copy@CXTPControlGallery@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
