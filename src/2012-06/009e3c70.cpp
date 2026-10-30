// roc 2012-06 009e3c70  unit: CXTPDockingPane  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e3c70
//
// 009e3c70  56                   push esi
// 009e3c71  8bf1                 mov esi, ecx
// 009e3c73  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 009e3c7a  7425                 je 0x9e3ca1
// 009e3c7c  ff15e83bb200         call dword ptr [0xb23be8]
// 009e3c82  50                   push eax
// 009e3c83  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 009e3c89  50                   push eax
// 009e3c8a  ff15143db200         call dword ptr [0xb23d14]
// 009e3c90  85c0                 test eax, eax
// 009e3c92  750d                 jne 0x9e3ca1
// 009e3c94  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 009e3c9a  51                   push ecx
// 009e3c9b  ff15143cb200         call dword ptr [0xb23c14]
// 009e3ca1  5e                   pop esi
// 009e3ca2  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?SetFocus@CXTPDockingPane@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
