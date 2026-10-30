// from server: 100% by auto
// roc 2009-06 00589480  unit: seg_00580000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00589480
//
// 00589480  684ce78c00           push 0x8ce74c
// 00589485  8d4658               lea eax, [esi + 0x58]
// 00589488  50                   push eax
// 00589489  56                   push esi
// 0058948a  b838e78c00           mov eax, 0x8ce738
// 0058948f  e82cffffff           call 0x5893c0
// 00589494  6890e78c00           push 0x8ce790
// 00589499  8d4e68               lea ecx, [esi + 0x68]
// 0058949c  51                   push ecx
// 0058949d  56                   push esi
// 0058949e  b878e78c00           mov eax, 0x8ce778
// 005894a3  e818ffffff           call 0x5893c0
// 005894a8  686ce78c00           push 0x8ce76c
// 005894ad  8d565c               lea edx, [esi + 0x5c]
// 005894b0  52                   push edx
// 005894b1  56                   push esi
// 005894b2  b858e78c00           mov eax, 0x8ce758
// 005894b7  e804ffffff           call 0x5893c0
// 005894bc  6848e88c00           push 0x8ce848
// 005894c1  8d466c               lea eax, [esi + 0x6c]
// 005894c4  50                   push eax
// 005894c5  56                   push esi
// 005894c6  b834e88c00           mov eax, 0x8ce834
// 005894cb  e8f0feffff           call 0x5893c0
// 005894d0  83c430               add esp, 0x30
// 005894d3  c3                   ret 
// library jpeg-6b/jcparam.c (function _std_huff_tables)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
