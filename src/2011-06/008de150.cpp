// roc 2011-06 008de150  unit: CXTPPropertyGridInplaceButton  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008de150
//
// 008de150  8b442408             mov eax, dword ptr [esp + 8]
// 008de154  8b542410             mov edx, dword ptr [esp + 0x10]
// 008de158  56                   push esi
// 008de159  8bf1                 mov esi, ecx
// 008de15b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008de15f  894634               mov dword ptr [esi + 0x34], eax
// 008de162  8b442418             mov eax, dword ptr [esp + 0x18]
// 008de166  894e38               mov dword ptr [esi + 0x38], ecx
// 008de169  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 008de16c  89563c               mov dword ptr [esi + 0x3c], edx
// 008de16f  894640               mov dword ptr [esi + 0x40], eax
// 008de172  e8997cf9ff           call 0x875e10
// 008de177  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008de17b  8b10                 mov edx, dword ptr [eax]
// 008de17d  8b5230               mov edx, dword ptr [edx + 0x30]
// 008de180  56                   push esi
// 008de181  51                   push ecx
// 008de182  8bc8                 mov ecx, eax
// 008de184  ffd2                 call edx
// 008de186  5e                   pop esi
// 008de187  c21400               ret 0x14
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?OnDraw@CXTPPropertyGridInplaceButton@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
