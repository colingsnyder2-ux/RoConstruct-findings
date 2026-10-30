// roc 2009-12 00822e30  unit: CXTPReportControl  size: 372 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00822e30
//
// 00822e30  51                   push ecx
// 00822e31  56                   push esi
// 00822e32  8bf1                 mov esi, ecx
// 00822e34  e807b7ffff           call 0x81e540
// 00822e39  85c0                 test eax, eax
// 00822e3b  8b06                 mov eax, dword ptr [esi]
// 00822e3d  740e                 je 0x822e4d
// 00822e3f  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 00822e45  8bce                 mov ecx, esi
// 00822e47  5e                   pop esi
// 00822e48  83c404               add esp, 4
// 00822e4b  ffe2                 jmp edx
// 00822e4d  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 00822e53  8b90b8010000         mov edx, dword ptr [eax + 0x1b8]
// 00822e59  53                   push ebx
// 00822e5a  55                   push ebp
// 00822e5b  57                   push edi
// 00822e5c  51                   push ecx
// 00822e5d  8bce                 mov ecx, esi
// 00822e5f  ffd2                 call edx
// 00822e61  8bce                 mov ecx, esi
// 00822e63  e8f8b6ffff           call 0x81e560
// 00822e68  85c0                 test eax, eax
// 00822e6a  7418                 je 0x822e84
// 00822e6c  8bce                 mov ecx, esi
// 00822e6e  e8edb6ffff           call 0x81e560
// 00822e73  8b10                 mov edx, dword ptr [eax]
// 00822e75  8bc8                 mov ecx, eax
// 00822e77  8b4260               mov eax, dword ptr [edx + 0x60]
// 00822e7a  ffd0                 call eax
// 00822e7c  8be8                 mov ebp, eax
// 00822e7e  896c2410             mov dword ptr [esp + 0x10], ebp
// 00822e82  eb0c                 jmp 0x822e90
// 00822e84  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00822e8c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00822e90  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00822e96  8b11                 mov edx, dword ptr [ecx]
// 00822e98  8b4258               mov eax, dword ptr [edx + 0x58]
// 00822e9b  6a01                 push 1
// 00822e9d  ffd0                 call eax
// 00822e9f  8b9644020000         mov edx, dword ptr [esi + 0x244]
// 00822ea5  8b4258               mov eax, dword ptr [edx + 0x58]
// 00822ea8  8d8e44020000         lea ecx, [esi + 0x244]
// 00822eae  6a00                 push 0
// 00822eb0  ffd0                 call eax
// 00822eb2  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 00822eb8  33ff                 xor edi, edi
// 00822eba  e8619d0000           call 0x82cc20
// 00822ebf  85c0                 test eax, eax
// 00822ec1  7e42                 jle 0x822f05
// 00822ec3  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 00822ec9  8b11                 mov edx, dword ptr [ecx]
// 00822ecb  8b425c               mov eax, dword ptr [edx + 0x5c]
// 00822ece  57                   push edi
// 00822ecf  ffd0                 call eax
// 00822ed1  8b1e                 mov ebx, dword ptr [esi]
// 00822ed3  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00822ed9  8be8                 mov ebp, eax
// 00822edb  55                   push ebp
// 00822edc  81c3d0010000         add ebx, 0x1d0
// 00822ee2  e8399d0000           call 0x82cc20
// 00822ee7  8b13                 mov edx, dword ptr [ebx]
// 00822ee9  50                   push eax
// 00822eea  8bce                 mov ecx, esi
// 00822eec  ffd2                 call edx
// 00822eee  897d6c               mov dword ptr [ebp + 0x6c], edi
// 00822ef1  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 00822ef7  47                   inc edi
// 00822ef8  e8239d0000           call 0x82cc20
// 00822efd  3bf8                 cmp edi, eax
// 00822eff  7cc2                 jl 0x822ec3
// 00822f01  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00822f05  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00822f0b  c7861c010000ffffffff mov dword ptr [esi + 0x11c], 0xffffffff
// 00822f15  e8069d0000           call 0x82cc20
// 00822f1a  33db                 xor ebx, ebx
// 00822f1c  89442410             mov dword ptr [esp + 0x10], eax
// 00822f20  85c0                 test eax, eax
// 00822f22  7e64                 jle 0x822f88
// 00822f24  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00822f2a  8b01                 mov eax, dword ptr [ecx]
// 00822f2c  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00822f2f  53                   push ebx
// 00822f30  ffd2                 call edx
// 00822f32  8bf8                 mov edi, eax
// 00822f34  85ff                 test edi, edi
// 00822f36  7449                 je 0x822f81
// 00822f38  8b07                 mov eax, dword ptr [edi]
// 00822f3a  8b90f8000000         mov edx, dword ptr [eax + 0xf8]
// 00822f40  53                   push ebx
// 00822f41  8bcf                 mov ecx, edi
// 00822f43  ffd2                 call edx
// 00822f45  c7475c01000000       mov dword ptr [edi + 0x5c], 1
// 00822f4c  85ed                 test ebp, ebp
// 00822f4e  7431                 je 0x822f81
// 00822f50  8b07                 mov eax, dword ptr [edi]
// 00822f52  8b5060               mov edx, dword ptr [eax + 0x60]
// 00822f55  8bcf                 mov ecx, edi
// 00822f57  ffd2                 call edx
// 00822f59  3bc5                 cmp eax, ebp
// 00822f5b  7524                 jne 0x822f81
// 00822f5d  8b07                 mov eax, dword ptr [edi]
// 00822f5f  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00822f62  8bcf                 mov ecx, edi
// 00822f64  ffd2                 call edx
// 00822f66  83be0002000000       cmp dword ptr [esi + 0x200], 0
// 00822f6d  89861c010000         mov dword ptr [esi + 0x11c], eax
// 00822f73  740c                 je 0x822f81
// 00822f75  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 00822f7b  57                   push edi
// 00822f7c  e80fb90000           call 0x82e890
// 00822f81  43                   inc ebx
// 00822f82  3b5c2410             cmp ebx, dword ptr [esp + 0x10]
// 00822f86  7c9c                 jl 0x822f24
// 00822f88  8bce                 mov ecx, esi
// 00822f8a  e8019bffff           call 0x81ca90
// 00822f8f  8bce                 mov ecx, esi
// 00822f91  e8caceffff           call 0x81fe60
// 00822f96  5f                   pop edi
// 00822f97  5d                   pop ebp
// 00822f98  5b                   pop ebx
// 00822f99  8bce                 mov ecx, esi
// 00822f9b  5e                   pop esi
// 00822f9c  83c404               add esp, 4
// 00822f9f  e9dcc4ffff           jmp 0x81f480
// copied from an identical function in another client (function ?ReSortRows@CXTPReportControl@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp