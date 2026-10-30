// from server: 100% by auto
// roc 2007-08 005cba10  unit: seg_005c0000  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cba10
//
// 005cba10  83ec64               sub esp, 0x64
// 005cba13  6a01                 push 1
// 005cba15  56                   push esi
// 005cba16  e8551dffff           call 0x5bd770
// 005cba1b  83c408               add esp, 8
// 005cba1e  83f806               cmp eax, 6
// 005cba21  750f                 jne 0x5cba32
// 005cba23  6a01                 push 1
// 005cba25  56                   push esi
// 005cba26  e8151dffff           call 0x5bd740
// 005cba2b  83c408               add esp, 8
// 005cba2e  83c464               add esp, 0x64
// 005cba31  c3                   ret 
// 005cba32  57                   push edi
// 005cba33  6a01                 push 1
// 005cba35  6a01                 push 1
// 005cba37  56                   push esi
// 005cba38  e8c33affff           call 0x5bf500
// 005cba3d  8bf8                 mov edi, eax
// 005cba3f  83c40c               add esp, 0xc
// 005cba42  85ff                 test edi, edi
// 005cba44  7d10                 jge 0x5cba56
// 005cba46  682ca37b00           push 0x7ba32c
// 005cba4b  6a01                 push 1
// 005cba4d  56                   push esi
// 005cba4e  e82d37ffff           call 0x5bf180
// 005cba53  83c40c               add esp, 0xc
// 005cba56  8d442404             lea eax, [esp + 4]
// 005cba5a  50                   push eax
// 005cba5b  57                   push edi
// 005cba5c  56                   push esi
// 005cba5d  e8aeabffff           call 0x5c6610
// 005cba62  83c40c               add esp, 0xc
// 005cba65  85c0                 test eax, eax
// 005cba67  7510                 jne 0x5cba79
// 005cba69  681ca37b00           push 0x7ba31c
// 005cba6e  6a01                 push 1
// 005cba70  56                   push esi
// 005cba71  e80a37ffff           call 0x5bf180
// 005cba76  83c40c               add esp, 0xc
// 005cba79  8d4c2404             lea ecx, [esp + 4]
// 005cba7d  51                   push ecx
// 005cba7e  6818a37b00           push 0x7ba318
// 005cba83  56                   push esi
// 005cba84  e8f7b6ffff           call 0x5c7180
// 005cba89  6aff                 push -1
// 005cba8b  56                   push esi
// 005cba8c  e8df1cffff           call 0x5bd770
// 005cba91  83c414               add esp, 0x14
// 005cba94  85c0                 test eax, eax
// 005cba96  750f                 jne 0x5cbaa7
// 005cba98  57                   push edi
// 005cba99  68e4a27b00           push 0x7ba2e4
// 005cba9e  56                   push esi
// 005cba9f  e83c2effff           call 0x5be8e0
// 005cbaa4  83c40c               add esp, 0xc
// 005cbaa7  5f                   pop edi
// 005cbaa8  83c464               add esp, 0x64
// 005cbaab  c3                   ret 
// library lua-5.1.1/lbaselib.c (function _getfunc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.1 lbaselib.c
