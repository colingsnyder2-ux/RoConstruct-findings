// roc 2008-06 00773010  unit: CXTPPropertyGridInplaceButton  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00773010
//
// 00773010  8b442408             mov eax, dword ptr [esp + 8]
// 00773014  8b542410             mov edx, dword ptr [esp + 0x10]
// 00773018  56                   push esi
// 00773019  8bf1                 mov esi, ecx
// 0077301b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0077301f  894634               mov dword ptr [esi + 0x34], eax
// 00773022  8b442418             mov eax, dword ptr [esp + 0x18]
// 00773026  894e38               mov dword ptr [esi + 0x38], ecx
// 00773029  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0077302c  89563c               mov dword ptr [esi + 0x3c], edx
// 0077302f  894640               mov dword ptr [esi + 0x40], eax
// 00773032  e80911faff           call 0x714140
// 00773037  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0077303b  8b10                 mov edx, dword ptr [eax]
// 0077303d  8b5230               mov edx, dword ptr [edx + 0x30]
// 00773040  56                   push esi
// 00773041  51                   push ecx
// 00773042  8bc8                 mov ecx, eax
// 00773044  ffd2                 call edx
// 00773046  5e                   pop esi
// 00773047  c21400               ret 0x14
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?OnDraw@CXTPPropertyGridInplaceButton@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
