// roc 2008-06 00771a80  unit: CXTPCustomizeToolbarsPageCheckListBox  size: 398 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00771a80
//
// 00771a80  83ec60               sub esp, 0x60
// 00771a83  53                   push ebx
// 00771a84  55                   push ebp
// 00771a85  56                   push esi
// 00771a86  8b742470             mov esi, dword ptr [esp + 0x70]
// 00771a8a  57                   push edi
// 00771a8b  8bd9                 mov ebx, ecx
// 00771a8d  b90c000000           mov ecx, 0xc
// 00771a92  8d7c2440             lea edi, [esp + 0x40]
// 00771a96  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00771a98  8b442448             mov eax, dword ptr [esp + 0x48]
// 00771a9c  85c0                 test eax, eax
// 00771a9e  0f8c40010000         jl 0x771be4
// 00771aa4  f644244c03           test byte ptr [esp + 0x4c], 3
// 00771aa9  0f8435010000         je 0x771be4
// 00771aaf  6a00                 push 0
// 00771ab1  50                   push eax
// 00771ab2  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00771ab5  68a1010000           push 0x1a1
// 00771aba  50                   push eax
// 00771abb  ff15142e8000         call dword ptr [0x802e14]
// 00771ac1  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00771ac5  51                   push ecx
// 00771ac6  8bf0                 mov esi, eax
// 00771ac8  e85ba50400           call 0x7bc028
// 00771acd  8b542448             mov edx, dword ptr [esp + 0x48]
// 00771ad1  52                   push edx
// 00771ad2  8bcb                 mov ecx, ebx
// 00771ad4  89442478             mov dword ptr [esp + 0x78], eax
// 00771ad8  e88dae0400           call 0x7bc96a
// 00771add  8b2d702d8000         mov ebp, dword ptr [0x802d70]
// 00771ae3  8bf8                 mov edi, eax
// 00771ae5  8d44245c             lea eax, [esp + 0x5c]
// 00771ae9  50                   push eax
// 00771aea  8d4c2414             lea ecx, [esp + 0x14]
// 00771aee  51                   push ecx
// 00771aef  ffd5                 call ebp
// 00771af1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00771af5  8bc6                 mov eax, esi
// 00771af7  2b436c               sub eax, dword ptr [ebx + 0x6c]
// 00771afa  41                   inc ecx
// 00771afb  99                   cdq 
// 00771afc  2bc2                 sub eax, edx
// 00771afe  d1f8                 sar eax, 1
// 00771b00  ba00000000           mov edx, 0
// 00771b05  0f98c2               sets dl
// 00771b08  894c2410             mov dword ptr [esp + 0x10], ecx
// 00771b0c  4a                   dec edx
// 00771b0d  23c2                 and eax, edx
// 00771b0f  8b542414             mov edx, dword ptr [esp + 0x14]
// 00771b13  8d440201             lea eax, [edx + eax + 1]
// 00771b17  8b5368               mov edx, dword ptr [ebx + 0x68]
// 00771b1a  03d1                 add edx, ecx
// 00771b1c  8b4b6c               mov ecx, dword ptr [ebx + 0x6c]
// 00771b1f  89542418             mov dword ptr [esp + 0x18], edx
// 00771b23  03c8                 add ecx, eax
// 00771b25  8d54245c             lea edx, [esp + 0x5c]
// 00771b29  89442414             mov dword ptr [esp + 0x14], eax
// 00771b2d  52                   push edx
// 00771b2e  8d442424             lea eax, [esp + 0x24]
// 00771b32  50                   push eax
// 00771b33  894c2424             mov dword ptr [esp + 0x24], ecx
// 00771b37  ffd5                 call ebp
// 00771b39  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00771b3d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00771b41  8b5368               mov edx, dword ptr [ebx + 0x68]
// 00771b44  8b33                 mov esi, dword ptr [ebx]
// 00771b46  83ec10               sub esp, 0x10
// 00771b49  8bc4                 mov eax, esp
// 00771b4b  8928                 mov dword ptr [eax], ebp
// 00771b4d  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00771b51  896804               mov dword ptr [eax + 4], ebp
// 00771b54  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00771b58  896808               mov dword ptr [eax + 8], ebp
// 00771b5b  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00771b5f  89680c               mov dword ptr [eax + 0xc], ebp
// 00771b62  8d541102             lea edx, [ecx + edx + 2]
// 00771b66  83ec10               sub esp, 0x10
// 00771b69  8bc4                 mov eax, esp
// 00771b6b  8908                 mov dword ptr [eax], ecx
// 00771b6d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00771b71  894804               mov dword ptr [eax + 4], ecx
// 00771b74  895008               mov dword ptr [eax + 8], edx
// 00771b77  89542448             mov dword ptr [esp + 0x48], edx
// 00771b7b  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00771b7f  89500c               mov dword ptr [eax + 0xc], edx
// 00771b82  8b9660010000         mov edx, dword ptr [esi + 0x160]
// 00771b88  8d442450             lea eax, [esp + 0x50]
// 00771b8c  50                   push eax
// 00771b8d  8bcb                 mov ecx, ebx
// 00771b8f  ffd2                 call edx
// 00771b91  8d735c               lea esi, [ebx + 0x5c]
// 00771b94  8bce                 mov ecx, esi
// 00771b96  e8856afaff           call 0x718620
// 00771b9b  8b542474             mov edx, dword ptr [esp + 0x74]
// 00771b9f  85c0                 test eax, eax
// 00771ba1  7425                 je 0x771bc8
// 00771ba3  33c9                 xor ecx, ecx
// 00771ba5  85ff                 test edi, edi
// 00771ba7  0f95c1               setne cl
// 00771baa  6a00                 push 0
// 00771bac  8d442434             lea eax, [esp + 0x34]
// 00771bb0  50                   push eax
// 00771bb1  8b4204               mov eax, dword ptr [edx + 4]
// 00771bb4  8d0c8d01000000       lea ecx, [ecx*4 + 1]
// 00771bbb  51                   push ecx
// 00771bbc  6a03                 push 3
// 00771bbe  50                   push eax
// 00771bbf  8bce                 mov ecx, esi
// 00771bc1  e8ea64faff           call 0x7180b0
// 00771bc6  eb1c                 jmp 0x771be4
// 00771bc8  8b4204               mov eax, dword ptr [edx + 4]
// 00771bcb  f7df                 neg edi
// 00771bcd  1bff                 sbb edi, edi
// 00771bcf  81e700040000         and edi, 0x400
// 00771bd5  57                   push edi
// 00771bd6  6a04                 push 4
// 00771bd8  8d4c2438             lea ecx, [esp + 0x38]
// 00771bdc  51                   push ecx
// 00771bdd  50                   push eax
// 00771bde  ff15402d8000         call dword ptr [0x802d40]
// 00771be4  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00771be8  8b4b68               mov ecx, dword ptr [ebx + 0x68]
// 00771beb  8d440a03             lea eax, [edx + ecx + 3]
// 00771bef  8b13                 mov edx, dword ptr [ebx]
// 00771bf1  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 00771bf7  8944245c             mov dword ptr [esp + 0x5c], eax
// 00771bfb  8d442440             lea eax, [esp + 0x40]
// 00771bff  50                   push eax
// 00771c00  8bcb                 mov ecx, ebx
// 00771c02  ffd2                 call edx
// 00771c04  5f                   pop edi
// 00771c05  5e                   pop esi
// 00771c06  5d                   pop ebp
// 00771c07  5b                   pop ebx
// 00771c08  83c460               add esp, 0x60
// 00771c0b  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPCustomizeToolbarsPage.cpp (function ?PreDrawItem@CXTPCustomizeToolbarsPageCheckListBox@@IAEXPAUtagDRAWITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCustomizeToolbarsPage.cpp
