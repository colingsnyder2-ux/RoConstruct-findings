// from server: 100% by auto
// roc 2008-06 0075cda0  unit: CXTPDockingPaneMiniWnd  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075cda0
//
// 0075cda0  56                   push esi
// 0075cda1  8bf1                 mov esi, ecx
// 0075cda3  8b0db0999600         mov ecx, dword ptr [0x9699b0]
// 0075cda9  57                   push edi
// 0075cdaa  85c9                 test ecx, ecx
// 0075cdac  740d                 je 0x75cdbb
// 0075cdae  a1b4999600           mov eax, dword ptr [0x9699b4]
// 0075cdb3  99                   cdq 
// 0075cdb4  f7f9                 idiv ecx
// 0075cdb6  83f801               cmp eax, 1
// 0075cdb9  7d05                 jge 0x75cdc0
// 0075cdbb  b801000000           mov eax, 1
// 0075cdc0  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0075cdc6  898640010000         mov dword ptr [esi + 0x140], eax
// 0075cdcc  8b4620               mov eax, dword ptr [esi + 0x20]
// 0075cdcf  8dbe14010000         lea edi, [esi + 0x114]
// 0075cdd5  57                   push edi
// 0075cdd6  50                   push eax
// 0075cdd7  ff15342e8000         call dword ptr [0x802e34]
// 0075cddd  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0075cde0  2b4f04               sub ecx, dword ptr [edi + 4]
// 0075cde3  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0075cde8  898e38010000         mov dword ptr [esi + 0x138], ecx
// 0075cdee  c7864801000001000000 mov dword ptr [esi + 0x148], 1
// 0075cdf8  c7864c01000001000000 mov dword ptr [esi + 0x14c], 1
// 0075ce02  753f                 jne 0x75ce43
// 0075ce04  6a0a                 push 0xa
// 0075ce06  8bce                 mov ecx, esi
// 0075ce08  e853f8ffff           call 0x75c660
// 0075ce0d  85c0                 test eax, eax
// 0075ce0f  7532                 jne 0x75ce43
// 0075ce11  50                   push eax
// 0075ce12  8bce                 mov ecx, esi
// 0075ce14  898640010000         mov dword ptr [esi + 0x140], eax
// 0075ce1a  e8d1ecffff           call 0x75baf0
// 0075ce1f  8b5620               mov edx, dword ptr [esi + 0x20]
// 0075ce22  8b3d1c2e8000         mov edi, dword ptr [0x802e1c]
// 0075ce28  6a03                 push 3
// 0075ce2a  52                   push edx
// 0075ce2b  ffd7                 call edi
// 0075ce2d  8b4620               mov eax, dword ptr [esi + 0x20]
// 0075ce30  6a01                 push 1
// 0075ce32  50                   push eax
// 0075ce33  ffd7                 call edi
// 0075ce35  6a0b                 push 0xb
// 0075ce37  8bce                 mov ecx, esi
// 0075ce39  e822f8ffff           call 0x75c660
// 0075ce3e  5f                   pop edi
// 0075ce3f  5e                   pop esi
// 0075ce40  c20400               ret 4
// 0075ce43  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 0075ce4a  741f                 je 0x75ce6b
// 0075ce4c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0075ce4f  6a03                 push 3
// 0075ce51  51                   push ecx
// 0075ce52  c7865001000000000000 mov dword ptr [esi + 0x150], 0
// 0075ce5c  ff151c2e8000         call dword ptr [0x802e1c]
// 0075ce62  6a0b                 push 0xb
// 0075ce64  8bce                 mov ecx, esi
// 0075ce66  e8f5f7ffff           call 0x75c660
// 0075ce6b  8b5620               mov edx, dword ptr [esi + 0x20]
// 0075ce6e  6a00                 push 0
// 0075ce70  6a64                 push 0x64
// 0075ce72  6a01                 push 1
// 0075ce74  52                   push edx
// 0075ce75  c7864401000006000000 mov dword ptr [esi + 0x144], 6
// 0075ce7f  ff157c2d8000         call dword ptr [0x802d7c]
// 0075ce85  5f                   pop edi
// 0075ce86  5e                   pop esi
// 0075ce87  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?Collapse@CXTPDockingPaneMiniWnd@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
