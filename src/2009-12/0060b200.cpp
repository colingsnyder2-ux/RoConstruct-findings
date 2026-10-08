// roc 2009-12 0060b200  unit: seg_00600000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060b200
//
// 0060b200  68ec559c00           push 0x9c55ec
// 0060b205  8d4658               lea eax, [esi + 0x58]
// 0060b208  50                   push eax
// 0060b209  56                   push esi
// 0060b20a  b8d8559c00           mov eax, 0x9c55d8
// 0060b20f  e82cffffff           call 0x60b140
// 0060b214  6830569c00           push 0x9c5630
// 0060b219  8d4e68               lea ecx, [esi + 0x68]
// 0060b21c  51                   push ecx
// 0060b21d  56                   push esi
// 0060b21e  b818569c00           mov eax, 0x9c5618
// 0060b223  e818ffffff           call 0x60b140
// 0060b228  680c569c00           push 0x9c560c
// 0060b22d  8d565c               lea edx, [esi + 0x5c]
// 0060b230  52                   push edx
// 0060b231  56                   push esi
// 0060b232  b8f8559c00           mov eax, 0x9c55f8
// 0060b237  e804ffffff           call 0x60b140
// 0060b23c  68e8569c00           push 0x9c56e8
// 0060b241  8d466c               lea eax, [esi + 0x6c]
// 0060b244  50                   push eax
// 0060b245  56                   push esi
// 0060b246  b8d4569c00           mov eax, 0x9c56d4
// 0060b24b  e8f0feffff           call 0x60b140
// 0060b250  83c430               add esp, 0x30
// 0060b253  c3                   ret 
// library jpeg-6b/jcparam.c (function _std_huff_tables)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
