// roc 2010-06 008539a0  unit: CXTPReportPaintManager  size: 531 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008539a0
//
// 008539a0  6aff                 push -1
// 008539a2  68227f9b00           push 0x9b7f22
// 008539a7  64a100000000         mov eax, dword ptr fs:[0]
// 008539ad  50                   push eax
// 008539ae  83ec20               sub esp, 0x20
// 008539b1  53                   push ebx
// 008539b2  55                   push ebp
// 008539b3  56                   push esi
// 008539b4  57                   push edi
// 008539b5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008539ba  33c4                 xor eax, esp
// 008539bc  50                   push eax
// 008539bd  8d442434             lea eax, [esp + 0x34]
// 008539c1  64a300000000         mov dword ptr fs:[0], eax
// 008539c7  8d4c2420             lea ecx, [esp + 0x20]
// 008539cb  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 008539d1  8b442448             mov eax, dword ptr [esp + 0x48]
// 008539d5  33f6                 xor esi, esi
// 008539d7  50                   push eax
// 008539d8  8d4c241c             lea ecx, [esp + 0x1c]
// 008539dc  89742440             mov dword ptr [esp + 0x40], esi
// 008539e0  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 008539e6  68e86ea000           push 0xa06ee8
// 008539eb  8d4c241c             lea ecx, [esp + 0x1c]
// 008539ef  c644244001           mov byte ptr [esp + 0x40], 1
// 008539f4  ff15c4c29e00         call dword ptr [0x9ec2c4]
// 008539fa  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008539fe  8b5708               mov edx, dword ptr [edi + 8]
// 00853a01  8d4c242c             lea ecx, [esp + 0x2c]
// 00853a05  51                   push ecx
// 00853a06  6a01                 push 1
// 00853a08  68e86ea000           push 0xa06ee8
// 00853a0d  52                   push edx
// 00853a0e  ff1594a19e00         call dword ptr [0x9ea194]
// 00853a14  89742448             mov dword ptr [esp + 0x48], esi
// 00853a18  89742414             mov dword ptr [esp + 0x14], esi
// 00853a1c  8974241c             mov dword ptr [esp + 0x1c], esi
// 00853a20  39742450             cmp dword ptr [esp + 0x50], esi
// 00853a24  753e                 jne 0x853a64
// 00853a26  83c8ff               or eax, 0xffffffff
// 00853a29  8da42400000000       lea esp, [esp]
// 00853a30  40                   inc eax
// 00853a31  50                   push eax
// 00853a32  6a0a                 push 0xa
// 00853a34  8d4c2420             lea ecx, [esp + 0x20]
// 00853a38  46                   inc esi
// 00853a39  ff1578c69e00         call dword ptr [0x9ec678]
// 00853a3f  83f8ff               cmp eax, -1
// 00853a42  75ec                 jne 0x853a30
// 00853a44  8d4c2418             lea ecx, [esp + 0x18]
// 00853a48  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00853a4e  8d4c2420             lea ecx, [esp + 0x20]
// 00853a52  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00853a58  8b442430             mov eax, dword ptr [esp + 0x30]
// 00853a5c  0fafc6               imul eax, esi
// 00853a5f  e939010000           jmp 0x853b9d
// 00853a64  6a01                 push 1
// 00853a66  68e86ea000           push 0xa06ee8
// 00853a6b  57                   push edi
// 00853a6c  c744245c01000000     mov dword ptr [esp + 0x5c], 1
// 00853a74  e8c7b2ffff           call 0x84ed40
// 00853a79  83c40c               add esp, 0xc
// 00853a7c  8d4c2418             lea ecx, [esp + 0x18]
// 00853a80  89442424             mov dword ptr [esp + 0x24], eax
// 00853a84  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00853a8a  8d7801               lea edi, [eax + 1]
// 00853a8d  57                   push edi
// 00853a8e  8d4c241c             lea ecx, [esp + 0x1c]
// 00853a92  ff15fcc39e00         call dword ptr [0x9ec3fc]
// 00853a98  57                   push edi
// 00853a99  8d4c2424             lea ecx, [esp + 0x24]
// 00853a9d  8be8                 mov ebp, eax
// 00853a9f  ff15fcc39e00         call dword ptr [0x9ec3fc]
// 00853aa5  8a5d00               mov bl, byte ptr [ebp]
// 00853aa8  8bf8                 mov edi, eax
// 00853aaa  84db                 test bl, bl
// 00853aac  0f84c7000000         je 0x853b79
// 00853ab2  45                   inc ebp
// 00853ab3  896c2428             mov dword ptr [esp + 0x28], ebp
// 00853ab7  80fb20               cmp bl, 0x20
// 00853aba  7418                 je 0x853ad4
// 00853abc  80fb09               cmp bl, 9
// 00853abf  7413                 je 0x853ad4
// 00853ac1  80fb0a               cmp bl, 0xa
// 00853ac4  740e                 je 0x853ad4
// 00853ac6  881c37               mov byte ptr [edi + esi], bl
// 00853ac9  c644370100           mov byte ptr [edi + esi + 1], 0
// 00853ace  46                   inc esi
// 00853acf  e98f000000           jmp 0x853b63
// 00853ad4  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00853ad8  036c2424             add ebp, dword ptr [esp + 0x24]
// 00853adc  803f00               cmp byte ptr [edi], 0
// 00853adf  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00853ae3  7505                 jne 0x853aea
// 00853ae5  80fb0a               cmp bl, 0xa
// 00853ae8  7579                 jne 0x853b63
// 00853aea  8b442444             mov eax, dword ptr [esp + 0x44]
// 00853aee  56                   push esi
// 00853aef  57                   push edi
// 00853af0  50                   push eax
// 00853af1  e84ab2ffff           call 0x84ed40
// 00853af6  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00853afa  83c40c               add esp, 0xc
// 00853afd  3bc1                 cmp eax, ecx
// 00853aff  7c1e                 jl 0x853b1f
// 00853b01  8b442430             mov eax, dword ptr [esp + 0x30]
// 00853b05  01442448             add dword ptr [esp + 0x48], eax
// 00853b09  33f6                 xor esi, esi
// 00853b0b  39742414             cmp dword ptr [esp + 0x14], esi
// 00853b0f  7e04                 jle 0x853b15
// 00853b11  01442448             add dword ptr [esp + 0x48], eax
// 00853b15  89742450             mov dword ptr [esp + 0x50], esi
// 00853b19  89742414             mov dword ptr [esp + 0x14], esi
// 00853b1d  eb3d                 jmp 0x853b5c
// 00853b1f  8b542414             mov edx, dword ptr [esp + 0x14]
// 00853b23  03d0                 add edx, eax
// 00853b25  03c5                 add eax, ebp
// 00853b27  3bd1                 cmp edx, ecx
// 00853b29  7c0e                 jl 0x853b39
// 00853b2b  89442414             mov dword ptr [esp + 0x14], eax
// 00853b2f  8b442430             mov eax, dword ptr [esp + 0x30]
// 00853b33  01442448             add dword ptr [esp + 0x48], eax
// 00853b37  eb0c                 jmp 0x853b45
// 00853b39  01442414             add dword ptr [esp + 0x14], eax
// 00853b3d  c744245001000000     mov dword ptr [esp + 0x50], 1
// 00853b45  80fb0a               cmp bl, 0xa
// 00853b48  7510                 jne 0x853b5a
// 00853b4a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00853b4e  014c2448             add dword ptr [esp + 0x48], ecx
// 00853b52  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00853b5a  33f6                 xor esi, esi
// 00853b5c  c60700               mov byte ptr [edi], 0
// 00853b5f  8974241c             mov dword ptr [esp + 0x1c], esi
// 00853b63  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00853b67  8a5d00               mov bl, byte ptr [ebp]
// 00853b6a  84db                 test bl, bl
// 00853b6c  0f8540ffffff         jne 0x853ab2
// 00853b72  837c245000           cmp dword ptr [esp + 0x50], 0
// 00853b77  740a                 je 0x853b83
// 00853b79  8b742448             mov esi, dword ptr [esp + 0x48]
// 00853b7d  03742430             add esi, dword ptr [esp + 0x30]
// 00853b81  eb04                 jmp 0x853b87
// 00853b83  8b742448             mov esi, dword ptr [esp + 0x48]
// 00853b87  8d4c2418             lea ecx, [esp + 0x18]
// 00853b8b  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00853b91  8d4c2420             lea ecx, [esp + 0x20]
// 00853b95  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00853b9b  8bc6                 mov eax, esi
// 00853b9d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00853ba1  64890d00000000       mov dword ptr fs:[0], ecx
// 00853ba8  59                   pop ecx
// 00853ba9  5f                   pop edi
// 00853baa  5e                   pop esi
// 00853bab  5d                   pop ebp
// 00853bac  5b                   pop ebx
// 00853bad  83c42c               add esp, 0x2c
// 00853bb0  c21000               ret 0x10
// copied from an identical function in another client (function ?CalculateRowHeight@CXTPReportPaintManager@@MAEHPAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp