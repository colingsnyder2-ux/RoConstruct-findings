// from server: 99% by colin
// roc 2007-08 0076eb80  unit: seg_00760000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076eb80
//
// 0076eb80  56                   push esi
// 0076eb81  6a05                 push 5
// 0076eb83  33c9                 xor ecx, ecx
// 0076eb85  51                   push ecx
// 0076eb86  b870f24800           mov eax, 0x447310
// 0076eb8b  50                   push eax
// 0076eb8c  33f6                 xor esi, esi
// 0076eb8e  56                   push esi
// 0076eb8f  ba70684800           mov edx, 0x444dd0
// 0076eb94  52                   push edx
// 0076eb95  68fcb67900           push 0x790178
// 0076eb9a  68f0b67900           push 0x7901d0
// 0076eb9f  b978de8b00           mov ecx, 0x8bbcdc
// 0076eba4  e8a7f2d1ff           call 0x446ab0
// 0076eba9  68d0807700           push 0x777cc0
// 0076ebae  e87021ecff           call 0x630d23
// 0076ebb3  83c404               add esp, 4
// 0076ebb6  5e                   pop esi
// 0076ebb7  c3                   ret 
// library rbxgs-net/Player.cpp (function ??__Eprop_teamColor@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp