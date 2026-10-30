// roc 2011-06 0086df40  unit: CXTPDockingPane  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086df40
//
// 0086df40  56                   push esi
// 0086df41  8bf1                 mov esi, ecx
// 0086df43  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0086df4a  7425                 je 0x86df71
// 0086df4c  ff15f819a400         call dword ptr [0xa419f8]
// 0086df52  50                   push eax
// 0086df53  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 0086df59  50                   push eax
// 0086df5a  ff15081ca400         call dword ptr [0xa41c08]
// 0086df60  85c0                 test eax, eax
// 0086df62  750d                 jne 0x86df71
// 0086df64  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 0086df6a  51                   push ecx
// 0086df6b  ff15c419a400         call dword ptr [0xa419c4]
// 0086df71  5e                   pop esi
// 0086df72  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?SetFocus@CXTPDockingPane@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
