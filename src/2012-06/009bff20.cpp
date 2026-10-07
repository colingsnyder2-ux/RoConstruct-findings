// roc 2012-06 009bff20  unit: CRobloxTreeCtrl  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bff20
//
// 009bff20  56                   push esi
// 009bff21  8bf1                 mov esi, ecx
// 009bff23  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009bff26  e881980d00           call 0xa997ac
// 009bff2b  85c0                 test eax, eax
// 009bff2d  7510                 jne 0x9bff3f
// 009bff2f  e82cd9ffff           call 0x9bd860
// 009bff34  6a0f                 push 0xf
// 009bff36  8bc8                 mov ecx, eax
// 009bff38  e8a3d0ffff           call 0x9bcfe0
// 009bff3d  5e                   pop esi
// 009bff3e  c3                   ret 
// 009bff3f  e84c960000           call 0x9c9590
// 009bff44  8bc8                 mov ecx, eax
// 009bff46  e805a60000           call 0x9ca550
// 009bff4b  3d47000400           cmp eax, 0x40047
// 009bff50  721b                 jb 0x9bff6d
// 009bff52  8b4634               mov eax, dword ptr [esi + 0x34]
// 009bff55  8b4020               mov eax, dword ptr [eax + 0x20]
// 009bff58  6a00                 push 0
// 009bff5a  6a00                 push 0
// 009bff5c  681f110000           push 0x111f
// 009bff61  50                   push eax
// 009bff62  ff15043cb200         call dword ptr [0xb23c04]
// 009bff68  83f8ff               cmp eax, -1
// 009bff6b  750e                 jne 0x9bff7b
// 009bff6d  e8eed8ffff           call 0x9bd860
// 009bff72  6a05                 push 5
// 009bff74  8bc8                 mov ecx, eax
// 009bff76  e865d0ffff           call 0x9bcfe0
// 009bff7b  5e                   pop esi
// 009bff7c  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?GetTreeBackColor@CXTPTreeBase@@MBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
