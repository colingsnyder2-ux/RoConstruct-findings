// roc 2011-06 0077ec50  unit: lua_exception  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077ec50
//
// 0077ec50  83ec08               sub esp, 8
// 0077ec53  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0077ec57  53                   push ebx
// 0077ec58  55                   push ebp
// 0077ec59  56                   push esi
// 0077ec5a  8b742418             mov esi, dword ptr [esp + 0x18]
// 0077ec5e  0fb74634             movzx eax, word ptr [esi + 0x34]
// 0077ec62  8a4e39               mov cl, byte ptr [esi + 0x39]
// 0077ec65  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 0077ec68  2b5e28               sub ebx, dword ptr [esi + 0x28]
// 0077ec6b  57                   push edi
// 0077ec6c  8b7e74               mov edi, dword ptr [esi + 0x74]
// 0077ec6f  89442414             mov dword ptr [esp + 0x14], eax
// 0077ec73  8b442424             mov eax, dword ptr [esp + 0x24]
// 0077ec77  884c241c             mov byte ptr [esp + 0x1c], cl
// 0077ec7b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0077ec7f  50                   push eax
// 0077ec80  51                   push ecx
// 0077ec81  56                   push esi
// 0077ec82  897c241c             mov dword ptr [esp + 0x1c], edi
// 0077ec86  895674               mov dword ptr [esi + 0x74], edx
// 0077ec89  e812f4ffff           call 0x77e0a0
// 0077ec8e  8be8                 mov ebp, eax
// 0077ec90  83c40c               add esp, 0xc
// 0077ec93  85ed                 test ebp, ebp
// 0077ec95  0f84a6000000         je 0x77ed41
// 0077ec9b  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0077ec9e  037c2428             add edi, dword ptr [esp + 0x28]
// 0077eca2  57                   push edi
// 0077eca3  56                   push esi
// 0077eca4  e877b80500           call 0x7da520
// 0077eca9  57                   push edi
// 0077ecaa  55                   push ebp
// 0077ecab  56                   push esi
// 0077ecac  e8cff2ffff           call 0x77df80
// 0077ecb1  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0077ecb4  668b542428           mov dx, word ptr [esp + 0x28]
// 0077ecb9  8d0419               lea eax, [ecx + ebx]
// 0077ecbc  66895634             mov word ptr [esi + 0x34], dx
// 0077ecc0  894614               mov dword ptr [esi + 0x14], eax
// 0077ecc3  8b10                 mov edx, dword ptr [eax]
// 0077ecc5  89560c               mov dword ptr [esi + 0xc], edx
// 0077ecc8  8b500c               mov edx, dword ptr [eax + 0xc]
// 0077eccb  895618               mov dword ptr [esi + 0x18], edx
// 0077ecce  8a542430             mov dl, byte ptr [esp + 0x30]
// 0077ecd2  83c414               add esp, 0x14
// 0077ecd5  817e30204e0000       cmp dword ptr [esi + 0x30], 0x4e20
// 0077ecdc  885639               mov byte ptr [esi + 0x39], dl
// 0077ecdf  7e4f                 jle 0x77ed30
// 0077ece1  2bc1                 sub eax, ecx
// 0077ece3  8bc8                 mov ecx, eax
// 0077ece5  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0077ecea  f7e9                 imul ecx
// 0077ecec  c1fa02               sar edx, 2
// 0077ecef  8bc2                 mov eax, edx
// 0077ecf1  c1e81f               shr eax, 0x1f
// 0077ecf4  8d4c0201             lea ecx, [edx + eax + 1]
// 0077ecf8  81f9204e0000         cmp ecx, 0x4e20
// 0077ecfe  7d1f                 jge 0x77ed1f
// 0077ed00  68204e0000           push 0x4e20
// 0077ed05  56                   push esi
// 0077ed06  e845f5ffff           call 0x77e250
// 0077ed0b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0077ed0f  83c408               add esp, 8
// 0077ed12  5f                   pop edi
// 0077ed13  895674               mov dword ptr [esi + 0x74], edx
// 0077ed16  5e                   pop esi
// 0077ed17  8bc5                 mov eax, ebp
// 0077ed19  5d                   pop ebp
// 0077ed1a  5b                   pop ebx
// 0077ed1b  83c408               add esp, 8
// 0077ed1e  c3                   ret 
// 0077ed1f  8b442410             mov eax, dword ptr [esp + 0x10]
// 0077ed23  5f                   pop edi
// 0077ed24  894674               mov dword ptr [esi + 0x74], eax
// 0077ed27  5e                   pop esi
// 0077ed28  8bc5                 mov eax, ebp
// 0077ed2a  5d                   pop ebp
// 0077ed2b  5b                   pop ebx
// 0077ed2c  83c408               add esp, 8
// 0077ed2f  c3                   ret 
// 0077ed30  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0077ed34  5f                   pop edi
// 0077ed35  894e74               mov dword ptr [esi + 0x74], ecx
// 0077ed38  5e                   pop esi
// 0077ed39  8bc5                 mov eax, ebp
// 0077ed3b  5d                   pop ebp
// 0077ed3c  5b                   pop ebx
// 0077ed3d  83c408               add esp, 8
// 0077ed40  c3                   ret 
// 0077ed41  897e74               mov dword ptr [esi + 0x74], edi
// 0077ed44  5f                   pop edi
// 0077ed45  5e                   pop esi
// 0077ed46  5d                   pop ebp
// 0077ed47  5b                   pop ebx
// 0077ed48  83c408               add esp, 8
// 0077ed4b  c3                   ret 
// library lua-5.1.4/ldo.c (function _luaD_pcall)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
