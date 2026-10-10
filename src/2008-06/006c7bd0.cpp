// roc 2008-06 006c7bd0  unit: CInstanceRecord::CNameItem  size: 286 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c7bd0
//
// 006c7bd0  53                   push ebx
// 006c7bd1  55                   push ebp
// 006c7bd2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006c7bd6  56                   push esi
// 006c7bd7  8b742410             mov esi, dword ptr [esp + 0x10]
// 006c7bdb  8b5e04               mov ebx, dword ptr [esi + 4]
// 006c7bde  57                   push edi
// 006c7bdf  8bf9                 mov edi, ecx
// 006c7be1  83fd20               cmp ebp, 0x20
// 006c7be4  0f8583000000         jne 0x6c7c6d
// 006c7bea  8b07                 mov eax, dword ptr [edi]
// 006c7bec  8b90ac000000         mov edx, dword ptr [eax + 0xac]
// 006c7bf2  ffd2                 call edx
// 006c7bf4  85c0                 test eax, eax
// 006c7bf6  7475                 je 0x6c7c6d
// 006c7bf8  837f6c00             cmp dword ptr [edi + 0x6c], 0
// 006c7bfc  746f                 je 0x6c7c6d
// 006c7bfe  8b460c               mov eax, dword ptr [esi + 0xc]
// 006c7c01  85c0                 test eax, eax
// 006c7c03  7409                 je 0x6c7c0e
// 006c7c05  83b8b000000000       cmp dword ptr [eax + 0xb0], 0
// 006c7c0c  745f                 je 0x6c7c6d
// 006c7c0e  8b07                 mov eax, dword ptr [edi]
// 006c7c10  8b9040010000         mov edx, dword ptr [eax + 0x140]
// 006c7c16  56                   push esi
// 006c7c17  8bcf                 mov ecx, edi
// 006c7c19  ffd2                 call edx
// 006c7c1b  85c0                 test eax, eax
// 006c7c1d  744e                 je 0x6c7c6d
// 006c7c1f  83bbcc01000000       cmp dword ptr [ebx + 0x1cc], 0
// 006c7c26  741c                 je 0x6c7c44
// 006c7c28  8b2f                 mov ebp, dword ptr [edi]
// 006c7c2a  8b85f0000000         mov eax, dword ptr [ebp + 0xf0]
// 006c7c30  8bcf                 mov ecx, edi
// 006c7c32  ffd0                 call eax
// 006c7c34  8b95ec000000         mov edx, dword ptr [ebp + 0xec]
// 006c7c3a  f7d8                 neg eax
// 006c7c3c  1bc0                 sbb eax, eax
// 006c7c3e  40                   inc eax
// 006c7c3f  50                   push eax
// 006c7c40  8bcf                 mov ecx, edi
// 006c7c42  ffd2                 call edx
// 006c7c44  8bcb                 mov ecx, ebx
// 006c7c46  e8e5420000           call 0x6cbf30
// 006c7c4b  8b460c               mov eax, dword ptr [esi + 0xc]
// 006c7c4e  8b4e08               mov ecx, dword ptr [esi + 8]
// 006c7c51  6aff                 push -1
// 006c7c53  6a00                 push 0
// 006c7c55  6acb                 push -0x35
// 006c7c57  50                   push eax
// 006c7c58  57                   push edi
// 006c7c59  51                   push ecx
// 006c7c5a  8bcb                 mov ecx, ebx
// 006c7c5c  e84f810000           call 0x6cfdb0
// 006c7c61  5f                   pop edi
// 006c7c62  5e                   pop esi
// 006c7c63  5d                   pop ebp
// 006c7c64  b801000000           mov eax, 1
// 006c7c69  5b                   pop ebx
// 006c7c6a  c20800               ret 8
// 006c7c6d  8b17                 mov edx, dword ptr [edi]
// 006c7c6f  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 006c7c75  56                   push esi
// 006c7c76  8bcf                 mov ecx, edi
// 006c7c78  ffd0                 call eax
// 006c7c7a  85c0                 test eax, eax
// 006c7c7c  7467                 je 0x6c7ce5
// 006c7c7e  56                   push esi
// 006c7c7f  8bcb                 mov ecx, ebx
// 006c7c81  e85a990000           call 0x6d15e0
// 006c7c86  8bb324020000         mov esi, dword ptr [ebx + 0x224]
// 006c7c8c  85f6                 test esi, esi
// 006c7c8e  7449                 je 0x6c7cd9
// 006c7c90  837e2000             cmp dword ptr [esi + 0x20], 0
// 006c7c94  7443                 je 0x6c7cd9
// 006c7c96  397e64               cmp dword ptr [esi + 0x64], edi
// 006c7c99  753e                 jne 0x6c7cd9
// 006c7c9b  8bce                 mov ecx, esi
// 006c7c9d  e8868dfdff           call 0x6a0a28
// 006c7ca2  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006c7ca5  8b3d142e8000         mov edi, dword ptr [0x802e14]
// 006c7cab  6aff                 push -1
// 006c7cad  6a00                 push 0
// 006c7caf  68b1000000           push 0xb1
// 006c7cb4  51                   push ecx
// 006c7cb5  ffd7                 call edi
// 006c7cb7  8b5620               mov edx, dword ptr [esi + 0x20]
// 006c7cba  6a00                 push 0
// 006c7cbc  6a00                 push 0
// 006c7cbe  68b7000000           push 0xb7
// 006c7cc3  52                   push edx
// 006c7cc4  ffd7                 call edi
// 006c7cc6  83fd09               cmp ebp, 9
// 006c7cc9  740e                 je 0x6c7cd9
// 006c7ccb  8b4620               mov eax, dword ptr [esi + 0x20]
// 006c7cce  6a00                 push 0
// 006c7cd0  55                   push ebp
// 006c7cd1  6802010000           push 0x102
// 006c7cd6  50                   push eax
// 006c7cd7  ffd7                 call edi
// 006c7cd9  5f                   pop edi
// 006c7cda  5e                   pop esi
// 006c7cdb  5d                   pop ebp
// 006c7cdc  b801000000           mov eax, 1
// 006c7ce1  5b                   pop ebx
// 006c7ce2  c20800               ret 8
// 006c7ce5  5f                   pop edi
// 006c7ce6  5e                   pop esi
// 006c7ce7  5d                   pop ebp
// 006c7ce8  33c0                 xor eax, eax
// 006c7cea  5b                   pop ebx
// 006c7ceb  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRecordItem.cpp (function ?OnChar@CXTPReportRecordItem@@MAEHPAUXTP_REPORTRECORDITEM_ARGS@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItem.cpp
