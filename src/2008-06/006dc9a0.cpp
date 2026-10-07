// roc 2008-06 006dc9a0  unit: CRobloxTreeCtrl  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dc9a0
//
// 006dc9a0  56                   push esi
// 006dc9a1  8bf1                 mov esi, ecx
// 006dc9a3  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dc9a6  e8abf80d00           call 0x7bc256
// 006dc9ab  85c0                 test eax, eax
// 006dc9ad  7510                 jne 0x6dc9bf
// 006dc9af  e88c330000           call 0x6dfd40
// 006dc9b4  6a11                 push 0x11
// 006dc9b6  8bc8                 mov ecx, eax
// 006dc9b8  e8632b0000           call 0x6df520
// 006dc9bd  5e                   pop esi
// 006dc9be  c3                   ret 
// 006dc9bf  e86cb60000           call 0x6e8030
// 006dc9c4  8bc8                 mov ecx, eax
// 006dc9c6  e835c60000           call 0x6e9000
// 006dc9cb  3d47000400           cmp eax, 0x40047
// 006dc9d0  721b                 jb 0x6dc9ed
// 006dc9d2  8b4634               mov eax, dword ptr [esi + 0x34]
// 006dc9d5  8b4020               mov eax, dword ptr [eax + 0x20]
// 006dc9d8  6a00                 push 0
// 006dc9da  6a00                 push 0
// 006dc9dc  6820110000           push 0x1120
// 006dc9e1  50                   push eax
// 006dc9e2  ff15142e8000         call dword ptr [0x802e14]
// 006dc9e8  83f8ff               cmp eax, -1
// 006dc9eb  750e                 jne 0x6dc9fb
// 006dc9ed  e84e330000           call 0x6dfd40
// 006dc9f2  6a08                 push 8
// 006dc9f4  8bc8                 mov ecx, eax
// 006dc9f6  e8252b0000           call 0x6df520
// 006dc9fb  5e                   pop esi
// 006dc9fc  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?GetTreeTextColor@CXTTreeBase@@MBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
