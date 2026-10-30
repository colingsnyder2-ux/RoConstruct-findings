// roc 2009-12 0081b080  unit: CInstanceRecord::CNameItem  size: 286 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081b080
//
// 0081b080  53                   push ebx
// 0081b081  55                   push ebp
// 0081b082  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0081b086  56                   push esi
// 0081b087  8b742410             mov esi, dword ptr [esp + 0x10]
// 0081b08b  8b5e04               mov ebx, dword ptr [esi + 4]
// 0081b08e  57                   push edi
// 0081b08f  8bf9                 mov edi, ecx
// 0081b091  83fd20               cmp ebp, 0x20
// 0081b094  0f8583000000         jne 0x81b11d
// 0081b09a  8b07                 mov eax, dword ptr [edi]
// 0081b09c  8b90ac000000         mov edx, dword ptr [eax + 0xac]
// 0081b0a2  ffd2                 call edx
// 0081b0a4  85c0                 test eax, eax
// 0081b0a6  7475                 je 0x81b11d
// 0081b0a8  837f6c00             cmp dword ptr [edi + 0x6c], 0
// 0081b0ac  746f                 je 0x81b11d
// 0081b0ae  8b460c               mov eax, dword ptr [esi + 0xc]
// 0081b0b1  85c0                 test eax, eax
// 0081b0b3  7409                 je 0x81b0be
// 0081b0b5  83b8b000000000       cmp dword ptr [eax + 0xb0], 0
// 0081b0bc  745f                 je 0x81b11d
// 0081b0be  8b07                 mov eax, dword ptr [edi]
// 0081b0c0  8b9040010000         mov edx, dword ptr [eax + 0x140]
// 0081b0c6  56                   push esi
// 0081b0c7  8bcf                 mov ecx, edi
// 0081b0c9  ffd2                 call edx
// 0081b0cb  85c0                 test eax, eax
// 0081b0cd  744e                 je 0x81b11d
// 0081b0cf  83bbcc01000000       cmp dword ptr [ebx + 0x1cc], 0
// 0081b0d6  741c                 je 0x81b0f4
// 0081b0d8  8b2f                 mov ebp, dword ptr [edi]
// 0081b0da  8b85f0000000         mov eax, dword ptr [ebp + 0xf0]
// 0081b0e0  8bcf                 mov ecx, edi
// 0081b0e2  ffd0                 call eax
// 0081b0e4  8b95ec000000         mov edx, dword ptr [ebp + 0xec]
// 0081b0ea  f7d8                 neg eax
// 0081b0ec  1bc0                 sbb eax, eax
// 0081b0ee  40                   inc eax
// 0081b0ef  50                   push eax
// 0081b0f0  8bcf                 mov ecx, edi
// 0081b0f2  ffd2                 call edx
// 0081b0f4  8bcb                 mov ecx, ebx
// 0081b0f6  e885430000           call 0x81f480
// 0081b0fb  8b460c               mov eax, dword ptr [esi + 0xc]
// 0081b0fe  8b4e08               mov ecx, dword ptr [esi + 8]
// 0081b101  6aff                 push -1
// 0081b103  6a00                 push 0
// 0081b105  6acb                 push -0x35
// 0081b107  50                   push eax
// 0081b108  57                   push edi
// 0081b109  51                   push ecx
// 0081b10a  8bcb                 mov ecx, ebx
// 0081b10c  e8ef810000           call 0x823300
// 0081b111  5f                   pop edi
// 0081b112  5e                   pop esi
// 0081b113  5d                   pop ebp
// 0081b114  b801000000           mov eax, 1
// 0081b119  5b                   pop ebx
// 0081b11a  c20800               ret 8
// 0081b11d  8b17                 mov edx, dword ptr [edi]
// 0081b11f  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 0081b125  56                   push esi
// 0081b126  8bcf                 mov ecx, edi
// 0081b128  ffd0                 call eax
// 0081b12a  85c0                 test eax, eax
// 0081b12c  7467                 je 0x81b195
// 0081b12e  56                   push esi
// 0081b12f  8bcb                 mov ecx, ebx
// 0081b131  e8fa990000           call 0x824b30
// 0081b136  8bb324020000         mov esi, dword ptr [ebx + 0x224]
// 0081b13c  85f6                 test esi, esi
// 0081b13e  7449                 je 0x81b189
// 0081b140  837e2000             cmp dword ptr [esi + 0x20], 0
// 0081b144  7443                 je 0x81b189
// 0081b146  397e64               cmp dword ptr [esi + 0x64], edi
// 0081b149  753e                 jne 0x81b189
// 0081b14b  8bce                 mov ecx, esi
// 0081b14d  e8b08afdff           call 0x7f3c02
// 0081b152  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0081b155  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 0081b15b  6aff                 push -1
// 0081b15d  6a00                 push 0
// 0081b15f  68b1000000           push 0xb1
// 0081b164  51                   push ecx
// 0081b165  ffd7                 call edi
// 0081b167  8b5620               mov edx, dword ptr [esi + 0x20]
// 0081b16a  6a00                 push 0
// 0081b16c  6a00                 push 0
// 0081b16e  68b7000000           push 0xb7
// 0081b173  52                   push edx
// 0081b174  ffd7                 call edi
// 0081b176  83fd09               cmp ebp, 9
// 0081b179  740e                 je 0x81b189
// 0081b17b  8b4620               mov eax, dword ptr [esi + 0x20]
// 0081b17e  6a00                 push 0
// 0081b180  55                   push ebp
// 0081b181  6802010000           push 0x102
// 0081b186  50                   push eax
// 0081b187  ffd7                 call edi
// 0081b189  5f                   pop edi
// 0081b18a  5e                   pop esi
// 0081b18b  5d                   pop ebp
// 0081b18c  b801000000           mov eax, 1
// 0081b191  5b                   pop ebx
// 0081b192  c20800               ret 8
// 0081b195  5f                   pop edi
// 0081b196  5e                   pop esi
// 0081b197  5d                   pop ebp
// 0081b198  33c0                 xor eax, eax
// 0081b19a  5b                   pop ebx
// 0081b19b  c20800               ret 8
// copied from an identical function in another client (function ?OnChar@CXTPReportRecordItem@@MAEHPAUXTP_REPORTRECORDITEM_ARGS@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItem.cpp