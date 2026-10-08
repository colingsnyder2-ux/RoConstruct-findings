// from server: 100% by auto
// roc 2011-06 00848a30  unit: CXTTreeBase  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00848a30
//
// 00848a30  56                   push esi
// 00848a31  8bf1                 mov esi, ecx
// 00848a33  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00848a36  e8dd3b1800           call 0x9cc618
// 00848a3b  a900020000           test eax, 0x200
// 00848a40  741e                 je 0x848a60
// 00848a42  837e1400             cmp dword ptr [esi + 0x14], 0
// 00848a46  7418                 je 0x848a60
// 00848a48  8b4634               mov eax, dword ptr [esi + 0x34]
// 00848a4b  6a00                 push 0
// 00848a4d  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00848a54  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00848a57  6a00                 push 0
// 00848a59  51                   push ecx
// 00848a5a  ff15ec19a400         call dword ptr [0xa419ec]
// 00848a60  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00848a63  e8c61bfcff           call 0x80a62e
// 00848a68  5e                   pop esi
// 00848a69  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?OnNcMouseMove@CXTPTreeBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
