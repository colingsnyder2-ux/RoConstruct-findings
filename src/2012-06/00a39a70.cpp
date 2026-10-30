// roc 2012-06 00a39a70  unit: CXTPDockingPaneMiniWnd  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a39a70
//
// 00a39a70  56                   push esi
// 00a39a71  8bf1                 mov esi, ecx
// 00a39a73  8b0d0063e000         mov ecx, dword ptr [0xe06300]
// 00a39a79  57                   push edi
// 00a39a7a  85c9                 test ecx, ecx
// 00a39a7c  740d                 je 0xa39a8b
// 00a39a7e  a10463e000           mov eax, dword ptr [0xe06304]
// 00a39a83  99                   cdq 
// 00a39a84  f7f9                 idiv ecx
// 00a39a86  83f801               cmp eax, 1
// 00a39a89  7d05                 jge 0xa39a90
// 00a39a8b  b801000000           mov eax, 1
// 00a39a90  89863c010000         mov dword ptr [esi + 0x13c], eax
// 00a39a96  898640010000         mov dword ptr [esi + 0x140], eax
// 00a39a9c  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a39a9f  8dbe14010000         lea edi, [esi + 0x114]
// 00a39aa5  57                   push edi
// 00a39aa6  50                   push eax
// 00a39aa7  ff15f83ab200         call dword ptr [0xb23af8]
// 00a39aad  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00a39ab0  2b4f04               sub ecx, dword ptr [edi + 4]
// 00a39ab3  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00a39ab8  898e38010000         mov dword ptr [esi + 0x138], ecx
// 00a39abe  c7864801000001000000 mov dword ptr [esi + 0x148], 1
// 00a39ac8  c7864c01000001000000 mov dword ptr [esi + 0x14c], 1
// 00a39ad2  753f                 jne 0xa39b13
// 00a39ad4  6a0a                 push 0xa
// 00a39ad6  8bce                 mov ecx, esi
// 00a39ad8  e853f8ffff           call 0xa39330
// 00a39add  85c0                 test eax, eax
// 00a39adf  7532                 jne 0xa39b13
// 00a39ae1  50                   push eax
// 00a39ae2  8bce                 mov ecx, esi
// 00a39ae4  898640010000         mov dword ptr [esi + 0x140], eax
// 00a39aea  e8d1ecffff           call 0xa387c0
// 00a39aef  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a39af2  8b3d083cb200         mov edi, dword ptr [0xb23c08]
// 00a39af8  6a03                 push 3
// 00a39afa  52                   push edx
// 00a39afb  ffd7                 call edi
// 00a39afd  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a39b00  6a01                 push 1
// 00a39b02  50                   push eax
// 00a39b03  ffd7                 call edi
// 00a39b05  6a0b                 push 0xb
// 00a39b07  8bce                 mov ecx, esi
// 00a39b09  e822f8ffff           call 0xa39330
// 00a39b0e  5f                   pop edi
// 00a39b0f  5e                   pop esi
// 00a39b10  c20400               ret 4
// 00a39b13  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 00a39b1a  741f                 je 0xa39b3b
// 00a39b1c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a39b1f  6a03                 push 3
// 00a39b21  51                   push ecx
// 00a39b22  c7865001000000000000 mov dword ptr [esi + 0x150], 0
// 00a39b2c  ff15083cb200         call dword ptr [0xb23c08]
// 00a39b32  6a0b                 push 0xb
// 00a39b34  8bce                 mov ecx, esi
// 00a39b36  e8f5f7ffff           call 0xa39330
// 00a39b3b  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a39b3e  6a00                 push 0
// 00a39b40  6a64                 push 0x64
// 00a39b42  6a01                 push 1
// 00a39b44  52                   push edx
// 00a39b45  c7864401000006000000 mov dword ptr [esi + 0x144], 6
// 00a39b4f  ff15e03ab200         call dword ptr [0xb23ae0]
// 00a39b55  5f                   pop edi
// 00a39b56  5e                   pop esi
// 00a39b57  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?Collapse@CXTPDockingPaneMiniWnd@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
