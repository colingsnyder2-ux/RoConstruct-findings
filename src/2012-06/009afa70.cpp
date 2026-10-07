// roc 2012-06 009afa70  unit: CXTPReportControl  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009afa70
//
// 009afa70  83ec0c               sub esp, 0xc
// 009afa73  53                   push ebx
// 009afa74  8b1d143bb200         mov ebx, dword ptr [0xb23b14]
// 009afa7a  57                   push edi
// 009afa7b  8bf9                 mov edi, ecx
// 009afa7d  8b4720               mov eax, dword ptr [edi + 0x20]
// 009afa80  50                   push eax
// 009afa81  ffd3                 call ebx
// 009afa83  85c0                 test eax, eax
// 009afa85  7508                 jne 0x9afa8f
// 009afa87  5f                   pop edi
// 009afa88  5b                   pop ebx
// 009afa89  83c40c               add esp, 0xc
// 009afa8c  c20800               ret 8
// 009afa8f  56                   push esi
// 009afa90  8b742420             mov esi, dword ptr [esp + 0x20]
// 009afa94  85f6                 test esi, esi
// 009afa96  7504                 jne 0x9afa9c
// 009afa98  8d74240c             lea esi, [esp + 0xc]
// 009afa9c  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 009afa9f  890e                 mov dword ptr [esi], ecx
// 009afaa1  8bcf                 mov ecx, edi
// 009afaa3  e8289d0e00           call 0xa997d0
// 009afaa8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009afaac  894604               mov dword ptr [esi + 4], eax
// 009afaaf  895608               mov dword ptr [esi + 8], edx
// 009afab2  8b4738               mov eax, dword ptr [edi + 0x38]
// 009afab5  85c0                 test eax, eax
// 009afab7  750a                 jne 0x9afac3
// 009afab9  8b4720               mov eax, dword ptr [edi + 0x20]
// 009afabc  50                   push eax
// 009afabd  ff15503ab200         call dword ptr [0xb23a50]
// 009afac3  50                   push eax
// 009afac4  e89d2bfdff           call 0x982666
// 009afac9  8bf8                 mov edi, eax
// 009afacb  85ff                 test edi, edi
// 009afacd  7424                 je 0x9afaf3
// 009afacf  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 009afad2  51                   push ecx
// 009afad3  ffd3                 call ebx
// 009afad5  85c0                 test eax, eax
// 009afad7  741a                 je 0x9afaf3
// 009afad9  8b4604               mov eax, dword ptr [esi + 4]
// 009afadc  8b5720               mov edx, dword ptr [edi + 0x20]
// 009afadf  56                   push esi
// 009afae0  50                   push eax
// 009afae1  6a4e                 push 0x4e
// 009afae3  52                   push edx
// 009afae4  ff15043cb200         call dword ptr [0xb23c04]
// 009afaea  5e                   pop esi
// 009afaeb  5f                   pop edi
// 009afaec  5b                   pop ebx
// 009afaed  83c40c               add esp, 0xc
// 009afaf0  c20800               ret 8
// 009afaf3  5e                   pop esi
// 009afaf4  5f                   pop edi
// 009afaf5  33c0                 xor eax, eax
// 009afaf7  5b                   pop ebx
// 009afaf8  83c40c               add esp, 0xc
// 009afafb  c20800               ret 8
// library xtp-15.2.1/Source\FlowGraph\XTPFlowGraphControl.cpp (function ?SendNotifyMessageA@CXTPFlowGraphControl@@UBEJIPAUtagNMHDR@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/FlowGraph/XTPFlowGraphControl.cpp
