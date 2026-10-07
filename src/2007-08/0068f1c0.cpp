// roc 2007-08 0068f1c0  unit: CXTPDockingPane  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f1c0
//
// 0068f1c0  56                   push esi
// 0068f1c1  8bf1                 mov esi, ecx
// 0068f1c3  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0068f1ca  7425                 je 0x68f1f1
// 0068f1cc  ff15d4ec7700         call dword ptr [0x77ecd4]
// 0068f1d2  50                   push eax
// 0068f1d3  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 0068f1d9  50                   push eax
// 0068f1da  ff1574ee7700         call dword ptr [0x77ee74]
// 0068f1e0  85c0                 test eax, eax
// 0068f1e2  750d                 jne 0x68f1f1
// 0068f1e4  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 0068f1ea  51                   push ecx
// 0068f1eb  ff15ecec7700         call dword ptr [0x77ecec]
// 0068f1f1  5e                   pop esi
// 0068f1f2  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPane.cpp (function ?SetFocus@CXTPDockingPane@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPane.cpp
