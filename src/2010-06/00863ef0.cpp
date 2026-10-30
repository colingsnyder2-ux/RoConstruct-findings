// roc 2010-06 00863ef0  unit: CXTPDockingPaneMiniWnd  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00863ef0
//
// 00863ef0  56                   push esi
// 00863ef1  8bf1                 mov esi, ecx
// 00863ef3  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 00863efa  0f84aa000000         je 0x863faa
// 00863f00  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 00863f07  0f8f9d000000         jg 0x863faa
// 00863f0d  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 00863f14  7429                 je 0x863f3f
// 00863f16  8b4620               mov eax, dword ptr [esi + 0x20]
// 00863f19  6a03                 push 3
// 00863f1b  50                   push eax
// 00863f1c  c7865001000000000000 mov dword ptr [esi + 0x150], 0
// 00863f26  c7864c01000000000000 mov dword ptr [esi + 0x14c], 0
// 00863f30  ff1560ba9e00         call dword ptr [0x9eba60]
// 00863f36  6a0b                 push 0xb
// 00863f38  8bce                 mov ecx, esi
// 00863f3a  e891fbffff           call 0x863ad0
// 00863f3f  6a0c                 push 0xc
// 00863f41  8bce                 mov ecx, esi
// 00863f43  e888fbffff           call 0x863ad0
// 00863f48  85c0                 test eax, eax
// 00863f4a  755e                 jne 0x863faa
// 00863f4c  c7864c01000001000000 mov dword ptr [esi + 0x14c], 1
// 00863f56  8b0d689cbe00         mov ecx, dword ptr [0xbe9c68]
// 00863f5c  85c9                 test ecx, ecx
// 00863f5e  740d                 je 0x863f6d
// 00863f60  a16c9cbe00           mov eax, dword ptr [0xbe9c6c]
// 00863f65  99                   cdq 
// 00863f66  f7f9                 idiv ecx
// 00863f68  83f801               cmp eax, 1
// 00863f6b  7d05                 jge 0x863f72
// 00863f6d  b801000000           mov eax, 1
// 00863f72  6a01                 push 1
// 00863f74  8bce                 mov ecx, esi
// 00863f76  89863c010000         mov dword ptr [esi + 0x13c], eax
// 00863f7c  898640010000         mov dword ptr [esi + 0x140], eax
// 00863f82  e8d9efffff           call 0x862f60
// 00863f87  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00863f8a  6a00                 push 0
// 00863f8c  6a64                 push 0x64
// 00863f8e  6a01                 push 1
// 00863f90  51                   push ecx
// 00863f91  c7864401000008000000 mov dword ptr [esi + 0x144], 8
// 00863f9b  ff1554bc9e00         call dword ptr [0x9ebc54]
// 00863fa1  6a0d                 push 0xd
// 00863fa3  8bce                 mov ecx, esi
// 00863fa5  e826fbffff           call 0x863ad0
// 00863faa  5e                   pop esi
// 00863fab  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?Expand@CXTPDockingPaneMiniWnd@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
