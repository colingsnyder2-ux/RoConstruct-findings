// from server: 100% by auto
// roc 2008-06 006cade0  unit: CXTPReportControl  size: 358 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cade0
//
// 006cade0  55                   push ebp
// 006cade1  8bec                 mov ebp, esp
// 006cade3  6aff                 push -1
// 006cade5  6868107e00           push 0x7e1068
// 006cadea  64a100000000         mov eax, dword ptr fs:[0]
// 006cadf0  50                   push eax
// 006cadf1  83ec14               sub esp, 0x14
// 006cadf4  53                   push ebx
// 006cadf5  56                   push esi
// 006cadf6  57                   push edi
// 006cadf7  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 006cadfc  33c5                 xor eax, ebp
// 006cadfe  50                   push eax
// 006cadff  8d45f4               lea eax, [ebp - 0xc]
// 006cae02  64a300000000         mov dword ptr fs:[0], eax
// 006cae08  8965f0               mov dword ptr [ebp - 0x10], esp
// 006cae0b  8bf9                 mov edi, ecx
// 006cae0d  8d4de0               lea ecx, [ebp - 0x20]
// 006cae10  e8fd120f00           call 0x7bc112
// 006cae15  8b7508               mov esi, dword ptr [ebp + 8]
// 006cae18  8b06                 mov eax, dword ptr [esi]
// 006cae1a  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 006cae20  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006cae27  8bce                 mov ecx, esi
// 006cae29  c645fc01             mov byte ptr [ebp - 4], 1
// 006cae2d  ffd2                 call edx
// 006cae2f  8b06                 mov eax, dword ptr [esi]
// 006cae31  8b5070               mov edx, dword ptr [eax + 0x70]
// 006cae34  68d0388500           push 0x8538d0
// 006cae39  8bce                 mov ecx, esi
// 006cae3b  ffd2                 call edx
// 006cae3d  894508               mov dword ptr [ebp + 8], eax
// 006cae40  8b8fec000000         mov ecx, dword ptr [edi + 0xec]
// 006cae46  8b11                 mov edx, dword ptr [ecx]
// 006cae48  50                   push eax
// 006cae49  8b4258               mov eax, dword ptr [edx + 0x58]
// 006cae4c  c645fc02             mov byte ptr [ebp - 4], 2
// 006cae50  ffd0                 call eax
// 006cae52  6a00                 push 0
// 006cae54  8d8fb8010000         lea ecx, [edi + 0x1b8]
// 006cae5a  51                   push ecx
// 006cae5b  68c0388500           push 0x8538c0
// 006cae60  56                   push esi
// 006cae61  e83a250300           call 0x6fd3a0
// 006cae66  83c410               add esp, 0x10
// 006cae69  6a00                 push 0
// 006cae6b  8d9710010000         lea edx, [edi + 0x110]
// 006cae71  52                   push edx
// 006cae72  68ac388500           push 0x8538ac
// 006cae77  56                   push esi
// 006cae78  e893240300           call 0x6fd310
// 006cae7d  83c410               add esp, 0x10
// 006cae80  837e2c17             cmp dword ptr [esi + 0x2c], 0x17
// 006cae84  722e                 jb 0x6caeb4
// 006cae86  6a00                 push 0
// 006cae88  8d8718010000         lea eax, [edi + 0x118]
// 006cae8e  50                   push eax
// 006cae8f  6898388500           push 0x853898
// 006cae94  56                   push esi
// 006cae95  e806250300           call 0x6fd3a0
// 006cae9a  83c410               add esp, 0x10
// 006cae9d  6a07                 push 7
// 006cae9f  8d8f14010000         lea ecx, [edi + 0x114]
// 006caea5  51                   push ecx
// 006caea6  688c388500           push 0x85388c
// 006caeab  56                   push esi
// 006caeac  e85f240300           call 0x6fd310
// 006caeb1  83c410               add esp, 0x10
// 006caeb4  8b16                 mov edx, dword ptr [esi]
// 006caeb6  8b4270               mov eax, dword ptr [edx + 0x70]
// 006caeb9  6884388500           push 0x853884
// 006caebe  8bce                 mov ecx, esi
// 006caec0  ffd0                 call eax
// 006caec2  8bd8                 mov ebx, eax
// 006caec4  895dec               mov dword ptr [ebp - 0x14], ebx
// 006caec7  8b8f88020000         mov ecx, dword ptr [edi + 0x288]
// 006caecd  8b11                 mov edx, dword ptr [ecx]
// 006caecf  8b4278               mov eax, dword ptr [edx + 0x78]
// 006caed2  53                   push ebx
// 006caed3  c645fc03             mov byte ptr [ebp - 4], 3
// 006caed7  ffd0                 call eax
// 006caed9  837e2800             cmp dword ptr [esi + 0x28], 0
// 006caedd  741c                 je 0x6caefb
// 006caedf  8b8f88020000         mov ecx, dword ptr [edi + 0x288]
// 006caee5  8b11                 mov edx, dword ptr [ecx]
// 006caee7  8b8290000000         mov eax, dword ptr [edx + 0x90]
// 006caeed  ffd0                 call eax
// 006caeef  8b17                 mov edx, dword ptr [edi]
// 006caef1  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 006caef7  8bcf                 mov ecx, edi
// 006caef9  ffd0                 call eax
// 006caefb  c645fc02             mov byte ptr [ebp - 4], 2
// 006caeff  85db                 test ebx, ebx
// 006caf01  7407                 je 0x6caf0a
// 006caf03  8bcb                 mov ecx, ebx
// 006caf05  e8da5cfdff           call 0x6a0be4
// 006caf0a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 006caf0d  c645fc01             mov byte ptr [ebp - 4], 1
// 006caf11  85c9                 test ecx, ecx
// 006caf13  7405                 je 0x6caf1a
// 006caf15  e8ca5cfdff           call 0x6a0be4
// 006caf1a  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 006caf21  e8da110f00           call 0x7bc100
// 006caf26  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006caf29  64890d00000000       mov dword ptr fs:[0], ecx
// 006caf30  59                   pop ecx
// 006caf31  5f                   pop edi
// 006caf32  5e                   pop esi
// 006caf33  5b                   pop ebx
// 006caf34  8be5                 mov esp, ebp
// 006caf36  5d                   pop ebp
// 006caf37  c20400               ret 4
// 006caf3a  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 006caf3d  894de4               mov dword ptr [ebp - 0x1c], ecx
// 006caf40  b81aaf6c00           mov eax, 0x6caf1a
// 006caf45  c3                   ret 

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportControl.cpp
