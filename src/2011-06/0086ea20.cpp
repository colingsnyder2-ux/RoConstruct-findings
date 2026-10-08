// roc 2011-06 0086ea20  unit: CXTPDockingPane  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086ea20
//
// 0086ea20  56                   push esi
// 0086ea21  8bf1                 mov esi, ecx
// 0086ea23  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 0086ea29  85c0                 test eax, eax
// 0086ea2b  7436                 je 0x86ea63
// 0086ea2d  6a00                 push 0
// 0086ea2f  50                   push eax
// 0086ea30  ff153c1ca400         call dword ptr [0xa41c3c]
// 0086ea36  8d4e20               lea ecx, [esi + 0x20]
// 0086ea39  e822330500           call 0x8c1d60
// 0086ea3e  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 0086ea44  85c0                 test eax, eax
// 0086ea46  7403                 je 0x86ea4b
// 0086ea48  8b4020               mov eax, dword ptr [eax + 0x20]
// 0086ea4b  50                   push eax
// 0086ea4c  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 0086ea52  50                   push eax
// 0086ea53  ff15a01aa400         call dword ptr [0xa41aa0]
// 0086ea59  c786b400000000000000 mov dword ptr [esi + 0xb4], 0
// 0086ea63  8d4e20               lea ecx, [esi + 0x20]
// 0086ea66  e8f5320500           call 0x8c1d60
// 0086ea6b  8bc8                 mov ecx, eax
// 0086ea6d  5e                   pop esi
// 0086ea6e  e98d0bfeff           jmp 0x84f600
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?Detach@CXTPDockingPane@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
