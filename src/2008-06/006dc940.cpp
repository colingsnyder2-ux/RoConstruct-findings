// roc 2008-06 006dc940  unit: CRobloxTreeCtrl  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dc940
//
// 006dc940  56                   push esi
// 006dc941  8bf1                 mov esi, ecx
// 006dc943  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dc946  e80bf90d00           call 0x7bc256
// 006dc94b  85c0                 test eax, eax
// 006dc94d  7510                 jne 0x6dc95f
// 006dc94f  e8ec330000           call 0x6dfd40
// 006dc954  6a0f                 push 0xf
// 006dc956  8bc8                 mov ecx, eax
// 006dc958  e8c32b0000           call 0x6df520
// 006dc95d  5e                   pop esi
// 006dc95e  c3                   ret 
// 006dc95f  e8ccb60000           call 0x6e8030
// 006dc964  8bc8                 mov ecx, eax
// 006dc966  e895c60000           call 0x6e9000
// 006dc96b  3d47000400           cmp eax, 0x40047
// 006dc970  721b                 jb 0x6dc98d
// 006dc972  8b4634               mov eax, dword ptr [esi + 0x34]
// 006dc975  8b4020               mov eax, dword ptr [eax + 0x20]
// 006dc978  6a00                 push 0
// 006dc97a  6a00                 push 0
// 006dc97c  681f110000           push 0x111f
// 006dc981  50                   push eax
// 006dc982  ff15142e8000         call dword ptr [0x802e14]
// 006dc988  83f8ff               cmp eax, -1
// 006dc98b  750e                 jne 0x6dc99b
// 006dc98d  e8ae330000           call 0x6dfd40
// 006dc992  6a05                 push 5
// 006dc994  8bc8                 mov ecx, eax
// 006dc996  e8852b0000           call 0x6df520
// 006dc99b  5e                   pop esi
// 006dc99c  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?GetTreeBackColor@CXTTreeBase@@MBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
