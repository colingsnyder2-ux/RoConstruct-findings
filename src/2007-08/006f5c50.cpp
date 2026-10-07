// roc 2007-08 006f5c50  unit: CXTPPropertyGridInplaceButton  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f5c50
//
// 006f5c50  8b442408             mov eax, dword ptr [esp + 8]
// 006f5c54  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f5c58  56                   push esi
// 006f5c59  8bf1                 mov esi, ecx
// 006f5c5b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006f5c5f  894634               mov dword ptr [esi + 0x34], eax
// 006f5c62  8b442418             mov eax, dword ptr [esp + 0x18]
// 006f5c66  894e38               mov dword ptr [esi + 0x38], ecx
// 006f5c69  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 006f5c6c  89563c               mov dword ptr [esi + 0x3c], edx
// 006f5c6f  894640               mov dword ptr [esi + 0x40], eax
// 006f5c72  e8b94efaff           call 0x69ab30
// 006f5c77  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006f5c7b  8b10                 mov edx, dword ptr [eax]
// 006f5c7d  8b5230               mov edx, dword ptr [edx + 0x30]
// 006f5c80  56                   push esi
// 006f5c81  51                   push ecx
// 006f5c82  8bc8                 mov ecx, eax
// 006f5c84  ffd2                 call edx
// 006f5c86  5e                   pop esi
// 006f5c87  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?OnDraw@CXTPPropertyGridInplaceButton@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
