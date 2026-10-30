// from server: 100% by auto
// roc 2009-06 005a1040  unit: seg_005a0000  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a1040
//
// 005a1040  56                   push esi
// 005a1041  8b742408             mov esi, dword ptr [esp + 8]
// 005a1045  57                   push edi
// 005a1046  8bbea8010000         mov edi, dword ptr [esi + 0x1a8]
// 005a104c  8b4710               mov eax, dword ptr [edi + 0x10]
// 005a104f  894674               mov dword ptr [esi + 0x74], eax
// 005a1052  8b464c               mov eax, dword ptr [esi + 0x4c]
// 005a1055  83e800               sub eax, 0
// 005a1058  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 005a105b  894e70               mov dword ptr [esi + 0x70], ecx
// 005a105e  0f84a3000000         je 0x5a1107
// 005a1064  83e801               sub eax, 1
// 005a1067  53                   push ebx
// 005a1068  7460                 je 0x5a10ca
// 005a106a  83e801               sub eax, 1
// 005a106d  7417                 je 0x5a1086
// 005a106f  8b16                 mov edx, dword ptr [esi]
// 005a1071  c7421430000000       mov dword ptr [edx + 0x14], 0x30
// 005a1078  8b06                 mov eax, dword ptr [esi]
// 005a107a  8b08                 mov ecx, dword ptr [eax]
// 005a107c  56                   push esi
// 005a107d  ffd1                 call ecx
// 005a107f  83c404               add esp, 4
// 005a1082  5b                   pop ebx
// 005a1083  5f                   pop edi
// 005a1084  5e                   pop esi
// 005a1085  c3                   ret 
// 005a1086  837f4400             cmp dword ptr [edi + 0x44], 0
// 005a108a  8d5f44               lea ebx, [edi + 0x44]
// 005a108d  c74704600e5a00       mov dword ptr [edi + 4], 0x5a0e60
// 005a1094  c6475400             mov byte ptr [edi + 0x54], 0
// 005a1098  7505                 jne 0x5a109f
// 005a109a  e861ffffff           call 0x5a1000
// 005a109f  55                   push ebp
// 005a10a0  8b6e5c               mov ebp, dword ptr [esi + 0x5c]
// 005a10a3  33ff                 xor edi, edi
// 005a10a5  397e64               cmp dword ptr [esi + 0x64], edi
// 005a10a8  8d6c2d04             lea ebp, [ebp + ebp + 4]
// 005a10ac  7e17                 jle 0x5a10c5
// 005a10ae  8bff                 mov edi, edi
// 005a10b0  8b13                 mov edx, dword ptr [ebx]
// 005a10b2  55                   push ebp
// 005a10b3  52                   push edx
// 005a10b4  e8f78dfeff           call 0x589eb0
// 005a10b9  47                   inc edi
// 005a10ba  83c408               add esp, 8
// 005a10bd  83c304               add ebx, 4
// 005a10c0  3b7e64               cmp edi, dword ptr [esi + 0x64]
// 005a10c3  7ceb                 jl 0x5a10b0
// 005a10c5  5d                   pop ebp
// 005a10c6  5b                   pop ebx
// 005a10c7  5f                   pop edi
// 005a10c8  5e                   pop esi
// 005a10c9  c3                   ret 
// 005a10ca  837e6403             cmp dword ptr [esi + 0x64], 3
// 005a10ce  7509                 jne 0x5a10d9
// 005a10d0  c74704300d5a00       mov dword ptr [edi + 4], 0x5a0d30
// 005a10d7  eb07                 jmp 0x5a10e0
// 005a10d9  c74704200c5a00       mov dword ptr [edi + 4], 0x5a0c20
// 005a10e0  807f1c00             cmp byte ptr [edi + 0x1c], 0
// 005a10e4  c7473000000000       mov dword ptr [edi + 0x30], 0
// 005a10eb  7509                 jne 0x5a10f6
// 005a10ed  56                   push esi
// 005a10ee  e8adf7ffff           call 0x5a08a0
// 005a10f3  83c404               add esp, 4
// 005a10f6  837f3400             cmp dword ptr [edi + 0x34], 0
// 005a10fa  75ca                 jne 0x5a10c6
// 005a10fc  8bde                 mov ebx, esi
// 005a10fe  e86df9ffff           call 0x5a0a70
// 005a1103  5b                   pop ebx
// 005a1104  5f                   pop edi
// 005a1105  5e                   pop esi
// 005a1106  c3                   ret 
// 005a1107  837e6403             cmp dword ptr [esi + 0x64], 3
// 005a110b  750a                 jne 0x5a1117
// 005a110d  c74704700b5a00       mov dword ptr [edi + 4], 0x5a0b70
// 005a1114  5f                   pop edi
// 005a1115  5e                   pop esi
// 005a1116  c3                   ret 
// 005a1117  c74704c00a5a00       mov dword ptr [edi + 4], 0x5a0ac0
// 005a111e  5f                   pop edi
// 005a111f  5e                   pop esi
// 005a1120  c3                   ret 
// library jpeg-6b/jquant1.c (function _start_pass_1_quant)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
