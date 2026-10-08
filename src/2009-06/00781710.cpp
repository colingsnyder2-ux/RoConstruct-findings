// roc 2009-06 00781710  unit: CXTPDockingPane  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00781710
//
// 00781710  56                   push esi
// 00781711  8bf1                 mov esi, ecx
// 00781713  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0078171a  7425                 je 0x781741
// 0078171c  ff1578ee8900         call dword ptr [0x89ee78]
// 00781722  50                   push eax
// 00781723  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 00781729  50                   push eax
// 0078172a  ff1508ef8900         call dword ptr [0x89ef08]
// 00781730  85c0                 test eax, eax
// 00781732  750d                 jne 0x781741
// 00781734  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 0078173a  51                   push ecx
// 0078173b  ff158cee8900         call dword ptr [0x89ee8c]
// 00781741  5e                   pop esi
// 00781742  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?SetFocus@CXTPDockingPane@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
