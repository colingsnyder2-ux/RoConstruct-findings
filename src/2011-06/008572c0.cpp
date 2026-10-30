// roc 2011-06 008572c0  unit: CXTPControls  size: 494 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008572c0
//
// 008572c0  83ec14               sub esp, 0x14
// 008572c3  8b442420             mov eax, dword ptr [esp + 0x20]
// 008572c7  8b00                 mov eax, dword ptr [eax]
// 008572c9  53                   push ebx
// 008572ca  55                   push ebp
// 008572cb  56                   push esi
// 008572cc  33f6                 xor esi, esi
// 008572ce  83e010               and eax, 0x10
// 008572d1  ba01000000           mov edx, 1
// 008572d6  57                   push edi
// 008572d7  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 008572db  894c2420             mov dword ptr [esp + 0x20], ecx
// 008572df  89742414             mov dword ptr [esp + 0x14], esi
// 008572e3  89742410             mov dword ptr [esp + 0x10], esi
// 008572e7  89442418             mov dword ptr [esp + 0x18], eax
// 008572eb  8954241c             mov dword ptr [esp + 0x1c], edx
// 008572ef  7405                 je 0x8572f6
// 008572f1  8b7f04               mov edi, dword ptr [edi + 4]
// 008572f4  eb02                 jmp 0x8572f8
// 008572f6  8b3f                 mov edi, dword ptr [edi]
// 008572f8  33ed                 xor ebp, ebp
// 008572fa  39712c               cmp dword ptr [ecx + 0x2c], esi
// 008572fd  897c2434             mov dword ptr [esp + 0x34], edi
// 00857301  7f17                 jg 0x85731a
// 00857303  8b442414             mov eax, dword ptr [esp + 0x14]
// 00857307  5f                   pop edi
// 00857308  5e                   pop esi
// 00857309  5d                   pop ebp
// 0085730a  40                   inc eax
// 0085730b  5b                   pop ebx
// 0085730c  83c414               add esp, 0x14
// 0085730f  c21000               ret 0x10
// 00857312  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00857316  8b442418             mov eax, dword ptr [esp + 0x18]
// 0085731a  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0085731e  8bcd                 mov ecx, ebp
// 00857320  c1e106               shl ecx, 6
// 00857323  03f9                 add edi, ecx
// 00857325  897730               mov dword ptr [edi + 0x30], esi
// 00857328  89772c               mov dword ptr [edi + 0x2c], esi
// 0085732b  397728               cmp dword ptr [edi + 0x28], esi
// 0085732e  0f845d010000         je 0x857491
// 00857334  3bc6                 cmp eax, esi
// 00857336  7405                 je 0x85733d
// 00857338  8b4724               mov eax, dword ptr [edi + 0x24]
// 0085733b  eb03                 jmp 0x857340
// 0085733d  8b4720               mov eax, dword ptr [edi + 0x20]
// 00857340  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00857343  3bce                 cmp ecx, esi
// 00857345  7408                 je 0x85734f
// 00857347  3bd6                 cmp edx, esi
// 00857349  7504                 jne 0x85734f
// 0085734b  03442434             add eax, dword ptr [esp + 0x34]
// 0085734f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00857353  03d8                 add ebx, eax
// 00857355  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 00857359  7f14                 jg 0x85736f
// 0085735b  8b442430             mov eax, dword ptr [esp + 0x30]
// 0085735f  f70000010000         test dword ptr [eax], 0x100
// 00857365  740d                 je 0x857374
// 00857367  3bce                 cmp ecx, esi
// 00857369  7409                 je 0x857374
// 0085736b  3bd6                 cmp edx, esi
// 0085736d  7505                 jne 0x857374
// 0085736f  be01000000           mov esi, 1
// 00857374  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 00857377  e8241d0200           call 0x8790a0
// 0085737c  84c0                 test al, al
// 0085737e  7937                 jns 0x8573b7
// 00857380  837c241800           cmp dword ptr [esp + 0x18], 0
// 00857385  7418                 je 0x85739f
// 00857387  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0085738a  b801000000           mov eax, 1
// 0085738f  01442414             add dword ptr [esp + 0x14], eax
// 00857393  894c2410             mov dword ptr [esp + 0x10], ecx
// 00857397  89472c               mov dword ptr [edi + 0x2c], eax
// 0085739a  e9e8000000           jmp 0x857487
// 0085739f  8b5720               mov edx, dword ptr [edi + 0x20]
// 008573a2  b801000000           mov eax, 1
// 008573a7  01442414             add dword ptr [esp + 0x14], eax
// 008573ab  89542410             mov dword ptr [esp + 0x10], edx
// 008573af  89472c               mov dword ptr [edi + 0x2c], eax
// 008573b2  e9d0000000           jmp 0x857487
// 008573b7  85f6                 test esi, esi
// 008573b9  0f84c4000000         je 0x857483
// 008573bf  8b542430             mov edx, dword ptr [esp + 0x30]
// 008573c3  f60280               test byte ptr [edx], 0x80
// 008573c6  745a                 je 0x857422
// 008573c8  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 008573cd  7553                 jne 0x857422
// 008573cf  8b442420             mov eax, dword ptr [esp + 0x20]
// 008573d3  33db                 xor ebx, ebx
// 008573d5  3b682c               cmp ebp, dword ptr [eax + 0x2c]
// 008573d8  8bf5                 mov esi, ebp
// 008573da  7d31                 jge 0x85740d
// 008573dc  83c730               add edi, 0x30
// 008573df  90                   nop 
// 008573e0  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 008573e3  e8b81c0200           call 0x8790a0
// 008573e8  84c0                 test al, al
// 008573ea  7815                 js 0x857401
// 008573ec  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008573f0  c70701000000         mov dword ptr [edi], 1
// 008573f6  46                   inc esi
// 008573f7  83c740               add edi, 0x40
// 008573fa  3b712c               cmp esi, dword ptr [ecx + 0x2c]
// 008573fd  7ce1                 jl 0x8573e0
// 008573ff  eb08                 jmp 0x857409
// 00857401  bb01000000           mov ebx, 1
// 00857406  8d6eff               lea ebp, [esi - 1]
// 00857409  8b542430             mov edx, dword ptr [esp + 0x30]
// 0085740d  830a01               or dword ptr [edx], 1
// 00857410  85db                 test ebx, ebx
// 00857412  757b                 jne 0x85748f
// 00857414  8b442414             mov eax, dword ptr [esp + 0x14]
// 00857418  5f                   pop edi
// 00857419  5e                   pop esi
// 0085741a  5d                   pop ebp
// 0085741b  5b                   pop ebx
// 0085741c  83c414               add esp, 0x14
// 0085741f  c21000               ret 0x10
// 00857422  8bcd                 mov ecx, ebp
// 00857424  85ed                 test ebp, ebp
// 00857426  7c25                 jl 0x85744d
// 00857428  8d4734               lea eax, [edi + 0x34]
// 0085742b  eb03                 jmp 0x857430
// 0085742d  8d4900               lea ecx, [ecx]
// 00857430  8378f800             cmp dword ptr [eax - 8], 0
// 00857434  7517                 jne 0x85744d
// 00857436  833800               cmp dword ptr [eax], 0
// 00857439  7406                 je 0x857441
// 0085743b  8378f400             cmp dword ptr [eax - 0xc], 0
// 0085743f  750a                 jne 0x85744b
// 00857441  49                   dec ecx
// 00857442  83e840               sub eax, 0x40
// 00857445  85c9                 test ecx, ecx
// 00857447  7de7                 jge 0x857430
// 00857449  eb02                 jmp 0x85744d
// 0085744b  8be9                 mov ebp, ecx
// 0085744d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00857451  8bc5                 mov eax, ebp
// 00857453  c1e006               shl eax, 6
// 00857456  03c1                 add eax, ecx
// 00857458  837c241800           cmp dword ptr [esp + 0x18], 0
// 0085745d  7405                 je 0x857464
// 0085745f  8b4824               mov ecx, dword ptr [eax + 0x24]
// 00857462  eb03                 jmp 0x857467
// 00857464  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00857467  894c2410             mov dword ptr [esp + 0x10], ecx
// 0085746b  b901000000           mov ecx, 1
// 00857470  89482c               mov dword ptr [eax + 0x2c], ecx
// 00857473  8b02                 mov eax, dword ptr [edx]
// 00857475  84c0                 test al, al
// 00857477  7804                 js 0x85747d
// 00857479  0bc1                 or eax, ecx
// 0085747b  8902                 mov dword ptr [edx], eax
// 0085747d  014c2414             add dword ptr [esp + 0x14], ecx
// 00857481  eb04                 jmp 0x857487
// 00857483  895c2410             mov dword ptr [esp + 0x10], ebx
// 00857487  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0085748f  33f6                 xor esi, esi
// 00857491  8b542420             mov edx, dword ptr [esp + 0x20]
// 00857495  45                   inc ebp
// 00857496  3b6a2c               cmp ebp, dword ptr [edx + 0x2c]
// 00857499  0f8c73feffff         jl 0x857312
// 0085749f  8b442414             mov eax, dword ptr [esp + 0x14]
// 008574a3  5f                   pop edi
// 008574a4  5e                   pop esi
// 008574a5  5d                   pop ebp
// 008574a6  40                   inc eax
// 008574a7  5b                   pop ebx
// 008574a8  83c414               add esp, 0x14
// 008574ab  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_WrapToolBar@CXTPControls@@IAEHPAUXTPBUTTONINFO@1@HAAKABVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
