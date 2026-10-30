// from server: 100% by auto
// roc 2007-08 0069ac20  unit: CXTPPropertyGridView  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069ac20
//
// 0069ac20  56                   push esi
// 0069ac21  8b742418             mov esi, dword ptr [esp + 0x18]
// 0069ac25  8d442408             lea eax, [esp + 8]
// 0069ac29  50                   push eax
// 0069ac2a  66c7060300           mov word ptr [esi], 3
// 0069ac2f  c7460800000000       mov dword ptr [esi + 8], 0
// 0069ac36  e89567fdff           call 0x6713d0
// 0069ac3b  85c0                 test eax, eax
// 0069ac3d  7507                 jne 0x69ac46
// 0069ac3f  c7460800001000       mov dword ptr [esi + 8], 0x100000
// 0069ac46  33c0                 xor eax, eax
// 0069ac48  5e                   pop esi
// 0069ac49  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleState@CXTPPropertyGridView@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
