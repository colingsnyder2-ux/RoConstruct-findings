// roc 2011-06 00847aa0  unit: CRobloxTreeCtrl  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00847aa0
//
// 00847aa0  56                   push esi
// 00847aa1  8bf1                 mov esi, ecx
// 00847aa3  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00847aa6  e8474d1800           call 0x9cc7f2
// 00847aab  85c0                 test eax, eax
// 00847aad  7510                 jne 0x847abf
// 00847aaf  e82cd9ffff           call 0x8453e0
// 00847ab4  6a0f                 push 0xf
// 00847ab6  8bc8                 mov ecx, eax
// 00847ab8  e8f3d0ffff           call 0x844bb0
// 00847abd  5e                   pop esi
// 00847abe  c3                   ret 
// 00847abf  e8fc950000           call 0x8510c0
// 00847ac4  8bc8                 mov ecx, eax
// 00847ac6  e8c5a50000           call 0x852090
// 00847acb  3d47000400           cmp eax, 0x40047
// 00847ad0  721b                 jb 0x847aed
// 00847ad2  8b4634               mov eax, dword ptr [esi + 0x34]
// 00847ad5  8b4020               mov eax, dword ptr [eax + 0x20]
// 00847ad8  6a00                 push 0
// 00847ada  6a00                 push 0
// 00847adc  681f110000           push 0x111f
// 00847ae1  50                   push eax
// 00847ae2  ff15c019a400         call dword ptr [0xa419c0]
// 00847ae8  83f8ff               cmp eax, -1
// 00847aeb  750e                 jne 0x847afb
// 00847aed  e8eed8ffff           call 0x8453e0
// 00847af2  6a05                 push 5
// 00847af4  8bc8                 mov ecx, eax
// 00847af6  e8b5d0ffff           call 0x844bb0
// 00847afb  5e                   pop esi
// 00847afc  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?GetTreeBackColor@CXTPTreeBase@@MBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
