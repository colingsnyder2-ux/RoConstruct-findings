// roc 2012-06 009ef9a0  unit: CXTPPropertyGridView  size: 420 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ef9a0
//
// 009ef9a0  6aff                 push -1
// 009ef9a2  684b1bae00           push 0xae1b4b
// 009ef9a7  64a100000000         mov eax, dword ptr fs:[0]
// 009ef9ad  50                   push eax
// 009ef9ae  83ec18               sub esp, 0x18
// 009ef9b1  53                   push ebx
// 009ef9b2  55                   push ebp
// 009ef9b3  56                   push esi
// 009ef9b4  57                   push edi
// 009ef9b5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009ef9ba  33c4                 xor eax, esp
// 009ef9bc  50                   push eax
// 009ef9bd  8d44242c             lea eax, [esp + 0x2c]
// 009ef9c1  64a300000000         mov dword ptr fs:[0], eax
// 009ef9c7  8bf1                 mov esi, ecx
// 009ef9c9  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 009ef9cd  8b442440             mov eax, dword ptr [esp + 0x40]
// 009ef9d1  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 009ef9d5  57                   push edi
// 009ef9d6  50                   push eax
// 009ef9d7  51                   push ecx
// 009ef9d8  8bce                 mov ecx, esi
// 009ef9da  e8d727f9ff           call 0x9821b6
// 009ef9df  83f8ff               cmp eax, -1
// 009ef9e2  0f85cc000000         jne 0x9efab4
// 009ef9e8  8b8e58010000         mov ecx, dword ptr [esi + 0x158]
// 009ef9ee  85c9                 test ecx, ecx
// 009ef9f0  7476                 je 0x9efa68
// 009ef9f2  8d542444             lea edx, [esp + 0x44]
// 009ef9f6  52                   push edx
// 009ef9f7  e8c4e8ffff           call 0x9ee2c0
// 009ef9fc  8d4c2444             lea ecx, [esp + 0x44]
// 009efa00  c744243400000000     mov dword ptr [esp + 0x34], 0
// 009efa08  ff155846b200         call dword ptr [0xb24658]
// 009efa0e  8d4c2444             lea ecx, [esp + 0x44]
// 009efa12  85c0                 test eax, eax
// 009efa14  0f8491000000         je 0x9efaab
// 009efa1a  8b8658010000         mov eax, dword ptr [esi + 0x158]
// 009efa20  8b5030               mov edx, dword ptr [eax + 0x30]
// 009efa23  51                   push ecx
// 009efa24  52                   push edx
// 009efa25  8b5034               mov edx, dword ptr [eax + 0x34]
// 009efa28  83c034               add eax, 0x34
// 009efa2b  83ec10               sub esp, 0x10
// 009efa2e  8bcc                 mov ecx, esp
// 009efa30  8911                 mov dword ptr [ecx], edx
// 009efa32  8b5004               mov edx, dword ptr [eax + 4]
// 009efa35  895104               mov dword ptr [ecx + 4], edx
// 009efa38  8b5008               mov edx, dword ptr [eax + 8]
// 009efa3b  8b400c               mov eax, dword ptr [eax + 0xc]
// 009efa3e  895108               mov dword ptr [ecx + 8], edx
// 009efa41  89410c               mov dword ptr [ecx + 0xc], eax
// 009efa44  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009efa47  51                   push ecx
// 009efa48  57                   push edi
// 009efa49  e892a3ffff           call 0x9e9de0
// 009efa4e  8b9658010000         mov edx, dword ptr [esi + 0x158]
// 009efa54  8b7230               mov esi, dword ptr [edx + 0x30]
// 009efa57  83c420               add esp, 0x20
// 009efa5a  8d4c2444             lea ecx, [esp + 0x44]
// 009efa5e  ff15d047b200         call dword ptr [0xb247d0]
// 009efa64  8bc6                 mov eax, esi
// 009efa66  eb4c                 jmp 0x9efab4
// 009efa68  8b442440             mov eax, dword ptr [esp + 0x40]
// 009efa6c  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 009efa70  50                   push eax
// 009efa71  51                   push ecx
// 009efa72  8bce                 mov ecx, esi
// 009efa74  e8d7faffff           call 0x9ef550
// 009efa79  8bf8                 mov edi, eax
// 009efa7b  85ff                 test edi, edi
// 009efa7d  7432                 je 0x9efab1
// 009efa7f  8b9f88000000         mov ebx, dword ptr [edi + 0x88]
// 009efa85  8d542414             lea edx, [esp + 0x14]
// 009efa89  52                   push edx
// 009efa8a  8bcf                 mov ecx, edi
// 009efa8c  e88fe8ffff           call 0x9ee320
// 009efa91  8d4c2414             lea ecx, [esp + 0x14]
// 009efa95  c744243401000000     mov dword ptr [esp + 0x34], 1
// 009efa9d  ff155846b200         call dword ptr [0xb24658]
// 009efaa3  85c0                 test eax, eax
// 009efaa5  7523                 jne 0x9efaca
// 009efaa7  8d4c2414             lea ecx, [esp + 0x14]
// 009efaab  ff15d047b200         call dword ptr [0xb247d0]
// 009efab1  83c8ff               or eax, 0xffffffff
// 009efab4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009efab8  64890d00000000       mov dword ptr fs:[0], ecx
// 009efabf  59                   pop ecx
// 009efac0  5f                   pop edi
// 009efac1  5e                   pop esi
// 009efac2  5d                   pop ebp
// 009efac3  5b                   pop ebx
// 009efac4  83c424               add esp, 0x24
// 009efac7  c20c00               ret 0xc
// 009efaca  8d442418             lea eax, [esp + 0x18]
// 009eface  50                   push eax
// 009efacf  8bcf                 mov ecx, edi
// 009efad1  e81ae8ffff           call 0x9ee2f0
// 009efad6  8be8                 mov ebp, eax
// 009efad8  8d4c241c             lea ecx, [esp + 0x1c]
// 009efadc  51                   push ecx
// 009efadd  8bcf                 mov ecx, edi
// 009efadf  c644243802           mov byte ptr [esp + 0x38], 2
// 009efae4  e857260000           call 0x9f2140
// 009efae9  8bce                 mov ecx, esi
// 009efaeb  8bf8                 mov edi, eax
// 009efaed  e8cee8ffff           call 0x9ee3c0
// 009efaf2  8b0f                 mov ecx, dword ptr [edi]
// 009efaf4  50                   push eax
// 009efaf5  55                   push ebp
// 009efaf6  8d54241c             lea edx, [esp + 0x1c]
// 009efafa  52                   push edx
// 009efafb  8bc2                 mov eax, edx
// 009efafd  8b5704               mov edx, dword ptr [edi + 4]
// 009efb00  50                   push eax
// 009efb01  53                   push ebx
// 009efb02  83ec10               sub esp, 0x10
// 009efb05  8bc4                 mov eax, esp
// 009efb07  8908                 mov dword ptr [eax], ecx
// 009efb09  8b4f08               mov ecx, dword ptr [edi + 8]
// 009efb0c  895004               mov dword ptr [eax + 4], edx
// 009efb0f  8b570c               mov edx, dword ptr [edi + 0xc]
// 009efb12  894808               mov dword ptr [eax + 8], ecx
// 009efb15  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 009efb19  89500c               mov dword ptr [eax + 0xc], edx
// 009efb1c  8b4620               mov eax, dword ptr [esi + 0x20]
// 009efb1f  50                   push eax
// 009efb20  51                   push ecx
// 009efb21  e83aa3ffff           call 0x9e9e60
// 009efb26  83c42c               add esp, 0x2c
// 009efb29  8d4c2418             lea ecx, [esp + 0x18]
// 009efb2d  ff15d047b200         call dword ptr [0xb247d0]
// 009efb33  8d4c2414             lea ecx, [esp + 0x14]
// 009efb37  ff15d047b200         call dword ptr [0xb247d0]
// 009efb3d  8bc3                 mov eax, ebx
// 009efb3f  e970ffffff           jmp 0x9efab4
// copied from an identical function in another client (function ?OnToolHitTest@CXTPPropertyGridView@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridView.cpp