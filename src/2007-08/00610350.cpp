// from server: 100% by auto
// roc 2007-08 00610350  unit: RBX::Ball  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00610350
//
// 00610350  51                   push ecx
// 00610351  53                   push ebx
// 00610352  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00610356  55                   push ebp
// 00610357  56                   push esi
// 00610358  57                   push edi
// 00610359  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0061035d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00610365  837f0805             cmp dword ptr [edi + 8], 5
// 00610369  755b                 jne 0x6103c6
// 0061036b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0061036f  8b37                 mov esi, dword ptr [edi]
// 00610371  50                   push eax
// 00610372  56                   push esi
// 00610373  e898210000           call 0x612510
// 00610378  8be8                 mov ebp, eax
// 0061037a  83c408               add esp, 8
// 0061037d  837d0800             cmp dword ptr [ebp + 8], 0
// 00610381  7528                 jne 0x6103ab
// 00610383  8b7608               mov esi, dword ptr [esi + 8]
// 00610386  85f6                 test esi, esi
// 00610388  7421                 je 0x6103ab
// 0061038a  f6460601             test byte ptr [esi + 6], 1
// 0061038e  751b                 jne 0x6103ab
// 00610390  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 00610393  8b91bc000000         mov edx, dword ptr [ecx + 0xbc]
// 00610399  52                   push edx
// 0061039a  6a00                 push 0
// 0061039c  56                   push esi
// 0061039d  e89efcffff           call 0x610040
// 006103a2  8bf0                 mov esi, eax
// 006103a4  83c40c               add esp, 0xc
// 006103a7  85f6                 test esi, esi
// 006103a9  753e                 jne 0x6103e9
// 006103ab  8b4d00               mov ecx, dword ptr [ebp]
// 006103ae  8b442424             mov eax, dword ptr [esp + 0x24]
// 006103b2  8908                 mov dword ptr [eax], ecx
// 006103b4  8b5504               mov edx, dword ptr [ebp + 4]
// 006103b7  5f                   pop edi
// 006103b8  5e                   pop esi
// 006103b9  895004               mov dword ptr [eax + 4], edx
// 006103bc  8b4d08               mov ecx, dword ptr [ebp + 8]
// 006103bf  5d                   pop ebp
// 006103c0  894808               mov dword ptr [eax + 8], ecx
// 006103c3  5b                   pop ebx
// 006103c4  59                   pop ecx
// 006103c5  c3                   ret 
// 006103c6  6a00                 push 0
// 006103c8  57                   push edi
// 006103c9  53                   push ebx
// 006103ca  e8a1fcffff           call 0x610070
// 006103cf  8bf0                 mov esi, eax
// 006103d1  83c40c               add esp, 0xc
// 006103d4  837e0800             cmp dword ptr [esi + 8], 0
// 006103d8  750f                 jne 0x6103e9
// 006103da  680c327c00           push 0x7c320c
// 006103df  57                   push edi
// 006103e0  53                   push ebx
// 006103e1  e84a6efbff           call 0x5c7230
// 006103e6  83c40c               add esp, 0xc
// 006103e9  837e0806             cmp dword ptr [esi + 8], 6
// 006103ed  742a                 je 0x610419
// 006103ef  8b442410             mov eax, dword ptr [esp + 0x10]
// 006103f3  83c001               add eax, 1
// 006103f6  83f864               cmp eax, 0x64
// 006103f9  8bfe                 mov edi, esi
// 006103fb  89442410             mov dword ptr [esp + 0x10], eax
// 006103ff  0f8c60ffffff         jl 0x610365
// 00610405  68f8317c00           push 0x7c31f8
// 0061040a  53                   push ebx
// 0061040b  e8f06bfbff           call 0x5c7000
// 00610410  83c408               add esp, 8
// 00610413  5f                   pop edi
// 00610414  5e                   pop esi
// 00610415  5d                   pop ebp
// 00610416  5b                   pop ebx
// 00610417  59                   pop ecx
// 00610418  c3                   ret 
// 00610419  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0061041d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00610421  56                   push esi
// 00610422  53                   push ebx
// 00610423  8bd7                 mov edx, edi
// 00610425  e8f6fdffff           call 0x610220
// 0061042a  83c408               add esp, 8
// 0061042d  5f                   pop edi
// 0061042e  5e                   pop esi
// 0061042f  5d                   pop ebp
// 00610430  5b                   pop ebx
// 00610431  59                   pop ecx
// 00610432  c3                   ret 
// library lua-5.1.4/lvm.c (function _luaV_gettable)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
