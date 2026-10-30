// roc 2010-06 00864210  unit: CXTPDockingPaneMiniWnd  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00864210
//
// 00864210  56                   push esi
// 00864211  8bf1                 mov esi, ecx
// 00864213  8b0d689cbe00         mov ecx, dword ptr [0xbe9c68]
// 00864219  57                   push edi
// 0086421a  85c9                 test ecx, ecx
// 0086421c  740d                 je 0x86422b
// 0086421e  a16c9cbe00           mov eax, dword ptr [0xbe9c6c]
// 00864223  99                   cdq 
// 00864224  f7f9                 idiv ecx
// 00864226  83f801               cmp eax, 1
// 00864229  7d05                 jge 0x864230
// 0086422b  b801000000           mov eax, 1
// 00864230  89863c010000         mov dword ptr [esi + 0x13c], eax
// 00864236  898640010000         mov dword ptr [esi + 0x140], eax
// 0086423c  8b4620               mov eax, dword ptr [esi + 0x20]
// 0086423f  8dbe14010000         lea edi, [esi + 0x114]
// 00864245  57                   push edi
// 00864246  50                   push eax
// 00864247  ff153cbc9e00         call dword ptr [0x9ebc3c]
// 0086424d  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00864250  2b4f04               sub ecx, dword ptr [edi + 4]
// 00864253  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00864258  898e38010000         mov dword ptr [esi + 0x138], ecx
// 0086425e  c7864801000001000000 mov dword ptr [esi + 0x148], 1
// 00864268  c7864c01000001000000 mov dword ptr [esi + 0x14c], 1
// 00864272  753f                 jne 0x8642b3
// 00864274  6a0a                 push 0xa
// 00864276  8bce                 mov ecx, esi
// 00864278  e853f8ffff           call 0x863ad0
// 0086427d  85c0                 test eax, eax
// 0086427f  7532                 jne 0x8642b3
// 00864281  50                   push eax
// 00864282  8bce                 mov ecx, esi
// 00864284  898640010000         mov dword ptr [esi + 0x140], eax
// 0086428a  e8d1ecffff           call 0x862f60
// 0086428f  8b5620               mov edx, dword ptr [esi + 0x20]
// 00864292  8b3d60ba9e00         mov edi, dword ptr [0x9eba60]
// 00864298  6a03                 push 3
// 0086429a  52                   push edx
// 0086429b  ffd7                 call edi
// 0086429d  8b4620               mov eax, dword ptr [esi + 0x20]
// 008642a0  6a01                 push 1
// 008642a2  50                   push eax
// 008642a3  ffd7                 call edi
// 008642a5  6a0b                 push 0xb
// 008642a7  8bce                 mov ecx, esi
// 008642a9  e822f8ffff           call 0x863ad0
// 008642ae  5f                   pop edi
// 008642af  5e                   pop esi
// 008642b0  c20400               ret 4
// 008642b3  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 008642ba  741f                 je 0x8642db
// 008642bc  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008642bf  6a03                 push 3
// 008642c1  51                   push ecx
// 008642c2  c7865001000000000000 mov dword ptr [esi + 0x150], 0
// 008642cc  ff1560ba9e00         call dword ptr [0x9eba60]
// 008642d2  6a0b                 push 0xb
// 008642d4  8bce                 mov ecx, esi
// 008642d6  e8f5f7ffff           call 0x863ad0
// 008642db  8b5620               mov edx, dword ptr [esi + 0x20]
// 008642de  6a00                 push 0
// 008642e0  6a64                 push 0x64
// 008642e2  6a01                 push 1
// 008642e4  52                   push edx
// 008642e5  c7864401000006000000 mov dword ptr [esi + 0x144], 6
// 008642ef  ff1554bc9e00         call dword ptr [0x9ebc54]
// 008642f5  5f                   pop edi
// 008642f6  5e                   pop esi
// 008642f7  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?Collapse@CXTPDockingPaneMiniWnd@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
