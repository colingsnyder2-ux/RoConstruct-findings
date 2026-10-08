// roc 2010-06 007f9980  unit: CXTPControls  size: 494 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f9980
//
// 007f9980  83ec14               sub esp, 0x14
// 007f9983  8b442420             mov eax, dword ptr [esp + 0x20]
// 007f9987  8b00                 mov eax, dword ptr [eax]
// 007f9989  53                   push ebx
// 007f998a  55                   push ebp
// 007f998b  56                   push esi
// 007f998c  33f6                 xor esi, esi
// 007f998e  83e010               and eax, 0x10
// 007f9991  ba01000000           mov edx, 1
// 007f9996  57                   push edi
// 007f9997  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 007f999b  894c2420             mov dword ptr [esp + 0x20], ecx
// 007f999f  89742414             mov dword ptr [esp + 0x14], esi
// 007f99a3  89742410             mov dword ptr [esp + 0x10], esi
// 007f99a7  89442418             mov dword ptr [esp + 0x18], eax
// 007f99ab  8954241c             mov dword ptr [esp + 0x1c], edx
// 007f99af  7405                 je 0x7f99b6
// 007f99b1  8b7f04               mov edi, dword ptr [edi + 4]
// 007f99b4  eb02                 jmp 0x7f99b8
// 007f99b6  8b3f                 mov edi, dword ptr [edi]
// 007f99b8  33ed                 xor ebp, ebp
// 007f99ba  39712c               cmp dword ptr [ecx + 0x2c], esi
// 007f99bd  897c2434             mov dword ptr [esp + 0x34], edi
// 007f99c1  7f17                 jg 0x7f99da
// 007f99c3  8b442414             mov eax, dword ptr [esp + 0x14]
// 007f99c7  5f                   pop edi
// 007f99c8  5e                   pop esi
// 007f99c9  5d                   pop ebp
// 007f99ca  40                   inc eax
// 007f99cb  5b                   pop ebx
// 007f99cc  83c414               add esp, 0x14
// 007f99cf  c21000               ret 0x10
// 007f99d2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007f99d6  8b442418             mov eax, dword ptr [esp + 0x18]
// 007f99da  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 007f99de  8bcd                 mov ecx, ebp
// 007f99e0  c1e106               shl ecx, 6
// 007f99e3  03f9                 add edi, ecx
// 007f99e5  897730               mov dword ptr [edi + 0x30], esi
// 007f99e8  89772c               mov dword ptr [edi + 0x2c], esi
// 007f99eb  397728               cmp dword ptr [edi + 0x28], esi
// 007f99ee  0f845d010000         je 0x7f9b51
// 007f99f4  3bc6                 cmp eax, esi
// 007f99f6  7405                 je 0x7f99fd
// 007f99f8  8b4724               mov eax, dword ptr [edi + 0x24]
// 007f99fb  eb03                 jmp 0x7f9a00
// 007f99fd  8b4720               mov eax, dword ptr [edi + 0x20]
// 007f9a00  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 007f9a03  3bce                 cmp ecx, esi
// 007f9a05  7408                 je 0x7f9a0f
// 007f9a07  3bd6                 cmp edx, esi
// 007f9a09  7504                 jne 0x7f9a0f
// 007f9a0b  03442434             add eax, dword ptr [esp + 0x34]
// 007f9a0f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007f9a13  03d8                 add ebx, eax
// 007f9a15  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 007f9a19  7f14                 jg 0x7f9a2f
// 007f9a1b  8b442430             mov eax, dword ptr [esp + 0x30]
// 007f9a1f  f70000010000         test dword ptr [eax], 0x100
// 007f9a25  740d                 je 0x7f9a34
// 007f9a27  3bce                 cmp ecx, esi
// 007f9a29  7409                 je 0x7f9a34
// 007f9a2b  3bd6                 cmp edx, esi
// 007f9a2d  7505                 jne 0x7f9a34
// 007f9a2f  be01000000           mov esi, 1
// 007f9a34  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 007f9a37  e86400eaff           call 0x699aa0
// 007f9a3c  84c0                 test al, al
// 007f9a3e  7937                 jns 0x7f9a77
// 007f9a40  837c241800           cmp dword ptr [esp + 0x18], 0
// 007f9a45  7418                 je 0x7f9a5f
// 007f9a47  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 007f9a4a  b801000000           mov eax, 1
// 007f9a4f  01442414             add dword ptr [esp + 0x14], eax
// 007f9a53  894c2410             mov dword ptr [esp + 0x10], ecx
// 007f9a57  89472c               mov dword ptr [edi + 0x2c], eax
// 007f9a5a  e9e8000000           jmp 0x7f9b47
// 007f9a5f  8b5720               mov edx, dword ptr [edi + 0x20]
// 007f9a62  b801000000           mov eax, 1
// 007f9a67  01442414             add dword ptr [esp + 0x14], eax
// 007f9a6b  89542410             mov dword ptr [esp + 0x10], edx
// 007f9a6f  89472c               mov dword ptr [edi + 0x2c], eax
// 007f9a72  e9d0000000           jmp 0x7f9b47
// 007f9a77  85f6                 test esi, esi
// 007f9a79  0f84c4000000         je 0x7f9b43
// 007f9a7f  8b542430             mov edx, dword ptr [esp + 0x30]
// 007f9a83  f60280               test byte ptr [edx], 0x80
// 007f9a86  745a                 je 0x7f9ae2
// 007f9a88  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 007f9a8d  7553                 jne 0x7f9ae2
// 007f9a8f  8b442420             mov eax, dword ptr [esp + 0x20]
// 007f9a93  33db                 xor ebx, ebx
// 007f9a95  3b682c               cmp ebp, dword ptr [eax + 0x2c]
// 007f9a98  8bf5                 mov esi, ebp
// 007f9a9a  7d31                 jge 0x7f9acd
// 007f9a9c  83c730               add edi, 0x30
// 007f9a9f  90                   nop 
// 007f9aa0  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 007f9aa3  e8f8ffe9ff           call 0x699aa0
// 007f9aa8  84c0                 test al, al
// 007f9aaa  7815                 js 0x7f9ac1
// 007f9aac  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007f9ab0  c70701000000         mov dword ptr [edi], 1
// 007f9ab6  46                   inc esi
// 007f9ab7  83c740               add edi, 0x40
// 007f9aba  3b712c               cmp esi, dword ptr [ecx + 0x2c]
// 007f9abd  7ce1                 jl 0x7f9aa0
// 007f9abf  eb08                 jmp 0x7f9ac9
// 007f9ac1  bb01000000           mov ebx, 1
// 007f9ac6  8d6eff               lea ebp, [esi - 1]
// 007f9ac9  8b542430             mov edx, dword ptr [esp + 0x30]
// 007f9acd  830a01               or dword ptr [edx], 1
// 007f9ad0  85db                 test ebx, ebx
// 007f9ad2  757b                 jne 0x7f9b4f
// 007f9ad4  8b442414             mov eax, dword ptr [esp + 0x14]
// 007f9ad8  5f                   pop edi
// 007f9ad9  5e                   pop esi
// 007f9ada  5d                   pop ebp
// 007f9adb  5b                   pop ebx
// 007f9adc  83c414               add esp, 0x14
// 007f9adf  c21000               ret 0x10
// 007f9ae2  8bcd                 mov ecx, ebp
// 007f9ae4  85ed                 test ebp, ebp
// 007f9ae6  7c25                 jl 0x7f9b0d
// 007f9ae8  8d4734               lea eax, [edi + 0x34]
// 007f9aeb  eb03                 jmp 0x7f9af0
// 007f9aed  8d4900               lea ecx, [ecx]
// 007f9af0  8378f800             cmp dword ptr [eax - 8], 0
// 007f9af4  7517                 jne 0x7f9b0d
// 007f9af6  833800               cmp dword ptr [eax], 0
// 007f9af9  7406                 je 0x7f9b01
// 007f9afb  8378f400             cmp dword ptr [eax - 0xc], 0
// 007f9aff  750a                 jne 0x7f9b0b
// 007f9b01  49                   dec ecx
// 007f9b02  83e840               sub eax, 0x40
// 007f9b05  85c9                 test ecx, ecx
// 007f9b07  7de7                 jge 0x7f9af0
// 007f9b09  eb02                 jmp 0x7f9b0d
// 007f9b0b  8be9                 mov ebp, ecx
// 007f9b0d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007f9b11  8bc5                 mov eax, ebp
// 007f9b13  c1e006               shl eax, 6
// 007f9b16  03c1                 add eax, ecx
// 007f9b18  837c241800           cmp dword ptr [esp + 0x18], 0
// 007f9b1d  7405                 je 0x7f9b24
// 007f9b1f  8b4824               mov ecx, dword ptr [eax + 0x24]
// 007f9b22  eb03                 jmp 0x7f9b27
// 007f9b24  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007f9b27  894c2410             mov dword ptr [esp + 0x10], ecx
// 007f9b2b  b901000000           mov ecx, 1
// 007f9b30  89482c               mov dword ptr [eax + 0x2c], ecx
// 007f9b33  8b02                 mov eax, dword ptr [edx]
// 007f9b35  84c0                 test al, al
// 007f9b37  7804                 js 0x7f9b3d
// 007f9b39  0bc1                 or eax, ecx
// 007f9b3b  8902                 mov dword ptr [edx], eax
// 007f9b3d  014c2414             add dword ptr [esp + 0x14], ecx
// 007f9b41  eb04                 jmp 0x7f9b47
// 007f9b43  895c2410             mov dword ptr [esp + 0x10], ebx
// 007f9b47  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 007f9b4f  33f6                 xor esi, esi
// 007f9b51  8b542420             mov edx, dword ptr [esp + 0x20]
// 007f9b55  45                   inc ebp
// 007f9b56  3b6a2c               cmp ebp, dword ptr [edx + 0x2c]
// 007f9b59  0f8c73feffff         jl 0x7f99d2
// 007f9b5f  8b442414             mov eax, dword ptr [esp + 0x14]
// 007f9b63  5f                   pop edi
// 007f9b64  5e                   pop esi
// 007f9b65  5d                   pop ebp
// 007f9b66  40                   inc eax
// 007f9b67  5b                   pop ebx
// 007f9b68  83c414               add esp, 0x14
// 007f9b6b  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_WrapToolBar@CXTPControls@@IAEHPAUXTPBUTTONINFO@1@HAAKABVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
