// roc 2012-06 009e4750  unit: CXTPDockingPane  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e4750
//
// 009e4750  56                   push esi
// 009e4751  8bf1                 mov esi, ecx
// 009e4753  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 009e4759  85c0                 test eax, eax
// 009e475b  7436                 je 0x9e4793
// 009e475d  6a00                 push 0
// 009e475f  50                   push eax
// 009e4760  ff15203bb200         call dword ptr [0xb23b20]
// 009e4766  8d4e20               lea ecx, [esi + 0x20]
// 009e4769  e8025a0500           call 0xa3a170
// 009e476e  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 009e4774  85c0                 test eax, eax
// 009e4776  7403                 je 0x9e477b
// 009e4778  8b4020               mov eax, dword ptr [eax + 0x20]
// 009e477b  50                   push eax
// 009e477c  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 009e4782  50                   push eax
// 009e4783  ff15ac3cb200         call dword ptr [0xb23cac]
// 009e4789  c786b400000000000000 mov dword ptr [esi + 0xb4], 0
// 009e4793  8d4e20               lea ecx, [esi + 0x20]
// 009e4796  e8d5590500           call 0xa3a170
// 009e479b  8bc8                 mov ecx, eax
// 009e479d  5e                   pop esi
// 009e479e  e92d33feff           jmp 0x9c7ad0
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?Detach@CXTPDockingPane@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
