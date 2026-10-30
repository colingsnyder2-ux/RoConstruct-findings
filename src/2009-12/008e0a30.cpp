// roc 2009-12 008e0a30  unit: CXTPOffice2007Image  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e0a30
//
// 008e0a30  6aff                 push -1
// 008e0a32  68a98e9500           push 0x958ea9
// 008e0a37  64a100000000         mov eax, dword ptr fs:[0]
// 008e0a3d  50                   push eax
// 008e0a3e  51                   push ecx
// 008e0a3f  53                   push ebx
// 008e0a40  56                   push esi
// 008e0a41  57                   push edi
// 008e0a42  a10052b600           mov eax, dword ptr [0xb65200]
// 008e0a47  33c4                 xor eax, esp
// 008e0a49  50                   push eax
// 008e0a4a  8d442414             lea eax, [esp + 0x14]
// 008e0a4e  64a300000000         mov dword ptr fs:[0], eax
// 008e0a54  8bf1                 mov esi, ecx
// 008e0a56  8b4604               mov eax, dword ptr [esi + 4]
// 008e0a59  85c0                 test eax, eax
// 008e0a5b  740d                 je 0x8e0a6a
// 008e0a5d  837e1000             cmp dword ptr [esi + 0x10], 0
// 008e0a61  7407                 je 0x8e0a6a
// 008e0a63  50                   push eax
// 008e0a64  ff15f8b19800         call dword ptr [0x98b1f8]
// 008e0a6a  8b442428             mov eax, dword ptr [esp + 0x28]
// 008e0a6e  50                   push eax
// 008e0a6f  8d4c2414             lea ecx, [esp + 0x14]
// 008e0a73  ff15b8de9800         call dword ptr [0x98deb8]
// 008e0a79  8d4c2410             lea ecx, [esp + 0x10]
// 008e0a7d  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008e0a85  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008e0a8b  84c0                 test al, al
// 008e0a8d  740f                 je 0x8e0a9e
// 008e0a8f  6828bea000           push 0xa0be28
// 008e0a94  8d4c2414             lea ecx, [esp + 0x14]
// 008e0a98  ff155cde9800         call dword ptr [0x98de5c]
// 008e0a9e  6a5f                 push 0x5f
// 008e0aa0  6a2e                 push 0x2e
// 008e0aa2  8d4c2418             lea ecx, [esp + 0x18]
// 008e0aa6  ff157cdc9800         call dword ptr [0x98dc7c]
// 008e0aac  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008e0ab0  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 008e0ab4  894e10               mov dword ptr [esi + 0x10], ecx
// 008e0ab7  8bce                 mov ecx, esi
// 008e0ab9  895e04               mov dword ptr [esi + 4], ebx
// 008e0abc  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 008e0ac3  c7460800000000       mov dword ptr [esi + 8], 0
// 008e0aca  e8b1feffff           call 0x8e0980
// 008e0acf  681cbea000           push 0xa0be1c
// 008e0ad4  8d4c2414             lea ecx, [esp + 0x14]
// 008e0ad8  ff1580de9800         call dword ptr [0x98de80]
// 008e0ade  8b5604               mov edx, dword ptr [esi + 4]
// 008e0ae1  50                   push eax
// 008e0ae2  52                   push edx
// 008e0ae3  ff15ecb19800         call dword ptr [0x98b1ec]
// 008e0ae9  8bf8                 mov edi, eax
// 008e0aeb  85ff                 test edi, edi
// 008e0aed  7535                 jne 0x8e0b24
// 008e0aef  39442428             cmp dword ptr [esp + 0x28], eax
// 008e0af3  750e                 jne 0x8e0b03
// 008e0af5  53                   push ebx
// 008e0af6  8bce                 mov ecx, esi
// 008e0af8  e813f4ffff           call 0x8dff10
// 008e0afd  8bf8                 mov edi, eax
// 008e0aff  85ff                 test edi, edi
// 008e0b01  7521                 jne 0x8e0b24
// 008e0b03  8d4c2410             lea ecx, [esp + 0x10]
// 008e0b07  ff15c0de9800         call dword ptr [0x98dec0]
// 008e0b0d  33c0                 xor eax, eax
// 008e0b0f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e0b13  64890d00000000       mov dword ptr fs:[0], ecx
// 008e0b1a  59                   pop ecx
// 008e0b1b  5f                   pop edi
// 008e0b1c  5e                   pop esi
// 008e0b1d  5b                   pop ebx
// 008e0b1e  83c410               add esp, 0x10
// 008e0b21  c20c00               ret 0xc
// 008e0b24  8b4604               mov eax, dword ptr [esi + 4]
// 008e0b27  57                   push edi
// 008e0b28  50                   push eax
// 008e0b29  ff15f0b19800         call dword ptr [0x98b1f0]
// 008e0b2f  85c0                 test eax, eax
// 008e0b31  74d0                 je 0x8e0b03
// 008e0b33  50                   push eax
// 008e0b34  ff157cb29800         call dword ptr [0x98b27c]
// 008e0b3a  8b4e04               mov ecx, dword ptr [esi + 4]
// 008e0b3d  57                   push edi
// 008e0b3e  51                   push ecx
// 008e0b3f  894608               mov dword ptr [esi + 8], eax
// 008e0b42  ff15f4b19800         call dword ptr [0x98b1f4]
// 008e0b48  034608               add eax, dword ptr [esi + 8]
// 008e0b4b  8d4c2410             lea ecx, [esp + 0x10]
// 008e0b4f  89460c               mov dword ptr [esi + 0xc], eax
// 008e0b52  ff15c0de9800         call dword ptr [0x98dec0]
// 008e0b58  b801000000           mov eax, 1
// 008e0b5d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e0b61  64890d00000000       mov dword ptr fs:[0], ecx
// 008e0b68  59                   pop ecx
// 008e0b69  5f                   pop edi
// 008e0b6a  5e                   pop esi
// 008e0b6b  5b                   pop ebx
// 008e0b6c  83c410               add esp, 0x10
// 008e0b6f  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetHandle@CXTPOffice2007Images@@QAEHPAUHINSTANCE__@@PBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPOffice2007Image.cpp