// roc 2012-06 009bff80  unit: CRobloxTreeCtrl  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bff80
//
// 009bff80  56                   push esi
// 009bff81  8bf1                 mov esi, ecx
// 009bff83  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009bff86  e821980d00           call 0xa997ac
// 009bff8b  85c0                 test eax, eax
// 009bff8d  7510                 jne 0x9bff9f
// 009bff8f  e8ccd8ffff           call 0x9bd860
// 009bff94  6a11                 push 0x11
// 009bff96  8bc8                 mov ecx, eax
// 009bff98  e843d0ffff           call 0x9bcfe0
// 009bff9d  5e                   pop esi
// 009bff9e  c3                   ret 
// 009bff9f  e8ec950000           call 0x9c9590
// 009bffa4  8bc8                 mov ecx, eax
// 009bffa6  e8a5a50000           call 0x9ca550
// 009bffab  3d47000400           cmp eax, 0x40047
// 009bffb0  721b                 jb 0x9bffcd
// 009bffb2  8b4634               mov eax, dword ptr [esi + 0x34]
// 009bffb5  8b4020               mov eax, dword ptr [eax + 0x20]
// 009bffb8  6a00                 push 0
// 009bffba  6a00                 push 0
// 009bffbc  6820110000           push 0x1120
// 009bffc1  50                   push eax
// 009bffc2  ff15043cb200         call dword ptr [0xb23c04]
// 009bffc8  83f8ff               cmp eax, -1
// 009bffcb  750e                 jne 0x9bffdb
// 009bffcd  e88ed8ffff           call 0x9bd860
// 009bffd2  6a08                 push 8
// 009bffd4  8bc8                 mov ecx, eax
// 009bffd6  e805d0ffff           call 0x9bcfe0
// 009bffdb  5e                   pop esi
// 009bffdc  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?GetTreeTextColor@CXTPTreeBase@@MBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
