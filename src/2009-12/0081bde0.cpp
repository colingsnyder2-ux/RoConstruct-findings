// roc 2009-12 0081bde0  unit: CInstanceRecord::CNameItem  size: 520 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081bde0
//
// 0081bde0  6aff                 push -1
// 0081bde2  68eaab9500           push 0x95abea
// 0081bde7  64a100000000         mov eax, dword ptr fs:[0]
// 0081bded  50                   push eax
// 0081bdee  83ec30               sub esp, 0x30
// 0081bdf1  53                   push ebx
// 0081bdf2  55                   push ebp
// 0081bdf3  56                   push esi
// 0081bdf4  57                   push edi
// 0081bdf5  a10052b600           mov eax, dword ptr [0xb65200]
// 0081bdfa  33c4                 xor eax, esp
// 0081bdfc  50                   push eax
// 0081bdfd  8d442444             lea eax, [esp + 0x44]
// 0081be01  64a300000000         mov dword ptr fs:[0], eax
// 0081be07  8bf1                 mov esi, ecx
// 0081be09  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 0081be0d  85ed                 test ebp, ebp
// 0081be0f  0f84bd010000         je 0x81bfd2
// 0081be15  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0081be18  8bbb24020000         mov edi, dword ptr [ebx + 0x224]
// 0081be1e  8b4508               mov eax, dword ptr [ebp + 8]
// 0081be21  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0081be24  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0081be27  89442428             mov dword ptr [esp + 0x28], eax
// 0081be2b  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0081be2e  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0081be32  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0081be35  89542430             mov dword ptr [esp + 0x30], edx
// 0081be39  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 0081be3c  89442434             mov dword ptr [esp + 0x34], eax
// 0081be40  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0081be43  895c2414             mov dword ptr [esp + 0x14], ebx
// 0081be47  c7442420ec479f00     mov dword ptr [esp + 0x20], 0x9f47ec
// 0081be4f  895c2424             mov dword ptr [esp + 0x24], ebx
// 0081be53  894c2438             mov dword ptr [esp + 0x38], ecx
// 0081be57  8954243c             mov dword ptr [esp + 0x3c], edx
// 0081be5b  89442440             mov dword ptr [esp + 0x40], eax
// 0081be5f  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0081be67  85ff                 test edi, edi
// 0081be69  0f8463010000         je 0x81bfd2
// 0081be6f  837f2000             cmp dword ptr [edi + 0x20], 0
// 0081be73  0f8459010000         je 0x81bfd2
// 0081be79  397764               cmp dword ptr [edi + 0x64], esi
// 0081be7c  0f8550010000         jne 0x81bfd2
// 0081be82  8d4c2420             lea ecx, [esp + 0x20]
// 0081be86  e895e8ffff           call 0x81a720
// 0081be8b  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 0081be8e  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0081be96  85c9                 test ecx, ecx
// 0081be98  740c                 je 0x81bea6
// 0081be9a  e83d7ffdff           call 0x7f3ddc
// 0081be9f  c7476400000000       mov dword ptr [edi + 0x64], 0
// 0081bea6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0081beaa  51                   push ecx
// 0081beab  8bce                 mov ecx, esi
// 0081bead  e8fef5ffff           call 0x81b4b0
// 0081beb2  83782400             cmp dword ptr [eax + 0x24], 0
// 0081beb6  7425                 je 0x81bedd
// 0081beb8  8b8788000000         mov eax, dword ptr [edi + 0x88]
// 0081bebe  85c0                 test eax, eax
// 0081bec0  0f84cf000000         je 0x81bf95
// 0081bec6  8b16                 mov edx, dword ptr [esi]
// 0081bec8  8b9234010000         mov edx, dword ptr [edx + 0x134]
// 0081bece  50                   push eax
// 0081becf  8d442424             lea eax, [esp + 0x24]
// 0081bed3  50                   push eax
// 0081bed4  8bce                 mov ecx, esi
// 0081bed6  ffd2                 call edx
// 0081bed8  e99e000000           jmp 0x81bf7b
// 0081bedd  8d4c2454             lea ecx, [esp + 0x54]
// 0081bee1  ff1574de9800         call dword ptr [0x98de74]
// 0081bee7  8d442454             lea eax, [esp + 0x54]
// 0081beeb  50                   push eax
// 0081beec  8bcf                 mov ecx, edi
// 0081beee  c644245001           mov byte ptr [esp + 0x50], 1
// 0081bef3  e8507ffdff           call 0x7f3e48
// 0081bef8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0081befc  8b16                 mov edx, dword ptr [esi]
// 0081befe  8b526c               mov edx, dword ptr [edx + 0x6c]
// 0081bf01  50                   push eax
// 0081bf02  8d4c241c             lea ecx, [esp + 0x1c]
// 0081bf06  51                   push ecx
// 0081bf07  8bce                 mov ecx, esi
// 0081bf09  ffd2                 call edx
// 0081bf0b  8bd8                 mov ebx, eax
// 0081bf0d  8d4c2454             lea ecx, [esp + 0x54]
// 0081bf11  c644244c02           mov byte ptr [esp + 0x4c], 2
// 0081bf16  ff1580de9800         call dword ptr [0x98de80]
// 0081bf1c  50                   push eax
// 0081bf1d  8bcb                 mov ecx, ebx
// 0081bf1f  ff1584de9800         call dword ptr [0x98de84]
// 0081bf25  85c0                 test eax, eax
// 0081bf27  8d4c2418             lea ecx, [esp + 0x18]
// 0081bf2b  0f95c3               setne bl
// 0081bf2e  c644244c01           mov byte ptr [esp + 0x4c], 1
// 0081bf33  ff15c0de9800         call dword ptr [0x98dec0]
// 0081bf39  84db                 test bl, bl
// 0081bf3b  7423                 je 0x81bf60
// 0081bf3d  8b1e                 mov ebx, dword ptr [esi]
// 0081bf3f  8d4c2454             lea ecx, [esp + 0x54]
// 0081bf43  ff1580de9800         call dword ptr [0x98de80]
// 0081bf49  8b9328010000         mov edx, dword ptr [ebx + 0x128]
// 0081bf4f  50                   push eax
// 0081bf50  8d442424             lea eax, [esp + 0x24]
// 0081bf54  50                   push eax
// 0081bf55  8bce                 mov ecx, esi
// 0081bf57  ffd2                 call edx
// 0081bf59  bb01000000           mov ebx, 1
// 0081bf5e  eb04                 jmp 0x81bf64
// 0081bf60  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0081bf64  8d4c2454             lea ecx, [esp + 0x54]
// 0081bf68  c644244c00           mov byte ptr [esp + 0x4c], 0
// 0081bf6d  ff15c0de9800         call dword ptr [0x98dec0]
// 0081bf73  85db                 test ebx, ebx
// 0081bf75  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0081bf79  741a                 je 0x81bf95
// 0081bf7b  8bcb                 mov ecx, ebx
// 0081bf7d  e8fe340000           call 0x81f480
// 0081bf82  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0081bf86  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0081bf8a  6aff                 push -1
// 0081bf8c  6a00                 push 0
// 0081bf8e  6ac7                 push -0x39
// 0081bf90  50                   push eax
// 0081bf91  56                   push esi
// 0081bf92  51                   push ecx
// 0081bf93  eb1e                 jmp 0x81bfb3
// 0081bf95  8b16                 mov edx, dword ptr [esi]
// 0081bf97  8b8230010000         mov eax, dword ptr [edx + 0x130]
// 0081bf9d  55                   push ebp
// 0081bf9e  8bce                 mov ecx, esi
// 0081bfa0  ffd0                 call eax
// 0081bfa2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0081bfa6  8b542428             mov edx, dword ptr [esp + 0x28]
// 0081bfaa  6aff                 push -1
// 0081bfac  6a00                 push 0
// 0081bfae  6ab8                 push -0x48
// 0081bfb0  51                   push ecx
// 0081bfb1  56                   push esi
// 0081bfb2  52                   push edx
// 0081bfb3  8bcb                 mov ecx, ebx
// 0081bfb5  e846730000           call 0x823300
// 0081bfba  8b4754               mov eax, dword ptr [edi + 0x54]
// 0081bfbd  8b5004               mov edx, dword ptr [eax + 4]
// 0081bfc0  83c754               add edi, 0x54
// 0081bfc3  6a00                 push 0
// 0081bfc5  8bcf                 mov ecx, edi
// 0081bfc7  ffd2                 call edx
// 0081bfc9  8d4c2420             lea ecx, [esp + 0x20]
// 0081bfcd  e8dee0ffff           call 0x81a0b0
// 0081bfd2  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0081bfd6  64890d00000000       mov dword ptr fs:[0], ecx
// 0081bfdd  59                   pop ecx
// 0081bfde  5f                   pop edi
// 0081bfdf  5e                   pop esi
// 0081bfe0  5d                   pop ebp
// 0081bfe1  5b                   pop ebx
// 0081bfe2  83c43c               add esp, 0x3c
// 0081bfe5  c20400               ret 4
// copied from an identical function in another client (function ?OnValidateEdit@CXTPReportRecordItem@@UAEXPAUXTP_REPORTRECORDITEM_ARGS@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRecordItem.cpp