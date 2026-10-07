// roc 2012-06 00644d60  unit: seg_00640000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00644d60
//
// 00644d60  684c5cb800           push 0xb85c4c
// 00644d65  8d4658               lea eax, [esi + 0x58]
// 00644d68  50                   push eax
// 00644d69  56                   push esi
// 00644d6a  b8385cb800           mov eax, 0xb85c38
// 00644d6f  e82cffffff           call 0x644ca0
// 00644d74  68905cb800           push 0xb85c90
// 00644d79  8d4e68               lea ecx, [esi + 0x68]
// 00644d7c  51                   push ecx
// 00644d7d  56                   push esi
// 00644d7e  b8785cb800           mov eax, 0xb85c78
// 00644d83  e818ffffff           call 0x644ca0
// 00644d88  686c5cb800           push 0xb85c6c
// 00644d8d  8d565c               lea edx, [esi + 0x5c]
// 00644d90  52                   push edx
// 00644d91  56                   push esi
// 00644d92  b8585cb800           mov eax, 0xb85c58
// 00644d97  e804ffffff           call 0x644ca0
// 00644d9c  68485db800           push 0xb85d48
// 00644da1  8d466c               lea eax, [esi + 0x6c]
// 00644da4  50                   push eax
// 00644da5  56                   push esi
// 00644da6  b8345db800           mov eax, 0xb85d34
// 00644dab  e8f0feffff           call 0x644ca0
// 00644db0  83c430               add esp, 0x30
// 00644db3  c3                   ret 
// library jpeg-6b/jcparam.c (function _std_huff_tables)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
