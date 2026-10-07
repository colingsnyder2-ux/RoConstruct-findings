// roc 2008-06 007071c0  unit: CXTPDockingPane  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007071c0
//
// 007071c0  56                   push esi
// 007071c1  8bf1                 mov esi, ecx
// 007071c3  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 007071ca  7425                 je 0x7071f1
// 007071cc  ff15102e8000         call dword ptr [0x802e10]
// 007071d2  50                   push eax
// 007071d3  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 007071d9  50                   push eax
// 007071da  ff15742b8000         call dword ptr [0x802b74]
// 007071e0  85c0                 test eax, eax
// 007071e2  750d                 jne 0x7071f1
// 007071e4  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 007071ea  51                   push ecx
// 007071eb  ff15242e8000         call dword ptr [0x802e24]
// 007071f1  5e                   pop esi
// 007071f2  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?SetFocus@CXTPDockingPane@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
