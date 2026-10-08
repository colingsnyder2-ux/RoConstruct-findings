// roc 2012-06 00a39750  unit: CXTPDockingPaneMiniWnd  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a39750
//
// 00a39750  56                   push esi
// 00a39751  8bf1                 mov esi, ecx
// 00a39753  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 00a3975a  0f84aa000000         je 0xa3980a
// 00a39760  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 00a39767  0f8f9d000000         jg 0xa3980a
// 00a3976d  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 00a39774  7429                 je 0xa3979f
// 00a39776  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a39779  6a03                 push 3
// 00a3977b  50                   push eax
// 00a3977c  c7865001000000000000 mov dword ptr [esi + 0x150], 0
// 00a39786  c7864c01000000000000 mov dword ptr [esi + 0x14c], 0
// 00a39790  ff15083cb200         call dword ptr [0xb23c08]
// 00a39796  6a0b                 push 0xb
// 00a39798  8bce                 mov ecx, esi
// 00a3979a  e891fbffff           call 0xa39330
// 00a3979f  6a0c                 push 0xc
// 00a397a1  8bce                 mov ecx, esi
// 00a397a3  e888fbffff           call 0xa39330
// 00a397a8  85c0                 test eax, eax
// 00a397aa  755e                 jne 0xa3980a
// 00a397ac  c7864c01000001000000 mov dword ptr [esi + 0x14c], 1
// 00a397b6  8b0d0063e000         mov ecx, dword ptr [0xe06300]
// 00a397bc  85c9                 test ecx, ecx
// 00a397be  740d                 je 0xa397cd
// 00a397c0  a10463e000           mov eax, dword ptr [0xe06304]
// 00a397c5  99                   cdq 
// 00a397c6  f7f9                 idiv ecx
// 00a397c8  83f801               cmp eax, 1
// 00a397cb  7d05                 jge 0xa397d2
// 00a397cd  b801000000           mov eax, 1
// 00a397d2  6a01                 push 1
// 00a397d4  8bce                 mov ecx, esi
// 00a397d6  89863c010000         mov dword ptr [esi + 0x13c], eax
// 00a397dc  898640010000         mov dword ptr [esi + 0x140], eax
// 00a397e2  e8d9efffff           call 0xa387c0
// 00a397e7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a397ea  6a00                 push 0
// 00a397ec  6a64                 push 0x64
// 00a397ee  6a01                 push 1
// 00a397f0  51                   push ecx
// 00a397f1  c7864401000008000000 mov dword ptr [esi + 0x144], 8
// 00a397fb  ff15e03ab200         call dword ptr [0xb23ae0]
// 00a39801  6a0d                 push 0xd
// 00a39803  8bce                 mov ecx, esi
// 00a39805  e826fbffff           call 0xa39330
// 00a3980a  5e                   pop esi
// 00a3980b  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?Expand@CXTPDockingPaneMiniWnd@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
