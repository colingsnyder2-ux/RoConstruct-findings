// roc 2010-06 00810730  unit: CXTPDockingPane  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00810730
//
// 00810730  56                   push esi
// 00810731  8bf1                 mov esi, ecx
// 00810733  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0081073a  7425                 je 0x810761
// 0081073c  ff1580ba9e00         call dword ptr [0x9eba80]
// 00810742  50                   push eax
// 00810743  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 00810749  50                   push eax
// 0081074a  ff15acba9e00         call dword ptr [0x9ebaac]
// 00810750  85c0                 test eax, eax
// 00810752  750d                 jne 0x810761
// 00810754  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 0081075a  51                   push ecx
// 0081075b  ff1558ba9e00         call dword ptr [0x9eba58]
// 00810761  5e                   pop esi
// 00810762  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?SetFocus@CXTPDockingPane@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
