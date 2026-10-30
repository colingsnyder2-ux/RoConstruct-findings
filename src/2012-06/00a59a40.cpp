// roc 2012-06 00a59a40  unit: CXTPPropertyGridPaintManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a59a40
//
// 00a59a40  56                   push esi
// 00a59a41  6a00                 push 0
// 00a59a43  8bf1                 mov esi, ecx
// 00a59a45  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a59a49  6a01                 push 1
// 00a59a4b  e84082f9ff           call 0x9f1c90
// 00a59a50  85c0                 test eax, eax
// 00a59a52  742e                 je 0xa59a82
// 00a59a54  8b4030               mov eax, dword ptr [eax + 0x30]
// 00a59a57  83f8ff               cmp eax, -1
// 00a59a5a  7426                 je 0xa59a82
// 00a59a5c  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00a59a5f  6a00                 push 0
// 00a59a61  50                   push eax
// 00a59a62  e8497ef8ff           call 0x9e18b0
// 00a59a67  8bc8                 mov ecx, eax
// 00a59a69  e85246f4ff           call 0x99e0c0
// 00a59a6e  85c0                 test eax, eax
// 00a59a70  7410                 je 0xa59a82
// 00a59a72  8bc8                 mov ecx, eax
// 00a59a74  e8e71bfdff           call 0xa2b660
// 00a59a79  8d4805               lea ecx, [eax + 5]
// 00a59a7c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a59a80  0108                 add dword ptr [eax], ecx
// 00a59a82  5e                   pop esi
// 00a59a83  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?AdjustItemValueRect@CXTPPropertyGridPaintManager@@UAEXPAVCXTPPropertyGridItem@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
