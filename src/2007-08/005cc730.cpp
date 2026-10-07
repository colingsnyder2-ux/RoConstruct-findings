// roc 2007-08 005cc730  unit: seg_005c0000  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cc730
//
// 005cc730  68eed8ffff           push 0xffffd8ee
// 005cc735  56                   push esi
// 005cc736  e80510ffff           call 0x5bd740
// 005cc73b  6850a57b00           push 0x7ba550
// 005cc740  68eed8ffff           push 0xffffd8ee
// 005cc745  56                   push esi
// 005cc746  e8d518ffff           call 0x5be020
// 005cc74b  6888a17b00           push 0x7ba188
// 005cc750  6850a57b00           push 0x7ba550
// 005cc755  56                   push esi
// 005cc756  e8a52fffff           call 0x5bf700
// 005cc75b  6a07                 push 7
// 005cc75d  6848a57b00           push 0x7ba548
// 005cc762  56                   push esi
// 005cc763  e84814ffff           call 0x5bdbb0
// 005cc768  683ca57b00           push 0x7ba53c
// 005cc76d  68eed8ffff           push 0xffffd8ee
// 005cc772  56                   push esi
// 005cc773  e8a818ffff           call 0x5be020
// 005cc778  6a00                 push 0
// 005cc77a  68c0bd5c00           push 0x5cbdc0
// 005cc77f  56                   push esi
// 005cc780  e83b15ffff           call 0x5bdcc0
// 005cc785  83c444               add esp, 0x44
// 005cc788  6a01                 push 1
// 005cc78a  6810be5c00           push 0x5cbe10
// 005cc78f  56                   push esi
// 005cc790  e82b15ffff           call 0x5bdcc0
// 005cc795  6834a57b00           push 0x7ba534
// 005cc79a  6afe                 push -2
// 005cc79c  56                   push esi
// 005cc79d  e87e18ffff           call 0x5be020
// 005cc7a2  6a00                 push 0
// 005cc7a4  6840bd5c00           push 0x5cbd40
// 005cc7a9  56                   push esi
// 005cc7aa  e81115ffff           call 0x5bdcc0
// 005cc7af  6a01                 push 1
// 005cc7b1  6880bd5c00           push 0x5cbd80
// 005cc7b6  56                   push esi
// 005cc7b7  e80415ffff           call 0x5bdcc0
// 005cc7bc  682ca57b00           push 0x7ba52c
// 005cc7c1  6afe                 push -2
// 005cc7c3  56                   push esi
// 005cc7c4  e85718ffff           call 0x5be020
// 005cc7c9  6a01                 push 1
// 005cc7cb  6a00                 push 0
// 005cc7cd  56                   push esi
// 005cc7ce  e80d17ffff           call 0x5bdee0
// 005cc7d3  83c448               add esp, 0x48
// 005cc7d6  6aff                 push -1
// 005cc7d8  56                   push esi
// 005cc7d9  e8620fffff           call 0x5bd740
// 005cc7de  6afe                 push -2
// 005cc7e0  56                   push esi
// 005cc7e1  e87a19ffff           call 0x5be160
// 005cc7e6  6a02                 push 2
// 005cc7e8  6828a57b00           push 0x7ba528
// 005cc7ed  56                   push esi
// 005cc7ee  e8bd13ffff           call 0x5bdbb0
// 005cc7f3  68b0917b00           push 0x7b91b0
// 005cc7f8  6afe                 push -2
// 005cc7fa  56                   push esi
// 005cc7fb  e82018ffff           call 0x5be020
// 005cc800  6a01                 push 1
// 005cc802  6820c35c00           push 0x5cc320
// 005cc807  56                   push esi
// 005cc808  e8b314ffff           call 0x5bdcc0
// 005cc80d  681ca57b00           push 0x7ba51c
// 005cc812  68eed8ffff           push 0xffffd8ee
// 005cc817  56                   push esi
// 005cc818  e80318ffff           call 0x5be020
// 005cc81d  83c440               add esp, 0x40
// 005cc820  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _base_open)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
