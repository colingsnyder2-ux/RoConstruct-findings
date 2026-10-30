// roc 2012-06 009fd220  unit: CXTPControlGallery  size: 267 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fd220
//
// 009fd220  83ec20               sub esp, 0x20
// 009fd223  57                   push edi
// 009fd224  8bf9                 mov edi, ecx
// 009fd226  8b879c000000         mov eax, dword ptr [edi + 0x9c]
// 009fd22c  83f8ff               cmp eax, -1
// 009fd22f  750f                 jne 0x9fd240
// 009fd231  8b8f5c010000         mov ecx, dword ptr [edi + 0x15c]
// 009fd237  85c9                 test ecx, ecx
// 009fd239  7405                 je 0x9fd240
// 009fd23b  e8e07cf8ff           call 0x984f20
// 009fd240  85c0                 test eax, eax
// 009fd242  750a                 jne 0x9fd24e
// 009fd244  83c8ff               or eax, 0xffffffff
// 009fd247  5f                   pop edi
// 009fd248  83c420               add esp, 0x20
// 009fd24b  c20c00               ret 0xc
// 009fd24e  8bcf                 mov ecx, edi
// 009fd250  e81bcaffff           call 0x9f9c70
// 009fd255  85c0                 test eax, eax
// 009fd257  75eb                 jne 0x9fd244
// 009fd259  53                   push ebx
// 009fd25a  55                   push ebp
// 009fd25b  56                   push esi
// 009fd25c  8d442420             lea eax, [esp + 0x20]
// 009fd260  50                   push eax
// 009fd261  8bcf                 mov ecx, edi
// 009fd263  e888daffff           call 0x9facf0
// 009fd268  33ed                 xor ebp, ebp
// 009fd26a  39af54020000         cmp dword ptr [edi + 0x254], ebp
// 009fd270  7e6f                 jle 0x9fd2e1
// 009fd272  33db                 xor ebx, ebx
// 009fd274  85db                 test ebx, ebx
// 009fd276  0f8caa000000         jl 0x9fd326
// 009fd27c  3baf54020000         cmp ebp, dword ptr [edi + 0x254]
// 009fd282  0f8d9e000000         jge 0x9fd326
// 009fd288  8bb750020000         mov esi, dword ptr [edi + 0x250]
// 009fd28e  03f3                 add esi, ebx
// 009fd290  56                   push esi
// 009fd291  8d4c2414             lea ecx, [esp + 0x14]
// 009fd295  51                   push ecx
// 009fd296  ff15ec3ab200         call dword ptr [0xb23aec]
// 009fd29c  8b970c020000         mov edx, dword ptr [edi + 0x20c]
// 009fd2a2  f7da                 neg edx
// 009fd2a4  52                   push edx
// 009fd2a5  6a00                 push 0
// 009fd2a7  8d442418             lea eax, [esp + 0x18]
// 009fd2ab  50                   push eax
// 009fd2ac  ff15f43ab200         call dword ptr [0xb23af4]
// 009fd2b2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009fd2b6  394c2414             cmp dword ptr [esp + 0x14], ecx
// 009fd2ba  7d25                 jge 0x9fd2e1
// 009fd2bc  8b542438             mov edx, dword ptr [esp + 0x38]
// 009fd2c0  8b442434             mov eax, dword ptr [esp + 0x34]
// 009fd2c4  52                   push edx
// 009fd2c5  50                   push eax
// 009fd2c6  8d4c2418             lea ecx, [esp + 0x18]
// 009fd2ca  51                   push ecx
// 009fd2cb  ff15483bb200         call dword ptr [0xb23b48]
// 009fd2d1  85c0                 test eax, eax
// 009fd2d3  7519                 jne 0x9fd2ee
// 009fd2d5  45                   inc ebp
// 009fd2d6  83c318               add ebx, 0x18
// 009fd2d9  3baf54020000         cmp ebp, dword ptr [edi + 0x254]
// 009fd2df  7c93                 jl 0x9fd274
// 009fd2e1  5e                   pop esi
// 009fd2e2  5d                   pop ebp
// 009fd2e3  5b                   pop ebx
// 009fd2e4  83c8ff               or eax, 0xffffffff
// 009fd2e7  5f                   pop edi
// 009fd2e8  83c420               add esp, 0x20
// 009fd2eb  c20c00               ret 0xc
// 009fd2ee  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 009fd2f2  85c0                 test eax, eax
// 009fd2f4  741b                 je 0x9fd311
// 009fd2f6  8b542410             mov edx, dword ptr [esp + 0x10]
// 009fd2fa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009fd2fe  8910                 mov dword ptr [eax], edx
// 009fd300  8b542418             mov edx, dword ptr [esp + 0x18]
// 009fd304  894804               mov dword ptr [eax + 4], ecx
// 009fd307  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009fd30b  895008               mov dword ptr [eax + 8], edx
// 009fd30e  89480c               mov dword ptr [eax + 0xc], ecx
// 009fd311  8b5610               mov edx, dword ptr [esi + 0x10]
// 009fd314  837a4800             cmp dword ptr [edx + 0x48], 0
// 009fd318  75c7                 jne 0x9fd2e1
// 009fd31a  5e                   pop esi
// 009fd31b  8bc5                 mov eax, ebp
// 009fd31d  5d                   pop ebp
// 009fd31e  5b                   pop ebx
// 009fd31f  5f                   pop edi
// 009fd320  83c420               add esp, 0x20
// 009fd323  c20c00               ret 0xc
// 009fd326  e89550f8ff           call 0x9823c0
// copied from an identical function in another client (function ?HitTestItem@CXTPControlGallery@@QBEHVCPoint@@PAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp