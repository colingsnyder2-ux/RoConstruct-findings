// from server: 100% by auto
// roc 2008-06 00707c90  unit: CXTPDockingPane  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00707c90
//
// 00707c90  56                   push esi
// 00707c91  8bf1                 mov esi, ecx
// 00707c93  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 00707c99  85c0                 test eax, eax
// 00707c9b  7436                 je 0x707cd3
// 00707c9d  6a00                 push 0
// 00707c9f  50                   push eax
// 00707ca0  ff15bc2c8000         call dword ptr [0x802cbc]
// 00707ca6  8d4e20               lea ecx, [esi + 0x20]
// 00707ca9  e8f2570500           call 0x75d4a0
// 00707cae  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 00707cb4  85c0                 test eax, eax
// 00707cb6  7403                 je 0x707cbb
// 00707cb8  8b4020               mov eax, dword ptr [eax + 0x20]
// 00707cbb  50                   push eax
// 00707cbc  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 00707cc2  50                   push eax
// 00707cc3  ff15b82b8000         call dword ptr [0x802bb8]
// 00707cc9  c786b400000000000000 mov dword ptr [esi + 0xb4], 0
// 00707cd3  8d4e20               lea ecx, [esi + 0x20]
// 00707cd6  e8c5570500           call 0x75d4a0
// 00707cdb  8bc8                 mov ecx, eax
// 00707cdd  5e                   pop esi
// 00707cde  e98de8fdff           jmp 0x6e6570
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?Detach@CXTPDockingPane@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
