// roc 2009-12 00829ba0  unit: CXTPReportHeader  size: 375 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00829ba0
//
// 00829ba0  6aff                 push -1
// 00829ba2  680bb99500           push 0x95b90b
// 00829ba7  64a100000000         mov eax, dword ptr fs:[0]
// 00829bad  50                   push eax
// 00829bae  83ec18               sub esp, 0x18
// 00829bb1  55                   push ebp
// 00829bb2  56                   push esi
// 00829bb3  57                   push edi
// 00829bb4  a10052b600           mov eax, dword ptr [0xb65200]
// 00829bb9  33c4                 xor eax, esp
// 00829bbb  50                   push eax
// 00829bbc  8d442428             lea eax, [esp + 0x28]
// 00829bc0  64a300000000         mov dword ptr fs:[0], eax
// 00829bc6  8bf9                 mov edi, ecx
// 00829bc8  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00829bcc  8b07                 mov eax, dword ptr [edi]
// 00829bce  8b542438             mov edx, dword ptr [esp + 0x38]
// 00829bd2  8b8080000000         mov eax, dword ptr [eax + 0x80]
// 00829bd8  51                   push ecx
// 00829bd9  52                   push edx
// 00829bda  8bcf                 mov ecx, edi
// 00829bdc  ffd0                 call eax
// 00829bde  8bf0                 mov esi, eax
// 00829be0  85f6                 test esi, esi
// 00829be2  0f84b5000000         je 0x829c9d
// 00829be8  8d4c2410             lea ecx, [esp + 0x10]
// 00829bec  51                   push ecx
// 00829bed  8bce                 mov ecx, esi
// 00829bef  e87c430a00           call 0x8cdf70
// 00829bf4  8d4c2410             lea ecx, [esp + 0x10]
// 00829bf8  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00829c00  ff15bcdd9800         call dword ptr [0x98ddbc]
// 00829c06  84c0                 test al, al
// 00829c08  747b                 je 0x829c85
// 00829c0a  8bcf                 mov ecx, edi
// 00829c0c  e80fe7ffff           call 0x828320
// 00829c11  8d542414             lea edx, [esp + 0x14]
// 00829c15  52                   push edx
// 00829c16  8bce                 mov ecx, esi
// 00829c18  8be8                 mov ebp, eax
// 00829c1a  e85104ffff           call 0x81a070
// 00829c1f  50                   push eax
// 00829c20  8d4c2414             lea ecx, [esp + 0x14]
// 00829c24  c644243401           mov byte ptr [esp + 0x34], 1
// 00829c29  ff1538d59800         call dword ptr [0x98d538]
// 00829c2f  8d4c2414             lea ecx, [esp + 0x14]
// 00829c33  c644243000           mov byte ptr [esp + 0x30], 0
// 00829c38  ff15c0de9800         call dword ptr [0x98dec0]
// 00829c3e  837e4400             cmp dword ptr [esi + 0x44], 0
// 00829c42  7441                 je 0x829c85
// 00829c44  83bf8800000000       cmp dword ptr [edi + 0x88], 0
// 00829c4b  7438                 je 0x829c85
// 00829c4d  8d442410             lea eax, [esp + 0x10]
// 00829c51  50                   push eax
// 00829c52  81c518020000         add ebp, 0x218
// 00829c58  8d4c2418             lea ecx, [esp + 0x18]
// 00829c5c  55                   push ebp
// 00829c5d  51                   push ecx
// 00829c5e  e8dd20c3ff           call 0x45bd40
// 00829c63  83c40c               add esp, 0xc
// 00829c66  50                   push eax
// 00829c67  8d4c2414             lea ecx, [esp + 0x14]
// 00829c6b  c644243402           mov byte ptr [esp + 0x34], 2
// 00829c70  ff1538d59800         call dword ptr [0x98d538]
// 00829c76  8d4c2414             lea ecx, [esp + 0x14]
// 00829c7a  c644243000           mov byte ptr [esp + 0x30], 0
// 00829c7f  ff15c0de9800         call dword ptr [0x98dec0]
// 00829c85  8d4c2410             lea ecx, [esp + 0x10]
// 00829c89  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00829c8f  85c0                 test eax, eax
// 00829c91  7522                 jne 0x829cb5
// 00829c93  8d4c2410             lea ecx, [esp + 0x10]
// 00829c97  ff15c0de9800         call dword ptr [0x98dec0]
// 00829c9d  83c8ff               or eax, 0xffffffff
// 00829ca0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00829ca4  64890d00000000       mov dword ptr fs:[0], ecx
// 00829cab  59                   pop ecx
// 00829cac  5f                   pop edi
// 00829cad  5e                   pop esi
// 00829cae  5d                   pop ebp
// 00829caf  83c424               add esp, 0x24
// 00829cb2  c20c00               ret 0xc
// 00829cb5  8d542418             lea edx, [esp + 0x18]
// 00829cb9  52                   push edx
// 00829cba  8bce                 mov ecx, esi
// 00829cbc  e80fdeffff           call 0x827ad0
// 00829cc1  8b10                 mov edx, dword ptr [eax]
// 00829cc3  8d4c2410             lea ecx, [esp + 0x10]
// 00829cc7  51                   push ecx
// 00829cc8  56                   push esi
// 00829cc9  83ec10               sub esp, 0x10
// 00829ccc  8bcc                 mov ecx, esp
// 00829cce  8911                 mov dword ptr [ecx], edx
// 00829cd0  8b5004               mov edx, dword ptr [eax + 4]
// 00829cd3  895104               mov dword ptr [ecx + 4], edx
// 00829cd6  8b5008               mov edx, dword ptr [eax + 8]
// 00829cd9  8b400c               mov eax, dword ptr [eax + 0xc]
// 00829cdc  895108               mov dword ptr [ecx + 8], edx
// 00829cdf  89410c               mov dword ptr [ecx + 0xc], eax
// 00829ce2  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 00829ce5  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00829ce8  8b442458             mov eax, dword ptr [esp + 0x58]
// 00829cec  52                   push edx
// 00829ced  50                   push eax
// 00829cee  e83d630300           call 0x860030
// 00829cf3  83c420               add esp, 0x20
// 00829cf6  8d4c2410             lea ecx, [esp + 0x10]
// 00829cfa  ff15c0de9800         call dword ptr [0x98dec0]
// 00829d00  8bc6                 mov eax, esi
// 00829d02  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00829d06  64890d00000000       mov dword ptr fs:[0], ecx
// 00829d0d  59                   pop ecx
// 00829d0e  5f                   pop edi
// 00829d0f  5e                   pop esi
// 00829d10  5d                   pop ebp
// 00829d11  83c424               add esp, 0x24
// 00829d14  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnToolHitTest@CXTPReportHeader@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportHeader.cpp