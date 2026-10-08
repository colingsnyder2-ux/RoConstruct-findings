// roc 2012-06 009cf790  unit: CXTPControls  size: 494 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cf790
//
// 009cf790  83ec14               sub esp, 0x14
// 009cf793  8b442420             mov eax, dword ptr [esp + 0x20]
// 009cf797  8b00                 mov eax, dword ptr [eax]
// 009cf799  53                   push ebx
// 009cf79a  55                   push ebp
// 009cf79b  56                   push esi
// 009cf79c  33f6                 xor esi, esi
// 009cf79e  83e010               and eax, 0x10
// 009cf7a1  ba01000000           mov edx, 1
// 009cf7a6  57                   push edi
// 009cf7a7  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 009cf7ab  894c2420             mov dword ptr [esp + 0x20], ecx
// 009cf7af  89742414             mov dword ptr [esp + 0x14], esi
// 009cf7b3  89742410             mov dword ptr [esp + 0x10], esi
// 009cf7b7  89442418             mov dword ptr [esp + 0x18], eax
// 009cf7bb  8954241c             mov dword ptr [esp + 0x1c], edx
// 009cf7bf  7405                 je 0x9cf7c6
// 009cf7c1  8b7f04               mov edi, dword ptr [edi + 4]
// 009cf7c4  eb02                 jmp 0x9cf7c8
// 009cf7c6  8b3f                 mov edi, dword ptr [edi]
// 009cf7c8  33ed                 xor ebp, ebp
// 009cf7ca  39712c               cmp dword ptr [ecx + 0x2c], esi
// 009cf7cd  897c2434             mov dword ptr [esp + 0x34], edi
// 009cf7d1  7f17                 jg 0x9cf7ea
// 009cf7d3  8b442414             mov eax, dword ptr [esp + 0x14]
// 009cf7d7  5f                   pop edi
// 009cf7d8  5e                   pop esi
// 009cf7d9  5d                   pop ebp
// 009cf7da  40                   inc eax
// 009cf7db  5b                   pop ebx
// 009cf7dc  83c414               add esp, 0x14
// 009cf7df  c21000               ret 0x10
// 009cf7e2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009cf7e6  8b442418             mov eax, dword ptr [esp + 0x18]
// 009cf7ea  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 009cf7ee  8bcd                 mov ecx, ebp
// 009cf7f0  c1e106               shl ecx, 6
// 009cf7f3  03f9                 add edi, ecx
// 009cf7f5  897730               mov dword ptr [edi + 0x30], esi
// 009cf7f8  89772c               mov dword ptr [edi + 0x2c], esi
// 009cf7fb  397728               cmp dword ptr [edi + 0x28], esi
// 009cf7fe  0f845d010000         je 0x9cf961
// 009cf804  3bc6                 cmp eax, esi
// 009cf806  7405                 je 0x9cf80d
// 009cf808  8b4724               mov eax, dword ptr [edi + 0x24]
// 009cf80b  eb03                 jmp 0x9cf810
// 009cf80d  8b4720               mov eax, dword ptr [edi + 0x20]
// 009cf810  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 009cf813  3bce                 cmp ecx, esi
// 009cf815  7408                 je 0x9cf81f
// 009cf817  3bd6                 cmp edx, esi
// 009cf819  7504                 jne 0x9cf81f
// 009cf81b  03442434             add eax, dword ptr [esp + 0x34]
// 009cf81f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 009cf823  03d8                 add ebx, eax
// 009cf825  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 009cf829  7f14                 jg 0x9cf83f
// 009cf82b  8b442430             mov eax, dword ptr [esp + 0x30]
// 009cf82f  f70000010000         test dword ptr [eax], 0x100
// 009cf835  740d                 je 0x9cf844
// 009cf837  3bce                 cmp ecx, esi
// 009cf839  7409                 je 0x9cf844
// 009cf83b  3bd6                 cmp edx, esi
// 009cf83d  7505                 jne 0x9cf844
// 009cf83f  be01000000           mov esi, 1
// 009cf844  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 009cf847  e8d41d0200           call 0x9f1620
// 009cf84c  84c0                 test al, al
// 009cf84e  7937                 jns 0x9cf887
// 009cf850  837c241800           cmp dword ptr [esp + 0x18], 0
// 009cf855  7418                 je 0x9cf86f
// 009cf857  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 009cf85a  b801000000           mov eax, 1
// 009cf85f  01442414             add dword ptr [esp + 0x14], eax
// 009cf863  894c2410             mov dword ptr [esp + 0x10], ecx
// 009cf867  89472c               mov dword ptr [edi + 0x2c], eax
// 009cf86a  e9e8000000           jmp 0x9cf957
// 009cf86f  8b5720               mov edx, dword ptr [edi + 0x20]
// 009cf872  b801000000           mov eax, 1
// 009cf877  01442414             add dword ptr [esp + 0x14], eax
// 009cf87b  89542410             mov dword ptr [esp + 0x10], edx
// 009cf87f  89472c               mov dword ptr [edi + 0x2c], eax
// 009cf882  e9d0000000           jmp 0x9cf957
// 009cf887  85f6                 test esi, esi
// 009cf889  0f84c4000000         je 0x9cf953
// 009cf88f  8b542430             mov edx, dword ptr [esp + 0x30]
// 009cf893  f60280               test byte ptr [edx], 0x80
// 009cf896  745a                 je 0x9cf8f2
// 009cf898  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 009cf89d  7553                 jne 0x9cf8f2
// 009cf89f  8b442420             mov eax, dword ptr [esp + 0x20]
// 009cf8a3  33db                 xor ebx, ebx
// 009cf8a5  3b682c               cmp ebp, dword ptr [eax + 0x2c]
// 009cf8a8  8bf5                 mov esi, ebp
// 009cf8aa  7d31                 jge 0x9cf8dd
// 009cf8ac  83c730               add edi, 0x30
// 009cf8af  90                   nop 
// 009cf8b0  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 009cf8b3  e8681d0200           call 0x9f1620
// 009cf8b8  84c0                 test al, al
// 009cf8ba  7815                 js 0x9cf8d1
// 009cf8bc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009cf8c0  c70701000000         mov dword ptr [edi], 1
// 009cf8c6  46                   inc esi
// 009cf8c7  83c740               add edi, 0x40
// 009cf8ca  3b712c               cmp esi, dword ptr [ecx + 0x2c]
// 009cf8cd  7ce1                 jl 0x9cf8b0
// 009cf8cf  eb08                 jmp 0x9cf8d9
// 009cf8d1  bb01000000           mov ebx, 1
// 009cf8d6  8d6eff               lea ebp, [esi - 1]
// 009cf8d9  8b542430             mov edx, dword ptr [esp + 0x30]
// 009cf8dd  830a01               or dword ptr [edx], 1
// 009cf8e0  85db                 test ebx, ebx
// 009cf8e2  757b                 jne 0x9cf95f
// 009cf8e4  8b442414             mov eax, dword ptr [esp + 0x14]
// 009cf8e8  5f                   pop edi
// 009cf8e9  5e                   pop esi
// 009cf8ea  5d                   pop ebp
// 009cf8eb  5b                   pop ebx
// 009cf8ec  83c414               add esp, 0x14
// 009cf8ef  c21000               ret 0x10
// 009cf8f2  8bcd                 mov ecx, ebp
// 009cf8f4  85ed                 test ebp, ebp
// 009cf8f6  7c25                 jl 0x9cf91d
// 009cf8f8  8d4734               lea eax, [edi + 0x34]
// 009cf8fb  eb03                 jmp 0x9cf900
// 009cf8fd  8d4900               lea ecx, [ecx]
// 009cf900  8378f800             cmp dword ptr [eax - 8], 0
// 009cf904  7517                 jne 0x9cf91d
// 009cf906  833800               cmp dword ptr [eax], 0
// 009cf909  7406                 je 0x9cf911
// 009cf90b  8378f400             cmp dword ptr [eax - 0xc], 0
// 009cf90f  750a                 jne 0x9cf91b
// 009cf911  49                   dec ecx
// 009cf912  83e840               sub eax, 0x40
// 009cf915  85c9                 test ecx, ecx
// 009cf917  7de7                 jge 0x9cf900
// 009cf919  eb02                 jmp 0x9cf91d
// 009cf91b  8be9                 mov ebp, ecx
// 009cf91d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009cf921  8bc5                 mov eax, ebp
// 009cf923  c1e006               shl eax, 6
// 009cf926  03c1                 add eax, ecx
// 009cf928  837c241800           cmp dword ptr [esp + 0x18], 0
// 009cf92d  7405                 je 0x9cf934
// 009cf92f  8b4824               mov ecx, dword ptr [eax + 0x24]
// 009cf932  eb03                 jmp 0x9cf937
// 009cf934  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009cf937  894c2410             mov dword ptr [esp + 0x10], ecx
// 009cf93b  b901000000           mov ecx, 1
// 009cf940  89482c               mov dword ptr [eax + 0x2c], ecx
// 009cf943  8b02                 mov eax, dword ptr [edx]
// 009cf945  84c0                 test al, al
// 009cf947  7804                 js 0x9cf94d
// 009cf949  0bc1                 or eax, ecx
// 009cf94b  8902                 mov dword ptr [edx], eax
// 009cf94d  014c2414             add dword ptr [esp + 0x14], ecx
// 009cf951  eb04                 jmp 0x9cf957
// 009cf953  895c2410             mov dword ptr [esp + 0x10], ebx
// 009cf957  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 009cf95f  33f6                 xor esi, esi
// 009cf961  8b542420             mov edx, dword ptr [esp + 0x20]
// 009cf965  45                   inc ebp
// 009cf966  3b6a2c               cmp ebp, dword ptr [edx + 0x2c]
// 009cf969  0f8c73feffff         jl 0x9cf7e2
// 009cf96f  8b442414             mov eax, dword ptr [esp + 0x14]
// 009cf973  5f                   pop edi
// 009cf974  5e                   pop esi
// 009cf975  5d                   pop ebp
// 009cf976  40                   inc eax
// 009cf977  5b                   pop ebx
// 009cf978  83c414               add esp, 0x14
// 009cf97b  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_WrapToolBar@CXTPControls@@IAEHPAUXTPBUTTONINFO@1@HAAKABVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
