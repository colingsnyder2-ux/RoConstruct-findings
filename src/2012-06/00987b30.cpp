// roc 2012-06 00987b30  unit: CXTPPaintManager  size: 374 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00987b30
//
// 00987b30  6aff                 push -1
// 00987b32  6874bead00           push 0xadbe74
// 00987b37  64a100000000         mov eax, dword ptr fs:[0]
// 00987b3d  50                   push eax
// 00987b3e  51                   push ecx
// 00987b3f  53                   push ebx
// 00987b40  55                   push ebp
// 00987b41  56                   push esi
// 00987b42  57                   push edi
// 00987b43  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00987b48  33c4                 xor eax, esp
// 00987b4a  50                   push eax
// 00987b4b  8d442418             lea eax, [esp + 0x18]
// 00987b4f  64a300000000         mov dword ptr fs:[0], eax
// 00987b55  8b742428             mov esi, dword ptr [esp + 0x28]
// 00987b59  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00987b5d  56                   push esi
// 00987b5e  ff152045b200         call dword ptr [0xb24520]
// 00987b64  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00987b68  ff150448b200         call dword ptr [0xb24804]
// 00987b6e  6a00                 push 0
// 00987b70  6a20                 push 0x20
// 00987b72  8bce                 mov ecx, esi
// 00987b74  ff15f447b200         call dword ptr [0xb247f4]
// 00987b7a  83f801               cmp eax, 1
// 00987b7d  0f8c0d010000         jl 0x987c90
// 00987b83  8bce                 mov ecx, esi
// 00987b85  ff155846b200         call dword ptr [0xb24658]
// 00987b8b  99                   cdq 
// 00987b8c  2bc2                 sub eax, edx
// 00987b8e  8bd8                 mov ebx, eax
// 00987b90  d1fb                 sar ebx, 1
// 00987b92  8d43ff               lea eax, [ebx - 1]
// 00987b95  33ff                 xor edi, edi
// 00987b97  85c0                 test eax, eax
// 00987b99  0f8ef1000000         jle 0x987c90
// 00987b9f  8beb                 mov ebp, ebx
// 00987ba1  55                   push ebp
// 00987ba2  8bce                 mov ecx, esi
// 00987ba4  ff15e844b200         call dword ptr [0xb244e8]
// 00987baa  3c20                 cmp al, 0x20
// 00987bac  741f                 je 0x987bcd
// 00987bae  8d441f01             lea eax, [edi + ebx + 1]
// 00987bb2  50                   push eax
// 00987bb3  8bce                 mov ecx, esi
// 00987bb5  ff15e844b200         call dword ptr [0xb244e8]
// 00987bbb  3c20                 cmp al, 0x20
// 00987bbd  746b                 je 0x987c2a
// 00987bbf  47                   inc edi
// 00987bc0  8d43ff               lea eax, [ebx - 1]
// 00987bc3  4d                   dec ebp
// 00987bc4  3bf8                 cmp edi, eax
// 00987bc6  7cd9                 jl 0x987ba1
// 00987bc8  e9c3000000           jmp 0x987c90
// 00987bcd  2bdf                 sub ebx, edi
// 00987bcf  53                   push ebx
// 00987bd0  8d4c242c             lea ecx, [esp + 0x2c]
// 00987bd4  51                   push ecx
// 00987bd5  8bce                 mov ecx, esi
// 00987bd7  ff152850b200         call dword ptr [0xb25028]
// 00987bdd  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00987be1  50                   push eax
// 00987be2  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00987bea  ff152045b200         call dword ptr [0xb24520]
// 00987bf0  8d4c2428             lea ecx, [esp + 0x28]
// 00987bf4  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00987bfc  ff15d047b200         call dword ptr [0xb247d0]
// 00987c02  43                   inc ebx
// 00987c03  53                   push ebx
// 00987c04  8d542430             lea edx, [esp + 0x30]
// 00987c08  52                   push edx
// 00987c09  8bce                 mov ecx, esi
// 00987c0b  ff15f047b200         call dword ptr [0xb247f0]
// 00987c11  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00987c15  50                   push eax
// 00987c16  c744242401000000     mov dword ptr [esp + 0x24], 1
// 00987c1e  ff152045b200         call dword ptr [0xb24520]
// 00987c24  8d4c242c             lea ecx, [esp + 0x2c]
// 00987c28  eb60                 jmp 0x987c8a
// 00987c2a  8d441f01             lea eax, [edi + ebx + 1]
// 00987c2e  50                   push eax
// 00987c2f  8d4c242c             lea ecx, [esp + 0x2c]
// 00987c33  51                   push ecx
// 00987c34  8bce                 mov ecx, esi
// 00987c36  ff152850b200         call dword ptr [0xb25028]
// 00987c3c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00987c40  50                   push eax
// 00987c41  c744242402000000     mov dword ptr [esp + 0x24], 2
// 00987c49  ff152045b200         call dword ptr [0xb24520]
// 00987c4f  8d4c2428             lea ecx, [esp + 0x28]
// 00987c53  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00987c5b  ff15d047b200         call dword ptr [0xb247d0]
// 00987c61  8d541f02             lea edx, [edi + ebx + 2]
// 00987c65  52                   push edx
// 00987c66  8d442418             lea eax, [esp + 0x18]
// 00987c6a  50                   push eax
// 00987c6b  8bce                 mov ecx, esi
// 00987c6d  ff15f047b200         call dword ptr [0xb247f0]
// 00987c73  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00987c77  50                   push eax
// 00987c78  c744242403000000     mov dword ptr [esp + 0x24], 3
// 00987c80  ff152045b200         call dword ptr [0xb24520]
// 00987c86  8d4c2414             lea ecx, [esp + 0x14]
// 00987c8a  ff15d047b200         call dword ptr [0xb247d0]
// 00987c90  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00987c94  64890d00000000       mov dword ptr fs:[0], ecx
// 00987c9b  59                   pop ecx
// 00987c9c  5f                   pop edi
// 00987c9d  5e                   pop esi
// 00987c9e  5d                   pop ebp
// 00987c9f  5b                   pop ebx
// 00987ca0  83c410               add esp, 0x10
// 00987ca3  c20c00               ret 0xc
// copied from an identical function in another client (function ?SplitString@CXTPPaintManager@@IAEXABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@AAV23@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp