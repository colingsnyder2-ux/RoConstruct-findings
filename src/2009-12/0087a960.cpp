// roc 2009-12 0087a960  unit: CXTPControlGallery  size: 267 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087a960
//
// 0087a960  83ec20               sub esp, 0x20
// 0087a963  57                   push edi
// 0087a964  8bf9                 mov edi, ecx
// 0087a966  8b879c000000         mov eax, dword ptr [edi + 0x9c]
// 0087a96c  83f8ff               cmp eax, -1
// 0087a96f  750f                 jne 0x87a980
// 0087a971  8b8f5c010000         mov ecx, dword ptr [edi + 0x15c]
// 0087a977  85c9                 test ecx, ecx
// 0087a979  7405                 je 0x87a980
// 0087a97b  e830bcf7ff           call 0x7f65b0
// 0087a980  85c0                 test eax, eax
// 0087a982  750a                 jne 0x87a98e
// 0087a984  83c8ff               or eax, 0xffffffff
// 0087a987  5f                   pop edi
// 0087a988  83c420               add esp, 0x20
// 0087a98b  c20c00               ret 0xc
// 0087a98e  8bcf                 mov ecx, edi
// 0087a990  e82bcaffff           call 0x8773c0
// 0087a995  85c0                 test eax, eax
// 0087a997  75eb                 jne 0x87a984
// 0087a999  53                   push ebx
// 0087a99a  55                   push ebp
// 0087a99b  56                   push esi
// 0087a99c  8d442420             lea eax, [esp + 0x20]
// 0087a9a0  50                   push eax
// 0087a9a1  8bcf                 mov ecx, edi
// 0087a9a3  e8a8daffff           call 0x878450
// 0087a9a8  33ed                 xor ebp, ebp
// 0087a9aa  39af54020000         cmp dword ptr [edi + 0x254], ebp
// 0087a9b0  7e6f                 jle 0x87aa21
// 0087a9b2  33db                 xor ebx, ebx
// 0087a9b4  85db                 test ebx, ebx
// 0087a9b6  0f8caa000000         jl 0x87aa66
// 0087a9bc  3baf54020000         cmp ebp, dword ptr [edi + 0x254]
// 0087a9c2  0f8d9e000000         jge 0x87aa66
// 0087a9c8  8bb750020000         mov esi, dword ptr [edi + 0x250]
// 0087a9ce  03f3                 add esi, ebx
// 0087a9d0  56                   push esi
// 0087a9d1  8d4c2414             lea ecx, [esp + 0x14]
// 0087a9d5  51                   push ecx
// 0087a9d6  ff1564cc9800         call dword ptr [0x98cc64]
// 0087a9dc  8b970c020000         mov edx, dword ptr [edi + 0x20c]
// 0087a9e2  f7da                 neg edx
// 0087a9e4  52                   push edx
// 0087a9e5  6a00                 push 0
// 0087a9e7  8d442418             lea eax, [esp + 0x18]
// 0087a9eb  50                   push eax
// 0087a9ec  ff156ccc9800         call dword ptr [0x98cc6c]
// 0087a9f2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0087a9f6  394c2414             cmp dword ptr [esp + 0x14], ecx
// 0087a9fa  7d25                 jge 0x87aa21
// 0087a9fc  8b542438             mov edx, dword ptr [esp + 0x38]
// 0087aa00  8b442434             mov eax, dword ptr [esp + 0x34]
// 0087aa04  52                   push edx
// 0087aa05  50                   push eax
// 0087aa06  8d4c2418             lea ecx, [esp + 0x18]
// 0087aa0a  51                   push ecx
// 0087aa0b  ff155cca9800         call dword ptr [0x98ca5c]
// 0087aa11  85c0                 test eax, eax
// 0087aa13  7519                 jne 0x87aa2e
// 0087aa15  45                   inc ebp
// 0087aa16  83c318               add ebx, 0x18
// 0087aa19  3baf54020000         cmp ebp, dword ptr [edi + 0x254]
// 0087aa1f  7c93                 jl 0x87a9b4
// 0087aa21  5e                   pop esi
// 0087aa22  5d                   pop ebp
// 0087aa23  5b                   pop ebx
// 0087aa24  83c8ff               or eax, 0xffffffff
// 0087aa27  5f                   pop edi
// 0087aa28  83c420               add esp, 0x20
// 0087aa2b  c20c00               ret 0xc
// 0087aa2e  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0087aa32  85c0                 test eax, eax
// 0087aa34  741b                 je 0x87aa51
// 0087aa36  8b542410             mov edx, dword ptr [esp + 0x10]
// 0087aa3a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087aa3e  8910                 mov dword ptr [eax], edx
// 0087aa40  8b542418             mov edx, dword ptr [esp + 0x18]
// 0087aa44  894804               mov dword ptr [eax + 4], ecx
// 0087aa47  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0087aa4b  895008               mov dword ptr [eax + 8], edx
// 0087aa4e  89480c               mov dword ptr [eax + 0xc], ecx
// 0087aa51  8b5610               mov edx, dword ptr [esi + 0x10]
// 0087aa54  837a4800             cmp dword ptr [edx + 0x48], 0
// 0087aa58  75c7                 jne 0x87aa21
// 0087aa5a  5e                   pop esi
// 0087aa5b  8bc5                 mov eax, ebp
// 0087aa5d  5d                   pop ebp
// 0087aa5e  5b                   pop ebx
// 0087aa5f  5f                   pop edi
// 0087aa60  83c420               add esp, 0x20
// 0087aa63  c20c00               ret 0xc
// 0087aa66  e8a190f7ff           call 0x7f3b0c
// copied from an identical function in another client (function ?HitTestItem@CXTPControlGallery@@QBEHVCPoint@@PAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp