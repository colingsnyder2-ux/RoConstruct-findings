// roc 2011-06 008fdfc0  unit: CXTPRibbonControlTab  size: 451 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fdfc0
//
// 008fdfc0  6aff                 push -1
// 008fdfc2  6840f4a000           push 0xa0f440
// 008fdfc7  64a100000000         mov eax, dword ptr fs:[0]
// 008fdfcd  50                   push eax
// 008fdfce  83ec10               sub esp, 0x10
// 008fdfd1  53                   push ebx
// 008fdfd2  55                   push ebp
// 008fdfd3  56                   push esi
// 008fdfd4  57                   push edi
// 008fdfd5  a12058c900           mov eax, dword ptr [0xc95820]
// 008fdfda  33c4                 xor eax, esp
// 008fdfdc  50                   push eax
// 008fdfdd  8d442424             lea eax, [esp + 0x24]
// 008fdfe1  64a300000000         mov dword ptr fs:[0], eax
// 008fdfe7  8be9                 mov ebp, ecx
// 008fdfe9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008fdfed  8b01                 mov eax, dword ptr [ecx]
// 008fdfef  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008fdff5  33ff                 xor edi, edi
// 008fdff7  68c422ad00           push 0xad22c4
// 008fdffc  397928               cmp dword ptr [ecx + 0x28], edi
// 008fdfff  0f85a1000000         jne 0x8fe0a6
// 008fe005  8bb5e0010000         mov esi, dword ptr [ebp + 0x1e0]
// 008fe00b  89742420             mov dword ptr [esp + 0x20], esi
// 008fe00f  ffd2                 call edx
// 008fe011  8bd8                 mov ebx, eax
// 008fe013  895c2414             mov dword ptr [esp + 0x14], ebx
// 008fe017  8b03                 mov eax, dword ptr [ebx]
// 008fe019  8b5004               mov edx, dword ptr [eax + 4]
// 008fe01c  57                   push edi
// 008fe01d  56                   push esi
// 008fe01e  8bcb                 mov ecx, ebx
// 008fe020  897c2434             mov dword ptr [esp + 0x34], edi
// 008fe024  ffd2                 call edx
// 008fe026  89442418             mov dword ptr [esp + 0x18], eax
// 008fe02a  85f6                 test esi, esi
// 008fe02c  7e6f                 jle 0x8fe09d
// 008fe02e  85ff                 test edi, edi
// 008fe030  7c15                 jl 0x8fe047
// 008fe032  3bbde0010000         cmp edi, dword ptr [ebp + 0x1e0]
// 008fe038  7d0d                 jge 0x8fe047
// 008fe03a  8b85dc010000         mov eax, dword ptr [ebp + 0x1dc]
// 008fe040  8d04b8               lea eax, [eax + edi*4]
// 008fe043  8b00                 mov eax, dword ptr [eax]
// 008fe045  eb02                 jmp 0x8fe049
// 008fe047  33c0                 xor eax, eax
// 008fe049  89442434             mov dword ptr [esp + 0x34], eax
// 008fe04d  8b13                 mov edx, dword ptr [ebx]
// 008fe04f  8b5208               mov edx, dword ptr [edx + 8]
// 008fe052  8d442418             lea eax, [esp + 0x18]
// 008fe056  50                   push eax
// 008fe057  8bcb                 mov ecx, ebx
// 008fe059  ffd2                 call edx
// 008fe05b  8bf0                 mov esi, eax
// 008fe05d  89742420             mov dword ptr [esp + 0x20], esi
// 008fe061  c644242c01           mov byte ptr [esp + 0x2c], 1
// 008fe066  e8559dffff           call 0x8f7dc0
// 008fe06b  8b16                 mov edx, dword ptr [esi]
// 008fe06d  8b5264               mov edx, dword ptr [edx + 0x64]
// 008fe070  50                   push eax
// 008fe071  8d442438             lea eax, [esp + 0x38]
// 008fe075  50                   push eax
// 008fe076  8bce                 mov ecx, esi
// 008fe078  ffd2                 call edx
// 008fe07a  85c0                 test eax, eax
// 008fe07c  740c                 je 0x8fe08a
// 008fe07e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008fe082  8b01                 mov eax, dword ptr [ecx]
// 008fe084  8b5064               mov edx, dword ptr [eax + 0x64]
// 008fe087  56                   push esi
// 008fe088  ffd2                 call edx
// 008fe08a  8bce                 mov ecx, esi
// 008fe08c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 008fe091  e844c5f0ff           call 0x80a5da
// 008fe096  47                   inc edi
// 008fe097  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 008fe09b  7c91                 jl 0x8fe02e
// 008fe09d  8b03                 mov eax, dword ptr [ebx]
// 008fe09f  8bcb                 mov ecx, ebx
// 008fe0a1  e9b0000000           jmp 0x8fe156
// 008fe0a6  ffd2                 call edx
// 008fe0a8  8bf8                 mov edi, eax
// 008fe0aa  897c2420             mov dword ptr [esp + 0x20], edi
// 008fe0ae  8b07                 mov eax, dword ptr [edi]
// 008fe0b0  8b5004               mov edx, dword ptr [eax + 4]
// 008fe0b3  6a00                 push 0
// 008fe0b5  6a00                 push 0
// 008fe0b7  8bcf                 mov ecx, edi
// 008fe0b9  c744243402000000     mov dword ptr [esp + 0x34], 2
// 008fe0c1  ffd2                 call edx
// 008fe0c3  8d9d84010000         lea ebx, [ebp + 0x184]
// 008fe0c9  8bcb                 mov ecx, ebx
// 008fe0cb  89442414             mov dword ptr [esp + 0x14], eax
// 008fe0cf  e86c64fdff           call 0x8d4540
// 008fe0d4  837c241400           cmp dword ptr [esp + 0x14], 0
// 008fe0d9  7477                 je 0x8fe152
// 008fe0db  eb03                 jmp 0x8fe0e0
// 008fe0dd  8d4900               lea ecx, [ecx]
// 008fe0e0  8b07                 mov eax, dword ptr [edi]
// 008fe0e2  8b5008               mov edx, dword ptr [eax + 8]
// 008fe0e5  8d4c2414             lea ecx, [esp + 0x14]
// 008fe0e9  51                   push ecx
// 008fe0ea  8bcf                 mov ecx, edi
// 008fe0ec  ffd2                 call edx
// 008fe0ee  8bf0                 mov esi, eax
// 008fe0f0  8974241c             mov dword ptr [esp + 0x1c], esi
// 008fe0f4  896e24               mov dword ptr [esi + 0x24], ebp
// 008fe0f7  c644242c03           mov byte ptr [esp + 0x2c], 3
// 008fe0fc  c744243400000000     mov dword ptr [esp + 0x34], 0
// 008fe104  e8b79cffff           call 0x8f7dc0
// 008fe109  8b16                 mov edx, dword ptr [esi]
// 008fe10b  8b5264               mov edx, dword ptr [edx + 0x64]
// 008fe10e  50                   push eax
// 008fe10f  8d442438             lea eax, [esp + 0x38]
// 008fe113  50                   push eax
// 008fe114  8bce                 mov ecx, esi
// 008fe116  ffd2                 call edx
// 008fe118  85c0                 test eax, eax
// 008fe11a  740c                 je 0x8fe128
// 008fe11c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008fe120  8b01                 mov eax, dword ptr [ecx]
// 008fe122  8b5064               mov edx, dword ptr [eax + 0x64]
// 008fe125  56                   push esi
// 008fe126  ffd2                 call edx
// 008fe128  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008fe12c  85c9                 test ecx, ecx
// 008fe12e  744a                 je 0x8fe17a
// 008fe130  8b85e0010000         mov eax, dword ptr [ebp + 0x1e0]
// 008fe136  51                   push ecx
// 008fe137  50                   push eax
// 008fe138  8bcb                 mov ecx, ebx
// 008fe13a  e87164fdff           call 0x8d45b0
// 008fe13f  8bce                 mov ecx, esi
// 008fe141  c644242c02           mov byte ptr [esp + 0x2c], 2
// 008fe146  e88fc4f0ff           call 0x80a5da
// 008fe14b  837c241400           cmp dword ptr [esp + 0x14], 0
// 008fe150  758e                 jne 0x8fe0e0
// 008fe152  8b07                 mov eax, dword ptr [edi]
// 008fe154  8bcf                 mov ecx, edi
// 008fe156  8b10                 mov edx, dword ptr [eax]
// 008fe158  6a01                 push 1
// 008fe15a  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 008fe162  ffd2                 call edx
// 008fe164  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008fe168  64890d00000000       mov dword ptr fs:[0], ecx
// 008fe16f  59                   pop ecx
// 008fe170  5f                   pop edi
// 008fe171  5e                   pop esi
// 008fe172  5d                   pop ebp
// 008fe173  5b                   pop ebx
// 008fe174  83c41c               add esp, 0x1c
// 008fe177  c20400               ret 4
// 008fe17a  6a00                 push 0
// 008fe17c  6a06                 push 6
// 008fe17e  e851caf0ff           call 0x80abd4
// copied from an identical function in another client (function ?DoPropExchange@CXTPRibbonControlTab@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Ribbon\XTPRibbonControlTab.cpp