// roc 2009-12 008b0140  unit: CXTPDockingPaneMiniWnd  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b0140
//
// 008b0140  56                   push esi
// 008b0141  8bf1                 mov esi, ecx
// 008b0143  8b0db08eb600         mov ecx, dword ptr [0xb68eb0]
// 008b0149  57                   push edi
// 008b014a  85c9                 test ecx, ecx
// 008b014c  740d                 je 0x8b015b
// 008b014e  a1b48eb600           mov eax, dword ptr [0xb68eb4]
// 008b0153  99                   cdq 
// 008b0154  f7f9                 idiv ecx
// 008b0156  83f801               cmp eax, 1
// 008b0159  7d05                 jge 0x8b0160
// 008b015b  b801000000           mov eax, 1
// 008b0160  89863c010000         mov dword ptr [esi + 0x13c], eax
// 008b0166  898640010000         mov dword ptr [esi + 0x140], eax
// 008b016c  8b4620               mov eax, dword ptr [esi + 0x20]
// 008b016f  8dbe14010000         lea edi, [esi + 0x114]
// 008b0175  57                   push edi
// 008b0176  50                   push eax
// 008b0177  ff1570cc9800         call dword ptr [0x98cc70]
// 008b017d  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 008b0180  2b4f04               sub ecx, dword ptr [edi + 4]
// 008b0183  837c240c00           cmp dword ptr [esp + 0xc], 0
// 008b0188  898e38010000         mov dword ptr [esi + 0x138], ecx
// 008b018e  c7864801000001000000 mov dword ptr [esi + 0x148], 1
// 008b0198  c7864c01000001000000 mov dword ptr [esi + 0x14c], 1
// 008b01a2  753f                 jne 0x8b01e3
// 008b01a4  6a0a                 push 0xa
// 008b01a6  8bce                 mov ecx, esi
// 008b01a8  e833f8ffff           call 0x8af9e0
// 008b01ad  85c0                 test eax, eax
// 008b01af  7532                 jne 0x8b01e3
// 008b01b1  50                   push eax
// 008b01b2  8bce                 mov ecx, esi
// 008b01b4  898640010000         mov dword ptr [esi + 0x140], eax
// 008b01ba  e8d1ecffff           call 0x8aee90
// 008b01bf  8b5620               mov edx, dword ptr [esi + 0x20]
// 008b01c2  8b3dd0cb9800         mov edi, dword ptr [0x98cbd0]
// 008b01c8  6a03                 push 3
// 008b01ca  52                   push edx
// 008b01cb  ffd7                 call edi
// 008b01cd  8b4620               mov eax, dword ptr [esi + 0x20]
// 008b01d0  6a01                 push 1
// 008b01d2  50                   push eax
// 008b01d3  ffd7                 call edi
// 008b01d5  6a0b                 push 0xb
// 008b01d7  8bce                 mov ecx, esi
// 008b01d9  e802f8ffff           call 0x8af9e0
// 008b01de  5f                   pop edi
// 008b01df  5e                   pop esi
// 008b01e0  c20400               ret 4
// 008b01e3  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 008b01ea  741f                 je 0x8b020b
// 008b01ec  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b01ef  6a03                 push 3
// 008b01f1  51                   push ecx
// 008b01f2  c7865001000000000000 mov dword ptr [esi + 0x150], 0
// 008b01fc  ff15d0cb9800         call dword ptr [0x98cbd0]
// 008b0202  6a0b                 push 0xb
// 008b0204  8bce                 mov ecx, esi
// 008b0206  e8d5f7ffff           call 0x8af9e0
// 008b020b  8b5620               mov edx, dword ptr [esi + 0x20]
// 008b020e  6a00                 push 0
// 008b0210  6a64                 push 0x64
// 008b0212  6a01                 push 1
// 008b0214  52                   push edx
// 008b0215  c7864401000006000000 mov dword ptr [esi + 0x144], 6
// 008b021f  ff1558cc9800         call dword ptr [0x98cc58]
// 008b0225  5f                   pop edi
// 008b0226  5e                   pop esi
// 008b0227  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?Collapse@CXTPDockingPaneMiniWnd@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
