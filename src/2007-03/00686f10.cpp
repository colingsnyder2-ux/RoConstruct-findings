// roc 2007-03 00686f10  unit: seg_00680000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00686f10
//
// 00686f10  56                   push esi
// 00686f11  8b742418             mov esi, dword ptr [esp + 0x18]
// 00686f15  8d442408             lea eax, [esp + 8]
// 00686f19  50                   push eax
// 00686f1a  66c7060300           mov word ptr [esi], 3
// 00686f1f  c7460800000000       mov dword ptr [esi + 8], 0
// 00686f26  e885f0ffff           call 0x685fb0
// 00686f2b  85c0                 test eax, eax
// 00686f2d  7507                 jne 0x686f36
// 00686f2f  c7460800001000       mov dword ptr [esi + 8], 0x100000
// 00686f36  33c0                 xor eax, eax
// 00686f38  5e                   pop esi
// 00686f39  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleState@CXTPPropertyGridView@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
