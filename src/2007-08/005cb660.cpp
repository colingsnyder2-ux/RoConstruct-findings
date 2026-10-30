// from server: 100% by auto
// roc 2007-08 005cb660  unit: seg_005c0000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cb660
//
// 005cb660  6a01                 push 1
// 005cb662  6a00                 push 0
// 005cb664  56                   push esi
// 005cb665  e87628ffff           call 0x5bdee0
// 005cb66a  6a00                 push 0
// 005cb66c  6854597800           push 0x785954
// 005cb671  56                   push esi
// 005cb672  e83925ffff           call 0x5bdbb0
// 005cb677  6afe                 push -2
// 005cb679  56                   push esi
// 005cb67a  e8c120ffff           call 0x5bd740
// 005cb67f  6afe                 push -2
// 005cb681  56                   push esi
// 005cb682  e8d92affff           call 0x5be160
// 005cb687  6afe                 push -2
// 005cb689  56                   push esi
// 005cb68a  e8011fffff           call 0x5bd590
// 005cb68f  6afe                 push -2
// 005cb691  56                   push esi
// 005cb692  e8a920ffff           call 0x5bd740
// 005cb697  6874567a00           push 0x7a5674
// 005cb69c  6afe                 push -2
// 005cb69e  56                   push esi
// 005cb69f  e87c29ffff           call 0x5be020
// 005cb6a4  83c444               add esp, 0x44
// 005cb6a7  6afe                 push -2
// 005cb6a9  56                   push esi
// 005cb6aa  e8e11effff           call 0x5bd590
// 005cb6af  83c408               add esp, 8
// 005cb6b2  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _createmetatable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
