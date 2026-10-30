// roc 2011-06 008b0b00  unit: CXTPReportPaintManager  size: 531 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b0b00
//
// 008b0b00  6aff                 push -1
// 008b0b02  68f2b0a000           push 0xa0b0f2
// 008b0b07  64a100000000         mov eax, dword ptr fs:[0]
// 008b0b0d  50                   push eax
// 008b0b0e  83ec20               sub esp, 0x20
// 008b0b11  53                   push ebx
// 008b0b12  55                   push ebp
// 008b0b13  56                   push esi
// 008b0b14  57                   push edi
// 008b0b15  a12058c900           mov eax, dword ptr [0xc95820]
// 008b0b1a  33c4                 xor eax, esp
// 008b0b1c  50                   push eax
// 008b0b1d  8d442434             lea eax, [esp + 0x34]
// 008b0b21  64a300000000         mov dword ptr fs:[0], eax
// 008b0b27  8d4c2420             lea ecx, [esp + 0x20]
// 008b0b2b  ff15b42da400         call dword ptr [0xa42db4]
// 008b0b31  8b442448             mov eax, dword ptr [esp + 0x48]
// 008b0b35  33f6                 xor esi, esi
// 008b0b37  50                   push eax
// 008b0b38  8d4c241c             lea ecx, [esp + 0x1c]
// 008b0b3c  89742440             mov dword ptr [esp + 0x40], esi
// 008b0b40  ff15e42da400         call dword ptr [0xa42de4]
// 008b0b46  686056a600           push 0xa65660
// 008b0b4b  8d4c241c             lea ecx, [esp + 0x1c]
// 008b0b4f  c644244001           mov byte ptr [esp + 0x40], 1
// 008b0b54  ff15a822a400         call dword ptr [0xa422a8]
// 008b0b5a  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008b0b5e  8b5708               mov edx, dword ptr [edi + 8]
// 008b0b61  8d4c242c             lea ecx, [esp + 0x2c]
// 008b0b65  51                   push ecx
// 008b0b66  6a01                 push 1
// 008b0b68  686056a600           push 0xa65660
// 008b0b6d  52                   push edx
// 008b0b6e  ff153801a400         call dword ptr [0xa40138]
// 008b0b74  89742448             mov dword ptr [esp + 0x48], esi
// 008b0b78  89742414             mov dword ptr [esp + 0x14], esi
// 008b0b7c  8974241c             mov dword ptr [esp + 0x1c], esi
// 008b0b80  39742450             cmp dword ptr [esp + 0x50], esi
// 008b0b84  753e                 jne 0x8b0bc4
// 008b0b86  83c8ff               or eax, 0xffffffff
// 008b0b89  8da42400000000       lea esp, [esp]
// 008b0b90  40                   inc eax
// 008b0b91  50                   push eax
// 008b0b92  6a0a                 push 0xa
// 008b0b94  8d4c2420             lea ecx, [esp + 0x20]
// 008b0b98  46                   inc esi
// 008b0b99  ff154c27a400         call dword ptr [0xa4274c]
// 008b0b9f  83f8ff               cmp eax, -1
// 008b0ba2  75ec                 jne 0x8b0b90
// 008b0ba4  8d4c2418             lea ecx, [esp + 0x18]
// 008b0ba8  ff15082ea400         call dword ptr [0xa42e08]
// 008b0bae  8d4c2420             lea ecx, [esp + 0x20]
// 008b0bb2  ff15082ea400         call dword ptr [0xa42e08]
// 008b0bb8  8b442430             mov eax, dword ptr [esp + 0x30]
// 008b0bbc  0fafc6               imul eax, esi
// 008b0bbf  e939010000           jmp 0x8b0cfd
// 008b0bc4  6a01                 push 1
// 008b0bc6  686056a600           push 0xa65660
// 008b0bcb  57                   push edi
// 008b0bcc  c744245c01000000     mov dword ptr [esp + 0x5c], 1
// 008b0bd4  e8c7b2ffff           call 0x8abea0
// 008b0bd9  83c40c               add esp, 0xc
// 008b0bdc  8d4c2418             lea ecx, [esp + 0x18]
// 008b0be0  89442424             mov dword ptr [esp + 0x24], eax
// 008b0be4  ff15a826a400         call dword ptr [0xa426a8]
// 008b0bea  8d7801               lea edi, [eax + 1]
// 008b0bed  57                   push edi
// 008b0bee  8d4c241c             lea ecx, [esp + 0x1c]
// 008b0bf2  ff15e023a400         call dword ptr [0xa423e0]
// 008b0bf8  57                   push edi
// 008b0bf9  8d4c2424             lea ecx, [esp + 0x24]
// 008b0bfd  8be8                 mov ebp, eax
// 008b0bff  ff15e023a400         call dword ptr [0xa423e0]
// 008b0c05  8a5d00               mov bl, byte ptr [ebp]
// 008b0c08  8bf8                 mov edi, eax
// 008b0c0a  84db                 test bl, bl
// 008b0c0c  0f84c7000000         je 0x8b0cd9
// 008b0c12  45                   inc ebp
// 008b0c13  896c2428             mov dword ptr [esp + 0x28], ebp
// 008b0c17  80fb20               cmp bl, 0x20
// 008b0c1a  7418                 je 0x8b0c34
// 008b0c1c  80fb09               cmp bl, 9
// 008b0c1f  7413                 je 0x8b0c34
// 008b0c21  80fb0a               cmp bl, 0xa
// 008b0c24  740e                 je 0x8b0c34
// 008b0c26  881c37               mov byte ptr [edi + esi], bl
// 008b0c29  c644370100           mov byte ptr [edi + esi + 1], 0
// 008b0c2e  46                   inc esi
// 008b0c2f  e98f000000           jmp 0x8b0cc3
// 008b0c34  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 008b0c38  036c2424             add ebp, dword ptr [esp + 0x24]
// 008b0c3c  803f00               cmp byte ptr [edi], 0
// 008b0c3f  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008b0c43  7505                 jne 0x8b0c4a
// 008b0c45  80fb0a               cmp bl, 0xa
// 008b0c48  7579                 jne 0x8b0cc3
// 008b0c4a  8b442444             mov eax, dword ptr [esp + 0x44]
// 008b0c4e  56                   push esi
// 008b0c4f  57                   push edi
// 008b0c50  50                   push eax
// 008b0c51  e84ab2ffff           call 0x8abea0
// 008b0c56  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008b0c5a  83c40c               add esp, 0xc
// 008b0c5d  3bc1                 cmp eax, ecx
// 008b0c5f  7c1e                 jl 0x8b0c7f
// 008b0c61  8b442430             mov eax, dword ptr [esp + 0x30]
// 008b0c65  01442448             add dword ptr [esp + 0x48], eax
// 008b0c69  33f6                 xor esi, esi
// 008b0c6b  39742414             cmp dword ptr [esp + 0x14], esi
// 008b0c6f  7e04                 jle 0x8b0c75
// 008b0c71  01442448             add dword ptr [esp + 0x48], eax
// 008b0c75  89742450             mov dword ptr [esp + 0x50], esi
// 008b0c79  89742414             mov dword ptr [esp + 0x14], esi
// 008b0c7d  eb3d                 jmp 0x8b0cbc
// 008b0c7f  8b542414             mov edx, dword ptr [esp + 0x14]
// 008b0c83  03d0                 add edx, eax
// 008b0c85  03c5                 add eax, ebp
// 008b0c87  3bd1                 cmp edx, ecx
// 008b0c89  7c0e                 jl 0x8b0c99
// 008b0c8b  89442414             mov dword ptr [esp + 0x14], eax
// 008b0c8f  8b442430             mov eax, dword ptr [esp + 0x30]
// 008b0c93  01442448             add dword ptr [esp + 0x48], eax
// 008b0c97  eb0c                 jmp 0x8b0ca5
// 008b0c99  01442414             add dword ptr [esp + 0x14], eax
// 008b0c9d  c744245001000000     mov dword ptr [esp + 0x50], 1
// 008b0ca5  80fb0a               cmp bl, 0xa
// 008b0ca8  7510                 jne 0x8b0cba
// 008b0caa  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008b0cae  014c2448             add dword ptr [esp + 0x48], ecx
// 008b0cb2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008b0cba  33f6                 xor esi, esi
// 008b0cbc  c60700               mov byte ptr [edi], 0
// 008b0cbf  8974241c             mov dword ptr [esp + 0x1c], esi
// 008b0cc3  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008b0cc7  8a5d00               mov bl, byte ptr [ebp]
// 008b0cca  84db                 test bl, bl
// 008b0ccc  0f8540ffffff         jne 0x8b0c12
// 008b0cd2  837c245000           cmp dword ptr [esp + 0x50], 0
// 008b0cd7  740a                 je 0x8b0ce3
// 008b0cd9  8b742448             mov esi, dword ptr [esp + 0x48]
// 008b0cdd  03742430             add esi, dword ptr [esp + 0x30]
// 008b0ce1  eb04                 jmp 0x8b0ce7
// 008b0ce3  8b742448             mov esi, dword ptr [esp + 0x48]
// 008b0ce7  8d4c2418             lea ecx, [esp + 0x18]
// 008b0ceb  ff15082ea400         call dword ptr [0xa42e08]
// 008b0cf1  8d4c2420             lea ecx, [esp + 0x20]
// 008b0cf5  ff15082ea400         call dword ptr [0xa42e08]
// 008b0cfb  8bc6                 mov eax, esi
// 008b0cfd  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008b0d01  64890d00000000       mov dword ptr fs:[0], ecx
// 008b0d08  59                   pop ecx
// 008b0d09  5f                   pop edi
// 008b0d0a  5e                   pop esi
// 008b0d0b  5d                   pop ebp
// 008b0d0c  5b                   pop ebx
// 008b0d0d  83c42c               add esp, 0x2c
// 008b0d10  c21000               ret 0x10
// copied from an identical function in another client (function ?CalculateRowHeight@CXTPReportPaintManager@@MAEHPAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp