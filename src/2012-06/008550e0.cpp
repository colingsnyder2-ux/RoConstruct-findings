// roc 2012-06 008550e0  unit: lua_exception  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008550e0
//
// 008550e0  83ec08               sub esp, 8
// 008550e3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008550e7  53                   push ebx
// 008550e8  55                   push ebp
// 008550e9  56                   push esi
// 008550ea  8b742418             mov esi, dword ptr [esp + 0x18]
// 008550ee  0fb74634             movzx eax, word ptr [esi + 0x34]
// 008550f2  8a4e39               mov cl, byte ptr [esi + 0x39]
// 008550f5  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 008550f8  2b5e28               sub ebx, dword ptr [esi + 0x28]
// 008550fb  57                   push edi
// 008550fc  8b7e74               mov edi, dword ptr [esi + 0x74]
// 008550ff  89442414             mov dword ptr [esp + 0x14], eax
// 00855103  8b442424             mov eax, dword ptr [esp + 0x24]
// 00855107  884c241c             mov byte ptr [esp + 0x1c], cl
// 0085510b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0085510f  50                   push eax
// 00855110  51                   push ecx
// 00855111  56                   push esi
// 00855112  897c241c             mov dword ptr [esp + 0x1c], edi
// 00855116  895674               mov dword ptr [esi + 0x74], edx
// 00855119  e812f4ffff           call 0x854530
// 0085511e  8be8                 mov ebp, eax
// 00855120  83c40c               add esp, 0xc
// 00855123  85ed                 test ebp, ebp
// 00855125  0f84a6000000         je 0x8551d1
// 0085512b  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0085512e  037c2428             add edi, dword ptr [esp + 0x28]
// 00855132  57                   push edi
// 00855133  56                   push esi
// 00855134  e807150e00           call 0x936640
// 00855139  57                   push edi
// 0085513a  55                   push ebp
// 0085513b  56                   push esi
// 0085513c  e8cff2ffff           call 0x854410
// 00855141  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00855144  668b542428           mov dx, word ptr [esp + 0x28]
// 00855149  8d0419               lea eax, [ecx + ebx]
// 0085514c  66895634             mov word ptr [esi + 0x34], dx
// 00855150  894614               mov dword ptr [esi + 0x14], eax
// 00855153  8b10                 mov edx, dword ptr [eax]
// 00855155  89560c               mov dword ptr [esi + 0xc], edx
// 00855158  8b500c               mov edx, dword ptr [eax + 0xc]
// 0085515b  895618               mov dword ptr [esi + 0x18], edx
// 0085515e  8a542430             mov dl, byte ptr [esp + 0x30]
// 00855162  83c414               add esp, 0x14
// 00855165  817e30204e0000       cmp dword ptr [esi + 0x30], 0x4e20
// 0085516c  885639               mov byte ptr [esi + 0x39], dl
// 0085516f  7e4f                 jle 0x8551c0
// 00855171  2bc1                 sub eax, ecx
// 00855173  8bc8                 mov ecx, eax
// 00855175  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0085517a  f7e9                 imul ecx
// 0085517c  c1fa02               sar edx, 2
// 0085517f  8bc2                 mov eax, edx
// 00855181  c1e81f               shr eax, 0x1f
// 00855184  8d4c0201             lea ecx, [edx + eax + 1]
// 00855188  81f9204e0000         cmp ecx, 0x4e20
// 0085518e  7d1f                 jge 0x8551af
// 00855190  68204e0000           push 0x4e20
// 00855195  56                   push esi
// 00855196  e845f5ffff           call 0x8546e0
// 0085519b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0085519f  83c408               add esp, 8
// 008551a2  5f                   pop edi
// 008551a3  895674               mov dword ptr [esi + 0x74], edx
// 008551a6  5e                   pop esi
// 008551a7  8bc5                 mov eax, ebp
// 008551a9  5d                   pop ebp
// 008551aa  5b                   pop ebx
// 008551ab  83c408               add esp, 8
// 008551ae  c3                   ret 
// 008551af  8b442410             mov eax, dword ptr [esp + 0x10]
// 008551b3  5f                   pop edi
// 008551b4  894674               mov dword ptr [esi + 0x74], eax
// 008551b7  5e                   pop esi
// 008551b8  8bc5                 mov eax, ebp
// 008551ba  5d                   pop ebp
// 008551bb  5b                   pop ebx
// 008551bc  83c408               add esp, 8
// 008551bf  c3                   ret 
// 008551c0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008551c4  5f                   pop edi
// 008551c5  894e74               mov dword ptr [esi + 0x74], ecx
// 008551c8  5e                   pop esi
// 008551c9  8bc5                 mov eax, ebp
// 008551cb  5d                   pop ebp
// 008551cc  5b                   pop ebx
// 008551cd  83c408               add esp, 8
// 008551d0  c3                   ret 
// 008551d1  897e74               mov dword ptr [esi + 0x74], edi
// 008551d4  5f                   pop edi
// 008551d5  5e                   pop esi
// 008551d6  5d                   pop ebp
// 008551d7  5b                   pop ebx
// 008551d8  83c408               add esp, 8
// 008551db  c3                   ret 
// library lua-5.1.4/ldo.c (function _luaD_pcall)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
