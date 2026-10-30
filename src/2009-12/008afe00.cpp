// roc 2009-12 008afe00  unit: CXTPDockingPaneMiniWnd  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008afe00
//
// 008afe00  56                   push esi
// 008afe01  8bf1                 mov esi, ecx
// 008afe03  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 008afe0a  0f84aa000000         je 0x8afeba
// 008afe10  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 008afe17  0f8f9d000000         jg 0x8afeba
// 008afe1d  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 008afe24  7429                 je 0x8afe4f
// 008afe26  8b4620               mov eax, dword ptr [esi + 0x20]
// 008afe29  6a03                 push 3
// 008afe2b  50                   push eax
// 008afe2c  c7865001000000000000 mov dword ptr [esi + 0x150], 0
// 008afe36  c7864c01000000000000 mov dword ptr [esi + 0x14c], 0
// 008afe40  ff15d0cb9800         call dword ptr [0x98cbd0]
// 008afe46  6a0b                 push 0xb
// 008afe48  8bce                 mov ecx, esi
// 008afe4a  e891fbffff           call 0x8af9e0
// 008afe4f  6a0c                 push 0xc
// 008afe51  8bce                 mov ecx, esi
// 008afe53  e888fbffff           call 0x8af9e0
// 008afe58  85c0                 test eax, eax
// 008afe5a  755e                 jne 0x8afeba
// 008afe5c  c7864c01000001000000 mov dword ptr [esi + 0x14c], 1
// 008afe66  8b0db08eb600         mov ecx, dword ptr [0xb68eb0]
// 008afe6c  85c9                 test ecx, ecx
// 008afe6e  740d                 je 0x8afe7d
// 008afe70  a1b48eb600           mov eax, dword ptr [0xb68eb4]
// 008afe75  99                   cdq 
// 008afe76  f7f9                 idiv ecx
// 008afe78  83f801               cmp eax, 1
// 008afe7b  7d05                 jge 0x8afe82
// 008afe7d  b801000000           mov eax, 1
// 008afe82  6a01                 push 1
// 008afe84  8bce                 mov ecx, esi
// 008afe86  89863c010000         mov dword ptr [esi + 0x13c], eax
// 008afe8c  898640010000         mov dword ptr [esi + 0x140], eax
// 008afe92  e8f9efffff           call 0x8aee90
// 008afe97  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008afe9a  6a00                 push 0
// 008afe9c  6a64                 push 0x64
// 008afe9e  6a01                 push 1
// 008afea0  51                   push ecx
// 008afea1  c7864401000008000000 mov dword ptr [esi + 0x144], 8
// 008afeab  ff1558cc9800         call dword ptr [0x98cc58]
// 008afeb1  6a0d                 push 0xd
// 008afeb3  8bce                 mov ecx, esi
// 008afeb5  e826fbffff           call 0x8af9e0
// 008afeba  5e                   pop esi
// 008afebb  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?Expand@CXTPDockingPaneMiniWnd@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
