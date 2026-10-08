// roc 2010-06 0087a480  unit: CXTPPropertyGridInplaceButton  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087a480
//
// 0087a480  8b442408             mov eax, dword ptr [esp + 8]
// 0087a484  8b542410             mov edx, dword ptr [esp + 0x10]
// 0087a488  56                   push esi
// 0087a489  8bf1                 mov esi, ecx
// 0087a48b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0087a48f  894634               mov dword ptr [esi + 0x34], eax
// 0087a492  8b442418             mov eax, dword ptr [esp + 0x18]
// 0087a496  894e38               mov dword ptr [esi + 0x38], ecx
// 0087a499  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0087a49c  89563c               mov dword ptr [esi + 0x3c], edx
// 0087a49f  894640               mov dword ptr [esi + 0x40], eax
// 0087a4a2  e85914faff           call 0x81b900
// 0087a4a7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0087a4ab  8b10                 mov edx, dword ptr [eax]
// 0087a4ad  8b5230               mov edx, dword ptr [edx + 0x30]
// 0087a4b0  56                   push esi
// 0087a4b1  51                   push ecx
// 0087a4b2  8bc8                 mov ecx, eax
// 0087a4b4  ffd2                 call edx
// 0087a4b6  5e                   pop esi
// 0087a4b7  c21400               ret 0x14
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?OnDraw@CXTPPropertyGridInplaceButton@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
