// roc 2007-03 006dd570  unit: seg_006d0000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006dd570
//
// 006dd570  56                   push esi
// 006dd571  8b742408             mov esi, dword ptr [esp + 8]
// 006dd575  85f6                 test esi, esi
// 006dd577  7c19                 jl 0x6dd592
// 006dd579  81c184000000         add ecx, 0x84
// 006dd57f  ff1520db7700         call dword ptr [0x77db20]
// 006dd585  3bf0                 cmp esi, eax
// 006dd587  7d09                 jge 0x6dd592
// 006dd589  b801000000           mov eax, 1
// 006dd58e  5e                   pop esi
// 006dd58f  c20400               ret 4
// 006dd592  33c0                 xor eax, eax
// 006dd594  5e                   pop esi
// 006dd595  c20400               ret 4
// copied from an identical function in another client (function ?PosInRange@?$CXTMaskEditT@VCEdit@@@@QBEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp