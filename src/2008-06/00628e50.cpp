// roc 2008-06 00628e50  unit: seg_00620000  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00628e50
//
// 00628e50  68eed8ffff           push 0xffffd8ee
// 00628e55  56                   push esi
// 00628e56  e8758ffeff           call 0x611dd0
// 00628e5b  68dc578400           push 0x8457dc
// 00628e60  68eed8ffff           push 0xffffd8ee
// 00628e65  56                   push esi
// 00628e66  e84598feff           call 0x6126b0
// 00628e6b  6808548400           push 0x845408
// 00628e70  68dc578400           push 0x8457dc
// 00628e75  56                   push esi
// 00628e76  e8f58bfeff           call 0x611a70
// 00628e7b  6a07                 push 7
// 00628e7d  68d4578400           push 0x8457d4
// 00628e82  56                   push esi
// 00628e83  e8b893feff           call 0x612240
// 00628e88  68c8578400           push 0x8457c8
// 00628e8d  68eed8ffff           push 0xffffd8ee
// 00628e92  56                   push esi
// 00628e93  e81898feff           call 0x6126b0
// 00628e98  6a00                 push 0
// 00628e9a  6800856200           push 0x628500
// 00628e9f  56                   push esi
// 00628ea0  e8ab94feff           call 0x612350
// 00628ea5  83c444               add esp, 0x44
// 00628ea8  6a01                 push 1
// 00628eaa  6840856200           push 0x628540
// 00628eaf  56                   push esi
// 00628eb0  e89b94feff           call 0x612350
// 00628eb5  68c0578400           push 0x8457c0
// 00628eba  6afe                 push -2
// 00628ebc  56                   push esi
// 00628ebd  e8ee97feff           call 0x6126b0
// 00628ec2  6a00                 push 0
// 00628ec4  6880846200           push 0x628480
// 00628ec9  56                   push esi
// 00628eca  e88194feff           call 0x612350
// 00628ecf  6a01                 push 1
// 00628ed1  68c0846200           push 0x6284c0
// 00628ed6  56                   push esi
// 00628ed7  e87494feff           call 0x612350
// 00628edc  68b8578400           push 0x8457b8
// 00628ee1  6afe                 push -2
// 00628ee3  56                   push esi
// 00628ee4  e8c797feff           call 0x6126b0
// 00628ee9  6a01                 push 1
// 00628eeb  6a00                 push 0
// 00628eed  56                   push esi
// 00628eee  e87d96feff           call 0x612570
// 00628ef3  83c448               add esp, 0x48
// 00628ef6  6aff                 push -1
// 00628ef8  56                   push esi
// 00628ef9  e8d28efeff           call 0x611dd0
// 00628efe  6afe                 push -2
// 00628f00  56                   push esi
// 00628f01  e8ea98feff           call 0x6127f0
// 00628f06  6a02                 push 2
// 00628f08  68b4578400           push 0x8457b4
// 00628f0d  56                   push esi
// 00628f0e  e82d93feff           call 0x612240
// 00628f13  6868418400           push 0x844168
// 00628f18  6afe                 push -2
// 00628f1a  56                   push esi
// 00628f1b  e89097feff           call 0x6126b0
// 00628f20  6a01                 push 1
// 00628f22  68408a6200           push 0x628a40
// 00628f27  56                   push esi
// 00628f28  e82394feff           call 0x612350
// 00628f2d  68a8578400           push 0x8457a8
// 00628f32  68eed8ffff           push 0xffffd8ee
// 00628f37  56                   push esi
// 00628f38  e87397feff           call 0x6126b0
// 00628f3d  83c440               add esp, 0x40
// 00628f40  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _base_open)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
