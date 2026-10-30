// roc 2010-06 00827bb0  unit: CXTPControlGallery  size: 267 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00827bb0
//
// 00827bb0  83ec20               sub esp, 0x20
// 00827bb3  57                   push edi
// 00827bb4  8bf9                 mov edi, ecx
// 00827bb6  8b879c000000         mov eax, dword ptr [edi + 0x9c]
// 00827bbc  83f8ff               cmp eax, -1
// 00827bbf  750f                 jne 0x827bd0
// 00827bc1  8b8f5c010000         mov ecx, dword ptr [edi + 0x15c]
// 00827bc7  85c9                 test ecx, ecx
// 00827bc9  7405                 je 0x827bd0
// 00827bcb  e8c02af8ff           call 0x7aa690
// 00827bd0  85c0                 test eax, eax
// 00827bd2  750a                 jne 0x827bde
// 00827bd4  83c8ff               or eax, 0xffffffff
// 00827bd7  5f                   pop edi
// 00827bd8  83c420               add esp, 0x20
// 00827bdb  c20c00               ret 0xc
// 00827bde  8bcf                 mov ecx, edi
// 00827be0  e8dbc9ffff           call 0x8245c0
// 00827be5  85c0                 test eax, eax
// 00827be7  75eb                 jne 0x827bd4
// 00827be9  53                   push ebx
// 00827bea  55                   push ebp
// 00827beb  56                   push esi
// 00827bec  8d442420             lea eax, [esp + 0x20]
// 00827bf0  50                   push eax
// 00827bf1  8bcf                 mov ecx, edi
// 00827bf3  e858daffff           call 0x825650
// 00827bf8  33ed                 xor ebp, ebp
// 00827bfa  39af54020000         cmp dword ptr [edi + 0x254], ebp
// 00827c00  7e6f                 jle 0x827c71
// 00827c02  33db                 xor ebx, ebx
// 00827c04  85db                 test ebx, ebx
// 00827c06  0f8caa000000         jl 0x827cb6
// 00827c0c  3baf54020000         cmp ebp, dword ptr [edi + 0x254]
// 00827c12  0f8d9e000000         jge 0x827cb6
// 00827c18  8bb750020000         mov esi, dword ptr [edi + 0x250]
// 00827c1e  03f3                 add esi, ebx
// 00827c20  56                   push esi
// 00827c21  8d4c2414             lea ecx, [esp + 0x14]
// 00827c25  51                   push ecx
// 00827c26  ff1548bc9e00         call dword ptr [0x9ebc48]
// 00827c2c  8b970c020000         mov edx, dword ptr [edi + 0x20c]
// 00827c32  f7da                 neg edx
// 00827c34  52                   push edx
// 00827c35  6a00                 push 0
// 00827c37  8d442418             lea eax, [esp + 0x18]
// 00827c3b  50                   push eax
// 00827c3c  ff1540bc9e00         call dword ptr [0x9ebc40]
// 00827c42  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00827c46  394c2414             cmp dword ptr [esp + 0x14], ecx
// 00827c4a  7d25                 jge 0x827c71
// 00827c4c  8b542438             mov edx, dword ptr [esp + 0x38]
// 00827c50  8b442434             mov eax, dword ptr [esp + 0x34]
// 00827c54  52                   push edx
// 00827c55  50                   push eax
// 00827c56  8d4c2418             lea ecx, [esp + 0x18]
// 00827c5a  51                   push ecx
// 00827c5b  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 00827c61  85c0                 test eax, eax
// 00827c63  7519                 jne 0x827c7e
// 00827c65  45                   inc ebp
// 00827c66  83c318               add ebx, 0x18
// 00827c69  3baf54020000         cmp ebp, dword ptr [edi + 0x254]
// 00827c6f  7c93                 jl 0x827c04
// 00827c71  5e                   pop esi
// 00827c72  5d                   pop ebp
// 00827c73  5b                   pop ebx
// 00827c74  83c8ff               or eax, 0xffffffff
// 00827c77  5f                   pop edi
// 00827c78  83c420               add esp, 0x20
// 00827c7b  c20c00               ret 0xc
// 00827c7e  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00827c82  85c0                 test eax, eax
// 00827c84  741b                 je 0x827ca1
// 00827c86  8b542410             mov edx, dword ptr [esp + 0x10]
// 00827c8a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00827c8e  8910                 mov dword ptr [eax], edx
// 00827c90  8b542418             mov edx, dword ptr [esp + 0x18]
// 00827c94  894804               mov dword ptr [eax + 4], ecx
// 00827c97  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00827c9b  895008               mov dword ptr [eax + 8], edx
// 00827c9e  89480c               mov dword ptr [eax + 0xc], ecx
// 00827ca1  8b5610               mov edx, dword ptr [esi + 0x10]
// 00827ca4  837a4800             cmp dword ptr [edx + 0x48], 0
// 00827ca8  75c7                 jne 0x827c71
// 00827caa  5e                   pop esi
// 00827cab  8bc5                 mov eax, ebp
// 00827cad  5d                   pop ebp
// 00827cae  5b                   pop ebx
// 00827caf  5f                   pop edi
// 00827cb0  83c420               add esp, 0x20
// 00827cb3  c20c00               ret 0xc
// 00827cb6  e891fff7ff           call 0x7a7c4c
// copied from an identical function in another client (function ?HitTestItem@CXTPControlGallery@@QBEHVCPoint@@PAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp