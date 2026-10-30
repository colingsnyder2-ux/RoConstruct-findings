// from server: 100% by auto
// roc 2009-06 006c3740  unit: lua_exception  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c3740
//
// 006c3740  83ec08               sub esp, 8
// 006c3743  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006c3747  53                   push ebx
// 006c3748  55                   push ebp
// 006c3749  56                   push esi
// 006c374a  8b742418             mov esi, dword ptr [esp + 0x18]
// 006c374e  0fb74634             movzx eax, word ptr [esi + 0x34]
// 006c3752  8a4e39               mov cl, byte ptr [esi + 0x39]
// 006c3755  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 006c3758  2b5e28               sub ebx, dword ptr [esi + 0x28]
// 006c375b  57                   push edi
// 006c375c  8b7e74               mov edi, dword ptr [esi + 0x74]
// 006c375f  89442414             mov dword ptr [esp + 0x14], eax
// 006c3763  8b442424             mov eax, dword ptr [esp + 0x24]
// 006c3767  884c241c             mov byte ptr [esp + 0x1c], cl
// 006c376b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006c376f  50                   push eax
// 006c3770  51                   push ecx
// 006c3771  56                   push esi
// 006c3772  897c241c             mov dword ptr [esp + 0x1c], edi
// 006c3776  895674               mov dword ptr [esi + 0x74], edx
// 006c3779  e812f4ffff           call 0x6c2b90
// 006c377e  8be8                 mov ebp, eax
// 006c3780  83c40c               add esp, 0xc
// 006c3783  85ed                 test ebp, ebp
// 006c3785  0f84a6000000         je 0x6c3831
// 006c378b  8b7e20               mov edi, dword ptr [esi + 0x20]
// 006c378e  037c2428             add edi, dword ptr [esp + 0x28]
// 006c3792  57                   push edi
// 006c3793  56                   push esi
// 006c3794  e8a7960200           call 0x6ece40
// 006c3799  57                   push edi
// 006c379a  55                   push ebp
// 006c379b  56                   push esi
// 006c379c  e8bff2ffff           call 0x6c2a60
// 006c37a1  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 006c37a4  668b542428           mov dx, word ptr [esp + 0x28]
// 006c37a9  8d0419               lea eax, [ecx + ebx]
// 006c37ac  66895634             mov word ptr [esi + 0x34], dx
// 006c37b0  894614               mov dword ptr [esi + 0x14], eax
// 006c37b3  8b10                 mov edx, dword ptr [eax]
// 006c37b5  89560c               mov dword ptr [esi + 0xc], edx
// 006c37b8  8b500c               mov edx, dword ptr [eax + 0xc]
// 006c37bb  895618               mov dword ptr [esi + 0x18], edx
// 006c37be  8a542430             mov dl, byte ptr [esp + 0x30]
// 006c37c2  83c414               add esp, 0x14
// 006c37c5  817e30204e0000       cmp dword ptr [esi + 0x30], 0x4e20
// 006c37cc  885639               mov byte ptr [esi + 0x39], dl
// 006c37cf  7e4f                 jle 0x6c3820
// 006c37d1  2bc1                 sub eax, ecx
// 006c37d3  8bc8                 mov ecx, eax
// 006c37d5  b8abaaaa2a           mov eax, 0x2aaaaaab
// 006c37da  f7e9                 imul ecx
// 006c37dc  c1fa02               sar edx, 2
// 006c37df  8bc2                 mov eax, edx
// 006c37e1  c1e81f               shr eax, 0x1f
// 006c37e4  8d4c0201             lea ecx, [edx + eax + 1]
// 006c37e8  81f9204e0000         cmp ecx, 0x4e20
// 006c37ee  7d1f                 jge 0x6c380f
// 006c37f0  68204e0000           push 0x4e20
// 006c37f5  56                   push esi
// 006c37f6  e845f5ffff           call 0x6c2d40
// 006c37fb  8b542418             mov edx, dword ptr [esp + 0x18]
// 006c37ff  83c408               add esp, 8
// 006c3802  5f                   pop edi
// 006c3803  895674               mov dword ptr [esi + 0x74], edx
// 006c3806  5e                   pop esi
// 006c3807  8bc5                 mov eax, ebp
// 006c3809  5d                   pop ebp
// 006c380a  5b                   pop ebx
// 006c380b  83c408               add esp, 8
// 006c380e  c3                   ret 
// 006c380f  8b442410             mov eax, dword ptr [esp + 0x10]
// 006c3813  5f                   pop edi
// 006c3814  894674               mov dword ptr [esi + 0x74], eax
// 006c3817  5e                   pop esi
// 006c3818  8bc5                 mov eax, ebp
// 006c381a  5d                   pop ebp
// 006c381b  5b                   pop ebx
// 006c381c  83c408               add esp, 8
// 006c381f  c3                   ret 
// 006c3820  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006c3824  5f                   pop edi
// 006c3825  894e74               mov dword ptr [esi + 0x74], ecx
// 006c3828  5e                   pop esi
// 006c3829  8bc5                 mov eax, ebp
// 006c382b  5d                   pop ebp
// 006c382c  5b                   pop ebx
// 006c382d  83c408               add esp, 8
// 006c3830  c3                   ret 
// 006c3831  897e74               mov dword ptr [esi + 0x74], edi
// 006c3834  5f                   pop edi
// 006c3835  5e                   pop esi
// 006c3836  5d                   pop ebp
// 006c3837  5b                   pop ebx
// 006c3838  83c408               add esp, 8
// 006c383b  c3                   ret 
// library lua-5.1.4/ldo.c (function _luaD_pcall)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
