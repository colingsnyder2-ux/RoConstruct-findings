// roc 2012-06 009b88a0  unit: CInstanceRecord::CNameItem  size: 520 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b88a0
//
// 009b88a0  6aff                 push -1
// 009b88a2  686aecad00           push 0xadec6a
// 009b88a7  64a100000000         mov eax, dword ptr fs:[0]
// 009b88ad  50                   push eax
// 009b88ae  83ec30               sub esp, 0x30
// 009b88b1  53                   push ebx
// 009b88b2  55                   push ebp
// 009b88b3  56                   push esi
// 009b88b4  57                   push edi
// 009b88b5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009b88ba  33c4                 xor eax, esp
// 009b88bc  50                   push eax
// 009b88bd  8d442444             lea eax, [esp + 0x44]
// 009b88c1  64a300000000         mov dword ptr fs:[0], eax
// 009b88c7  8bf1                 mov esi, ecx
// 009b88c9  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 009b88cd  85ed                 test ebp, ebp
// 009b88cf  0f84bd010000         je 0x9b8a92
// 009b88d5  8b5d04               mov ebx, dword ptr [ebp + 4]
// 009b88d8  8bbb24020000         mov edi, dword ptr [ebx + 0x224]
// 009b88de  8b4508               mov eax, dword ptr [ebp + 8]
// 009b88e1  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 009b88e4  8b5510               mov edx, dword ptr [ebp + 0x10]
// 009b88e7  89442428             mov dword ptr [esp + 0x28], eax
// 009b88eb  8b4514               mov eax, dword ptr [ebp + 0x14]
// 009b88ee  894c242c             mov dword ptr [esp + 0x2c], ecx
// 009b88f2  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 009b88f5  89542430             mov dword ptr [esp + 0x30], edx
// 009b88f9  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 009b88fc  89442434             mov dword ptr [esp + 0x34], eax
// 009b8900  8b4520               mov eax, dword ptr [ebp + 0x20]
// 009b8903  895c2414             mov dword ptr [esp + 0x14], ebx
// 009b8907  c7442420800cc100     mov dword ptr [esp + 0x20], 0xc10c80
// 009b890f  895c2424             mov dword ptr [esp + 0x24], ebx
// 009b8913  894c2438             mov dword ptr [esp + 0x38], ecx
// 009b8917  8954243c             mov dword ptr [esp + 0x3c], edx
// 009b891b  89442440             mov dword ptr [esp + 0x40], eax
// 009b891f  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 009b8927  85ff                 test edi, edi
// 009b8929  0f8463010000         je 0x9b8a92
// 009b892f  837f2000             cmp dword ptr [edi + 0x20], 0
// 009b8933  0f8459010000         je 0x9b8a92
// 009b8939  397764               cmp dword ptr [edi + 0x64], esi
// 009b893c  0f8550010000         jne 0x9b8a92
// 009b8942  8d4c2420             lea ecx, [esp + 0x20]
// 009b8946  e8e5e8ffff           call 0x9b7230
// 009b894b  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 009b894e  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 009b8956  85c9                 test ecx, ecx
// 009b8958  740c                 je 0x9b8966
// 009b895a  e82b9dfcff           call 0x98268a
// 009b895f  c7476400000000       mov dword ptr [edi + 0x64], 0
// 009b8966  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009b896a  51                   push ecx
// 009b896b  8bce                 mov ecx, esi
// 009b896d  e84ef6ffff           call 0x9b7fc0
// 009b8972  83782400             cmp dword ptr [eax + 0x24], 0
// 009b8976  7425                 je 0x9b899d
// 009b8978  8b8788000000         mov eax, dword ptr [edi + 0x88]
// 009b897e  85c0                 test eax, eax
// 009b8980  0f84cf000000         je 0x9b8a55
// 009b8986  8b16                 mov edx, dword ptr [esi]
// 009b8988  8b9234010000         mov edx, dword ptr [edx + 0x134]
// 009b898e  50                   push eax
// 009b898f  8d442424             lea eax, [esp + 0x24]
// 009b8993  50                   push eax
// 009b8994  8bce                 mov ecx, esi
// 009b8996  ffd2                 call edx
// 009b8998  e99e000000           jmp 0x9b8a3b
// 009b899d  8d4c2454             lea ecx, [esp + 0x54]
// 009b89a1  ff158447b200         call dword ptr [0xb24784]
// 009b89a7  8d442454             lea eax, [esp + 0x54]
// 009b89ab  50                   push eax
// 009b89ac  8bcf                 mov ecx, edi
// 009b89ae  c644245001           mov byte ptr [esp + 0x50], 1
// 009b89b3  e83e9dfcff           call 0x9826f6
// 009b89b8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 009b89bc  8b16                 mov edx, dword ptr [esi]
// 009b89be  8b526c               mov edx, dword ptr [edx + 0x6c]
// 009b89c1  50                   push eax
// 009b89c2  8d4c241c             lea ecx, [esp + 0x1c]
// 009b89c6  51                   push ecx
// 009b89c7  8bce                 mov ecx, esi
// 009b89c9  ffd2                 call edx
// 009b89cb  8bd8                 mov ebx, eax
// 009b89cd  8d4c2454             lea ecx, [esp + 0x54]
// 009b89d1  c644244c02           mov byte ptr [esp + 0x4c], 2
// 009b89d6  ff159847b200         call dword ptr [0xb24798]
// 009b89dc  50                   push eax
// 009b89dd  8bcb                 mov ecx, ebx
// 009b89df  ff159c47b200         call dword ptr [0xb2479c]
// 009b89e5  85c0                 test eax, eax
// 009b89e7  8d4c2418             lea ecx, [esp + 0x18]
// 009b89eb  0f95c3               setne bl
// 009b89ee  c644244c01           mov byte ptr [esp + 0x4c], 1
// 009b89f3  ff15d047b200         call dword ptr [0xb247d0]
// 009b89f9  84db                 test bl, bl
// 009b89fb  7423                 je 0x9b8a20
// 009b89fd  8b1e                 mov ebx, dword ptr [esi]
// 009b89ff  8d4c2454             lea ecx, [esp + 0x54]
// 009b8a03  ff159847b200         call dword ptr [0xb24798]
// 009b8a09  8b9328010000         mov edx, dword ptr [ebx + 0x128]
// 009b8a0f  50                   push eax
// 009b8a10  8d442424             lea eax, [esp + 0x24]
// 009b8a14  50                   push eax
// 009b8a15  8bce                 mov ecx, esi
// 009b8a17  ffd2                 call edx
// 009b8a19  bb01000000           mov ebx, 1
// 009b8a1e  eb04                 jmp 0x9b8a24
// 009b8a20  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 009b8a24  8d4c2454             lea ecx, [esp + 0x54]
// 009b8a28  c644244c00           mov byte ptr [esp + 0x4c], 0
// 009b8a2d  ff15d047b200         call dword ptr [0xb247d0]
// 009b8a33  85db                 test ebx, ebx
// 009b8a35  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 009b8a39  741a                 je 0x9b8a55
// 009b8a3b  8bcb                 mov ecx, ebx
// 009b8a3d  e82e32ffff           call 0x9abc70
// 009b8a42  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 009b8a46  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009b8a4a  6aff                 push -1
// 009b8a4c  6a00                 push 0
// 009b8a4e  6ac7                 push -0x39
// 009b8a50  50                   push eax
// 009b8a51  56                   push esi
// 009b8a52  51                   push ecx
// 009b8a53  eb1e                 jmp 0x9b8a73
// 009b8a55  8b16                 mov edx, dword ptr [esi]
// 009b8a57  8b8230010000         mov eax, dword ptr [edx + 0x130]
// 009b8a5d  55                   push ebp
// 009b8a5e  8bce                 mov ecx, esi
// 009b8a60  ffd0                 call eax
// 009b8a62  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009b8a66  8b542428             mov edx, dword ptr [esp + 0x28]
// 009b8a6a  6aff                 push -1
// 009b8a6c  6a00                 push 0
// 009b8a6e  6ab8                 push -0x48
// 009b8a70  51                   push ecx
// 009b8a71  56                   push esi
// 009b8a72  52                   push edx
// 009b8a73  8bcb                 mov ecx, ebx
// 009b8a75  e88670ffff           call 0x9afb00
// 009b8a7a  8b4754               mov eax, dword ptr [edi + 0x54]
// 009b8a7d  8b5004               mov edx, dword ptr [eax + 4]
// 009b8a80  83c754               add edi, 0x54
// 009b8a83  6a00                 push 0
// 009b8a85  8bcf                 mov ecx, edi
// 009b8a87  ffd2                 call edx
// 009b8a89  8d4c2420             lea ecx, [esp + 0x20]
// 009b8a8d  e89ee1ffff           call 0x9b6c30
// 009b8a92  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 009b8a96  64890d00000000       mov dword ptr fs:[0], ecx
// 009b8a9d  59                   pop ecx
// 009b8a9e  5f                   pop edi
// 009b8a9f  5e                   pop esi
// 009b8aa0  5d                   pop ebp
// 009b8aa1  5b                   pop ebx
// 009b8aa2  83c43c               add esp, 0x3c
// 009b8aa5  c20400               ret 4
// copied from an identical function in another client (function ?OnValidateEdit@CXTPReportRecordItem@@UAEXPAUXTP_REPORTRECORDITEM_ARGS@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRecordItem.cpp