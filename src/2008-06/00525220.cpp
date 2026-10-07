// roc 2008-06 00525220  unit: seg_00520000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00525220
//
// 00525220  68fcaf8200           push 0x82affc
// 00525225  8d4658               lea eax, [esi + 0x58]
// 00525228  50                   push eax
// 00525229  56                   push esi
// 0052522a  b8e8af8200           mov eax, 0x82afe8
// 0052522f  e82cffffff           call 0x525160
// 00525234  6840b08200           push 0x82b040
// 00525239  8d4e68               lea ecx, [esi + 0x68]
// 0052523c  51                   push ecx
// 0052523d  56                   push esi
// 0052523e  b828b08200           mov eax, 0x82b028
// 00525243  e818ffffff           call 0x525160
// 00525248  681cb08200           push 0x82b01c
// 0052524d  8d565c               lea edx, [esi + 0x5c]
// 00525250  52                   push edx
// 00525251  56                   push esi
// 00525252  b808b08200           mov eax, 0x82b008
// 00525257  e804ffffff           call 0x525160
// 0052525c  68f8b08200           push 0x82b0f8
// 00525261  8d466c               lea eax, [esi + 0x6c]
// 00525264  50                   push eax
// 00525265  56                   push esi
// 00525266  b8e4b08200           mov eax, 0x82b0e4
// 0052526b  e8f0feffff           call 0x525160
// 00525270  83c430               add esp, 0x30
// 00525273  c3                   ret 
// library jpeg-6b/jcparam.c (function _std_huff_tables)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
