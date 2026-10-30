// from server: 100% by auto
// roc 2008-06 0065c8e0  unit: RBX::BallBallContact  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065c8e0
//
// 0065c8e0  51                   push ecx
// 0065c8e1  53                   push ebx
// 0065c8e2  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0065c8e6  55                   push ebp
// 0065c8e7  56                   push esi
// 0065c8e8  57                   push edi
// 0065c8e9  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0065c8ed  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0065c8f5  837f0805             cmp dword ptr [edi + 8], 5
// 0065c8f9  755b                 jne 0x65c956
// 0065c8fb  8b442420             mov eax, dword ptr [esp + 0x20]
// 0065c8ff  8b37                 mov esi, dword ptr [edi]
// 0065c901  50                   push eax
// 0065c902  56                   push esi
// 0065c903  e898210000           call 0x65eaa0
// 0065c908  8be8                 mov ebp, eax
// 0065c90a  83c408               add esp, 8
// 0065c90d  837d0800             cmp dword ptr [ebp + 8], 0
// 0065c911  7528                 jne 0x65c93b
// 0065c913  8b7608               mov esi, dword ptr [esi + 8]
// 0065c916  85f6                 test esi, esi
// 0065c918  7421                 je 0x65c93b
// 0065c91a  f6460601             test byte ptr [esi + 6], 1
// 0065c91e  751b                 jne 0x65c93b
// 0065c920  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 0065c923  8b91bc000000         mov edx, dword ptr [ecx + 0xbc]
// 0065c929  52                   push edx
// 0065c92a  6a00                 push 0
// 0065c92c  56                   push esi
// 0065c92d  e89efcffff           call 0x65c5d0
// 0065c932  8bf0                 mov esi, eax
// 0065c934  83c40c               add esp, 0xc
// 0065c937  85f6                 test esi, esi
// 0065c939  753e                 jne 0x65c979
// 0065c93b  8b4d00               mov ecx, dword ptr [ebp]
// 0065c93e  8b442424             mov eax, dword ptr [esp + 0x24]
// 0065c942  8908                 mov dword ptr [eax], ecx
// 0065c944  8b5504               mov edx, dword ptr [ebp + 4]
// 0065c947  5f                   pop edi
// 0065c948  5e                   pop esi
// 0065c949  895004               mov dword ptr [eax + 4], edx
// 0065c94c  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0065c94f  5d                   pop ebp
// 0065c950  894808               mov dword ptr [eax + 8], ecx
// 0065c953  5b                   pop ebx
// 0065c954  59                   pop ecx
// 0065c955  c3                   ret 
// 0065c956  6a00                 push 0
// 0065c958  57                   push edi
// 0065c959  53                   push ebx
// 0065c95a  e8a1fcffff           call 0x65c600
// 0065c95f  8bf0                 mov esi, eax
// 0065c961  83c40c               add esp, 0xc
// 0065c964  837e0800             cmp dword ptr [esi + 8], 0
// 0065c968  750f                 jne 0x65c979
// 0065c96a  6824c38400           push 0x84c324
// 0065c96f  57                   push edi
// 0065c970  53                   push ebx
// 0065c971  e88a70fcff           call 0x623a00
// 0065c976  83c40c               add esp, 0xc
// 0065c979  837e0806             cmp dword ptr [esi + 8], 6
// 0065c97d  7428                 je 0x65c9a7
// 0065c97f  8b442410             mov eax, dword ptr [esp + 0x10]
// 0065c983  40                   inc eax
// 0065c984  83f864               cmp eax, 0x64
// 0065c987  8bfe                 mov edi, esi
// 0065c989  89442410             mov dword ptr [esp + 0x10], eax
// 0065c98d  0f8c62ffffff         jl 0x65c8f5
// 0065c993  6810c38400           push 0x84c310
// 0065c998  53                   push ebx
// 0065c999  e8326efcff           call 0x6237d0
// 0065c99e  83c408               add esp, 8
// 0065c9a1  5f                   pop edi
// 0065c9a2  5e                   pop esi
// 0065c9a3  5d                   pop ebp
// 0065c9a4  5b                   pop ebx
// 0065c9a5  59                   pop ecx
// 0065c9a6  c3                   ret 
// 0065c9a7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0065c9ab  8b442424             mov eax, dword ptr [esp + 0x24]
// 0065c9af  56                   push esi
// 0065c9b0  53                   push ebx
// 0065c9b1  8bd7                 mov edx, edi
// 0065c9b3  e8f8fdffff           call 0x65c7b0
// 0065c9b8  83c408               add esp, 8
// 0065c9bb  5f                   pop edi
// 0065c9bc  5e                   pop esi
// 0065c9bd  5d                   pop ebp
// 0065c9be  5b                   pop ebx
// 0065c9bf  59                   pop ecx
// 0065c9c0  c3                   ret 
// library lua-5.1.4/lvm.c (function _luaV_gettable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
