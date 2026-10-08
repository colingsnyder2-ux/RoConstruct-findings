// from server: 100% by auto
// roc 2008-06 00661780  unit: RBX::FilterStairs  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00661780
//
// 00661780  53                   push ebx
// 00661781  6a00                 push 0
// 00661783  57                   push edi
// 00661784  56                   push esi
// 00661785  bb01000000           mov ebx, 1
// 0066178a  e861080000           call 0x661ff0
// 0066178f  83c40c               add esp, 0xc
// 00661792  837e102c             cmp dword ptr [esi + 0x10], 0x2c
// 00661796  751f                 jne 0x6617b7
// 00661798  56                   push esi
// 00661799  e8623e0000           call 0x665600
// 0066179e  8b4630               mov eax, dword ptr [esi + 0x30]
// 006617a1  57                   push edi
// 006617a2  50                   push eax
// 006617a3  e888a00000           call 0x66b830
// 006617a8  6a00                 push 0
// 006617aa  57                   push edi
// 006617ab  56                   push esi
// 006617ac  e83f080000           call 0x661ff0
// 006617b1  83c418               add esp, 0x18
// 006617b4  43                   inc ebx
// 006617b5  ebdb                 jmp 0x661792
// 006617b7  8bc3                 mov eax, ebx
// 006617b9  5b                   pop ebx
// 006617ba  c3                   ret 
// library lua-5.1.4/lparser.c (function _explist1)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
