// roc 2007-03 00686ed0  unit: seg_00680000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00686ed0
//
// 00686ed0  56                   push esi
// 00686ed1  8b742418             mov esi, dword ptr [esp + 0x18]
// 00686ed5  8d442408             lea eax, [esp + 8]
// 00686ed9  50                   push eax
// 00686eda  66c7060000           mov word ptr [esi], 0
// 00686edf  e8ccf0ffff           call 0x685fb0
// 00686ee4  85c0                 test eax, eax
// 00686ee6  7510                 jne 0x686ef8
// 00686ee8  66c7060300           mov word ptr [esi], 3
// 00686eed  c7460818000000       mov dword ptr [esi + 8], 0x18
// 00686ef4  5e                   pop esi
// 00686ef5  c21400               ret 0x14
// 00686ef8  b857000780           mov eax, 0x80070057
// 00686efd  5e                   pop esi
// 00686efe  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleRole@CXTPPropertyGridView@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
