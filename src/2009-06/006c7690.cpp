// roc 2009-06 006c7690  unit: seg_006c0000  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7690
//
// 006c7690  56                   push esi
// 006c7691  8b742408             mov esi, dword ptr [esp + 8]
// 006c7695  6a01                 push 1
// 006c7697  56                   push esi
// 006c7698  e8f316ffff           call 0x6b8d90
// 006c769d  6a00                 push 0
// 006c769f  56                   push esi
// 006c76a0  e82b27ffff           call 0x6b9dd0
// 006c76a5  6a01                 push 1
// 006c76a7  56                   push esi
// 006c76a8  e8a31affff           call 0x6b9150
// 006c76ad  83c418               add esp, 0x18
// 006c76b0  85c0                 test eax, eax
// 006c76b2  0f84a5000000         je 0x6c775d
// 006c76b8  6a01                 push 1
// 006c76ba  56                   push esi
// 006c76bb  e8b018ffff           call 0x6b8f70
// 006c76c0  83c408               add esp, 8
// 006c76c3  83f801               cmp eax, 1
// 006c76c6  753a                 jne 0x6c7702
// 006c76c8  6a00                 push 0
// 006c76ca  6a00                 push 0
// 006c76cc  56                   push esi
// 006c76cd  e8de1fffff           call 0x6b96b0
// 006c76d2  6aff                 push -1
// 006c76d4  56                   push esi
// 006c76d5  e86618ffff           call 0x6b8f40
// 006c76da  6a01                 push 1
// 006c76dc  56                   push esi
// 006c76dd  e84e1effff           call 0x6b9530
// 006c76e2  68edd8ffff           push 0xffffd8ed
// 006c76e7  56                   push esi
// 006c76e8  e88321ffff           call 0x6b9870
// 006c76ed  83c424               add esp, 0x24
// 006c76f0  6a02                 push 2
// 006c76f2  56                   push esi
// 006c76f3  e86822ffff           call 0x6b9960
// 006c76f8  83c408               add esp, 8
// 006c76fb  b801000000           mov eax, 1
// 006c7700  5e                   pop esi
// 006c7701  c3                   ret 
// 006c7702  6a01                 push 1
// 006c7704  56                   push esi
// 006c7705  e80620ffff           call 0x6b9710
// 006c770a  83c408               add esp, 8
// 006c770d  85c0                 test eax, eax
// 006c770f  7426                 je 0x6c7737
// 006c7711  57                   push edi
// 006c7712  68edd8ffff           push 0xffffd8ed
// 006c7717  56                   push esi
// 006c7718  e8131fffff           call 0x6b9630
// 006c771d  6aff                 push -1
// 006c771f  56                   push esi
// 006c7720  e82b1affff           call 0x6b9150
// 006c7725  6afe                 push -2
// 006c7727  56                   push esi
// 006c7728  8bf8                 mov edi, eax
// 006c772a  e86116ffff           call 0x6b8d90
// 006c772f  83c418               add esp, 0x18
// 006c7732  85ff                 test edi, edi
// 006c7734  5f                   pop edi
// 006c7735  7510                 jne 0x6c7747
// 006c7737  6884c18e00           push 0x8ec184
// 006c773c  6a01                 push 1
// 006c773e  56                   push esi
// 006c773f  e88c33ffff           call 0x6baad0
// 006c7744  83c40c               add esp, 0xc
// 006c7747  6a01                 push 1
// 006c7749  56                   push esi
// 006c774a  e8c11fffff           call 0x6b9710
// 006c774f  83c408               add esp, 8
// 006c7752  6a02                 push 2
// 006c7754  56                   push esi
// 006c7755  e80622ffff           call 0x6b9960
// 006c775a  83c408               add esp, 8
// 006c775d  b801000000           mov eax, 1
// 006c7762  5e                   pop esi
// 006c7763  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_newproxy)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
