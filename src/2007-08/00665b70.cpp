// roc 2007-08 00665b70  unit: CRobloxTreeCtrl  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00665b70
//
// 00665b70  56                   push esi
// 00665b71  8bf1                 mov esi, ecx
// 00665b73  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00665b76  e8f3290d00           call 0x73856e
// 00665b7b  85c0                 test eax, eax
// 00665b7d  7510                 jne 0x665b8f
// 00665b7f  e8ec330000           call 0x668f70
// 00665b84  6a0f                 push 0xf
// 00665b86  8bc8                 mov ecx, eax
// 00665b88  e8e32b0000           call 0x668770
// 00665b8d  5e                   pop esi
// 00665b8e  c3                   ret 
// 00665b8f  e8acb50000           call 0x671140
// 00665b94  8bc8                 mov ecx, eax
// 00665b96  e895c50000           call 0x672130
// 00665b9b  3d47000400           cmp eax, 0x40047
// 00665ba0  721b                 jb 0x665bbd
// 00665ba2  8b4634               mov eax, dword ptr [esi + 0x34]
// 00665ba5  8b4020               mov eax, dword ptr [eax + 0x20]
// 00665ba8  6a00                 push 0
// 00665baa  6a00                 push 0
// 00665bac  681f110000           push 0x111f
// 00665bb1  50                   push eax
// 00665bb2  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00665bb8  83f8ff               cmp eax, -1
// 00665bbb  750e                 jne 0x665bcb
// 00665bbd  e8ae330000           call 0x668f70
// 00665bc2  6a05                 push 5
// 00665bc4  8bc8                 mov ecx, eax
// 00665bc6  e8a52b0000           call 0x668770
// 00665bcb  5e                   pop esi
// 00665bcc  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?GetTreeBackColor@CXTTreeBase@@MBEKXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
