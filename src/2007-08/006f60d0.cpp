// roc 2007-08 006f60d0  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f60d0
//
// 006f60d0  8b442404             mov eax, dword ptr [esp + 4]
// 006f60d4  56                   push esi
// 006f60d5  50                   push eax
// 006f60d6  8bf1                 mov esi, ecx
// 006f60d8  e8a3fdffff           call 0x6f5e80
// 006f60dd  50                   push eax
// 006f60de  8bce                 mov ecx, esi
// 006f60e0  e88bffffff           call 0x6f6070
// 006f60e5  5e                   pop esi
// 006f60e6  c20400               ret 4
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?Remove@CXTPPropertyGridInplaceButtons@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
