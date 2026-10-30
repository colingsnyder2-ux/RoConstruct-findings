// roc 2009-06 00740f30  unit: CInstanceRecord::CNameItem  size: 520 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00740f30
//
// 00740f30  6aff                 push -1
// 00740f32  685a698700           push 0x87695a
// 00740f37  64a100000000         mov eax, dword ptr fs:[0]
// 00740f3d  50                   push eax
// 00740f3e  83ec30               sub esp, 0x30
// 00740f41  53                   push ebx
// 00740f42  55                   push ebp
// 00740f43  56                   push esi
// 00740f44  57                   push edi
// 00740f45  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00740f4a  33c4                 xor eax, esp
// 00740f4c  50                   push eax
// 00740f4d  8d442444             lea eax, [esp + 0x44]
// 00740f51  64a300000000         mov dword ptr fs:[0], eax
// 00740f57  8bf1                 mov esi, ecx
// 00740f59  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 00740f5d  85ed                 test ebp, ebp
// 00740f5f  0f84bd010000         je 0x741122
// 00740f65  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00740f68  8bbb24020000         mov edi, dword ptr [ebx + 0x224]
// 00740f6e  8b4508               mov eax, dword ptr [ebp + 8]
// 00740f71  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00740f74  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00740f77  89442428             mov dword ptr [esp + 0x28], eax
// 00740f7b  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00740f7e  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00740f82  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 00740f85  89542430             mov dword ptr [esp + 0x30], edx
// 00740f89  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 00740f8c  89442434             mov dword ptr [esp + 0x34], eax
// 00740f90  8b4520               mov eax, dword ptr [ebp + 0x20]
// 00740f93  895c2414             mov dword ptr [esp + 0x14], ebx
// 00740f97  c74424202c438f00     mov dword ptr [esp + 0x20], 0x8f432c
// 00740f9f  895c2424             mov dword ptr [esp + 0x24], ebx
// 00740fa3  894c2438             mov dword ptr [esp + 0x38], ecx
// 00740fa7  8954243c             mov dword ptr [esp + 0x3c], edx
// 00740fab  89442440             mov dword ptr [esp + 0x40], eax
// 00740faf  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00740fb7  85ff                 test edi, edi
// 00740fb9  0f8463010000         je 0x741122
// 00740fbf  837f2000             cmp dword ptr [edi + 0x20], 0
// 00740fc3  0f8459010000         je 0x741122
// 00740fc9  397764               cmp dword ptr [edi + 0x64], esi
// 00740fcc  0f8550010000         jne 0x741122
// 00740fd2  8d4c2420             lea ecx, [esp + 0x20]
// 00740fd6  e835e8ffff           call 0x73f810
// 00740fdb  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 00740fde  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00740fe6  85c9                 test ecx, ecx
// 00740fe8  740c                 je 0x740ff6
// 00740fea  e8b97ffdff           call 0x718fa8
// 00740fef  c7476400000000       mov dword ptr [edi + 0x64], 0
// 00740ff6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00740ffa  51                   push ecx
// 00740ffb  8bce                 mov ecx, esi
// 00740ffd  e89ef5ffff           call 0x7405a0
// 00741002  83782400             cmp dword ptr [eax + 0x24], 0
// 00741006  7425                 je 0x74102d
// 00741008  8b8788000000         mov eax, dword ptr [edi + 0x88]
// 0074100e  85c0                 test eax, eax
// 00741010  0f84cf000000         je 0x7410e5
// 00741016  8b16                 mov edx, dword ptr [esi]
// 00741018  8b9234010000         mov edx, dword ptr [edx + 0x134]
// 0074101e  50                   push eax
// 0074101f  8d442424             lea eax, [esp + 0x24]
// 00741023  50                   push eax
// 00741024  8bce                 mov ecx, esi
// 00741026  ffd2                 call edx
// 00741028  e99e000000           jmp 0x7410cb
// 0074102d  8d4c2454             lea ecx, [esp + 0x54]
// 00741031  ff15bcfc8900         call dword ptr [0x89fcbc]
// 00741037  8d442454             lea eax, [esp + 0x54]
// 0074103b  50                   push eax
// 0074103c  8bcf                 mov ecx, edi
// 0074103e  c644245001           mov byte ptr [esp + 0x50], 1
// 00741043  e8d87ffdff           call 0x719020
// 00741048  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0074104c  8b16                 mov edx, dword ptr [esi]
// 0074104e  8b526c               mov edx, dword ptr [edx + 0x6c]
// 00741051  50                   push eax
// 00741052  8d4c241c             lea ecx, [esp + 0x1c]
// 00741056  51                   push ecx
// 00741057  8bce                 mov ecx, esi
// 00741059  ffd2                 call edx
// 0074105b  8bd8                 mov ebx, eax
// 0074105d  8d4c2454             lea ecx, [esp + 0x54]
// 00741061  c644244c02           mov byte ptr [esp + 0x4c], 2
// 00741066  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0074106c  50                   push eax
// 0074106d  8bcb                 mov ecx, ebx
// 0074106f  ff15d4fc8900         call dword ptr [0x89fcd4]
// 00741075  85c0                 test eax, eax
// 00741077  8d4c2418             lea ecx, [esp + 0x18]
// 0074107b  0f95c3               setne bl
// 0074107e  c644244c01           mov byte ptr [esp + 0x4c], 1
// 00741083  ff1510fd8900         call dword ptr [0x89fd10]
// 00741089  84db                 test bl, bl
// 0074108b  7423                 je 0x7410b0
// 0074108d  8b1e                 mov ebx, dword ptr [esi]
// 0074108f  8d4c2454             lea ecx, [esp + 0x54]
// 00741093  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00741099  8b9328010000         mov edx, dword ptr [ebx + 0x128]
// 0074109f  50                   push eax
// 007410a0  8d442424             lea eax, [esp + 0x24]
// 007410a4  50                   push eax
// 007410a5  8bce                 mov ecx, esi
// 007410a7  ffd2                 call edx
// 007410a9  bb01000000           mov ebx, 1
// 007410ae  eb04                 jmp 0x7410b4
// 007410b0  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007410b4  8d4c2454             lea ecx, [esp + 0x54]
// 007410b8  c644244c00           mov byte ptr [esp + 0x4c], 0
// 007410bd  ff1510fd8900         call dword ptr [0x89fd10]
// 007410c3  85db                 test ebx, ebx
// 007410c5  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007410c9  741a                 je 0x7410e5
// 007410cb  8bcb                 mov ecx, ebx
// 007410cd  e89e350000           call 0x744670
// 007410d2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007410d6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007410da  6aff                 push -1
// 007410dc  6a00                 push 0
// 007410de  6ac7                 push -0x39
// 007410e0  50                   push eax
// 007410e1  56                   push esi
// 007410e2  51                   push ecx
// 007410e3  eb1e                 jmp 0x741103
// 007410e5  8b16                 mov edx, dword ptr [esi]
// 007410e7  8b8230010000         mov eax, dword ptr [edx + 0x130]
// 007410ed  55                   push ebp
// 007410ee  8bce                 mov ecx, esi
// 007410f0  ffd0                 call eax
// 007410f2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007410f6  8b542428             mov edx, dword ptr [esp + 0x28]
// 007410fa  6aff                 push -1
// 007410fc  6a00                 push 0
// 007410fe  6ab8                 push -0x48
// 00741100  51                   push ecx
// 00741101  56                   push esi
// 00741102  52                   push edx
// 00741103  8bcb                 mov ecx, ebx
// 00741105  e8e6730000           call 0x7484f0
// 0074110a  8b4754               mov eax, dword ptr [edi + 0x54]
// 0074110d  8b5004               mov edx, dword ptr [eax + 4]
// 00741110  83c754               add edi, 0x54
// 00741113  6a00                 push 0
// 00741115  8bcf                 mov ecx, edi
// 00741117  ffd2                 call edx
// 00741119  8d4c2420             lea ecx, [esp + 0x20]
// 0074111d  e86ee0ffff           call 0x73f190
// 00741122  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00741126  64890d00000000       mov dword ptr fs:[0], ecx
// 0074112d  59                   pop ecx
// 0074112e  5f                   pop edi
// 0074112f  5e                   pop esi
// 00741130  5d                   pop ebp
// 00741131  5b                   pop ebx
// 00741132  83c43c               add esp, 0x3c
// 00741135  c20400               ret 4
// copied from an identical function in another client (function ?OnValidateEdit@CXTPReportRecordItem@@UAEXPAUXTP_REPORTRECORDITEM_ARGS@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRecordItem.cpp