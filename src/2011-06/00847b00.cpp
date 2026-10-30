// from server: 100% by auto
// roc 2011-06 00847b00  unit: CRobloxTreeCtrl  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00847b00
//
// 00847b00  56                   push esi
// 00847b01  8bf1                 mov esi, ecx
// 00847b03  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00847b06  e8e74c1800           call 0x9cc7f2
// 00847b0b  85c0                 test eax, eax
// 00847b0d  7510                 jne 0x847b1f
// 00847b0f  e8ccd8ffff           call 0x8453e0
// 00847b14  6a11                 push 0x11
// 00847b16  8bc8                 mov ecx, eax
// 00847b18  e893d0ffff           call 0x844bb0
// 00847b1d  5e                   pop esi
// 00847b1e  c3                   ret 
// 00847b1f  e89c950000           call 0x8510c0
// 00847b24  8bc8                 mov ecx, eax
// 00847b26  e865a50000           call 0x852090
// 00847b2b  3d47000400           cmp eax, 0x40047
// 00847b30  721b                 jb 0x847b4d
// 00847b32  8b4634               mov eax, dword ptr [esi + 0x34]
// 00847b35  8b4020               mov eax, dword ptr [eax + 0x20]
// 00847b38  6a00                 push 0
// 00847b3a  6a00                 push 0
// 00847b3c  6820110000           push 0x1120
// 00847b41  50                   push eax
// 00847b42  ff15c019a400         call dword ptr [0xa419c0]
// 00847b48  83f8ff               cmp eax, -1
// 00847b4b  750e                 jne 0x847b5b
// 00847b4d  e88ed8ffff           call 0x8453e0
// 00847b52  6a08                 push 8
// 00847b54  8bc8                 mov ecx, eax
// 00847b56  e855d0ffff           call 0x844bb0
// 00847b5b  5e                   pop esi
// 00847b5c  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?GetTreeTextColor@CXTPTreeBase@@MBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
