// from server: 100% by auto
// roc 2007-08 0069abe0  unit: CXTPPropertyGridView  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069abe0
//
// 0069abe0  56                   push esi
// 0069abe1  8b742418             mov esi, dword ptr [esp + 0x18]
// 0069abe5  8d442408             lea eax, [esp + 8]
// 0069abe9  50                   push eax
// 0069abea  66c7060000           mov word ptr [esi], 0
// 0069abef  e8dc67fdff           call 0x6713d0
// 0069abf4  85c0                 test eax, eax
// 0069abf6  7510                 jne 0x69ac08
// 0069abf8  66c7060300           mov word ptr [esi], 3
// 0069abfd  c7460818000000       mov dword ptr [esi + 8], 0x18
// 0069ac04  5e                   pop esi
// 0069ac05  c21400               ret 0x14
// 0069ac08  b857000780           mov eax, 0x80070057
// 0069ac0d  5e                   pop esi
// 0069ac0e  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleRole@CXTPPropertyGridView@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
