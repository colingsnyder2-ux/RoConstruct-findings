// roc 2010-06 008a28a0  unit: CXTPRibbonGroups  size: 443 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a28a0
//
// 008a28a0  6aff                 push -1
// 008a28a2  6860c79b00           push 0x9bc760
// 008a28a7  64a100000000         mov eax, dword ptr fs:[0]
// 008a28ad  50                   push eax
// 008a28ae  83ec10               sub esp, 0x10
// 008a28b1  53                   push ebx
// 008a28b2  55                   push ebp
// 008a28b3  56                   push esi
// 008a28b4  57                   push edi
// 008a28b5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008a28ba  33c4                 xor eax, esp
// 008a28bc  50                   push eax
// 008a28bd  8d442424             lea eax, [esp + 0x24]
// 008a28c1  64a300000000         mov dword ptr fs:[0], eax
// 008a28c7  8bf9                 mov edi, ecx
// 008a28c9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008a28cd  8b01                 mov eax, dword ptr [ecx]
// 008a28cf  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008a28d5  33ed                 xor ebp, ebp
// 008a28d7  68e0dda000           push 0xa0dde0
// 008a28dc  396928               cmp dword ptr [ecx + 0x28], ebp
// 008a28df  0f8598000000         jne 0x8a297d
// 008a28e5  8b7728               mov esi, dword ptr [edi + 0x28]
// 008a28e8  89742420             mov dword ptr [esp + 0x20], esi
// 008a28ec  ffd2                 call edx
// 008a28ee  8bd8                 mov ebx, eax
// 008a28f0  895c2414             mov dword ptr [esp + 0x14], ebx
// 008a28f4  8b03                 mov eax, dword ptr [ebx]
// 008a28f6  8b5004               mov edx, dword ptr [eax + 4]
// 008a28f9  55                   push ebp
// 008a28fa  56                   push esi
// 008a28fb  8bcb                 mov ecx, ebx
// 008a28fd  896c2434             mov dword ptr [esp + 0x34], ebp
// 008a2901  ffd2                 call edx
// 008a2903  89442418             mov dword ptr [esp + 0x18], eax
// 008a2907  85f6                 test esi, esi
// 008a2909  7e69                 jle 0x8a2974
// 008a290b  85ed                 test ebp, ebp
// 008a290d  7c0f                 jl 0x8a291e
// 008a290f  3b6f28               cmp ebp, dword ptr [edi + 0x28]
// 008a2912  7d0a                 jge 0x8a291e
// 008a2914  8b4724               mov eax, dword ptr [edi + 0x24]
// 008a2917  8d04a8               lea eax, [eax + ebp*4]
// 008a291a  8b00                 mov eax, dword ptr [eax]
// 008a291c  eb02                 jmp 0x8a2920
// 008a291e  33c0                 xor eax, eax
// 008a2920  89442434             mov dword ptr [esp + 0x34], eax
// 008a2924  8b13                 mov edx, dword ptr [ebx]
// 008a2926  8b5208               mov edx, dword ptr [edx + 8]
// 008a2929  8d442418             lea eax, [esp + 0x18]
// 008a292d  50                   push eax
// 008a292e  8bcb                 mov ecx, ebx
// 008a2930  ffd2                 call edx
// 008a2932  8bf0                 mov esi, eax
// 008a2934  89742420             mov dword ptr [esp + 0x20], esi
// 008a2938  c644242c01           mov byte ptr [esp + 0x2c], 1
// 008a293d  e80eb7ffff           call 0x89e050
// 008a2942  8b16                 mov edx, dword ptr [esi]
// 008a2944  8b5264               mov edx, dword ptr [edx + 0x64]
// 008a2947  50                   push eax
// 008a2948  8d442438             lea eax, [esp + 0x38]
// 008a294c  50                   push eax
// 008a294d  8bce                 mov ecx, esi
// 008a294f  ffd2                 call edx
// 008a2951  85c0                 test eax, eax
// 008a2953  740c                 je 0x8a2961
// 008a2955  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008a2959  8b01                 mov eax, dword ptr [ecx]
// 008a295b  8b5064               mov edx, dword ptr [eax + 0x64]
// 008a295e  56                   push esi
// 008a295f  ffd2                 call edx
// 008a2961  8bce                 mov ecx, esi
// 008a2963  c644242c00           mov byte ptr [esp + 0x2c], 0
// 008a2968  e8af55f0ff           call 0x7a7f1c
// 008a296d  45                   inc ebp
// 008a296e  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 008a2972  7c97                 jl 0x8a290b
// 008a2974  8b03                 mov eax, dword ptr [ebx]
// 008a2976  8bcb                 mov ecx, ebx
// 008a2978  e9b1000000           jmp 0x8a2a2e
// 008a297d  ffd2                 call edx
// 008a297f  8be8                 mov ebp, eax
// 008a2981  896c2420             mov dword ptr [esp + 0x20], ebp
// 008a2985  8b4500               mov eax, dword ptr [ebp]
// 008a2988  8b5004               mov edx, dword ptr [eax + 4]
// 008a298b  6a00                 push 0
// 008a298d  bb02000000           mov ebx, 2
// 008a2992  6a00                 push 0
// 008a2994  8bcd                 mov ecx, ebp
// 008a2996  895c2434             mov dword ptr [esp + 0x34], ebx
// 008a299a  ffd2                 call edx
// 008a299c  8bcf                 mov ecx, edi
// 008a299e  89442414             mov dword ptr [esp + 0x14], eax
// 008a29a2  e8a9f4ffff           call 0x8a1e50
// 008a29a7  837c241400           cmp dword ptr [esp + 0x14], 0
// 008a29ac  0f8477000000         je 0x8a2a29
// 008a29b2  8b4500               mov eax, dword ptr [ebp]
// 008a29b5  8b5008               mov edx, dword ptr [eax + 8]
// 008a29b8  8d4c2414             lea ecx, [esp + 0x14]
// 008a29bc  51                   push ecx
// 008a29bd  8bcd                 mov ecx, ebp
// 008a29bf  ffd2                 call edx
// 008a29c1  8bf0                 mov esi, eax
// 008a29c3  8974241c             mov dword ptr [esp + 0x1c], esi
// 008a29c7  897e24               mov dword ptr [esi + 0x24], edi
// 008a29ca  c644242c03           mov byte ptr [esp + 0x2c], 3
// 008a29cf  c744243400000000     mov dword ptr [esp + 0x34], 0
// 008a29d7  e874b6ffff           call 0x89e050
// 008a29dc  8b16                 mov edx, dword ptr [esi]
// 008a29de  8b5264               mov edx, dword ptr [edx + 0x64]
// 008a29e1  50                   push eax
// 008a29e2  8d442438             lea eax, [esp + 0x38]
// 008a29e6  50                   push eax
// 008a29e7  8bce                 mov ecx, esi
// 008a29e9  ffd2                 call edx
// 008a29eb  85c0                 test eax, eax
// 008a29ed  740c                 je 0x8a29fb
// 008a29ef  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008a29f3  8b01                 mov eax, dword ptr [ecx]
// 008a29f5  8b5064               mov edx, dword ptr [eax + 0x64]
// 008a29f8  56                   push esi
// 008a29f9  ffd2                 call edx
// 008a29fb  8b542434             mov edx, dword ptr [esp + 0x34]
// 008a29ff  85d2                 test edx, edx
// 008a2a01  744f                 je 0x8a2a52
// 008a2a03  8b4728               mov eax, dword ptr [edi + 0x28]
// 008a2a06  8d4f20               lea ecx, [edi + 0x20]
// 008a2a09  52                   push edx
// 008a2a0a  50                   push eax
// 008a2a0b  e8a0eaf3ff           call 0x7e14b0
// 008a2a10  8bcf                 mov ecx, edi
// 008a2a12  e839e6ffff           call 0x8a1050
// 008a2a17  8bce                 mov ecx, esi
// 008a2a19  885c242c             mov byte ptr [esp + 0x2c], bl
// 008a2a1d  e8fa54f0ff           call 0x7a7f1c
// 008a2a22  837c241400           cmp dword ptr [esp + 0x14], 0
// 008a2a27  7589                 jne 0x8a29b2
// 008a2a29  8b4500               mov eax, dword ptr [ebp]
// 008a2a2c  8bcd                 mov ecx, ebp
// 008a2a2e  8b10                 mov edx, dword ptr [eax]
// 008a2a30  6a01                 push 1
// 008a2a32  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 008a2a3a  ffd2                 call edx
// 008a2a3c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008a2a40  64890d00000000       mov dword ptr fs:[0], ecx
// 008a2a47  59                   pop ecx
// 008a2a48  5f                   pop edi
// 008a2a49  5e                   pop esi
// 008a2a4a  5d                   pop ebp
// 008a2a4b  5b                   pop ebx
// 008a2a4c  83c41c               add esp, 0x1c
// 008a2a4f  c20400               ret 4
// 008a2a52  6a00                 push 0
// 008a2a54  6a06                 push 6
// 008a2a56  e8b55af0ff           call 0x7a8510
// copied from an identical function in another client (function ?DoPropExchange@CXTPRibbonGroups@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroups.cpp