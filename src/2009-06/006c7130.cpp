// from server: 100% by auto
// roc 2009-06 006c7130  unit: seg_006c0000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7130
//
// 006c7130  56                   push esi
// 006c7131  8b742408             mov esi, dword ptr [esp + 8]
// 006c7135  57                   push edi
// 006c7136  6a02                 push 2
// 006c7138  56                   push esi
// 006c7139  e8c23cffff           call 0x6bae00
// 006c713e  6a05                 push 5
// 006c7140  6a01                 push 1
// 006c7142  56                   push esi
// 006c7143  8bf8                 mov edi, eax
// 006c7145  e8f63affff           call 0x6bac40
// 006c714a  47                   inc edi
// 006c714b  57                   push edi
// 006c714c  56                   push esi
// 006c714d  e80e22ffff           call 0x6b9360
// 006c7152  57                   push edi
// 006c7153  6a01                 push 1
// 006c7155  56                   push esi
// 006c7156  e81525ffff           call 0x6b9670
// 006c715b  6aff                 push -1
// 006c715d  56                   push esi
// 006c715e  e80d1effff           call 0x6b8f70
// 006c7163  83c430               add esp, 0x30
// 006c7166  f7d8                 neg eax
// 006c7168  1bc0                 sbb eax, eax
// 006c716a  5f                   pop edi
// 006c716b  83e002               and eax, 2
// 006c716e  5e                   pop esi
// 006c716f  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _ipairsaux)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
