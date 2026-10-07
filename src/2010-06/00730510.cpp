// roc 2010-06 00730510  unit: lua_exception  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00730510
//
// 00730510  83ec08               sub esp, 8
// 00730513  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00730517  53                   push ebx
// 00730518  55                   push ebp
// 00730519  56                   push esi
// 0073051a  8b742418             mov esi, dword ptr [esp + 0x18]
// 0073051e  0fb74634             movzx eax, word ptr [esi + 0x34]
// 00730522  8a4e39               mov cl, byte ptr [esi + 0x39]
// 00730525  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 00730528  2b5e28               sub ebx, dword ptr [esi + 0x28]
// 0073052b  57                   push edi
// 0073052c  8b7e74               mov edi, dword ptr [esi + 0x74]
// 0073052f  89442414             mov dword ptr [esp + 0x14], eax
// 00730533  8b442424             mov eax, dword ptr [esp + 0x24]
// 00730537  884c241c             mov byte ptr [esp + 0x1c], cl
// 0073053b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0073053f  50                   push eax
// 00730540  51                   push ecx
// 00730541  56                   push esi
// 00730542  897c241c             mov dword ptr [esp + 0x1c], edi
// 00730546  895674               mov dword ptr [esi + 0x74], edx
// 00730549  e812f4ffff           call 0x72f960
// 0073054e  8be8                 mov ebp, eax
// 00730550  83c40c               add esp, 0xc
// 00730553  85ed                 test ebp, ebp
// 00730555  0f84a6000000         je 0x730601
// 0073055b  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0073055e  037c2428             add edi, dword ptr [esp + 0x28]
// 00730562  57                   push edi
// 00730563  56                   push esi
// 00730564  e877db0400           call 0x77e0e0
// 00730569  57                   push edi
// 0073056a  55                   push ebp
// 0073056b  56                   push esi
// 0073056c  e8bff2ffff           call 0x72f830
// 00730571  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00730574  668b542428           mov dx, word ptr [esp + 0x28]
// 00730579  8d0419               lea eax, [ecx + ebx]
// 0073057c  66895634             mov word ptr [esi + 0x34], dx
// 00730580  894614               mov dword ptr [esi + 0x14], eax
// 00730583  8b10                 mov edx, dword ptr [eax]
// 00730585  89560c               mov dword ptr [esi + 0xc], edx
// 00730588  8b500c               mov edx, dword ptr [eax + 0xc]
// 0073058b  895618               mov dword ptr [esi + 0x18], edx
// 0073058e  8a542430             mov dl, byte ptr [esp + 0x30]
// 00730592  83c414               add esp, 0x14
// 00730595  817e30204e0000       cmp dword ptr [esi + 0x30], 0x4e20
// 0073059c  885639               mov byte ptr [esi + 0x39], dl
// 0073059f  7e4f                 jle 0x7305f0
// 007305a1  2bc1                 sub eax, ecx
// 007305a3  8bc8                 mov ecx, eax
// 007305a5  b8abaaaa2a           mov eax, 0x2aaaaaab
// 007305aa  f7e9                 imul ecx
// 007305ac  c1fa02               sar edx, 2
// 007305af  8bc2                 mov eax, edx
// 007305b1  c1e81f               shr eax, 0x1f
// 007305b4  8d4c0201             lea ecx, [edx + eax + 1]
// 007305b8  81f9204e0000         cmp ecx, 0x4e20
// 007305be  7d1f                 jge 0x7305df
// 007305c0  68204e0000           push 0x4e20
// 007305c5  56                   push esi
// 007305c6  e845f5ffff           call 0x72fb10
// 007305cb  8b542418             mov edx, dword ptr [esp + 0x18]
// 007305cf  83c408               add esp, 8
// 007305d2  5f                   pop edi
// 007305d3  895674               mov dword ptr [esi + 0x74], edx
// 007305d6  5e                   pop esi
// 007305d7  8bc5                 mov eax, ebp
// 007305d9  5d                   pop ebp
// 007305da  5b                   pop ebx
// 007305db  83c408               add esp, 8
// 007305de  c3                   ret 
// 007305df  8b442410             mov eax, dword ptr [esp + 0x10]
// 007305e3  5f                   pop edi
// 007305e4  894674               mov dword ptr [esi + 0x74], eax
// 007305e7  5e                   pop esi
// 007305e8  8bc5                 mov eax, ebp
// 007305ea  5d                   pop ebp
// 007305eb  5b                   pop ebx
// 007305ec  83c408               add esp, 8
// 007305ef  c3                   ret 
// 007305f0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007305f4  5f                   pop edi
// 007305f5  894e74               mov dword ptr [esi + 0x74], ecx
// 007305f8  5e                   pop esi
// 007305f9  8bc5                 mov eax, ebp
// 007305fb  5d                   pop ebp
// 007305fc  5b                   pop ebx
// 007305fd  83c408               add esp, 8
// 00730600  c3                   ret 
// 00730601  897e74               mov dword ptr [esi + 0x74], edi
// 00730604  5f                   pop edi
// 00730605  5e                   pop esi
// 00730606  5d                   pop ebp
// 00730607  5b                   pop ebx
// 00730608  83c408               add esp, 8
// 0073060b  c3                   ret 
// library lua-5.1.4/ldo.c (function _luaD_pcall)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
