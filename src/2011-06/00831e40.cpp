// roc 2011-06 00831e40  unit: CXTPReportControl  size: 860 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00831e40
//
// 00831e40  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00831e44  83ec78               sub esp, 0x78
// 00831e47  57                   push edi
// 00831e48  8bf9                 mov edi, ecx
// 00831e4a  33c9                 xor ecx, ecx
// 00831e4c  3bc1                 cmp eax, ecx
// 00831e4e  741f                 je 0x831e6f
// 00831e50  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00831e57  50                   push eax
// 00831e58  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 00831e5f  50                   push eax
// 00831e60  51                   push ecx
// 00831e61  8bcf                 mov ecx, edi
// 00831e63  e872a91900           call 0x9cc7da
// 00831e68  5f                   pop edi
// 00831e69  83c478               add esp, 0x78
// 00831e6c  c20c00               ret 0xc
// 00831e6f  53                   push ebx
// 00831e70  55                   push ebp
// 00831e71  8baf0c010000         mov ebp, dword ptr [edi + 0x10c]
// 00831e77  33db                 xor ebx, ebx
// 00831e79  56                   push esi
// 00831e7a  896c2414             mov dword ptr [esp + 0x14], ebp
// 00831e7e  8bf5                 mov esi, ebp
// 00831e80  894c2420             mov dword ptr [esp + 0x20], ecx
// 00831e84  894c2424             mov dword ptr [esp + 0x24], ecx
// 00831e88  894c2418             mov dword ptr [esp + 0x18], ecx
// 00831e8c  894c2410             mov dword ptr [esp + 0x10], ecx
// 00831e90  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00831e94  398f18010000         cmp dword ptr [edi + 0x118], ecx
// 00831e9a  742a                 je 0x831ec6
// 00831e9c  8b8f88020000         mov ecx, dword ptr [edi + 0x288]
// 00831ea2  8d54241c             lea edx, [esp + 0x1c]
// 00831ea6  52                   push edx
// 00831ea7  8d442414             lea eax, [esp + 0x14]
// 00831eab  50                   push eax
// 00831eac  8d542420             lea edx, [esp + 0x20]
// 00831eb0  52                   push edx
// 00831eb1  8d442430             lea eax, [esp + 0x30]
// 00831eb5  50                   push eax
// 00831eb6  8d542430             lea edx, [esp + 0x30]
// 00831eba  52                   push edx
// 00831ebb  e840a70000           call 0x83c600
// 00831ec0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00831ec4  8bd8                 mov ebx, eax
// 00831ec6  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00831ecd  83f807               cmp eax, 7
// 00831ed0  0f8762020000         ja 0x832138
// 00831ed6  ff24857c218300       jmp dword ptr [eax*4 + 0x83217c]
// 00831edd  33f6                 xor esi, esi
// 00831edf  89742414             mov dword ptr [esp + 0x14], esi
// 00831ee3  89742410             mov dword ptr [esp + 0x10], esi
// 00831ee7  e94c020000           jmp 0x832138
// 00831eec  6a00                 push 0
// 00831eee  8bcf                 mov ecx, edi
// 00831ef0  e8dfa81900           call 0x9cc7d4
// 00831ef5  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 00831efc  89442414             mov dword ptr [esp + 0x14], eax
// 00831f00  0f845d020000         je 0x832163
// 00831f06  8b8fec000000         mov ecx, dword ptr [edi + 0xec]
// 00831f0c  e88fb90400           call 0x87d8a0
// 00831f11  48                   dec eax
// 00831f12  33c9                 xor ecx, ecx
// 00831f14  85c0                 test eax, eax
// 00831f16  0f9ec1               setle cl
// 00831f19  49                   dec ecx
// 00831f1a  23c1                 and eax, ecx
// 00831f1c  8b8fec000000         mov ecx, dword ptr [edi + 0xec]
// 00831f22  50                   push eax
// 00831f23  e878ba0400           call 0x87d9a0
// 00831f28  85c0                 test eax, eax
// 00831f2a  0f843f020000         je 0x83216f
// 00831f30  8bb788020000         mov esi, dword ptr [edi + 0x288]
// 00831f36  8d542428             lea edx, [esp + 0x28]
// 00831f3a  52                   push edx
// 00831f3b  8bc8                 mov ecx, eax
// 00831f3d  e8bedcffff           call 0x82fc00
// 00831f42  8bc8                 mov ecx, eax
// 00831f44  8b4660               mov eax, dword ptr [esi + 0x60]
// 00831f47  2b01                 sub eax, dword ptr [ecx]
// 00831f49  33c9                 xor ecx, ecx
// 00831f4b  99                   cdq 
// 00831f4c  8bf0                 mov esi, eax
// 00831f4e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00831f52  33f2                 xor esi, edx
// 00831f54  2bf2                 sub esi, edx
// 00831f56  48                   dec eax
// 00831f57  2bf3                 sub esi, ebx
// 00831f59  85c0                 test eax, eax
// 00831f5b  0f9ec1               setle cl
// 00831f5e  49                   dec ecx
// 00831f5f  23c8                 and ecx, eax
// 00831f61  894c2410             mov dword ptr [esp + 0x10], ecx
// 00831f65  e9ce010000           jmp 0x832138
// 00831f6a  2baf14010000         sub ebp, dword ptr [edi + 0x114]
// 00831f70  33d2                 xor edx, edx
// 00831f72  85ed                 test ebp, ebp
// 00831f74  0f9ec2               setle dl
// 00831f77  4a                   dec edx
// 00831f78  23d5                 and edx, ebp
// 00831f7a  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 00831f81  89542414             mov dword ptr [esp + 0x14], edx
// 00831f85  0f84d8010000         je 0x832163
// 00831f8b  85c9                 test ecx, ecx
// 00831f8d  0f84a5010000         je 0x832138
// 00831f93  8d442438             lea eax, [esp + 0x38]
// 00831f97  50                   push eax
// 00831f98  8bb788020000         mov esi, dword ptr [edi + 0x288]
// 00831f9e  e85ddcffff           call 0x82fc00
// 00831fa3  8bc8                 mov ecx, eax
// 00831fa5  8b4660               mov eax, dword ptr [esi + 0x60]
// 00831fa8  2b01                 sub eax, dword ptr [ecx]
// 00831faa  33c9                 xor ecx, ecx
// 00831fac  99                   cdq 
// 00831fad  8bf0                 mov esi, eax
// 00831faf  8b442410             mov eax, dword ptr [esp + 0x10]
// 00831fb3  33f2                 xor esi, edx
// 00831fb5  2bf2                 sub esi, edx
// 00831fb7  48                   dec eax
// 00831fb8  2bf3                 sub esi, ebx
// 00831fba  85c0                 test eax, eax
// 00831fbc  0f9ec1               setle cl
// 00831fbf  49                   dec ecx
// 00831fc0  23c8                 and ecx, eax
// 00831fc2  894c2410             mov dword ptr [esp + 0x10], ecx
// 00831fc6  e96d010000           jmp 0x832138
// 00831fcb  8b9714010000         mov edx, dword ptr [edi + 0x114]
// 00831fd1  6a00                 push 0
// 00831fd3  8bcf                 mov ecx, edi
// 00831fd5  03ea                 add ebp, edx
// 00831fd7  e8f8a71900           call 0x9cc7d4
// 00831fdc  3be8                 cmp ebp, eax
// 00831fde  7d06                 jge 0x831fe6
// 00831fe0  896c2414             mov dword ptr [esp + 0x14], ebp
// 00831fe4  eb0d                 jmp 0x831ff3
// 00831fe6  6a00                 push 0
// 00831fe8  8bcf                 mov ecx, edi
// 00831fea  e8e5a71900           call 0x9cc7d4
// 00831fef  89442414             mov dword ptr [esp + 0x14], eax
// 00831ff3  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 00831ffa  0f8463010000         je 0x832163
// 00832000  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00832004  85c9                 test ecx, ecx
// 00832006  0f842c010000         je 0x832138
// 0083200c  8d442448             lea eax, [esp + 0x48]
// 00832010  50                   push eax
// 00832011  8bb788020000         mov esi, dword ptr [edi + 0x288]
// 00832017  e8e4dbffff           call 0x82fc00
// 0083201c  8bc8                 mov ecx, eax
// 0083201e  8b4660               mov eax, dword ptr [esi + 0x60]
// 00832021  2b01                 sub eax, dword ptr [ecx]
// 00832023  99                   cdq 
// 00832024  8bf0                 mov esi, eax
// 00832026  33f2                 xor esi, edx
// 00832028  2bf2                 sub esi, edx
// 0083202a  2bf3                 sub esi, ebx
// 0083202c  ff442410             inc dword ptr [esp + 0x10]
// 00832030  e903010000           jmp 0x832138
// 00832035  8b9790000000         mov edx, dword ptr [edi + 0x90]
// 0083203b  2b9798000000         sub edx, dword ptr [edi + 0x98]
// 00832041  03d5                 add edx, ebp
// 00832043  85d2                 test edx, edx
// 00832045  7e14                 jle 0x83205b
// 00832047  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 0083204d  2b8798000000         sub eax, dword ptr [edi + 0x98]
// 00832053  03e8                 add ebp, eax
// 00832055  896c2414             mov dword ptr [esp + 0x14], ebp
// 00832059  eb08                 jmp 0x832063
// 0083205b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00832063  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 0083206a  0f84f3000000         je 0x832163
// 00832070  85c9                 test ecx, ecx
// 00832072  0f84c0000000         je 0x832138
// 00832078  8d542458             lea edx, [esp + 0x58]
// 0083207c  52                   push edx
// 0083207d  e916ffffff           jmp 0x831f98
// 00832082  8baf98000000         mov ebp, dword ptr [edi + 0x98]
// 00832088  2baf90000000         sub ebp, dword ptr [edi + 0x90]
// 0083208e  6a00                 push 0
// 00832090  8bcf                 mov ecx, edi
// 00832092  e83da71900           call 0x9cc7d4
// 00832097  8bd6                 mov edx, esi
// 00832099  03ea                 add ebp, edx
// 0083209b  3be8                 cmp ebp, eax
// 0083209d  7d12                 jge 0x8320b1
// 0083209f  8b8798000000         mov eax, dword ptr [edi + 0x98]
// 008320a5  2b8790000000         sub eax, dword ptr [edi + 0x90]
// 008320ab  01442414             add dword ptr [esp + 0x14], eax
// 008320af  eb0d                 jmp 0x8320be
// 008320b1  6a00                 push 0
// 008320b3  8bcf                 mov ecx, edi
// 008320b5  e81aa71900           call 0x9cc7d4
// 008320ba  89442414             mov dword ptr [esp + 0x14], eax
// 008320be  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 008320c5  0f8498000000         je 0x832163
// 008320cb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008320cf  85c9                 test ecx, ecx
// 008320d1  7465                 je 0x832138
// 008320d3  8d542468             lea edx, [esp + 0x68]
// 008320d7  52                   push edx
// 008320d8  e934ffffff           jmp 0x832011
// 008320dd  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 008320e4  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 008320eb  896c2414             mov dword ptr [esp + 0x14], ebp
// 008320ef  7472                 je 0x832163
// 008320f1  8b8fec000000         mov ecx, dword ptr [edi + 0xec]
// 008320f7  e8a4b70400           call 0x87d8a0
// 008320fc  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 00832100  8b8fec000000         mov ecx, dword ptr [edi + 0xec]
// 00832106  03c5                 add eax, ebp
// 00832108  50                   push eax
// 00832109  e892b80400           call 0x87d9a0
// 0083210e  85c0                 test eax, eax
// 00832110  745d                 je 0x83216f
// 00832112  8bb788020000         mov esi, dword ptr [edi + 0x288]
// 00832118  8d4c2478             lea ecx, [esp + 0x78]
// 0083211c  51                   push ecx
// 0083211d  8bc8                 mov ecx, eax
// 0083211f  e8dcdaffff           call 0x82fc00
// 00832124  8bc8                 mov ecx, eax
// 00832126  8b4660               mov eax, dword ptr [esi + 0x60]
// 00832129  2b01                 sub eax, dword ptr [ecx]
// 0083212b  896c2410             mov dword ptr [esp + 0x10], ebp
// 0083212f  99                   cdq 
// 00832130  8bf0                 mov esi, eax
// 00832132  33f2                 xor esi, edx
// 00832134  2bf2                 sub esi, edx
// 00832136  2bf3                 sub esi, ebx
// 00832138  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 0083213f  7422                 je 0x832163
// 00832141  56                   push esi
// 00832142  8bcf                 mov ecx, edi
// 00832144  e8b7f5ffff           call 0x831700
// 00832149  8b542410             mov edx, dword ptr [esp + 0x10]
// 0083214d  6a01                 push 1
// 0083214f  52                   push edx
// 00832150  6a00                 push 0
// 00832152  8bcf                 mov ecx, edi
// 00832154  e863a61900           call 0x9cc7bc
// 00832159  5e                   pop esi
// 0083215a  5d                   pop ebp
// 0083215b  5b                   pop ebx
// 0083215c  5f                   pop edi
// 0083215d  83c478               add esp, 0x78
// 00832160  c20c00               ret 0xc
// 00832163  8b442414             mov eax, dword ptr [esp + 0x14]
// 00832167  50                   push eax
// 00832168  8bcf                 mov ecx, edi
// 0083216a  e891f5ffff           call 0x831700
// 0083216f  5e                   pop esi
// 00832170  5d                   pop ebp
// 00832171  5b                   pop ebx
// 00832172  5f                   pop edi
// 00832173  83c478               add esp, 0x78
// 00832176  c20c00               ret 0xc
// 00832179  8d4900               lea ecx, [ecx]
// 0083217c  6a1f                 push 0x1f
// 0083217e  8300cb               add dword ptr [eax], -0x35
// 00832181  1f                   pop ds
// 00832182  830035               add dword ptr [eax], 0x35
// 00832185  208300822083         and byte ptr [ebx - 0x7cdf7e00], al
// 0083218b  00dd                 add ch, bl
// 0083218d  208300dd2083         and byte ptr [ebx - 0x7cdf2300], al
// 00832193  00dd                 add ch, bl
// 00832195  1e                   push ds
// 00832196  8300ec               add dword ptr [eax], -0x14
// 00832199  1e                   push ds
// copied from an identical function in another client (function ?OnHScroll@CXTPReportControl@@IAEXIIPAVCScrollBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp