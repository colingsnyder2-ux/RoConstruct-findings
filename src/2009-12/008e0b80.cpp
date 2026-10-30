// roc 2009-12 008e0b80  unit: CXTPOffice2007Image  size: 628 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e0b80
//
// 008e0b80  6aff                 push -1
// 008e0b82  68cf5a9600           push 0x965acf
// 008e0b87  64a100000000         mov eax, dword ptr fs:[0]
// 008e0b8d  50                   push eax
// 008e0b8e  83ec18               sub esp, 0x18
// 008e0b91  53                   push ebx
// 008e0b92  55                   push ebp
// 008e0b93  56                   push esi
// 008e0b94  57                   push edi
// 008e0b95  a10052b600           mov eax, dword ptr [0xb65200]
// 008e0b9a  33c4                 xor eax, esp
// 008e0b9c  50                   push eax
// 008e0b9d  8d44242c             lea eax, [esp + 0x2c]
// 008e0ba1  64a300000000         mov dword ptr fs:[0], eax
// 008e0ba7  8be9                 mov ebp, ecx
// 008e0ba9  33ff                 xor edi, edi
// 008e0bab  897c2428             mov dword ptr [esp + 0x28], edi
// 008e0baf  c744243401000000     mov dword ptr [esp + 0x34], 1
// 008e0bb7  397d08               cmp dword ptr [ebp + 8], edi
// 008e0bba  7516                 jne 0x8e0bd2
// 008e0bbc  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 008e0bc0  6856fd9900           push 0x99fd56
// 008e0bc5  8bce                 mov ecx, esi
// 008e0bc7  ff15b8de9800         call dword ptr [0x98deb8]
// 008e0bcd  e9a2010000           jmp 0x8e0d74
// 008e0bd2  8d4c2440             lea ecx, [esp + 0x40]
// 008e0bd6  ff1524d29800         call dword ptr [0x98d224]
// 008e0bdc  8d4c2444             lea ecx, [esp + 0x44]
// 008e0be0  ff1524d29800         call dword ptr [0x98d224]
// 008e0be6  8b4508               mov eax, dword ptr [ebp + 8]
// 008e0be9  8d4c2414             lea ecx, [esp + 0x14]
// 008e0bed  89442424             mov dword ptr [esp + 0x24], eax
// 008e0bf1  ff1574de9800         call dword ptr [0x98de74]
// 008e0bf7  8d4c2424             lea ecx, [esp + 0x24]
// 008e0bfb  51                   push ecx
// 008e0bfc  8d542418             lea edx, [esp + 0x18]
// 008e0c00  bb02000000           mov ebx, 2
// 008e0c05  52                   push edx
// 008e0c06  8bcd                 mov ecx, ebp
// 008e0c08  885c243c             mov byte ptr [esp + 0x3c], bl
// 008e0c0c  e86ff3ffff           call 0x8dff80
// 008e0c11  85c0                 test eax, eax
// 008e0c13  0f8440010000         je 0x8e0d59
// 008e0c19  8d4c2414             lea ecx, [esp + 0x14]
// 008e0c1d  ff1544da9800         call dword ptr [0x98da44]
// 008e0c23  6a00                 push 0
// 008e0c25  6a3b                 push 0x3b
// 008e0c27  8d4c241c             lea ecx, [esp + 0x1c]
// 008e0c2b  ff1580d69800         call dword ptr [0x98d680]
// 008e0c31  85c0                 test eax, eax
// 008e0c33  0f8407010000         je 0x8e0d40
// 008e0c39  7e2e                 jle 0x8e0c69
// 008e0c3b  50                   push eax
// 008e0c3c  8d44242c             lea eax, [esp + 0x2c]
// 008e0c40  50                   push eax
// 008e0c41  8d4c241c             lea ecx, [esp + 0x1c]
// 008e0c45  ff1544cf9800         call dword ptr [0x98cf44]
// 008e0c4b  50                   push eax
// 008e0c4c  8d4c2418             lea ecx, [esp + 0x18]
// 008e0c50  c644243803           mov byte ptr [esp + 0x38], 3
// 008e0c55  ff1538d59800         call dword ptr [0x98d538]
// 008e0c5b  8d4c2428             lea ecx, [esp + 0x28]
// 008e0c5f  885c2434             mov byte ptr [esp + 0x34], bl
// 008e0c63  ff15c0de9800         call dword ptr [0x98dec0]
// 008e0c69  8d4c2414             lea ecx, [esp + 0x14]
// 008e0c6d  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008e0c73  84c0                 test al, al
// 008e0c75  0f85c5000000         jne 0x8e0d40
// 008e0c7b  8d4c2414             lea ecx, [esp + 0x14]
// 008e0c7f  ff1524d29800         call dword ptr [0x98d224]
// 008e0c85  6a00                 push 0
// 008e0c87  8d4c2418             lea ecx, [esp + 0x18]
// 008e0c8b  ff1510d59800         call dword ptr [0x98d510]
// 008e0c91  3c5b                 cmp al, 0x5b
// 008e0c93  754d                 jne 0x8e0ce2
// 008e0c95  85ff                 test edi, edi
// 008e0c97  0f85bc000000         jne 0x8e0d59
// 008e0c9d  8d4c2414             lea ecx, [esp + 0x14]
// 008e0ca1  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008e0ca7  2bc3                 sub eax, ebx
// 008e0ca9  50                   push eax
// 008e0caa  6a01                 push 1
// 008e0cac  8d4c2428             lea ecx, [esp + 0x28]
// 008e0cb0  51                   push ecx
// 008e0cb1  8d4c2420             lea ecx, [esp + 0x20]
// 008e0cb5  ff1540d89800         call dword ptr [0x98d840]
// 008e0cbb  8d4c2440             lea ecx, [esp + 0x40]
// 008e0cbf  c644243404           mov byte ptr [esp + 0x34], 4
// 008e0cc4  ff1580de9800         call dword ptr [0x98de80]
// 008e0cca  50                   push eax
// 008e0ccb  8d4c2424             lea ecx, [esp + 0x24]
// 008e0ccf  ff1584de9800         call dword ptr [0x98de84]
// 008e0cd5  85c0                 test eax, eax
// 008e0cd7  7503                 jne 0x8e0cdc
// 008e0cd9  8d7801               lea edi, [eax + 1]
// 008e0cdc  8d4c2420             lea ecx, [esp + 0x20]
// 008e0ce0  eb54                 jmp 0x8e0d36
// 008e0ce2  85ff                 test edi, edi
// 008e0ce4  745a                 je 0x8e0d40
// 008e0ce6  6a00                 push 0
// 008e0ce8  6a3d                 push 0x3d
// 008e0cea  8d4c241c             lea ecx, [esp + 0x1c]
// 008e0cee  ff1580d69800         call dword ptr [0x98d680]
// 008e0cf4  8bf0                 mov esi, eax
// 008e0cf6  85f6                 test esi, esi
// 008e0cf8  7e46                 jle 0x8e0d40
// 008e0cfa  56                   push esi
// 008e0cfb  8d542420             lea edx, [esp + 0x20]
// 008e0cff  52                   push edx
// 008e0d00  8d4c241c             lea ecx, [esp + 0x1c]
// 008e0d04  ff1544cf9800         call dword ptr [0x98cf44]
// 008e0d0a  8d4c241c             lea ecx, [esp + 0x1c]
// 008e0d0e  c644243405           mov byte ptr [esp + 0x34], 5
// 008e0d13  ff1584dc9800         call dword ptr [0x98dc84]
// 008e0d19  8d4c2444             lea ecx, [esp + 0x44]
// 008e0d1d  ff1580de9800         call dword ptr [0x98de80]
// 008e0d23  50                   push eax
// 008e0d24  8d4c2420             lea ecx, [esp + 0x20]
// 008e0d28  ff1584de9800         call dword ptr [0x98de84]
// 008e0d2e  85c0                 test eax, eax
// 008e0d30  746e                 je 0x8e0da0
// 008e0d32  8d4c241c             lea ecx, [esp + 0x1c]
// 008e0d36  885c2434             mov byte ptr [esp + 0x34], bl
// 008e0d3a  ff15c0de9800         call dword ptr [0x98dec0]
// 008e0d40  8d442424             lea eax, [esp + 0x24]
// 008e0d44  50                   push eax
// 008e0d45  8d4c2418             lea ecx, [esp + 0x18]
// 008e0d49  51                   push ecx
// 008e0d4a  8bcd                 mov ecx, ebp
// 008e0d4c  e82ff2ffff           call 0x8dff80
// 008e0d51  85c0                 test eax, eax
// 008e0d53  0f85c0feffff         jne 0x8e0c19
// 008e0d59  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 008e0d5d  6856fd9900           push 0x99fd56
// 008e0d62  8bce                 mov ecx, esi
// 008e0d64  ff15b8de9800         call dword ptr [0x98deb8]
// 008e0d6a  8d4c2414             lea ecx, [esp + 0x14]
// 008e0d6e  ff15c0de9800         call dword ptr [0x98dec0]
// 008e0d74  8d4c2440             lea ecx, [esp + 0x40]
// 008e0d78  ff15c0de9800         call dword ptr [0x98dec0]
// 008e0d7e  8d4c2444             lea ecx, [esp + 0x44]
// 008e0d82  ff15c0de9800         call dword ptr [0x98dec0]
// 008e0d88  8bc6                 mov eax, esi
// 008e0d8a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008e0d8e  64890d00000000       mov dword ptr fs:[0], ecx
// 008e0d95  59                   pop ecx
// 008e0d96  5f                   pop edi
// 008e0d97  5e                   pop esi
// 008e0d98  5d                   pop ebp
// 008e0d99  5b                   pop ebx
// 008e0d9a  83c424               add esp, 0x24
// 008e0d9d  c20c00               ret 0xc
// 008e0da0  46                   inc esi
// 008e0da1  56                   push esi
// 008e0da2  8d54241c             lea edx, [esp + 0x1c]
// 008e0da6  52                   push edx
// 008e0da7  8d4c241c             lea ecx, [esp + 0x1c]
// 008e0dab  ff157cd69800         call dword ptr [0x98d67c]
// 008e0db1  8d4c2418             lea ecx, [esp + 0x18]
// 008e0db5  c644243406           mov byte ptr [esp + 0x34], 6
// 008e0dba  ff1544da9800         call dword ptr [0x98da44]
// 008e0dc0  8d4c2418             lea ecx, [esp + 0x18]
// 008e0dc4  ff1584dc9800         call dword ptr [0x98dc84]
// 008e0dca  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 008e0dce  8d442418             lea eax, [esp + 0x18]
// 008e0dd2  50                   push eax
// 008e0dd3  8bce                 mov ecx, esi
// 008e0dd5  ff1594de9800         call dword ptr [0x98de94]
// 008e0ddb  8d4c2418             lea ecx, [esp + 0x18]
// 008e0ddf  ff15c0de9800         call dword ptr [0x98dec0]
// 008e0de5  8d4c241c             lea ecx, [esp + 0x1c]
// 008e0de9  ff15c0de9800         call dword ptr [0x98dec0]
// 008e0def  e976ffffff           jmp 0x8e0d6a
// copied from an identical function in another client (function ?GetImageValue@CXTPOffice2007Images@@QAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@V23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPOffice2007Image.cpp