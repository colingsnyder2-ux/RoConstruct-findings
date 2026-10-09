// roc 2009-12 0085c760  unit: CXTPDockingPane  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085c760
//
// 0085c760  56                   push esi
// 0085c761  8bf1                 mov esi, ecx
// 0085c763  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0085c76a  7425                 je 0x85c791
// 0085c76c  ff15eccb9800         call dword ptr [0x98cbec]
// 0085c772  50                   push eax
// 0085c773  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 0085c779  50                   push eax
// 0085c77a  ff15f4ca9800         call dword ptr [0x98caf4]
// 0085c780  85c0                 test eax, eax
// 0085c782  750d                 jne 0x85c791
// 0085c784  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 0085c78a  51                   push ecx
// 0085c78b  ff15c8cb9800         call dword ptr [0x98cbc8]
// 0085c791  5e                   pop esi
// 0085c792  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?SetFocus@CXTPDockingPane@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
