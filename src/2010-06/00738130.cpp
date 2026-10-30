// from server: 100% by auto
// roc 2010-06 00738130  unit: seg_00730000  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00738130
//
// 00738130  68eed8ffff           push 0xffffd8ee
// 00738135  56                   push esi
// 00738136  e8d58ffeff           call 0x721110
// 0073813b  68c0e9a400           push 0xa4e9c0
// 00738140  68eed8ffff           push 0xffffd8ee
// 00738145  56                   push esi
// 00738146  e89598feff           call 0x7219e0
// 0073814b  68e0e5a400           push 0xa4e5e0
// 00738150  68c0e9a400           push 0xa4e9c0
// 00738155  56                   push esi
// 00738156  e875b1feff           call 0x7232d0
// 0073815b  6a07                 push 7
// 0073815d  68b8e9a400           push 0xa4e9b8
// 00738162  56                   push esi
// 00738163  e8e893feff           call 0x721550
// 00738168  68ace9a400           push 0xa4e9ac
// 0073816d  68eed8ffff           push 0xffffd8ee
// 00738172  56                   push esi
// 00738173  e86898feff           call 0x7219e0
// 00738178  6a00                 push 0
// 0073817a  68a0777300           push 0x7377a0
// 0073817f  56                   push esi
// 00738180  e8db94feff           call 0x721660
// 00738185  83c444               add esp, 0x44
// 00738188  6a01                 push 1
// 0073818a  68e0777300           push 0x7377e0
// 0073818f  56                   push esi
// 00738190  e8cb94feff           call 0x721660
// 00738195  68a4e9a400           push 0xa4e9a4
// 0073819a  6afe                 push -2
// 0073819c  56                   push esi
// 0073819d  e83e98feff           call 0x7219e0
// 007381a2  6a00                 push 0
// 007381a4  6820777300           push 0x737720
// 007381a9  56                   push esi
// 007381aa  e8b194feff           call 0x721660
// 007381af  6a01                 push 1
// 007381b1  6860777300           push 0x737760
// 007381b6  56                   push esi
// 007381b7  e8a494feff           call 0x721660
// 007381bc  689ce9a400           push 0xa4e99c
// 007381c1  6afe                 push -2
// 007381c3  56                   push esi
// 007381c4  e81798feff           call 0x7219e0
// 007381c9  6a01                 push 1
// 007381cb  6a00                 push 0
// 007381cd  56                   push esi
// 007381ce  e8ad96feff           call 0x721880
// 007381d3  83c448               add esp, 0x48
// 007381d6  6aff                 push -1
// 007381d8  56                   push esi
// 007381d9  e8328ffeff           call 0x721110
// 007381de  6afe                 push -2
// 007381e0  56                   push esi
// 007381e1  e84a99feff           call 0x721b30
// 007381e6  6a02                 push 2
// 007381e8  6898e9a400           push 0xa4e998
// 007381ed  56                   push esi
// 007381ee  e85d93feff           call 0x721550
// 007381f3  6830d0a400           push 0xa4d030
// 007381f8  6afe                 push -2
// 007381fa  56                   push esi
// 007381fb  e8e097feff           call 0x7219e0
// 00738200  6a01                 push 1
// 00738202  68007d7300           push 0x737d00
// 00738207  56                   push esi
// 00738208  e85394feff           call 0x721660
// 0073820d  688ce9a400           push 0xa4e98c
// 00738212  68eed8ffff           push 0xffffd8ee
// 00738217  56                   push esi
// 00738218  e8c397feff           call 0x7219e0
// 0073821d  83c440               add esp, 0x40
// 00738220  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _base_open)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
