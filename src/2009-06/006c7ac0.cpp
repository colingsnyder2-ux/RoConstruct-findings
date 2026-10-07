// roc 2009-06 006c7ac0  unit: seg_006c0000  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7ac0
//
// 006c7ac0  68eed8ffff           push 0xffffd8ee
// 006c7ac5  56                   push esi
// 006c7ac6  e87514ffff           call 0x6b8f40
// 006c7acb  6858c28e00           push 0x8ec258
// 006c7ad0  68eed8ffff           push 0xffffd8ee
// 006c7ad5  56                   push esi
// 006c7ad6  e8351dffff           call 0x6b9810
// 006c7adb  6870be8e00           push 0x8ebe70
// 006c7ae0  6858c28e00           push 0x8ec258
// 006c7ae5  56                   push esi
// 006c7ae6  e88535ffff           call 0x6bb070
// 006c7aeb  6a07                 push 7
// 006c7aed  6850c28e00           push 0x8ec250
// 006c7af2  56                   push esi
// 006c7af3  e88818ffff           call 0x6b9380
// 006c7af8  6844c28e00           push 0x8ec244
// 006c7afd  68eed8ffff           push 0xffffd8ee
// 006c7b02  56                   push esi
// 006c7b03  e8081dffff           call 0x6b9810
// 006c7b08  6a00                 push 0
// 006c7b0a  6830716c00           push 0x6c7130
// 006c7b0f  56                   push esi
// 006c7b10  e87b19ffff           call 0x6b9490
// 006c7b15  83c444               add esp, 0x44
// 006c7b18  6a01                 push 1
// 006c7b1a  6870716c00           push 0x6c7170
// 006c7b1f  56                   push esi
// 006c7b20  e86b19ffff           call 0x6b9490
// 006c7b25  683cc28e00           push 0x8ec23c
// 006c7b2a  6afe                 push -2
// 006c7b2c  56                   push esi
// 006c7b2d  e8de1cffff           call 0x6b9810
// 006c7b32  6a00                 push 0
// 006c7b34  68b0706c00           push 0x6c70b0
// 006c7b39  56                   push esi
// 006c7b3a  e85119ffff           call 0x6b9490
// 006c7b3f  6a01                 push 1
// 006c7b41  68f0706c00           push 0x6c70f0
// 006c7b46  56                   push esi
// 006c7b47  e84419ffff           call 0x6b9490
// 006c7b4c  6834c28e00           push 0x8ec234
// 006c7b51  6afe                 push -2
// 006c7b53  56                   push esi
// 006c7b54  e8b71cffff           call 0x6b9810
// 006c7b59  6a01                 push 1
// 006c7b5b  6a00                 push 0
// 006c7b5d  56                   push esi
// 006c7b5e  e84d1bffff           call 0x6b96b0
// 006c7b63  83c448               add esp, 0x48
// 006c7b66  6aff                 push -1
// 006c7b68  56                   push esi
// 006c7b69  e8d213ffff           call 0x6b8f40
// 006c7b6e  6afe                 push -2
// 006c7b70  56                   push esi
// 006c7b71  e8ea1dffff           call 0x6b9960
// 006c7b76  6a02                 push 2
// 006c7b78  6830c28e00           push 0x8ec230
// 006c7b7d  56                   push esi
// 006c7b7e  e8fd17ffff           call 0x6b9380
// 006c7b83  6828b08e00           push 0x8eb028
// 006c7b88  6afe                 push -2
// 006c7b8a  56                   push esi
// 006c7b8b  e8801cffff           call 0x6b9810
// 006c7b90  6a01                 push 1
// 006c7b92  6890766c00           push 0x6c7690
// 006c7b97  56                   push esi
// 006c7b98  e8f318ffff           call 0x6b9490
// 006c7b9d  6824c28e00           push 0x8ec224
// 006c7ba2  68eed8ffff           push 0xffffd8ee
// 006c7ba7  56                   push esi
// 006c7ba8  e8631cffff           call 0x6b9810
// 006c7bad  83c440               add esp, 0x40
// 006c7bb0  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _base_open)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
