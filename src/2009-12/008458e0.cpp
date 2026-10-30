// roc 2009-12 008458e0  unit: CXTPControls  size: 494 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008458e0
//
// 008458e0  83ec14               sub esp, 0x14
// 008458e3  8b442420             mov eax, dword ptr [esp + 0x20]
// 008458e7  8b00                 mov eax, dword ptr [eax]
// 008458e9  53                   push ebx
// 008458ea  55                   push ebp
// 008458eb  56                   push esi
// 008458ec  33f6                 xor esi, esi
// 008458ee  83e010               and eax, 0x10
// 008458f1  ba01000000           mov edx, 1
// 008458f6  57                   push edi
// 008458f7  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 008458fb  894c2420             mov dword ptr [esp + 0x20], ecx
// 008458ff  89742414             mov dword ptr [esp + 0x14], esi
// 00845903  89742410             mov dword ptr [esp + 0x10], esi
// 00845907  89442418             mov dword ptr [esp + 0x18], eax
// 0084590b  8954241c             mov dword ptr [esp + 0x1c], edx
// 0084590f  7405                 je 0x845916
// 00845911  8b7f04               mov edi, dword ptr [edi + 4]
// 00845914  eb02                 jmp 0x845918
// 00845916  8b3f                 mov edi, dword ptr [edi]
// 00845918  33ed                 xor ebp, ebp
// 0084591a  39712c               cmp dword ptr [ecx + 0x2c], esi
// 0084591d  897c2434             mov dword ptr [esp + 0x34], edi
// 00845921  7f17                 jg 0x84593a
// 00845923  8b442414             mov eax, dword ptr [esp + 0x14]
// 00845927  5f                   pop edi
// 00845928  5e                   pop esi
// 00845929  5d                   pop ebp
// 0084592a  40                   inc eax
// 0084592b  5b                   pop ebx
// 0084592c  83c414               add esp, 0x14
// 0084592f  c21000               ret 0x10
// 00845932  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00845936  8b442418             mov eax, dword ptr [esp + 0x18]
// 0084593a  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0084593e  8bcd                 mov ecx, ebp
// 00845940  c1e106               shl ecx, 6
// 00845943  03f9                 add edi, ecx
// 00845945  897730               mov dword ptr [edi + 0x30], esi
// 00845948  89772c               mov dword ptr [edi + 0x2c], esi
// 0084594b  397728               cmp dword ptr [edi + 0x28], esi
// 0084594e  0f845d010000         je 0x845ab1
// 00845954  3bc6                 cmp eax, esi
// 00845956  7405                 je 0x84595d
// 00845958  8b4724               mov eax, dword ptr [edi + 0x24]
// 0084595b  eb03                 jmp 0x845960
// 0084595d  8b4720               mov eax, dword ptr [edi + 0x20]
// 00845960  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00845963  3bce                 cmp ecx, esi
// 00845965  7408                 je 0x84596f
// 00845967  3bd6                 cmp edx, esi
// 00845969  7504                 jne 0x84596f
// 0084596b  03442434             add eax, dword ptr [esp + 0x34]
// 0084596f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00845973  03d8                 add ebx, eax
// 00845975  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 00845979  7f14                 jg 0x84598f
// 0084597b  8b442430             mov eax, dword ptr [esp + 0x30]
// 0084597f  f70000010000         test dword ptr [eax], 0x100
// 00845985  740d                 je 0x845994
// 00845987  3bce                 cmp ecx, esi
// 00845989  7409                 je 0x845994
// 0084598b  3bd6                 cmp edx, esi
// 0084598d  7505                 jne 0x845994
// 0084598f  be01000000           mov esi, 1
// 00845994  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 00845997  e824ef0100           call 0x8648c0
// 0084599c  84c0                 test al, al
// 0084599e  7937                 jns 0x8459d7
// 008459a0  837c241800           cmp dword ptr [esp + 0x18], 0
// 008459a5  7418                 je 0x8459bf
// 008459a7  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 008459aa  b801000000           mov eax, 1
// 008459af  01442414             add dword ptr [esp + 0x14], eax
// 008459b3  894c2410             mov dword ptr [esp + 0x10], ecx
// 008459b7  89472c               mov dword ptr [edi + 0x2c], eax
// 008459ba  e9e8000000           jmp 0x845aa7
// 008459bf  8b5720               mov edx, dword ptr [edi + 0x20]
// 008459c2  b801000000           mov eax, 1
// 008459c7  01442414             add dword ptr [esp + 0x14], eax
// 008459cb  89542410             mov dword ptr [esp + 0x10], edx
// 008459cf  89472c               mov dword ptr [edi + 0x2c], eax
// 008459d2  e9d0000000           jmp 0x845aa7
// 008459d7  85f6                 test esi, esi
// 008459d9  0f84c4000000         je 0x845aa3
// 008459df  8b542430             mov edx, dword ptr [esp + 0x30]
// 008459e3  f60280               test byte ptr [edx], 0x80
// 008459e6  745a                 je 0x845a42
// 008459e8  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 008459ed  7553                 jne 0x845a42
// 008459ef  8b442420             mov eax, dword ptr [esp + 0x20]
// 008459f3  33db                 xor ebx, ebx
// 008459f5  3b682c               cmp ebp, dword ptr [eax + 0x2c]
// 008459f8  8bf5                 mov esi, ebp
// 008459fa  7d31                 jge 0x845a2d
// 008459fc  83c730               add edi, 0x30
// 008459ff  90                   nop 
// 00845a00  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00845a03  e8b8ee0100           call 0x8648c0
// 00845a08  84c0                 test al, al
// 00845a0a  7815                 js 0x845a21
// 00845a0c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00845a10  c70701000000         mov dword ptr [edi], 1
// 00845a16  46                   inc esi
// 00845a17  83c740               add edi, 0x40
// 00845a1a  3b712c               cmp esi, dword ptr [ecx + 0x2c]
// 00845a1d  7ce1                 jl 0x845a00
// 00845a1f  eb08                 jmp 0x845a29
// 00845a21  bb01000000           mov ebx, 1
// 00845a26  8d6eff               lea ebp, [esi - 1]
// 00845a29  8b542430             mov edx, dword ptr [esp + 0x30]
// 00845a2d  830a01               or dword ptr [edx], 1
// 00845a30  85db                 test ebx, ebx
// 00845a32  757b                 jne 0x845aaf
// 00845a34  8b442414             mov eax, dword ptr [esp + 0x14]
// 00845a38  5f                   pop edi
// 00845a39  5e                   pop esi
// 00845a3a  5d                   pop ebp
// 00845a3b  5b                   pop ebx
// 00845a3c  83c414               add esp, 0x14
// 00845a3f  c21000               ret 0x10
// 00845a42  8bcd                 mov ecx, ebp
// 00845a44  85ed                 test ebp, ebp
// 00845a46  7c25                 jl 0x845a6d
// 00845a48  8d4734               lea eax, [edi + 0x34]
// 00845a4b  eb03                 jmp 0x845a50
// 00845a4d  8d4900               lea ecx, [ecx]
// 00845a50  8378f800             cmp dword ptr [eax - 8], 0
// 00845a54  7517                 jne 0x845a6d
// 00845a56  833800               cmp dword ptr [eax], 0
// 00845a59  7406                 je 0x845a61
// 00845a5b  8378f400             cmp dword ptr [eax - 0xc], 0
// 00845a5f  750a                 jne 0x845a6b
// 00845a61  49                   dec ecx
// 00845a62  83e840               sub eax, 0x40
// 00845a65  85c9                 test ecx, ecx
// 00845a67  7de7                 jge 0x845a50
// 00845a69  eb02                 jmp 0x845a6d
// 00845a6b  8be9                 mov ebp, ecx
// 00845a6d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00845a71  8bc5                 mov eax, ebp
// 00845a73  c1e006               shl eax, 6
// 00845a76  03c1                 add eax, ecx
// 00845a78  837c241800           cmp dword ptr [esp + 0x18], 0
// 00845a7d  7405                 je 0x845a84
// 00845a7f  8b4824               mov ecx, dword ptr [eax + 0x24]
// 00845a82  eb03                 jmp 0x845a87
// 00845a84  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00845a87  894c2410             mov dword ptr [esp + 0x10], ecx
// 00845a8b  b901000000           mov ecx, 1
// 00845a90  89482c               mov dword ptr [eax + 0x2c], ecx
// 00845a93  8b02                 mov eax, dword ptr [edx]
// 00845a95  84c0                 test al, al
// 00845a97  7804                 js 0x845a9d
// 00845a99  0bc1                 or eax, ecx
// 00845a9b  8902                 mov dword ptr [edx], eax
// 00845a9d  014c2414             add dword ptr [esp + 0x14], ecx
// 00845aa1  eb04                 jmp 0x845aa7
// 00845aa3  895c2410             mov dword ptr [esp + 0x10], ebx
// 00845aa7  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00845aaf  33f6                 xor esi, esi
// 00845ab1  8b542420             mov edx, dword ptr [esp + 0x20]
// 00845ab5  45                   inc ebp
// 00845ab6  3b6a2c               cmp ebp, dword ptr [edx + 0x2c]
// 00845ab9  0f8c73feffff         jl 0x845932
// 00845abf  8b442414             mov eax, dword ptr [esp + 0x14]
// 00845ac3  5f                   pop edi
// 00845ac4  5e                   pop esi
// 00845ac5  5d                   pop ebp
// 00845ac6  40                   inc eax
// 00845ac7  5b                   pop ebx
// 00845ac8  83c414               add esp, 0x14
// 00845acb  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_WrapToolBar@CXTPControls@@IAEHPAUXTPBUTTONINFO@1@HAAKABVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
