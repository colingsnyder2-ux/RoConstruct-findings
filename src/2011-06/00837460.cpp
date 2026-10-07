// roc 2011-06 00837460  unit: CXTPReportControl  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00837460
//
// 00837460  83ec0c               sub esp, 0xc
// 00837463  53                   push ebx
// 00837464  8b1dec1ba400         mov ebx, dword ptr [0xa41bec]
// 0083746a  57                   push edi
// 0083746b  8bf9                 mov edi, ecx
// 0083746d  8b4720               mov eax, dword ptr [edi + 0x20]
// 00837470  50                   push eax
// 00837471  ffd3                 call ebx
// 00837473  85c0                 test eax, eax
// 00837475  7508                 jne 0x83747f
// 00837477  5f                   pop edi
// 00837478  5b                   pop ebx
// 00837479  83c40c               add esp, 0xc
// 0083747c  c20800               ret 8
// 0083747f  56                   push esi
// 00837480  8b742420             mov esi, dword ptr [esp + 0x20]
// 00837484  85f6                 test esi, esi
// 00837486  7504                 jne 0x83748c
// 00837488  8d74240c             lea esi, [esp + 0xc]
// 0083748c  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0083748f  890e                 mov dword ptr [esi], ecx
// 00837491  8bcf                 mov ecx, edi
// 00837493  e87e531900           call 0x9cc816
// 00837498  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0083749c  894604               mov dword ptr [esi + 4], eax
// 0083749f  895608               mov dword ptr [esi + 8], edx
// 008374a2  8b4738               mov eax, dword ptr [edi + 0x38]
// 008374a5  85c0                 test eax, eax
// 008374a7  750a                 jne 0x8374b3
// 008374a9  8b4720               mov eax, dword ptr [edi + 0x20]
// 008374ac  50                   push eax
// 008374ad  ff15b819a400         call dword ptr [0xa419b8]
// 008374b3  50                   push eax
// 008374b4  e86f2efdff           call 0x80a328
// 008374b9  8bf8                 mov edi, eax
// 008374bb  85ff                 test edi, edi
// 008374bd  7424                 je 0x8374e3
// 008374bf  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008374c2  51                   push ecx
// 008374c3  ffd3                 call ebx
// 008374c5  85c0                 test eax, eax
// 008374c7  741a                 je 0x8374e3
// 008374c9  8b4604               mov eax, dword ptr [esi + 4]
// 008374cc  8b5720               mov edx, dword ptr [edi + 0x20]
// 008374cf  56                   push esi
// 008374d0  50                   push eax
// 008374d1  6a4e                 push 0x4e
// 008374d3  52                   push edx
// 008374d4  ff15c019a400         call dword ptr [0xa419c0]
// 008374da  5e                   pop esi
// 008374db  5f                   pop edi
// 008374dc  5b                   pop ebx
// 008374dd  83c40c               add esp, 0xc
// 008374e0  c20800               ret 8
// 008374e3  5e                   pop esi
// 008374e4  5f                   pop edi
// 008374e5  33c0                 xor eax, eax
// 008374e7  5b                   pop ebx
// 008374e8  83c40c               add esp, 0xc
// 008374eb  c20800               ret 8
// library xtp-15.2.1/Source\FlowGraph\XTPFlowGraphControl.cpp (function ?SendNotifyMessageA@CXTPFlowGraphControl@@UBEJIPAUtagNMHDR@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/FlowGraph/XTPFlowGraphControl.cpp
