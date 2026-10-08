// roc 2009-06 007821e0  unit: CXTPDockingPane  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007821e0
//
// 007821e0  56                   push esi
// 007821e1  8bf1                 mov esi, ecx
// 007821e3  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 007821e9  85c0                 test eax, eax
// 007821eb  7436                 je 0x782223
// 007821ed  6a00                 push 0
// 007821ef  50                   push eax
// 007821f0  ff1538ed8900         call dword ptr [0x89ed38]
// 007821f6  8d4e20               lea ecx, [esi + 0x20]
// 007821f9  e8023b0500           call 0x7d5d00
// 007821fe  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 00782204  85c0                 test eax, eax
// 00782206  7403                 je 0x78220b
// 00782208  8b4020               mov eax, dword ptr [eax + 0x20]
// 0078220b  50                   push eax
// 0078220c  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 00782212  50                   push eax
// 00782213  ff15a0ec8900         call dword ptr [0x89eca0]
// 00782219  c786b400000000000000 mov dword ptr [esi + 0xb4], 0
// 00782223  8d4e20               lea ecx, [esi + 0x20]
// 00782226  e8d53a0500           call 0x7d5d00
// 0078222b  8bc8                 mov ecx, eax
// 0078222d  5e                   pop esi
// 0078222e  e95dccfdff           jmp 0x75ee90
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?Detach@CXTPDockingPane@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
