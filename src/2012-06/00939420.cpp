// from server: 100% by auto
// roc 2012-06 00939420  unit: seg_00930000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00939420
//
// 00939420  53                   push ebx
// 00939421  6a00                 push 0
// 00939423  57                   push edi
// 00939424  56                   push esi
// 00939425  bb01000000           mov ebx, 1
// 0093942a  e861080000           call 0x939c90
// 0093942f  83c40c               add esp, 0xc
// 00939432  837e102c             cmp dword ptr [esi + 0x10], 0x2c
// 00939436  751f                 jne 0x939457
// 00939438  56                   push esi
// 00939439  e882efffff           call 0x9383c0
// 0093943e  8b4630               mov eax, dword ptr [esi + 0x30]
// 00939441  57                   push edi
// 00939442  50                   push eax
// 00939443  e828e90200           call 0x967d70
// 00939448  6a00                 push 0
// 0093944a  57                   push edi
// 0093944b  56                   push esi
// 0093944c  e83f080000           call 0x939c90
// 00939451  83c418               add esp, 0x18
// 00939454  43                   inc ebx
// 00939455  ebdb                 jmp 0x939432
// 00939457  8bc3                 mov eax, ebx
// 00939459  5b                   pop ebx
// 0093945a  c3                   ret 
// library lua-5.1.4/lparser.c (function _explist1)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
