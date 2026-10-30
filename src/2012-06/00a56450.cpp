// roc 2012-06 00a56450  unit: CXTPPropertyGridInplaceButton  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a56450
//
// 00a56450  8b442408             mov eax, dword ptr [esp + 8]
// 00a56454  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a56458  56                   push esi
// 00a56459  8bf1                 mov esi, ecx
// 00a5645b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a5645f  894634               mov dword ptr [esi + 0x34], eax
// 00a56462  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a56466  894e38               mov dword ptr [esi + 0x38], ecx
// 00a56469  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00a5646c  89563c               mov dword ptr [esi + 0x3c], edx
// 00a5646f  894640               mov dword ptr [esi + 0x40], eax
// 00a56472  e8397ff9ff           call 0x9ee3b0
// 00a56477  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a5647b  8b10                 mov edx, dword ptr [eax]
// 00a5647d  8b5230               mov edx, dword ptr [edx + 0x30]
// 00a56480  56                   push esi
// 00a56481  51                   push ecx
// 00a56482  8bc8                 mov ecx, eax
// 00a56484  ffd2                 call edx
// 00a56486  5e                   pop esi
// 00a56487  c21400               ret 0x14
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?OnDraw@CXTPPropertyGridInplaceButton@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
