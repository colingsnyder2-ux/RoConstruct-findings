// roc 2012-06 009b5ac0  unit: CXTPReportHeader  size: 375 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b5ac0
//
// 009b5ac0  6aff                 push -1
// 009b5ac2  687be9ad00           push 0xade97b
// 009b5ac7  64a100000000         mov eax, dword ptr fs:[0]
// 009b5acd  50                   push eax
// 009b5ace  83ec18               sub esp, 0x18
// 009b5ad1  55                   push ebp
// 009b5ad2  56                   push esi
// 009b5ad3  57                   push edi
// 009b5ad4  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009b5ad9  33c4                 xor eax, esp
// 009b5adb  50                   push eax
// 009b5adc  8d442428             lea eax, [esp + 0x28]
// 009b5ae0  64a300000000         mov dword ptr fs:[0], eax
// 009b5ae6  8bf9                 mov edi, ecx
// 009b5ae8  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 009b5aec  8b07                 mov eax, dword ptr [edi]
// 009b5aee  8b542438             mov edx, dword ptr [esp + 0x38]
// 009b5af2  8b8080000000         mov eax, dword ptr [eax + 0x80]
// 009b5af8  51                   push ecx
// 009b5af9  52                   push edx
// 009b5afa  8bcf                 mov ecx, edi
// 009b5afc  ffd0                 call eax
// 009b5afe  8bf0                 mov esi, eax
// 009b5b00  85f6                 test esi, esi
// 009b5b02  0f84b5000000         je 0x9b5bbd
// 009b5b08  8d4c2410             lea ecx, [esp + 0x10]
// 009b5b0c  51                   push ecx
// 009b5b0d  8bce                 mov ecx, esi
// 009b5b0f  e87c580900           call 0xa4b390
// 009b5b14  8d4c2410             lea ecx, [esp + 0x10]
// 009b5b18  c744243000000000     mov dword ptr [esp + 0x30], 0
// 009b5b20  ff156046b200         call dword ptr [0xb24660]
// 009b5b26  84c0                 test al, al
// 009b5b28  747b                 je 0x9b5ba5
// 009b5b2a  8bcf                 mov ecx, edi
// 009b5b2c  e8ffe6ffff           call 0x9b4230
// 009b5b31  8d542414             lea edx, [esp + 0x14]
// 009b5b35  52                   push edx
// 009b5b36  8bce                 mov ecx, esi
// 009b5b38  8be8                 mov ebp, eax
// 009b5b3a  e8c1e6ffff           call 0x9b4200
// 009b5b3f  50                   push eax
// 009b5b40  8d4c2414             lea ecx, [esp + 0x14]
// 009b5b44  c644243401           mov byte ptr [esp + 0x34], 1
// 009b5b49  ff152045b200         call dword ptr [0xb24520]
// 009b5b4f  8d4c2414             lea ecx, [esp + 0x14]
// 009b5b53  c644243000           mov byte ptr [esp + 0x30], 0
// 009b5b58  ff15d047b200         call dword ptr [0xb247d0]
// 009b5b5e  837e4400             cmp dword ptr [esi + 0x44], 0
// 009b5b62  7441                 je 0x9b5ba5
// 009b5b64  83bf8800000000       cmp dword ptr [edi + 0x88], 0
// 009b5b6b  7438                 je 0x9b5ba5
// 009b5b6d  8d442410             lea eax, [esp + 0x10]
// 009b5b71  50                   push eax
// 009b5b72  81c518020000         add ebp, 0x218
// 009b5b78  8d4c2418             lea ecx, [esp + 0x18]
// 009b5b7c  55                   push ebp
// 009b5b7d  51                   push ecx
// 009b5b7e  e86dfaa9ff           call 0x4555f0
// 009b5b83  83c40c               add esp, 0xc
// 009b5b86  50                   push eax
// 009b5b87  8d4c2414             lea ecx, [esp + 0x14]
// 009b5b8b  c644243402           mov byte ptr [esp + 0x34], 2
// 009b5b90  ff152045b200         call dword ptr [0xb24520]
// 009b5b96  8d4c2414             lea ecx, [esp + 0x14]
// 009b5b9a  c644243000           mov byte ptr [esp + 0x30], 0
// 009b5b9f  ff15d047b200         call dword ptr [0xb247d0]
// 009b5ba5  8d4c2410             lea ecx, [esp + 0x10]
// 009b5ba9  ff155846b200         call dword ptr [0xb24658]
// 009b5baf  85c0                 test eax, eax
// 009b5bb1  7522                 jne 0x9b5bd5
// 009b5bb3  8d4c2410             lea ecx, [esp + 0x10]
// 009b5bb7  ff15d047b200         call dword ptr [0xb247d0]
// 009b5bbd  83c8ff               or eax, 0xffffffff
// 009b5bc0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009b5bc4  64890d00000000       mov dword ptr fs:[0], ecx
// 009b5bcb  59                   pop ecx
// 009b5bcc  5f                   pop edi
// 009b5bcd  5e                   pop esi
// 009b5bce  5d                   pop ebp
// 009b5bcf  83c424               add esp, 0x24
// 009b5bd2  c20c00               ret 0xc
// 009b5bd5  8d542418             lea edx, [esp + 0x18]
// 009b5bd9  52                   push edx
// 009b5bda  8bce                 mov ecx, esi
// 009b5bdc  e81f26ffff           call 0x9a8200
// 009b5be1  8b10                 mov edx, dword ptr [eax]
// 009b5be3  8d4c2410             lea ecx, [esp + 0x10]
// 009b5be7  51                   push ecx
// 009b5be8  56                   push esi
// 009b5be9  83ec10               sub esp, 0x10
// 009b5bec  8bcc                 mov ecx, esp
// 009b5bee  8911                 mov dword ptr [ecx], edx
// 009b5bf0  8b5004               mov edx, dword ptr [eax + 4]
// 009b5bf3  895104               mov dword ptr [ecx + 4], edx
// 009b5bf6  8b5008               mov edx, dword ptr [eax + 8]
// 009b5bf9  8b400c               mov eax, dword ptr [eax + 0xc]
// 009b5bfc  895108               mov dword ptr [ecx + 8], edx
// 009b5bff  89410c               mov dword ptr [ecx + 0xc], eax
// 009b5c02  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 009b5c05  8b5120               mov edx, dword ptr [ecx + 0x20]
// 009b5c08  8b442458             mov eax, dword ptr [esp + 0x58]
// 009b5c0c  52                   push edx
// 009b5c0d  50                   push eax
// 009b5c0e  e8cd410300           call 0x9e9de0
// 009b5c13  83c420               add esp, 0x20
// 009b5c16  8d4c2410             lea ecx, [esp + 0x10]
// 009b5c1a  ff15d047b200         call dword ptr [0xb247d0]
// 009b5c20  8bc6                 mov eax, esi
// 009b5c22  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009b5c26  64890d00000000       mov dword ptr fs:[0], ecx
// 009b5c2d  59                   pop ecx
// 009b5c2e  5f                   pop edi
// 009b5c2f  5e                   pop esi
// 009b5c30  5d                   pop ebp
// 009b5c31  83c424               add esp, 0x24
// 009b5c34  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnToolHitTest@CXTPReportHeader@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportHeader.cpp