// from server: 100% by auto
// roc 2010-06 0077fa90  unit: seg_00770000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077fa90
//
// 0077fa90  53                   push ebx
// 0077fa91  6a00                 push 0
// 0077fa93  57                   push edi
// 0077fa94  56                   push esi
// 0077fa95  bb01000000           mov ebx, 1
// 0077fa9a  e861080000           call 0x780300
// 0077fa9f  83c40c               add esp, 0xc
// 0077faa2  837e102c             cmp dword ptr [esi + 0x10], 0x2c
// 0077faa6  751f                 jne 0x77fac7
// 0077faa8  56                   push esi
// 0077faa9  e8d23e0000           call 0x783980
// 0077faae  8b4630               mov eax, dword ptr [esi + 0x30]
// 0077fab1  57                   push edi
// 0077fab2  50                   push eax
// 0077fab3  e8b8060100           call 0x790170
// 0077fab8  6a00                 push 0
// 0077faba  57                   push edi
// 0077fabb  56                   push esi
// 0077fabc  e83f080000           call 0x780300
// 0077fac1  83c418               add esp, 0x18
// 0077fac4  43                   inc ebx
// 0077fac5  ebdb                 jmp 0x77faa2
// 0077fac7  8bc3                 mov eax, ebx
// 0077fac9  5b                   pop ebx
// 0077faca  c3                   ret 
// library lua-5.1.4/lparser.c (function _explist1)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
