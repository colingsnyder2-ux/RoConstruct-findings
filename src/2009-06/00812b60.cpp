// roc 2009-06 00812b60  unit: CXTPRibbonGroups  size: 443 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00812b60
//
// 00812b60  6aff                 push -1
// 00812b62  68b0268800           push 0x8826b0
// 00812b67  64a100000000         mov eax, dword ptr fs:[0]
// 00812b6d  50                   push eax
// 00812b6e  83ec10               sub esp, 0x10
// 00812b71  53                   push ebx
// 00812b72  55                   push ebp
// 00812b73  56                   push esi
// 00812b74  57                   push edi
// 00812b75  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00812b7a  33c4                 xor eax, esp
// 00812b7c  50                   push eax
// 00812b7d  8d442424             lea eax, [esp + 0x24]
// 00812b81  64a300000000         mov dword ptr fs:[0], eax
// 00812b87  8bf9                 mov edi, ecx
// 00812b89  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00812b8d  8b01                 mov eax, dword ptr [ecx]
// 00812b8f  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00812b95  33ed                 xor ebp, ebp
// 00812b97  68d4898b00           push 0x8b89d4
// 00812b9c  396928               cmp dword ptr [ecx + 0x28], ebp
// 00812b9f  0f8598000000         jne 0x812c3d
// 00812ba5  8b7728               mov esi, dword ptr [edi + 0x28]
// 00812ba8  89742420             mov dword ptr [esp + 0x20], esi
// 00812bac  ffd2                 call edx
// 00812bae  8bd8                 mov ebx, eax
// 00812bb0  895c2414             mov dword ptr [esp + 0x14], ebx
// 00812bb4  8b03                 mov eax, dword ptr [ebx]
// 00812bb6  8b5004               mov edx, dword ptr [eax + 4]
// 00812bb9  55                   push ebp
// 00812bba  56                   push esi
// 00812bbb  8bcb                 mov ecx, ebx
// 00812bbd  896c2434             mov dword ptr [esp + 0x34], ebp
// 00812bc1  ffd2                 call edx
// 00812bc3  89442418             mov dword ptr [esp + 0x18], eax
// 00812bc7  85f6                 test esi, esi
// 00812bc9  7e69                 jle 0x812c34
// 00812bcb  85ed                 test ebp, ebp
// 00812bcd  7c0f                 jl 0x812bde
// 00812bcf  3b6f28               cmp ebp, dword ptr [edi + 0x28]
// 00812bd2  7d0a                 jge 0x812bde
// 00812bd4  8b4724               mov eax, dword ptr [edi + 0x24]
// 00812bd7  8d04a8               lea eax, [eax + ebp*4]
// 00812bda  8b00                 mov eax, dword ptr [eax]
// 00812bdc  eb02                 jmp 0x812be0
// 00812bde  33c0                 xor eax, eax
// 00812be0  89442434             mov dword ptr [esp + 0x34], eax
// 00812be4  8b13                 mov edx, dword ptr [ebx]
// 00812be6  8b5208               mov edx, dword ptr [edx + 8]
// 00812be9  8d442418             lea eax, [esp + 0x18]
// 00812bed  50                   push eax
// 00812bee  8bcb                 mov ecx, ebx
// 00812bf0  ffd2                 call edx
// 00812bf2  8bf0                 mov esi, eax
// 00812bf4  89742420             mov dword ptr [esp + 0x20], esi
// 00812bf8  c644242c01           mov byte ptr [esp + 0x2c], 1
// 00812bfd  e84ebbffff           call 0x80e750
// 00812c02  8b16                 mov edx, dword ptr [esi]
// 00812c04  8b5264               mov edx, dword ptr [edx + 0x64]
// 00812c07  50                   push eax
// 00812c08  8d442438             lea eax, [esp + 0x38]
// 00812c0c  50                   push eax
// 00812c0d  8bce                 mov ecx, esi
// 00812c0f  ffd2                 call edx
// 00812c11  85c0                 test eax, eax
// 00812c13  740c                 je 0x812c21
// 00812c15  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00812c19  8b01                 mov eax, dword ptr [ecx]
// 00812c1b  8b5064               mov edx, dword ptr [eax + 0x64]
// 00812c1e  56                   push esi
// 00812c1f  ffd2                 call edx
// 00812c21  8bce                 mov ecx, esi
// 00812c23  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00812c28  e87b63f0ff           call 0x718fa8
// 00812c2d  45                   inc ebp
// 00812c2e  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 00812c32  7c97                 jl 0x812bcb
// 00812c34  8b03                 mov eax, dword ptr [ebx]
// 00812c36  8bcb                 mov ecx, ebx
// 00812c38  e9b1000000           jmp 0x812cee
// 00812c3d  ffd2                 call edx
// 00812c3f  8be8                 mov ebp, eax
// 00812c41  896c2420             mov dword ptr [esp + 0x20], ebp
// 00812c45  8b4500               mov eax, dword ptr [ebp]
// 00812c48  8b5004               mov edx, dword ptr [eax + 4]
// 00812c4b  6a00                 push 0
// 00812c4d  bb02000000           mov ebx, 2
// 00812c52  6a00                 push 0
// 00812c54  8bcd                 mov ecx, ebp
// 00812c56  895c2434             mov dword ptr [esp + 0x34], ebx
// 00812c5a  ffd2                 call edx
// 00812c5c  8bcf                 mov ecx, edi
// 00812c5e  89442414             mov dword ptr [esp + 0x14], eax
// 00812c62  e8a9f4ffff           call 0x812110
// 00812c67  837c241400           cmp dword ptr [esp + 0x14], 0
// 00812c6c  0f8477000000         je 0x812ce9
// 00812c72  8b4500               mov eax, dword ptr [ebp]
// 00812c75  8b5008               mov edx, dword ptr [eax + 8]
// 00812c78  8d4c2414             lea ecx, [esp + 0x14]
// 00812c7c  51                   push ecx
// 00812c7d  8bcd                 mov ecx, ebp
// 00812c7f  ffd2                 call edx
// 00812c81  8bf0                 mov esi, eax
// 00812c83  8974241c             mov dword ptr [esp + 0x1c], esi
// 00812c87  897e24               mov dword ptr [esi + 0x24], edi
// 00812c8a  c644242c03           mov byte ptr [esp + 0x2c], 3
// 00812c8f  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00812c97  e8b4baffff           call 0x80e750
// 00812c9c  8b16                 mov edx, dword ptr [esi]
// 00812c9e  8b5264               mov edx, dword ptr [edx + 0x64]
// 00812ca1  50                   push eax
// 00812ca2  8d442438             lea eax, [esp + 0x38]
// 00812ca6  50                   push eax
// 00812ca7  8bce                 mov ecx, esi
// 00812ca9  ffd2                 call edx
// 00812cab  85c0                 test eax, eax
// 00812cad  740c                 je 0x812cbb
// 00812caf  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00812cb3  8b01                 mov eax, dword ptr [ecx]
// 00812cb5  8b5064               mov edx, dword ptr [eax + 0x64]
// 00812cb8  56                   push esi
// 00812cb9  ffd2                 call edx
// 00812cbb  8b542434             mov edx, dword ptr [esp + 0x34]
// 00812cbf  85d2                 test edx, edx
// 00812cc1  744f                 je 0x812d12
// 00812cc3  8b4728               mov eax, dword ptr [edi + 0x28]
// 00812cc6  8d4f20               lea ecx, [edi + 0x20]
// 00812cc9  52                   push edx
// 00812cca  50                   push eax
// 00812ccb  e850faf3ff           call 0x752720
// 00812cd0  8bcf                 mov ecx, edi
// 00812cd2  e889e5ffff           call 0x811260
// 00812cd7  8bce                 mov ecx, esi
// 00812cd9  885c242c             mov byte ptr [esp + 0x2c], bl
// 00812cdd  e8c662f0ff           call 0x718fa8
// 00812ce2  837c241400           cmp dword ptr [esp + 0x14], 0
// 00812ce7  7589                 jne 0x812c72
// 00812ce9  8b4500               mov eax, dword ptr [ebp]
// 00812cec  8bcd                 mov ecx, ebp
// 00812cee  8b10                 mov edx, dword ptr [eax]
// 00812cf0  6a01                 push 1
// 00812cf2  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00812cfa  ffd2                 call edx
// 00812cfc  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00812d00  64890d00000000       mov dword ptr fs:[0], ecx
// 00812d07  59                   pop ecx
// 00812d08  5f                   pop edi
// 00812d09  5e                   pop esi
// 00812d0a  5d                   pop ebp
// 00812d0b  5b                   pop ebx
// 00812d0c  83c41c               add esp, 0x1c
// 00812d0f  c20400               ret 4
// 00812d12  6a00                 push 0
// 00812d14  6a06                 push 6
// 00812d16  e88768f0ff           call 0x7195a2
// copied from an identical function in another client (function ?DoPropExchange@CXTPRibbonGroups@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroups.cpp