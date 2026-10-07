// roc 2012-06 00858ec0  unit: seg_00850000  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00858ec0
//
// 00858ec0  68eed8ffff           push 0xffffd8ee
// 00858ec5  56                   push esi
// 00858ec6  e8e58dfdff           call 0x831cb0
// 00858ecb  68f056b900           push 0xb956f0
// 00858ed0  68eed8ffff           push 0xffffd8ee
// 00858ed5  56                   push esi
// 00858ed6  e8a596fdff           call 0x832580
// 00858edb  689840bd00           push 0xbd4098
// 00858ee0  68f056b900           push 0xb956f0
// 00858ee5  56                   push esi
// 00858ee6  e8e5adfdff           call 0x833cd0
// 00858eeb  6a07                 push 7
// 00858eed  682844bd00           push 0xbd4428
// 00858ef2  56                   push esi
// 00858ef3  e8f891fdff           call 0x8320f0
// 00858ef8  681c44bd00           push 0xbd441c
// 00858efd  68eed8ffff           push 0xffffd8ee
// 00858f02  56                   push esi
// 00858f03  e87896fdff           call 0x832580
// 00858f08  6a00                 push 0
// 00858f0a  6890858500           push 0x858590
// 00858f0f  56                   push esi
// 00858f10  e8eb92fdff           call 0x832200
// 00858f15  83c444               add esp, 0x44
// 00858f18  6a01                 push 1
// 00858f1a  68d0858500           push 0x8585d0
// 00858f1f  56                   push esi
// 00858f20  e8db92fdff           call 0x832200
// 00858f25  681444bd00           push 0xbd4414
// 00858f2a  6afe                 push -2
// 00858f2c  56                   push esi
// 00858f2d  e84e96fdff           call 0x832580
// 00858f32  6a00                 push 0
// 00858f34  6810858500           push 0x858510
// 00858f39  56                   push esi
// 00858f3a  e8c192fdff           call 0x832200
// 00858f3f  6a01                 push 1
// 00858f41  6850858500           push 0x858550
// 00858f46  56                   push esi
// 00858f47  e8b492fdff           call 0x832200
// 00858f4c  680c44bd00           push 0xbd440c
// 00858f51  6afe                 push -2
// 00858f53  56                   push esi
// 00858f54  e82796fdff           call 0x832580
// 00858f59  6a01                 push 1
// 00858f5b  6a00                 push 0
// 00858f5d  56                   push esi
// 00858f5e  e8bd94fdff           call 0x832420
// 00858f63  83c448               add esp, 0x48
// 00858f66  6aff                 push -1
// 00858f68  56                   push esi
// 00858f69  e8428dfdff           call 0x831cb0
// 00858f6e  6afe                 push -2
// 00858f70  56                   push esi
// 00858f71  e85a97fdff           call 0x8326d0
// 00858f76  6a02                 push 2
// 00858f78  680844bd00           push 0xbd4408
// 00858f7d  56                   push esi
// 00858f7e  e86d91fdff           call 0x8320f0
// 00858f83  68180cbd00           push 0xbd0c18
// 00858f88  6afe                 push -2
// 00858f8a  56                   push esi
// 00858f8b  e8f095fdff           call 0x832580
// 00858f90  6a01                 push 1
// 00858f92  68f08a8500           push 0x858af0
// 00858f97  56                   push esi
// 00858f98  e86392fdff           call 0x832200
// 00858f9d  68fc43bd00           push 0xbd43fc
// 00858fa2  68eed8ffff           push 0xffffd8ee
// 00858fa7  56                   push esi
// 00858fa8  e8d395fdff           call 0x832580
// 00858fad  83c440               add esp, 0x40
// 00858fb0  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _base_open)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
