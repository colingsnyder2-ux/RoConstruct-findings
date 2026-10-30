// roc 2009-06 007eb740  unit: CXTPPropertyGridInplaceButton  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007eb740
//
// 007eb740  8b442408             mov eax, dword ptr [esp + 8]
// 007eb744  8b542410             mov edx, dword ptr [esp + 0x10]
// 007eb748  56                   push esi
// 007eb749  8bf1                 mov esi, ecx
// 007eb74b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007eb74f  894634               mov dword ptr [esi + 0x34], eax
// 007eb752  8b442418             mov eax, dword ptr [esp + 0x18]
// 007eb756  894e38               mov dword ptr [esi + 0x38], ecx
// 007eb759  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 007eb75c  89563c               mov dword ptr [esi + 0x3c], edx
// 007eb75f  894640               mov dword ptr [esi + 0x40], eax
// 007eb762  e8e911faff           call 0x78c950
// 007eb767  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007eb76b  8b10                 mov edx, dword ptr [eax]
// 007eb76d  8b5230               mov edx, dword ptr [edx + 0x30]
// 007eb770  56                   push esi
// 007eb771  51                   push ecx
// 007eb772  8bc8                 mov ecx, eax
// 007eb774  ffd2                 call edx
// 007eb776  5e                   pop esi
// 007eb777  c21400               ret 0x14
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?OnDraw@CXTPPropertyGridInplaceButton@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
