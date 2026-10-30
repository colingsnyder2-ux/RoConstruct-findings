// from server: 100% by auto
// roc 2007-08 0067ac60  unit: CXTPControls  size: 500 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067ac60
//
// 0067ac60  83ec14               sub esp, 0x14
// 0067ac63  8b442420             mov eax, dword ptr [esp + 0x20]
// 0067ac67  8b00                 mov eax, dword ptr [eax]
// 0067ac69  53                   push ebx
// 0067ac6a  55                   push ebp
// 0067ac6b  56                   push esi
// 0067ac6c  33f6                 xor esi, esi
// 0067ac6e  83e010               and eax, 0x10
// 0067ac71  ba01000000           mov edx, 1
// 0067ac76  57                   push edi
// 0067ac77  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0067ac7b  894c2420             mov dword ptr [esp + 0x20], ecx
// 0067ac7f  89742414             mov dword ptr [esp + 0x14], esi
// 0067ac83  89742410             mov dword ptr [esp + 0x10], esi
// 0067ac87  89442418             mov dword ptr [esp + 0x18], eax
// 0067ac8b  8954241c             mov dword ptr [esp + 0x1c], edx
// 0067ac8f  7405                 je 0x67ac96
// 0067ac91  8b7f04               mov edi, dword ptr [edi + 4]
// 0067ac94  eb02                 jmp 0x67ac98
// 0067ac96  8b3f                 mov edi, dword ptr [edi]
// 0067ac98  33ed                 xor ebp, ebp
// 0067ac9a  39712c               cmp dword ptr [ecx + 0x2c], esi
// 0067ac9d  897c2434             mov dword ptr [esp + 0x34], edi
// 0067aca1  7f19                 jg 0x67acbc
// 0067aca3  8b442414             mov eax, dword ptr [esp + 0x14]
// 0067aca7  5f                   pop edi
// 0067aca8  5e                   pop esi
// 0067aca9  5d                   pop ebp
// 0067acaa  83c001               add eax, 1
// 0067acad  5b                   pop ebx
// 0067acae  83c414               add esp, 0x14
// 0067acb1  c21000               ret 0x10
// 0067acb4  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0067acb8  8b442418             mov eax, dword ptr [esp + 0x18]
// 0067acbc  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0067acc0  8bcd                 mov ecx, ebp
// 0067acc2  c1e106               shl ecx, 6
// 0067acc5  03f9                 add edi, ecx
// 0067acc7  397728               cmp dword ptr [edi + 0x28], esi
// 0067acca  897730               mov dword ptr [edi + 0x30], esi
// 0067accd  89772c               mov dword ptr [edi + 0x2c], esi
// 0067acd0  0f845d010000         je 0x67ae33
// 0067acd6  3bc6                 cmp eax, esi
// 0067acd8  7405                 je 0x67acdf
// 0067acda  8b4724               mov eax, dword ptr [edi + 0x24]
// 0067acdd  eb03                 jmp 0x67ace2
// 0067acdf  8b4720               mov eax, dword ptr [edi + 0x20]
// 0067ace2  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0067ace5  3bce                 cmp ecx, esi
// 0067ace7  7408                 je 0x67acf1
// 0067ace9  3bd6                 cmp edx, esi
// 0067aceb  7504                 jne 0x67acf1
// 0067aced  03442434             add eax, dword ptr [esp + 0x34]
// 0067acf1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0067acf5  03d8                 add ebx, eax
// 0067acf7  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 0067acfb  7f14                 jg 0x67ad11
// 0067acfd  8b442430             mov eax, dword ptr [esp + 0x30]
// 0067ad01  f70000010000         test dword ptr [eax], 0x100
// 0067ad07  740d                 je 0x67ad16
// 0067ad09  3bce                 cmp ecx, esi
// 0067ad0b  7409                 je 0x67ad16
// 0067ad0d  3bd6                 cmp edx, esi
// 0067ad0f  7505                 jne 0x67ad16
// 0067ad11  be01000000           mov esi, 1
// 0067ad16  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 0067ad19  e812f4fbff           call 0x63a130
// 0067ad1e  84c0                 test al, al
// 0067ad20  7937                 jns 0x67ad59
// 0067ad22  837c241800           cmp dword ptr [esp + 0x18], 0
// 0067ad27  7418                 je 0x67ad41
// 0067ad29  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0067ad2c  b801000000           mov eax, 1
// 0067ad31  01442414             add dword ptr [esp + 0x14], eax
// 0067ad35  894c2410             mov dword ptr [esp + 0x10], ecx
// 0067ad39  89472c               mov dword ptr [edi + 0x2c], eax
// 0067ad3c  e9e8000000           jmp 0x67ae29
// 0067ad41  8b5720               mov edx, dword ptr [edi + 0x20]
// 0067ad44  b801000000           mov eax, 1
// 0067ad49  01442414             add dword ptr [esp + 0x14], eax
// 0067ad4d  89542410             mov dword ptr [esp + 0x10], edx
// 0067ad51  89472c               mov dword ptr [edi + 0x2c], eax
// 0067ad54  e9d0000000           jmp 0x67ae29
// 0067ad59  85f6                 test esi, esi
// 0067ad5b  0f84c4000000         je 0x67ae25
// 0067ad61  8b542430             mov edx, dword ptr [esp + 0x30]
// 0067ad65  f60280               test byte ptr [edx], 0x80
// 0067ad68  745b                 je 0x67adc5
// 0067ad6a  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0067ad6f  7554                 jne 0x67adc5
// 0067ad71  8b442420             mov eax, dword ptr [esp + 0x20]
// 0067ad75  33db                 xor ebx, ebx
// 0067ad77  3b682c               cmp ebp, dword ptr [eax + 0x2c]
// 0067ad7a  8bf5                 mov esi, ebp
// 0067ad7c  7d32                 jge 0x67adb0
// 0067ad7e  83c730               add edi, 0x30
// 0067ad81  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0067ad84  e8a7f3fbff           call 0x63a130
// 0067ad89  84c0                 test al, al
// 0067ad8b  7817                 js 0x67ada4
// 0067ad8d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0067ad91  c70701000000         mov dword ptr [edi], 1
// 0067ad97  83c601               add esi, 1
// 0067ad9a  83c740               add edi, 0x40
// 0067ad9d  3b712c               cmp esi, dword ptr [ecx + 0x2c]
// 0067ada0  7cdf                 jl 0x67ad81
// 0067ada2  eb08                 jmp 0x67adac
// 0067ada4  bb01000000           mov ebx, 1
// 0067ada9  8d6eff               lea ebp, [esi - 1]
// 0067adac  8b542430             mov edx, dword ptr [esp + 0x30]
// 0067adb0  830a01               or dword ptr [edx], 1
// 0067adb3  85db                 test ebx, ebx
// 0067adb5  757a                 jne 0x67ae31
// 0067adb7  8b442414             mov eax, dword ptr [esp + 0x14]
// 0067adbb  5f                   pop edi
// 0067adbc  5e                   pop esi
// 0067adbd  5d                   pop ebp
// 0067adbe  5b                   pop ebx
// 0067adbf  83c414               add esp, 0x14
// 0067adc2  c21000               ret 0x10
// 0067adc5  85ed                 test ebp, ebp
// 0067adc7  8bcd                 mov ecx, ebp
// 0067adc9  7c24                 jl 0x67adef
// 0067adcb  8d4734               lea eax, [edi + 0x34]
// 0067adce  8bff                 mov edi, edi
// 0067add0  8378f800             cmp dword ptr [eax - 8], 0
// 0067add4  7519                 jne 0x67adef
// 0067add6  833800               cmp dword ptr [eax], 0
// 0067add9  7406                 je 0x67ade1
// 0067addb  8378f400             cmp dword ptr [eax - 0xc], 0
// 0067addf  750c                 jne 0x67aded
// 0067ade1  83e901               sub ecx, 1
// 0067ade4  83e840               sub eax, 0x40
// 0067ade7  85c9                 test ecx, ecx
// 0067ade9  7de5                 jge 0x67add0
// 0067adeb  eb02                 jmp 0x67adef
// 0067aded  8be9                 mov ebp, ecx
// 0067adef  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0067adf3  8bc5                 mov eax, ebp
// 0067adf5  c1e006               shl eax, 6
// 0067adf8  03c1                 add eax, ecx
// 0067adfa  837c241800           cmp dword ptr [esp + 0x18], 0
// 0067adff  7405                 je 0x67ae06
// 0067ae01  8b4824               mov ecx, dword ptr [eax + 0x24]
// 0067ae04  eb03                 jmp 0x67ae09
// 0067ae06  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0067ae09  894c2410             mov dword ptr [esp + 0x10], ecx
// 0067ae0d  b901000000           mov ecx, 1
// 0067ae12  89482c               mov dword ptr [eax + 0x2c], ecx
// 0067ae15  8b02                 mov eax, dword ptr [edx]
// 0067ae17  84c0                 test al, al
// 0067ae19  7804                 js 0x67ae1f
// 0067ae1b  0bc1                 or eax, ecx
// 0067ae1d  8902                 mov dword ptr [edx], eax
// 0067ae1f  014c2414             add dword ptr [esp + 0x14], ecx
// 0067ae23  eb04                 jmp 0x67ae29
// 0067ae25  895c2410             mov dword ptr [esp + 0x10], ebx
// 0067ae29  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0067ae31  33f6                 xor esi, esi
// 0067ae33  8b542420             mov edx, dword ptr [esp + 0x20]
// 0067ae37  83c501               add ebp, 1
// 0067ae3a  3b6a2c               cmp ebp, dword ptr [edx + 0x2c]
// 0067ae3d  0f8c71feffff         jl 0x67acb4
// 0067ae43  8b442414             mov eax, dword ptr [esp + 0x14]
// 0067ae47  5f                   pop edi
// 0067ae48  5e                   pop esi
// 0067ae49  5d                   pop ebp
// 0067ae4a  83c001               add eax, 1
// 0067ae4d  5b                   pop ebx
// 0067ae4e  83c414               add esp, 0x14
// 0067ae51  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControls.cpp (function ?_WrapToolBar@CXTPControls@@IAEHPAUXTPBUTTONINFO@1@HAAKABVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControls.cpp
