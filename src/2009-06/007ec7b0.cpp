// roc 2009-06 007ec7b0  unit: VCEdit::?$CXTMaskEditT  size: 718 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ec7b0
//
// 007ec7b0  53                   push ebx
// 007ec7b1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007ec7b5  56                   push esi
// 007ec7b6  57                   push edi
// 007ec7b7  8bf1                 mov esi, ecx
// 007ec7b9  85db                 test ebx, ebx
// 007ec7bb  0f8cc4000000         jl 0x7ec885
// 007ec7c1  8d7e70               lea edi, [esi + 0x70]
// 007ec7c4  8bcf                 mov ecx, edi
// 007ec7c6  ff1554fb8900         call dword ptr [0x89fb54]
// 007ec7cc  3bd8                 cmp ebx, eax
// 007ec7ce  0f8db1000000         jge 0x7ec885
// 007ec7d4  53                   push ebx
// 007ec7d5  8bcf                 mov ecx, edi
// 007ec7d7  ff15acff8900         call dword ptr [0x89ffac]
// 007ec7dd  0fbec0               movsx eax, al
// 007ec7e0  83c0dd               add eax, -0x23
// 007ec7e3  83f841               cmp eax, 0x41
// 007ec7e6  0f8799000000         ja 0x7ec885
// 007ec7ec  0fb6803cca7e00       movzx eax, byte ptr [eax + 0x7eca3c]
// 007ec7f3  ff248504ca7e00       jmp dword ptr [eax*4 + 0x7eca04]
// 007ec7fa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007ec7fe  0fbe11               movsx edx, byte ptr [ecx]
// 007ec801  52                   push edx
// 007ec802  ff15f8e68900         call dword ptr [0x89e6f8]
// 007ec808  83c404               add esp, 4
// 007ec80b  5f                   pop edi
// 007ec80c  5e                   pop esi
// 007ec80d  5b                   pop ebx
// 007ec80e  c20800               ret 8
// 007ec811  8b742410             mov esi, dword ptr [esp + 0x10]
// 007ec815  0fbe06               movsx eax, byte ptr [esi]
// 007ec818  50                   push eax
// 007ec819  ff15f8e68900         call dword ptr [0x89e6f8]
// 007ec81f  83c404               add esp, 4
// 007ec822  85c0                 test eax, eax
// 007ec824  0f85ad010000         jne 0x7ec9d7
// 007ec82a  0fbe0e               movsx ecx, byte ptr [esi]
// 007ec82d  51                   push ecx
// 007ec82e  ff15f4e68900         call dword ptr [0x89e6f4]
// 007ec834  83c404               add esp, 4
// 007ec837  85c0                 test eax, eax
// 007ec839  0f8598010000         jne 0x7ec9d7
// 007ec83f  5f                   pop edi
// 007ec840  5e                   pop esi
// 007ec841  5b                   pop ebx
// 007ec842  c20800               ret 8
// 007ec845  8b742410             mov esi, dword ptr [esp + 0x10]
// 007ec849  0fbe16               movsx edx, byte ptr [esi]
// 007ec84c  52                   push edx
// 007ec84d  ff15f8e68900         call dword ptr [0x89e6f8]
// 007ec853  83c404               add esp, 4
// 007ec856  85c0                 test eax, eax
// 007ec858  0f8579010000         jne 0x7ec9d7
// 007ec85e  0fbe06               movsx eax, byte ptr [esi]
// 007ec861  50                   push eax
// 007ec862  ff15f4e68900         call dword ptr [0x89e6f4]
// 007ec868  83c404               add esp, 4
// 007ec86b  85c0                 test eax, eax
// 007ec86d  0f8564010000         jne 0x7ec9d7
// 007ec873  8a06                 mov al, byte ptr [esi]
// 007ec875  3c2d                 cmp al, 0x2d
// 007ec877  0f845a010000         je 0x7ec9d7
// 007ec87d  3c2b                 cmp al, 0x2b
// 007ec87f  0f8452010000         je 0x7ec9d7
// 007ec885  5f                   pop edi
// 007ec886  5e                   pop esi
// 007ec887  33c0                 xor eax, eax
// 007ec889  5b                   pop ebx
// 007ec88a  c20800               ret 8
// 007ec88d  8b742410             mov esi, dword ptr [esp + 0x10]
// 007ec891  0fbe0e               movsx ecx, byte ptr [esi]
// 007ec894  51                   push ecx
// 007ec895  ff15f8e68900         call dword ptr [0x89e6f8]
// 007ec89b  83c404               add esp, 4
// 007ec89e  85c0                 test eax, eax
// 007ec8a0  0f8531010000         jne 0x7ec9d7
// 007ec8a6  0fbe16               movsx edx, byte ptr [esi]
// 007ec8a9  52                   push edx
// 007ec8aa  ff15f4e68900         call dword ptr [0x89e6f4]
// 007ec8b0  83c404               add esp, 4
// 007ec8b3  85c0                 test eax, eax
// 007ec8b5  0f851c010000         jne 0x7ec9d7
// 007ec8bb  8a06                 mov al, byte ptr [esi]
// 007ec8bd  3c2d                 cmp al, 0x2d
// 007ec8bf  0f8412010000         je 0x7ec9d7
// 007ec8c5  3c2b                 cmp al, 0x2b
// 007ec8c7  0f840a010000         je 0x7ec9d7
// 007ec8cd  3c2e                 cmp al, 0x2e
// 007ec8cf  0f8402010000         je 0x7ec9d7
// 007ec8d5  3c2c                 cmp al, 0x2c
// 007ec8d7  eba6                 jmp 0x7ec87f
// 007ec8d9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007ec8dd  0fb611               movzx edx, byte ptr [ecx]
// 007ec8e0  8b06                 mov eax, dword ptr [esi]
// 007ec8e2  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 007ec8e8  52                   push edx
// 007ec8e9  8bce                 mov ecx, esi
// 007ec8eb  ffd0                 call eax
// 007ec8ed  5f                   pop edi
// 007ec8ee  5e                   pop esi
// 007ec8ef  5b                   pop ebx
// 007ec8f0  c20800               ret 8
// 007ec8f3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007ec8f7  0fb607               movzx eax, byte ptr [edi]
// 007ec8fa  8b16                 mov edx, dword ptr [esi]
// 007ec8fc  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 007ec902  50                   push eax
// 007ec903  8bce                 mov ecx, esi
// 007ec905  ffd2                 call edx
// 007ec907  85c0                 test eax, eax
// 007ec909  0f85c8000000         jne 0x7ec9d7
// 007ec90f  0fbe07               movsx eax, byte ptr [edi]
// 007ec912  50                   push eax
// 007ec913  e916ffffff           jmp 0x7ec82e
// 007ec918  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007ec91c  0fbe0f               movsx ecx, byte ptr [edi]
// 007ec91f  51                   push ecx
// 007ec920  ff15f0e68900         call dword ptr [0x89e6f0]
// 007ec926  83c404               add esp, 4
// 007ec929  85c0                 test eax, eax
// 007ec92b  0f85a6000000         jne 0x7ec9d7
// 007ec931  0fb607               movzx eax, byte ptr [edi]
// 007ec934  8b16                 mov edx, dword ptr [esi]
// 007ec936  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 007ec93c  50                   push eax
// 007ec93d  8bce                 mov ecx, esi
// 007ec93f  ffd2                 call edx
// 007ec941  e9f1feffff           jmp 0x7ec837
// 007ec946  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007ec94a  0fbe07               movsx eax, byte ptr [edi]
// 007ec94d  50                   push eax
// 007ec94e  ff15f0e68900         call dword ptr [0x89e6f0]
// 007ec954  83c404               add esp, 4
// 007ec957  85c0                 test eax, eax
// 007ec959  757c                 jne 0x7ec9d7
// 007ec95b  eb9a                 jmp 0x7ec8f7
// 007ec95d  8b442410             mov eax, dword ptr [esp + 0x10]
// 007ec961  0fb608               movzx ecx, byte ptr [eax]
// 007ec964  8b16                 mov edx, dword ptr [esi]
// 007ec966  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 007ec96c  51                   push ecx
// 007ec96d  8bce                 mov ecx, esi
// 007ec96f  ffd2                 call edx
// 007ec971  5f                   pop edi
// 007ec972  5e                   pop esi
// 007ec973  5b                   pop ebx
// 007ec974  c20800               ret 8
// 007ec977  8b442410             mov eax, dword ptr [esp + 0x10]
// 007ec97b  0fbe08               movsx ecx, byte ptr [eax]
// 007ec97e  51                   push ecx
// 007ec97f  ff15cce78900         call dword ptr [0x89e7cc]
// 007ec985  83c404               add esp, 4
// 007ec988  5f                   pop edi
// 007ec989  5e                   pop esi
// 007ec98a  5b                   pop ebx
// 007ec98b  c20800               ret 8
// 007ec98e  8b742410             mov esi, dword ptr [esp + 0x10]
// 007ec992  0fbe16               movsx edx, byte ptr [esi]
// 007ec995  52                   push edx
// 007ec996  ff15cce78900         call dword ptr [0x89e7cc]
// 007ec99c  83c404               add esp, 4
// 007ec99f  85c0                 test eax, eax
// 007ec9a1  7534                 jne 0x7ec9d7
// 007ec9a3  0fbe06               movsx eax, byte ptr [esi]
// 007ec9a6  50                   push eax
// 007ec9a7  e982feffff           jmp 0x7ec82e
// 007ec9ac  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007ec9b0  0fb607               movzx eax, byte ptr [edi]
// 007ec9b3  8b16                 mov edx, dword ptr [esi]
// 007ec9b5  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 007ec9bb  50                   push eax
// 007ec9bc  8bce                 mov ecx, esi
// 007ec9be  ffd2                 call edx
// 007ec9c0  85c0                 test eax, eax
// 007ec9c2  0f84bdfeffff         je 0x7ec885
// 007ec9c8  6a01                 push 1
// 007ec9ca  0fb607               movzx eax, byte ptr [edi]
// 007ec9cd  50                   push eax
// 007ec9ce  8bce                 mov ecx, esi
// 007ec9d0  e8dbf6ffff           call 0x7ec0b0
// 007ec9d5  8807                 mov byte ptr [edi], al
// 007ec9d7  5f                   pop edi
// 007ec9d8  5e                   pop esi
// 007ec9d9  b801000000           mov eax, 1
// 007ec9de  5b                   pop ebx
// 007ec9df  c20800               ret 8
// 007ec9e2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007ec9e6  0fb607               movzx eax, byte ptr [edi]
// 007ec9e9  8b16                 mov edx, dword ptr [esi]
// 007ec9eb  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 007ec9f1  50                   push eax
// 007ec9f2  8bce                 mov ecx, esi
// 007ec9f4  ffd2                 call edx
// 007ec9f6  85c0                 test eax, eax
// 007ec9f8  0f8487feffff         je 0x7ec885
// 007ec9fe  6a00                 push 0
// 007eca00  ebc8                 jmp 0x7ec9ca
// 007eca02  8bff                 mov edi, edi
// 007eca04  45                   inc ebp
// 007eca05  c87e005d             enter 0x7e, 0x5d
// 007eca09  c9                   leave 
// 007eca0a  7e00                 jle 0x7eca0c
// 007eca0c  fa                   cli 
// copied from an identical function in another client (function ?ProcessMask@?$CXTMaskEditT@VCEdit@@@@UAEHAADH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp