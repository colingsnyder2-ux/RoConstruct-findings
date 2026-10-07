// roc 2007-08 005cbef0  unit: seg_005c0000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cbef0
//
// 005cbef0  56                   push esi
// 005cbef1  8b742408             mov esi, dword ptr [esp + 8]
// 005cbef5  6810a47b00           push 0x7ba410
// 005cbefa  6a02                 push 2
// 005cbefc  56                   push esi
// 005cbefd  e86e2affff           call 0x5be970
// 005cbf02  6a01                 push 1
// 005cbf04  56                   push esi
// 005cbf05  e83618ffff           call 0x5bd740
// 005cbf0a  6a01                 push 1
// 005cbf0c  6a00                 push 0
// 005cbf0e  56                   push esi
// 005cbf0f  e87c23ffff           call 0x5be290
// 005cbf14  6aff                 push -1
// 005cbf16  56                   push esi
// 005cbf17  e85418ffff           call 0x5bd770
// 005cbf1c  83c428               add esp, 0x28
// 005cbf1f  85c0                 test eax, eax
// 005cbf21  750e                 jne 0x5cbf31
// 005cbf23  8b442410             mov eax, dword ptr [esp + 0x10]
// 005cbf27  c70000000000         mov dword ptr [eax], 0
// 005cbf2d  33c0                 xor eax, eax
// 005cbf2f  5e                   pop esi
// 005cbf30  c3                   ret 
// 005cbf31  6aff                 push -1
// 005cbf33  56                   push esi
// 005cbf34  e8e718ffff           call 0x5bd820
// 005cbf39  83c408               add esp, 8
// 005cbf3c  85c0                 test eax, eax
// 005cbf3e  741a                 je 0x5cbf5a
// 005cbf40  6a03                 push 3
// 005cbf42  56                   push esi
// 005cbf43  e83817ffff           call 0x5bd680
// 005cbf48  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005cbf4c  51                   push ecx
// 005cbf4d  6a03                 push 3
// 005cbf4f  56                   push esi
// 005cbf50  e82b1affff           call 0x5bd980
// 005cbf55  83c414               add esp, 0x14
// 005cbf58  5e                   pop esi
// 005cbf59  c3                   ret 
// 005cbf5a  68e8a37b00           push 0x7ba3e8
// 005cbf5f  56                   push esi
// 005cbf60  e87b29ffff           call 0x5be8e0
// 005cbf65  83c408               add esp, 8
// 005cbf68  33c0                 xor eax, eax
// 005cbf6a  5e                   pop esi
// 005cbf6b  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _generic_reader)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
