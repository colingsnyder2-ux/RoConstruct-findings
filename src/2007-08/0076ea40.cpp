// roc 2007-08 0076ea40  unit: seg_00760000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076ea40
//
// 0076ea40  56                   push esi
// 0076ea41  6a05                 push 5
// 0076ea43  33c9                 xor ecx, ecx
// 0076ea45  51                   push ecx
// 0076ea46  b820f14800           mov eax, 0x48f120
// 0076ea4b  50                   push eax
// 0076ea4c  33f6                 xor esi, esi
// 0076ea4e  56                   push esi
// 0076ea4f  bae0675500           mov edx, 0x5567e0
// 0076ea54  52                   push edx
// 0076ea55  6898b67900           push 0x79b698
// 0076ea5a  688cb67900           push 0x79b68c
// 0076ea5f  b900df8b00           mov ecx, 0x8bdf00
// 0076ea64  e867efd1ff           call 0x48d9d0
// 0076ea69  6810807700           push 0x778010
// 0076ea6e  e8b022ecff           call 0x630d23
// 0076ea73  83c404               add esp, 4
// 0076ea76  5e                   pop esi
// 0076ea77  c3                   ret 
// library rbxgs-net/Player.cpp (function ??__Eprop_Character@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
