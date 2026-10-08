// from server: 100% by auto
// roc 2008-06 0075ca80  unit: CXTPDockingPaneMiniWnd  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075ca80
//
// 0075ca80  56                   push esi
// 0075ca81  8bf1                 mov esi, ecx
// 0075ca83  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 0075ca8a  0f84aa000000         je 0x75cb3a
// 0075ca90  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 0075ca97  0f8f9d000000         jg 0x75cb3a
// 0075ca9d  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 0075caa4  7429                 je 0x75cacf
// 0075caa6  8b4620               mov eax, dword ptr [esi + 0x20]
// 0075caa9  6a03                 push 3
// 0075caab  50                   push eax
// 0075caac  c7865001000000000000 mov dword ptr [esi + 0x150], 0
// 0075cab6  c7864c01000000000000 mov dword ptr [esi + 0x14c], 0
// 0075cac0  ff151c2e8000         call dword ptr [0x802e1c]
// 0075cac6  6a0b                 push 0xb
// 0075cac8  8bce                 mov ecx, esi
// 0075caca  e891fbffff           call 0x75c660
// 0075cacf  6a0c                 push 0xc
// 0075cad1  8bce                 mov ecx, esi
// 0075cad3  e888fbffff           call 0x75c660
// 0075cad8  85c0                 test eax, eax
// 0075cada  755e                 jne 0x75cb3a
// 0075cadc  c7864c01000001000000 mov dword ptr [esi + 0x14c], 1
// 0075cae6  8b0db0999600         mov ecx, dword ptr [0x9699b0]
// 0075caec  85c9                 test ecx, ecx
// 0075caee  740d                 je 0x75cafd
// 0075caf0  a1b4999600           mov eax, dword ptr [0x9699b4]
// 0075caf5  99                   cdq 
// 0075caf6  f7f9                 idiv ecx
// 0075caf8  83f801               cmp eax, 1
// 0075cafb  7d05                 jge 0x75cb02
// 0075cafd  b801000000           mov eax, 1
// 0075cb02  6a01                 push 1
// 0075cb04  8bce                 mov ecx, esi
// 0075cb06  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0075cb0c  898640010000         mov dword ptr [esi + 0x140], eax
// 0075cb12  e8d9efffff           call 0x75baf0
// 0075cb17  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0075cb1a  6a00                 push 0
// 0075cb1c  6a64                 push 0x64
// 0075cb1e  6a01                 push 1
// 0075cb20  51                   push ecx
// 0075cb21  c7864401000008000000 mov dword ptr [esi + 0x144], 8
// 0075cb2b  ff157c2d8000         call dword ptr [0x802d7c]
// 0075cb31  6a0d                 push 0xd
// 0075cb33  8bce                 mov ecx, esi
// 0075cb35  e826fbffff           call 0x75c660
// 0075cb3a  5e                   pop esi
// 0075cb3b  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?Expand@CXTPDockingPaneMiniWnd@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
