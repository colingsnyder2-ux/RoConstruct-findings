// roc 2008-06 00530290  unit: seg_00530000  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00530290
//
// 00530290  53                   push ebx
// 00530291  56                   push esi
// 00530292  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00530296  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0053029d  57                   push edi
// 0053029e  8bbe4c010000         mov edi, dword ptr [esi + 0x14c]
// 005302a4  897c2410             mov dword ptr [esp + 0x10], edi
// 005302a8  0f8581000000         jne 0x53032f
// 005302ae  55                   push ebp
// 005302af  33ed                 xor ebp, ebp
// 005302b1  39aee4000000         cmp dword ptr [esi + 0xe4], ebp
// 005302b7  7e75                 jle 0x53032e
// 005302b9  8d9ee8000000         lea ebx, [esi + 0xe8]
// 005302bf  90                   nop 
// 005302c0  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 005302c7  8b3b                 mov edi, dword ptr [ebx]
// 005302c9  7436                 je 0x530301
// 005302cb  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 005302d2  751b                 jne 0x5302ef
// 005302d4  83be3401000000       cmp dword ptr [esi + 0x134], 0
// 005302db  7541                 jne 0x53031e
// 005302dd  8b4714               mov eax, dword ptr [edi + 0x14]
// 005302e0  6a00                 push 0
// 005302e2  50                   push eax
// 005302e3  8bc6                 mov eax, esi
// 005302e5  e8d6f5ffff           call 0x52f8c0
// 005302ea  83c408               add esp, 8
// 005302ed  eb2f                 jmp 0x53031e
// 005302ef  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 005302f2  6a01                 push 1
// 005302f4  51                   push ecx
// 005302f5  8bc6                 mov eax, esi
// 005302f7  e8c4f5ffff           call 0x52f8c0
// 005302fc  83c408               add esp, 8
// 005302ff  eb1d                 jmp 0x53031e
// 00530301  8b5714               mov edx, dword ptr [edi + 0x14]
// 00530304  6a00                 push 0
// 00530306  52                   push edx
// 00530307  8bc6                 mov eax, esi
// 00530309  e8b2f5ffff           call 0x52f8c0
// 0053030e  8b4718               mov eax, dword ptr [edi + 0x18]
// 00530311  6a01                 push 1
// 00530313  50                   push eax
// 00530314  8bc6                 mov eax, esi
// 00530316  e8a5f5ffff           call 0x52f8c0
// 0053031b  83c410               add esp, 0x10
// 0053031e  45                   inc ebp
// 0053031f  83c304               add ebx, 4
// 00530322  3baee4000000         cmp ebp, dword ptr [esi + 0xe4]
// 00530328  7c96                 jl 0x5302c0
// 0053032a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0053032e  5d                   pop ebp
// 0053032f  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00530335  3b4f1c               cmp ecx, dword ptr [edi + 0x1c]
// 00530338  742b                 je 0x530365
// 0053033a  68dd000000           push 0xdd
// 0053033f  e8bcf2ffff           call 0x52f600
// 00530344  83c404               add esp, 4
// 00530347  bb04000000           mov ebx, 4
// 0053034c  e81ff3ffff           call 0x52f670
// 00530351  8b9ebc000000         mov ebx, dword ptr [esi + 0xbc]
// 00530357  e814f3ffff           call 0x52f670
// 0053035c  8b96bc000000         mov edx, dword ptr [esi + 0xbc]
// 00530362  89571c               mov dword ptr [edi + 0x1c], edx
// 00530365  5f                   pop edi
// 00530366  8bc6                 mov eax, esi
// 00530368  5e                   pop esi
// 00530369  5b                   pop ebx
// 0053036a  e931f8ffff           jmp 0x52fba0
// library jpeg-6b/jcmarker.c (function _write_scan_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
