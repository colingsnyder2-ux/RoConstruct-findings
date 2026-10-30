// roc 2009-12 008c5dd0  unit: CXTPControlCustom  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c5dd0
//
// 008c5dd0  56                   push esi
// 008c5dd1  8bf1                 mov esi, ecx
// 008c5dd3  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 008c5dd9  85c0                 test eax, eax
// 008c5ddb  740a                 je 0x8c5de7
// 008c5ddd  83784000             cmp dword ptr [eax + 0x40], 0
// 008c5de1  0f8582000000         jne 0x8c5e69
// 008c5de7  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008c5ded  85c0                 test eax, eax
// 008c5def  7478                 je 0x8c5e69
// 008c5df1  57                   push edi
// 008c5df2  8b7820               mov edi, dword ptr [eax + 0x20]
// 008c5df5  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 008c5dfb  50                   push eax
// 008c5dfc  ff15bccb9800         call dword ptr [0x98cbbc]
// 008c5e02  3bc7                 cmp eax, edi
// 008c5e04  5f                   pop edi
// 008c5e05  7562                 jne 0x8c5e69
// 008c5e07  83be7c01000000       cmp dword ptr [esi + 0x17c], 0
// 008c5e0e  7459                 je 0x8c5e69
// 008c5e10  83be0001000000       cmp dword ptr [esi + 0x100], 0
// 008c5e17  7430                 je 0x8c5e49
// 008c5e19  83be9001000000       cmp dword ptr [esi + 0x190], 0
// 008c5e20  7427                 je 0x8c5e49
// 008c5e22  8b16                 mov edx, dword ptr [esi]
// 008c5e24  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 008c5e2a  6a00                 push 0
// 008c5e2c  8bce                 mov ecx, esi
// 008c5e2e  ffd0                 call eax
// 008c5e30  85c0                 test eax, eax
// 008c5e32  7415                 je 0x8c5e49
// 008c5e34  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008c5e3a  85c0                 test eax, eax
// 008c5e3c  740b                 je 0x8c5e49
// 008c5e3e  83782000             cmp dword ptr [eax + 0x20], 0
// 008c5e42  b840000000           mov eax, 0x40
// 008c5e47  7505                 jne 0x8c5e4e
// 008c5e49  b880000000           mov eax, 0x80
// 008c5e4e  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 008c5e54  83c817               or eax, 0x17
// 008c5e57  50                   push eax
// 008c5e58  6a00                 push 0
// 008c5e5a  6a00                 push 0
// 008c5e5c  6a00                 push 0
// 008c5e5e  6a00                 push 0
// 008c5e60  6a00                 push 0
// 008c5e62  51                   push ecx
// 008c5e63  ff15e0c99800         call dword ptr [0x98c9e0]
// 008c5e69  5e                   pop esi
// 008c5e6a  c3                   ret 
// copied from an identical function in another client (function ?ShowHideChildControl@CXTPControlCustom@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlCustom.cpp