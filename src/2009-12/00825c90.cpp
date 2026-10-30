// roc 2009-12 00825c90  unit: CXTPReportControl  size: 755 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00825c90
//
// 00825c90  6aff                 push -1
// 00825c92  68c8b49500           push 0x95b4c8
// 00825c97  64a100000000         mov eax, dword ptr fs:[0]
// 00825c9d  50                   push eax
// 00825c9e  83ec4c               sub esp, 0x4c
// 00825ca1  53                   push ebx
// 00825ca2  55                   push ebp
// 00825ca3  56                   push esi
// 00825ca4  57                   push edi
// 00825ca5  a10052b600           mov eax, dword ptr [0xb65200]
// 00825caa  33c4                 xor eax, esp
// 00825cac  50                   push eax
// 00825cad  8d442460             lea eax, [esp + 0x60]
// 00825cb1  64a300000000         mov dword ptr fs:[0], eax
// 00825cb7  8bf1                 mov esi, ecx
// 00825cb9  85f6                 test esi, esi
// 00825cbb  0f84ae020000         je 0x825f6f
// 00825cc1  837e2000             cmp dword ptr [esi + 0x20], 0
// 00825cc5  0f84a4020000         je 0x825f6f
// 00825ccb  6a00                 push 0
// 00825ccd  e85eeeffff           call 0x824b30
// 00825cd2  8bae9c000000         mov ebp, dword ptr [esi + 0x9c]
// 00825cd8  2bae94000000         sub ebp, dword ptr [esi + 0x94]
// 00825cde  85ed                 test ebp, ebp
// 00825ce0  0f8e89020000         jle 0x825f6f
// 00825ce6  8bce                 mov ecx, esi
// 00825ce8  e81368ffff           call 0x81c500
// 00825ced  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00825cf3  e8286f0000           call 0x82cc20
// 00825cf8  8bf8                 mov edi, eax
// 00825cfa  8b8688020000         mov eax, dword ptr [esi + 0x288]
// 00825d00  8b809c000000         mov eax, dword ptr [eax + 0x9c]
// 00825d06  4f                   dec edi
// 00825d07  56                   push esi
// 00825d08  8d4c242c             lea ecx, [esp + 0x2c]
// 00825d0c  8bdf                 mov ebx, edi
// 00825d0e  89442418             mov dword ptr [esp + 0x18], eax
// 00825d12  e8bfe9fcff           call 0x7f46d6
// 00825d17  c744246800000000     mov dword ptr [esp + 0x68], 0
// 00825d1f  85ff                 test edi, edi
// 00825d21  7c31                 jl 0x825d54
// 00825d23  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00825d29  8b11                 mov edx, dword ptr [ecx]
// 00825d2b  8b425c               mov eax, dword ptr [edx + 0x5c]
// 00825d2e  53                   push ebx
// 00825d2f  ffd0                 call eax
// 00825d31  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00825d35  8b10                 mov edx, dword ptr [eax]
// 00825d37  8b5268               mov edx, dword ptr [edx + 0x68]
// 00825d3a  51                   push ecx
// 00825d3b  8d4c242c             lea ecx, [esp + 0x2c]
// 00825d3f  51                   push ecx
// 00825d40  8bc8                 mov ecx, eax
// 00825d42  ffd2                 call edx
// 00825d44  2be8                 sub ebp, eax
// 00825d46  7807                 js 0x825d4f
// 00825d48  83eb01               sub ebx, 1
// 00825d4b  79d6                 jns 0x825d23
// 00825d4d  eb05                 jmp 0x825d54
// 00825d4f  3bdf                 cmp ebx, edi
// 00825d51  7401                 je 0x825d54
// 00825d53  43                   inc ebx
// 00825d54  8d4c2428             lea ecx, [esp + 0x28]
// 00825d58  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 00825d60  e86be9fcff           call 0x7f46d0
// 00825d65  33c0                 xor eax, eax
// 00825d67  85db                 test ebx, ebx
// 00825d69  0f9ec0               setle al
// 00825d6c  48                   dec eax
// 00825d6d  23d8                 and ebx, eax
// 00825d6f  399e08010000         cmp dword ptr [esi + 0x108], ebx
// 00825d75  7e12                 jle 0x825d89
// 00825d77  6a01                 push 1
// 00825d79  53                   push ebx
// 00825d7a  6a01                 push 1
// 00825d7c  8bce                 mov ecx, esi
// 00825d7e  899e08010000         mov dword ptr [esi + 0x108], ebx
// 00825d84  e8e7081000           call 0x926670
// 00825d89  33c9                 xor ecx, ecx
// 00825d8b  85db                 test ebx, ebx
// 00825d8d  0f9fc1               setg cl
// 00825d90  8be9                 mov ebp, ecx
// 00825d92  85ed                 test ebp, ebp
// 00825d94  7435                 je 0x825dcb
// 00825d96  6a01                 push 1
// 00825d98  8bd7                 mov edx, edi
// 00825d9a  8d44242c             lea eax, [esp + 0x2c]
// 00825d9e  2bd3                 sub edx, ebx
// 00825da0  50                   push eax
// 00825da1  42                   inc edx
// 00825da2  6a01                 push 1
// 00825da4  8bce                 mov ecx, esi
// 00825da6  c74424341c000000     mov dword ptr [esp + 0x34], 0x1c
// 00825dae  89542444             mov dword ptr [esp + 0x44], edx
// 00825db2  897c2440             mov dword ptr [esp + 0x40], edi
// 00825db6  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00825dbe  c744243803000000     mov dword ptr [esp + 0x38], 3
// 00825dc6  e811091000           call 0x9266dc
// 00825dcb  55                   push ebp
// 00825dcc  6a01                 push 1
// 00825dce  8bce                 mov ecx, esi
// 00825dd0  e801091000           call 0x9266d6
// 00825dd5  33db                 xor ebx, ebx
// 00825dd7  3beb                 cmp ebp, ebx
// 00825dd9  740f                 je 0x825dea
// 00825ddb  8bce                 mov ecx, esi
// 00825ddd  e8c4081000           call 0x9266a6
// 00825de2  85c0                 test eax, eax
// 00825de4  7404                 je 0x825dea
// 00825de6  33c0                 xor eax, eax
// 00825de8  eb05                 jmp 0x825def
// 00825dea  b803000000           mov eax, 3
// 00825def  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00825df2  50                   push eax
// 00825df3  6a01                 push 1
// 00825df5  51                   push ecx
// 00825df6  ff152ccb9800         call dword ptr [0x98cb2c]
// 00825dfc  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 00825e02  89ae30020000         mov dword ptr [esi + 0x230], ebp
// 00825e08  39998c000000         cmp dword ptr [ecx + 0x8c], ebx
// 00825e0e  0f854d010000         jne 0x825f61
// 00825e14  399e18010000         cmp dword ptr [esi + 0x118], ebx
// 00825e1a  0f8485000000         je 0x825ea5
// 00825e20  8d542420             lea edx, [esp + 0x20]
// 00825e24  52                   push edx
// 00825e25  8d442428             lea eax, [esp + 0x28]
// 00825e29  50                   push eax
// 00825e2a  8d54241c             lea edx, [esp + 0x1c]
// 00825e2e  52                   push edx
// 00825e2f  8d442424             lea eax, [esp + 0x24]
// 00825e33  50                   push eax
// 00825e34  8d54242c             lea edx, [esp + 0x2c]
// 00825e38  52                   push edx
// 00825e39  895c2430             mov dword ptr [esp + 0x30], ebx
// 00825e3d  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00825e41  895c2428             mov dword ptr [esp + 0x28], ebx
// 00825e45  e8b62e0000           call 0x828d00
// 00825e4a  8b442420             mov eax, dword ptr [esp + 0x20]
// 00825e4e  33c9                 xor ecx, ecx
// 00825e50  83f801               cmp eax, 1
// 00825e53  0f9fc1               setg cl
// 00825e56  6a01                 push 1
// 00825e58  8be9                 mov ebp, ecx
// 00825e5a  8bce                 mov ecx, esi
// 00825e5c  3beb                 cmp ebp, ebx
// 00825e5e  7433                 je 0x825e93
// 00825e60  8b542428             mov edx, dword ptr [esp + 0x28]
// 00825e64  48                   dec eax
// 00825e65  89442438             mov dword ptr [esp + 0x38], eax
// 00825e69  8d44242c             lea eax, [esp + 0x2c]
// 00825e6d  c744242c1c000000     mov dword ptr [esp + 0x2c], 0x1c
// 00825e75  c744243c01000000     mov dword ptr [esp + 0x3c], 1
// 00825e7d  895c2434             mov dword ptr [esp + 0x34], ebx
// 00825e81  89542440             mov dword ptr [esp + 0x40], edx
// 00825e85  c744243007000000     mov dword ptr [esp + 0x30], 7
// 00825e8d  50                   push eax
// 00825e8e  e995000000           jmp 0x825f28
// 00825e93  53                   push ebx
// 00825e94  53                   push ebx
// 00825e95  899e0c010000         mov dword ptr [esi + 0x10c], ebx
// 00825e9b  e8d0071000           call 0x926670
// 00825ea0  e989000000           jmp 0x825f2e
// 00825ea5  8b899c000000         mov ecx, dword ptr [ecx + 0x9c]
// 00825eab  8bd1                 mov edx, ecx
// 00825ead  2b9698000000         sub edx, dword ptr [esi + 0x98]
// 00825eb3  039690000000         add edx, dword ptr [esi + 0x90]
// 00825eb9  85d2                 test edx, edx
// 00825ebb  7e10                 jle 0x825ecd
// 00825ebd  8bbe90000000         mov edi, dword ptr [esi + 0x90]
// 00825ec3  2bbe98000000         sub edi, dword ptr [esi + 0x98]
// 00825ec9  03f9                 add edi, ecx
// 00825ecb  eb02                 jmp 0x825ecf
// 00825ecd  33ff                 xor edi, edi
// 00825ecf  39be0c010000         cmp dword ptr [esi + 0x10c], edi
// 00825ed5  7e11                 jle 0x825ee8
// 00825ed7  6a01                 push 1
// 00825ed9  57                   push edi
// 00825eda  53                   push ebx
// 00825edb  8bce                 mov ecx, esi
// 00825edd  89be0c010000         mov dword ptr [esi + 0x10c], edi
// 00825ee3  e888071000           call 0x926670
// 00825ee8  33c0                 xor eax, eax
// 00825eea  3bfb                 cmp edi, ebx
// 00825eec  0f9fc0               setg al
// 00825eef  8be8                 mov ebp, eax
// 00825ef1  3beb                 cmp ebp, ebx
// 00825ef3  7439                 je 0x825f2e
// 00825ef5  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 00825efb  2b8690000000         sub eax, dword ptr [esi + 0x90]
// 00825f01  8d4c2444             lea ecx, [esp + 0x44]
// 00825f05  89442454             mov dword ptr [esp + 0x54], eax
// 00825f09  6a01                 push 1
// 00825f0b  03c7                 add eax, edi
// 00825f0d  51                   push ecx
// 00825f0e  c744244c1c000000     mov dword ptr [esp + 0x4c], 0x1c
// 00825f16  89442458             mov dword ptr [esp + 0x58], eax
// 00825f1a  895c2454             mov dword ptr [esp + 0x54], ebx
// 00825f1e  c744245003000000     mov dword ptr [esp + 0x50], 3
// 00825f26  8bce                 mov ecx, esi
// 00825f28  53                   push ebx
// 00825f29  e8ae071000           call 0x9266dc
// 00825f2e  55                   push ebp
// 00825f2f  53                   push ebx
// 00825f30  8bce                 mov ecx, esi
// 00825f32  e89f071000           call 0x9266d6
// 00825f37  89ae34020000         mov dword ptr [esi + 0x234], ebp
// 00825f3d  3beb                 cmp ebp, ebx
// 00825f3f  740f                 je 0x825f50
// 00825f41  8bce                 mov ecx, esi
// 00825f43  e85e071000           call 0x9266a6
// 00825f48  85c0                 test eax, eax
// 00825f4a  7404                 je 0x825f50
// 00825f4c  33c0                 xor eax, eax
// 00825f4e  eb05                 jmp 0x825f55
// 00825f50  b803000000           mov eax, 3
// 00825f55  8b5620               mov edx, dword ptr [esi + 0x20]
// 00825f58  50                   push eax
// 00825f59  53                   push ebx
// 00825f5a  52                   push edx
// 00825f5b  ff152ccb9800         call dword ptr [0x98cb2c]
// 00825f61  8bce                 mov ecx, esi
// 00825f63  e8f89effff           call 0x81fe60
// 00825f68  8bce                 mov ecx, esi
// 00825f6a  e881ceffff           call 0x822df0
// 00825f6f  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00825f73  64890d00000000       mov dword ptr fs:[0], ecx
// 00825f7a  59                   pop ecx
// 00825f7b  5f                   pop edi
// 00825f7c  5e                   pop esi
// 00825f7d  5d                   pop ebp
// 00825f7e  5b                   pop ebx
// 00825f7f  83c458               add esp, 0x58
// 00825f82  c3                   ret 
// copied from an identical function in another client (function ?AdjustScrollBars@CXTPReportControl@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp