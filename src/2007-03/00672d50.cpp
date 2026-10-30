// roc 2007-03 00672d50  unit: seg_00670000  size: 500 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00672d50
//
// 00672d50  83ec14               sub esp, 0x14
// 00672d53  8b442420             mov eax, dword ptr [esp + 0x20]
// 00672d57  8b00                 mov eax, dword ptr [eax]
// 00672d59  53                   push ebx
// 00672d5a  55                   push ebp
// 00672d5b  56                   push esi
// 00672d5c  33f6                 xor esi, esi
// 00672d5e  83e010               and eax, 0x10
// 00672d61  ba01000000           mov edx, 1
// 00672d66  57                   push edi
// 00672d67  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00672d6b  894c2420             mov dword ptr [esp + 0x20], ecx
// 00672d6f  89742414             mov dword ptr [esp + 0x14], esi
// 00672d73  89742410             mov dword ptr [esp + 0x10], esi
// 00672d77  89442418             mov dword ptr [esp + 0x18], eax
// 00672d7b  8954241c             mov dword ptr [esp + 0x1c], edx
// 00672d7f  7405                 je 0x672d86
// 00672d81  8b7f04               mov edi, dword ptr [edi + 4]
// 00672d84  eb02                 jmp 0x672d88
// 00672d86  8b3f                 mov edi, dword ptr [edi]
// 00672d88  33ed                 xor ebp, ebp
// 00672d8a  39712c               cmp dword ptr [ecx + 0x2c], esi
// 00672d8d  897c2434             mov dword ptr [esp + 0x34], edi
// 00672d91  7f19                 jg 0x672dac
// 00672d93  8b442414             mov eax, dword ptr [esp + 0x14]
// 00672d97  5f                   pop edi
// 00672d98  5e                   pop esi
// 00672d99  5d                   pop ebp
// 00672d9a  83c001               add eax, 1
// 00672d9d  5b                   pop ebx
// 00672d9e  83c414               add esp, 0x14
// 00672da1  c21000               ret 0x10
// 00672da4  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00672da8  8b442418             mov eax, dword ptr [esp + 0x18]
// 00672dac  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00672db0  8bcd                 mov ecx, ebp
// 00672db2  c1e106               shl ecx, 6
// 00672db5  03f9                 add edi, ecx
// 00672db7  397728               cmp dword ptr [edi + 0x28], esi
// 00672dba  897730               mov dword ptr [edi + 0x30], esi
// 00672dbd  89772c               mov dword ptr [edi + 0x2c], esi
// 00672dc0  0f845d010000         je 0x672f23
// 00672dc6  3bc6                 cmp eax, esi
// 00672dc8  7405                 je 0x672dcf
// 00672dca  8b4724               mov eax, dword ptr [edi + 0x24]
// 00672dcd  eb03                 jmp 0x672dd2
// 00672dcf  8b4720               mov eax, dword ptr [edi + 0x20]
// 00672dd2  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00672dd5  3bce                 cmp ecx, esi
// 00672dd7  7408                 je 0x672de1
// 00672dd9  3bd6                 cmp edx, esi
// 00672ddb  7504                 jne 0x672de1
// 00672ddd  03442434             add eax, dword ptr [esp + 0x34]
// 00672de1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00672de5  03d8                 add ebx, eax
// 00672de7  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 00672deb  7f14                 jg 0x672e01
// 00672ded  8b442430             mov eax, dword ptr [esp + 0x30]
// 00672df1  f70000010000         test dword ptr [eax], 0x100
// 00672df7  740d                 je 0x672e06
// 00672df9  3bce                 cmp ecx, esi
// 00672dfb  7409                 je 0x672e06
// 00672dfd  3bd6                 cmp edx, esi
// 00672dff  7505                 jne 0x672e06
// 00672e01  be01000000           mov esi, 1
// 00672e06  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 00672e09  e872c8fbff           call 0x62f680
// 00672e0e  84c0                 test al, al
// 00672e10  7937                 jns 0x672e49
// 00672e12  837c241800           cmp dword ptr [esp + 0x18], 0
// 00672e17  7418                 je 0x672e31
// 00672e19  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 00672e1c  b801000000           mov eax, 1
// 00672e21  01442414             add dword ptr [esp + 0x14], eax
// 00672e25  894c2410             mov dword ptr [esp + 0x10], ecx
// 00672e29  89472c               mov dword ptr [edi + 0x2c], eax
// 00672e2c  e9e8000000           jmp 0x672f19
// 00672e31  8b5720               mov edx, dword ptr [edi + 0x20]
// 00672e34  b801000000           mov eax, 1
// 00672e39  01442414             add dword ptr [esp + 0x14], eax
// 00672e3d  89542410             mov dword ptr [esp + 0x10], edx
// 00672e41  89472c               mov dword ptr [edi + 0x2c], eax
// 00672e44  e9d0000000           jmp 0x672f19
// 00672e49  85f6                 test esi, esi
// 00672e4b  0f84c4000000         je 0x672f15
// 00672e51  8b542430             mov edx, dword ptr [esp + 0x30]
// 00672e55  f60280               test byte ptr [edx], 0x80
// 00672e58  745b                 je 0x672eb5
// 00672e5a  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00672e5f  7554                 jne 0x672eb5
// 00672e61  8b442420             mov eax, dword ptr [esp + 0x20]
// 00672e65  33db                 xor ebx, ebx
// 00672e67  3b682c               cmp ebp, dword ptr [eax + 0x2c]
// 00672e6a  8bf5                 mov esi, ebp
// 00672e6c  7d32                 jge 0x672ea0
// 00672e6e  83c730               add edi, 0x30
// 00672e71  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00672e74  e807c8fbff           call 0x62f680
// 00672e79  84c0                 test al, al
// 00672e7b  7817                 js 0x672e94
// 00672e7d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00672e81  c70701000000         mov dword ptr [edi], 1
// 00672e87  83c601               add esi, 1
// 00672e8a  83c740               add edi, 0x40
// 00672e8d  3b712c               cmp esi, dword ptr [ecx + 0x2c]
// 00672e90  7cdf                 jl 0x672e71
// 00672e92  eb08                 jmp 0x672e9c
// 00672e94  bb01000000           mov ebx, 1
// 00672e99  8d6eff               lea ebp, [esi - 1]
// 00672e9c  8b542430             mov edx, dword ptr [esp + 0x30]
// 00672ea0  830a01               or dword ptr [edx], 1
// 00672ea3  85db                 test ebx, ebx
// 00672ea5  757a                 jne 0x672f21
// 00672ea7  8b442414             mov eax, dword ptr [esp + 0x14]
// 00672eab  5f                   pop edi
// 00672eac  5e                   pop esi
// 00672ead  5d                   pop ebp
// 00672eae  5b                   pop ebx
// 00672eaf  83c414               add esp, 0x14
// 00672eb2  c21000               ret 0x10
// 00672eb5  85ed                 test ebp, ebp
// 00672eb7  8bcd                 mov ecx, ebp
// 00672eb9  7c24                 jl 0x672edf
// 00672ebb  8d4734               lea eax, [edi + 0x34]
// 00672ebe  8bff                 mov edi, edi
// 00672ec0  8378f800             cmp dword ptr [eax - 8], 0
// 00672ec4  7519                 jne 0x672edf
// 00672ec6  833800               cmp dword ptr [eax], 0
// 00672ec9  7406                 je 0x672ed1
// 00672ecb  8378f400             cmp dword ptr [eax - 0xc], 0
// 00672ecf  750c                 jne 0x672edd
// 00672ed1  83e901               sub ecx, 1
// 00672ed4  83e840               sub eax, 0x40
// 00672ed7  85c9                 test ecx, ecx
// 00672ed9  7de5                 jge 0x672ec0
// 00672edb  eb02                 jmp 0x672edf
// 00672edd  8be9                 mov ebp, ecx
// 00672edf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00672ee3  8bc5                 mov eax, ebp
// 00672ee5  c1e006               shl eax, 6
// 00672ee8  03c1                 add eax, ecx
// 00672eea  837c241800           cmp dword ptr [esp + 0x18], 0
// 00672eef  7405                 je 0x672ef6
// 00672ef1  8b4824               mov ecx, dword ptr [eax + 0x24]
// 00672ef4  eb03                 jmp 0x672ef9
// 00672ef6  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00672ef9  894c2410             mov dword ptr [esp + 0x10], ecx
// 00672efd  b901000000           mov ecx, 1
// 00672f02  89482c               mov dword ptr [eax + 0x2c], ecx
// 00672f05  8b02                 mov eax, dword ptr [edx]
// 00672f07  84c0                 test al, al
// 00672f09  7804                 js 0x672f0f
// 00672f0b  0bc1                 or eax, ecx
// 00672f0d  8902                 mov dword ptr [edx], eax
// 00672f0f  014c2414             add dword ptr [esp + 0x14], ecx
// 00672f13  eb04                 jmp 0x672f19
// 00672f15  895c2410             mov dword ptr [esp + 0x10], ebx
// 00672f19  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00672f21  33f6                 xor esi, esi
// 00672f23  8b542420             mov edx, dword ptr [esp + 0x20]
// 00672f27  83c501               add ebp, 1
// 00672f2a  3b6a2c               cmp ebp, dword ptr [edx + 0x2c]
// 00672f2d  0f8c71feffff         jl 0x672da4
// 00672f33  8b442414             mov eax, dword ptr [esp + 0x14]
// 00672f37  5f                   pop edi
// 00672f38  5e                   pop esi
// 00672f39  5d                   pop ebp
// 00672f3a  83c001               add eax, 1
// 00672f3d  5b                   pop ebx
// 00672f3e  83c414               add esp, 0x14
// 00672f41  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControls.cpp (function ?_WrapToolBar@CXTPControls@@IAEHPAUXTPBUTTONINFO@1@HAAKABVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControls.cpp
