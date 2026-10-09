// roc 2007-03 006d8940  unit: seg_006d0000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d8940
//
// 006d8940  8b442408             mov eax, dword ptr [esp + 8]
// 006d8944  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d8948  56                   push esi
// 006d8949  8bf1                 mov esi, ecx
// 006d894b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006d894f  894634               mov dword ptr [esi + 0x34], eax
// 006d8952  8b442418             mov eax, dword ptr [esp + 0x18]
// 006d8956  894e38               mov dword ptr [esi + 0x38], ecx
// 006d8959  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 006d895c  89563c               mov dword ptr [esi + 0x3c], edx
// 006d895f  894640               mov dword ptr [esi + 0x40], eax
// 006d8962  e809e5faff           call 0x686e70
// 006d8967  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006d896b  8b10                 mov edx, dword ptr [eax]
// 006d896d  8b5230               mov edx, dword ptr [edx + 0x30]
// 006d8970  56                   push esi
// 006d8971  51                   push ecx
// 006d8972  8bc8                 mov ecx, eax
// 006d8974  ffd2                 call edx
// 006d8976  5e                   pop esi
// 006d8977  c21400               ret 0x14
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?OnDraw@CXTPPropertyGridInplaceButton@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
