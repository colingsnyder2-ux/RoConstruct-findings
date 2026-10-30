// from server: 100% by auto
// roc 2009-06 006ee7f0  unit: seg_006e0000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ee7f0
//
// 006ee7f0  53                   push ebx
// 006ee7f1  6a00                 push 0
// 006ee7f3  57                   push edi
// 006ee7f4  56                   push esi
// 006ee7f5  bb01000000           mov ebx, 1
// 006ee7fa  e861080000           call 0x6ef060
// 006ee7ff  83c40c               add esp, 0xc
// 006ee802  837e102c             cmp dword ptr [esi + 0x10], 0x2c
// 006ee806  751f                 jne 0x6ee827
// 006ee808  56                   push esi
// 006ee809  e8d23e0000           call 0x6f26e0
// 006ee80e  8b4630               mov eax, dword ptr [esi + 0x30]
// 006ee811  57                   push edi
// 006ee812  50                   push eax
// 006ee813  e8c8bf0000           call 0x6fa7e0
// 006ee818  6a00                 push 0
// 006ee81a  57                   push edi
// 006ee81b  56                   push esi
// 006ee81c  e83f080000           call 0x6ef060
// 006ee821  83c418               add esp, 0x18
// 006ee824  43                   inc ebx
// 006ee825  ebdb                 jmp 0x6ee802
// 006ee827  8bc3                 mov eax, ebx
// 006ee829  5b                   pop ebx
// 006ee82a  c3                   ret 
// library lua-5.1.4/lparser.c (function _explist1)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
