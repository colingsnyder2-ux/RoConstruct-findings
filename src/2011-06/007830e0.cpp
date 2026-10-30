// from server: 100% by auto
// roc 2011-06 007830e0  unit: seg_00780000  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007830e0
//
// 007830e0  68eed8ffff           push 0xffffd8ee
// 007830e5  56                   push esi
// 007830e6  e835f4fdff           call 0x762520
// 007830eb  687c50a900           push 0xa9507c
// 007830f0  68eed8ffff           push 0xffffd8ee
// 007830f5  56                   push esi
// 007830f6  e8f5fcfdff           call 0x762df0
// 007830fb  68e87fab00           push 0xab7fe8
// 00783100  687c50a900           push 0xa9507c
// 00783105  56                   push esi
// 00783106  e83514feff           call 0x764540
// 0078310b  6a07                 push 7
// 0078310d  687883ab00           push 0xab8378
// 00783112  56                   push esi
// 00783113  e848f8fdff           call 0x762960
// 00783118  686c83ab00           push 0xab836c
// 0078311d  68eed8ffff           push 0xffffd8ee
// 00783122  56                   push esi
// 00783123  e8c8fcfdff           call 0x762df0
// 00783128  6a00                 push 0
// 0078312a  68b0277800           push 0x7827b0
// 0078312f  56                   push esi
// 00783130  e83bf9fdff           call 0x762a70
// 00783135  83c444               add esp, 0x44
// 00783138  6a01                 push 1
// 0078313a  68f0277800           push 0x7827f0
// 0078313f  56                   push esi
// 00783140  e82bf9fdff           call 0x762a70
// 00783145  686483ab00           push 0xab8364
// 0078314a  6afe                 push -2
// 0078314c  56                   push esi
// 0078314d  e89efcfdff           call 0x762df0
// 00783152  6a00                 push 0
// 00783154  6830277800           push 0x782730
// 00783159  56                   push esi
// 0078315a  e811f9fdff           call 0x762a70
// 0078315f  6a01                 push 1
// 00783161  6870277800           push 0x782770
// 00783166  56                   push esi
// 00783167  e804f9fdff           call 0x762a70
// 0078316c  685c83ab00           push 0xab835c
// 00783171  6afe                 push -2
// 00783173  56                   push esi
// 00783174  e877fcfdff           call 0x762df0
// 00783179  6a01                 push 1
// 0078317b  6a00                 push 0
// 0078317d  56                   push esi
// 0078317e  e80dfbfdff           call 0x762c90
// 00783183  83c448               add esp, 0x48
// 00783186  6aff                 push -1
// 00783188  56                   push esi
// 00783189  e892f3fdff           call 0x762520
// 0078318e  6afe                 push -2
// 00783190  56                   push esi
// 00783191  e8aafdfdff           call 0x762f40
// 00783196  6a02                 push 2
// 00783198  685883ab00           push 0xab8358
// 0078319d  56                   push esi
// 0078319e  e8bdf7fdff           call 0x762960
// 007831a3  684466ab00           push 0xab6644
// 007831a8  6afe                 push -2
// 007831aa  56                   push esi
// 007831ab  e840fcfdff           call 0x762df0
// 007831b0  6a01                 push 1
// 007831b2  68102d7800           push 0x782d10
// 007831b7  56                   push esi
// 007831b8  e8b3f8fdff           call 0x762a70
// 007831bd  684c83ab00           push 0xab834c
// 007831c2  68eed8ffff           push 0xffffd8ee
// 007831c7  56                   push esi
// 007831c8  e823fcfdff           call 0x762df0
// 007831cd  83c440               add esp, 0x40
// 007831d0  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _base_open)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
