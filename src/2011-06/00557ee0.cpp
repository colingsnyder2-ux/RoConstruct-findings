// roc 2011-06 00557ee0  unit: seg_00550000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00557ee0
//
// 00557ee0  68a41da800           push 0xa81da4
// 00557ee5  8d4658               lea eax, [esi + 0x58]
// 00557ee8  50                   push eax
// 00557ee9  56                   push esi
// 00557eea  b8901da800           mov eax, 0xa81d90
// 00557eef  e82cffffff           call 0x557e20
// 00557ef4  68e81da800           push 0xa81de8
// 00557ef9  8d4e68               lea ecx, [esi + 0x68]
// 00557efc  51                   push ecx
// 00557efd  56                   push esi
// 00557efe  b8d01da800           mov eax, 0xa81dd0
// 00557f03  e818ffffff           call 0x557e20
// 00557f08  68c41da800           push 0xa81dc4
// 00557f0d  8d565c               lea edx, [esi + 0x5c]
// 00557f10  52                   push edx
// 00557f11  56                   push esi
// 00557f12  b8b01da800           mov eax, 0xa81db0
// 00557f17  e804ffffff           call 0x557e20
// 00557f1c  68a01ea800           push 0xa81ea0
// 00557f21  8d466c               lea eax, [esi + 0x6c]
// 00557f24  50                   push eax
// 00557f25  56                   push esi
// 00557f26  b88c1ea800           mov eax, 0xa81e8c
// 00557f2b  e8f0feffff           call 0x557e20
// 00557f30  83c430               add esp, 0x30
// 00557f33  c3                   ret 
// library jpeg-6b/jcparam.c (function _std_huff_tables)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
