// roc 2011-06 0083d4a0  unit: CXTPReportHeader  size: 375 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083d4a0
//
// 0083d4a0  6aff                 push -1
// 0083d4a2  68cb4ba000           push 0xa04bcb
// 0083d4a7  64a100000000         mov eax, dword ptr fs:[0]
// 0083d4ad  50                   push eax
// 0083d4ae  83ec18               sub esp, 0x18
// 0083d4b1  55                   push ebp
// 0083d4b2  56                   push esi
// 0083d4b3  57                   push edi
// 0083d4b4  a12058c900           mov eax, dword ptr [0xc95820]
// 0083d4b9  33c4                 xor eax, esp
// 0083d4bb  50                   push eax
// 0083d4bc  8d442428             lea eax, [esp + 0x28]
// 0083d4c0  64a300000000         mov dword ptr fs:[0], eax
// 0083d4c6  8bf9                 mov edi, ecx
// 0083d4c8  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0083d4cc  8b07                 mov eax, dword ptr [edi]
// 0083d4ce  8b542438             mov edx, dword ptr [esp + 0x38]
// 0083d4d2  8b8080000000         mov eax, dword ptr [eax + 0x80]
// 0083d4d8  51                   push ecx
// 0083d4d9  52                   push edx
// 0083d4da  8bcf                 mov ecx, edi
// 0083d4dc  ffd0                 call eax
// 0083d4de  8bf0                 mov esi, eax
// 0083d4e0  85f6                 test esi, esi
// 0083d4e2  0f84b5000000         je 0x83d59d
// 0083d4e8  8d4c2410             lea ecx, [esp + 0x10]
// 0083d4ec  51                   push ecx
// 0083d4ed  8bce                 mov ecx, esi
// 0083d4ef  e86c5b0900           call 0x8d3060
// 0083d4f4  8d4c2410             lea ecx, [esp + 0x10]
// 0083d4f8  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0083d500  ff15b026a400         call dword ptr [0xa426b0]
// 0083d506  84c0                 test al, al
// 0083d508  747b                 je 0x83d585
// 0083d50a  8bcf                 mov ecx, edi
// 0083d50c  e80fe7ffff           call 0x83bc20
// 0083d511  8d542414             lea edx, [esp + 0x14]
// 0083d515  52                   push edx
// 0083d516  8bce                 mov ecx, esi
// 0083d518  8be8                 mov ebp, eax
// 0083d51a  e8d1e6ffff           call 0x83bbf0
// 0083d51f  50                   push eax
// 0083d520  8d4c2414             lea ecx, [esp + 0x14]
// 0083d524  c644243401           mov byte ptr [esp + 0x34], 1
// 0083d529  ff156425a400         call dword ptr [0xa42564]
// 0083d52f  8d4c2414             lea ecx, [esp + 0x14]
// 0083d533  c644243000           mov byte ptr [esp + 0x30], 0
// 0083d538  ff15082ea400         call dword ptr [0xa42e08]
// 0083d53e  837e4400             cmp dword ptr [esi + 0x44], 0
// 0083d542  7441                 je 0x83d585
// 0083d544  83bf8800000000       cmp dword ptr [edi + 0x88], 0
// 0083d54b  7438                 je 0x83d585
// 0083d54d  8d442410             lea eax, [esp + 0x10]
// 0083d551  50                   push eax
// 0083d552  81c518020000         add ebp, 0x218
// 0083d558  8d4c2418             lea ecx, [esp + 0x18]
// 0083d55c  55                   push ebp
// 0083d55d  51                   push ecx
// 0083d55e  e82d6bc0ff           call 0x444090
// 0083d563  83c40c               add esp, 0xc
// 0083d566  50                   push eax
// 0083d567  8d4c2414             lea ecx, [esp + 0x14]
// 0083d56b  c644243402           mov byte ptr [esp + 0x34], 2
// 0083d570  ff156425a400         call dword ptr [0xa42564]
// 0083d576  8d4c2414             lea ecx, [esp + 0x14]
// 0083d57a  c644243000           mov byte ptr [esp + 0x30], 0
// 0083d57f  ff15082ea400         call dword ptr [0xa42e08]
// 0083d585  8d4c2410             lea ecx, [esp + 0x10]
// 0083d589  ff15a826a400         call dword ptr [0xa426a8]
// 0083d58f  85c0                 test eax, eax
// 0083d591  7522                 jne 0x83d5b5
// 0083d593  8d4c2410             lea ecx, [esp + 0x10]
// 0083d597  ff15082ea400         call dword ptr [0xa42e08]
// 0083d59d  83c8ff               or eax, 0xffffffff
// 0083d5a0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0083d5a4  64890d00000000       mov dword ptr fs:[0], ecx
// 0083d5ab  59                   pop ecx
// 0083d5ac  5f                   pop edi
// 0083d5ad  5e                   pop esi
// 0083d5ae  5d                   pop ebp
// 0083d5af  83c424               add esp, 0x24
// 0083d5b2  c20c00               ret 0xc
// 0083d5b5  8d542418             lea edx, [esp + 0x18]
// 0083d5b9  52                   push edx
// 0083d5ba  8bce                 mov ecx, esi
// 0083d5bc  e83f26ffff           call 0x82fc00
// 0083d5c1  8b10                 mov edx, dword ptr [eax]
// 0083d5c3  8d4c2410             lea ecx, [esp + 0x10]
// 0083d5c7  51                   push ecx
// 0083d5c8  56                   push esi
// 0083d5c9  83ec10               sub esp, 0x10
// 0083d5cc  8bcc                 mov ecx, esp
// 0083d5ce  8911                 mov dword ptr [ecx], edx
// 0083d5d0  8b5004               mov edx, dword ptr [eax + 4]
// 0083d5d3  895104               mov dword ptr [ecx + 4], edx
// 0083d5d6  8b5008               mov edx, dword ptr [eax + 8]
// 0083d5d9  8b400c               mov eax, dword ptr [eax + 0xc]
// 0083d5dc  895108               mov dword ptr [ecx + 8], edx
// 0083d5df  89410c               mov dword ptr [ecx + 0xc], eax
// 0083d5e2  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0083d5e5  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0083d5e8  8b442458             mov eax, dword ptr [esp + 0x58]
// 0083d5ec  52                   push edx
// 0083d5ed  50                   push eax
// 0083d5ee  e8ad420300           call 0x8718a0
// 0083d5f3  83c420               add esp, 0x20
// 0083d5f6  8d4c2410             lea ecx, [esp + 0x10]
// 0083d5fa  ff15082ea400         call dword ptr [0xa42e08]
// 0083d600  8bc6                 mov eax, esi
// 0083d602  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0083d606  64890d00000000       mov dword ptr fs:[0], ecx
// 0083d60d  59                   pop ecx
// 0083d60e  5f                   pop edi
// 0083d60f  5e                   pop esi
// 0083d610  5d                   pop ebp
// 0083d611  83c424               add esp, 0x24
// 0083d614  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnToolHitTest@CXTPReportHeader@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportHeader.cpp