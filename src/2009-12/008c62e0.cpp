// roc 2009-12 008c62e0  unit: CXTPPropertyGridInplaceButton  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c62e0
//
// 008c62e0  8b442408             mov eax, dword ptr [esp + 8]
// 008c62e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008c62e8  56                   push esi
// 008c62e9  8bf1                 mov esi, ecx
// 008c62eb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008c62ef  894634               mov dword ptr [esi + 0x34], eax
// 008c62f2  8b442418             mov eax, dword ptr [esp + 0x18]
// 008c62f6  894e38               mov dword ptr [esi + 0x38], ecx
// 008c62f9  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 008c62fc  89563c               mov dword ptr [esi + 0x3c], edx
// 008c62ff  894640               mov dword ptr [esi + 0x40], eax
// 008c6302  e84916faff           call 0x867950
// 008c6307  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008c630b  8b10                 mov edx, dword ptr [eax]
// 008c630d  8b5230               mov edx, dword ptr [edx + 0x30]
// 008c6310  56                   push esi
// 008c6311  51                   push ecx
// 008c6312  8bc8                 mov ecx, eax
// 008c6314  ffd2                 call edx
// 008c6316  5e                   pop esi
// 008c6317  c21400               ret 0x14
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?OnDraw@CXTPPropertyGridInplaceButton@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
