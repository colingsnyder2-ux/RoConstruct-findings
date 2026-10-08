// from server: 100% by auto
// roc 2009-06 006c3610  unit: lua_exception  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c3610
//
// 006c3610  56                   push esi
// 006c3611  8b742408             mov esi, dword ptr [esp + 8]
// 006c3615  807e0600             cmp byte ptr [esi + 6], 0
// 006c3619  8b4614               mov eax, dword ptr [esi + 0x14]
// 006c361c  7519                 jne 0x6c3637
// 006c361e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006c3622  6aff                 push -1
// 006c3624  83c0f0               add eax, -0x10
// 006c3627  50                   push eax
// 006c3628  56                   push esi
// 006c3629  e8a2fdffff           call 0x6c33d0
// 006c362e  83c40c               add esp, 0xc
// 006c3631  85c0                 test eax, eax
// 006c3633  7554                 jne 0x6c3689
// 006c3635  eb31                 jmp 0x6c3668
// 006c3637  c6460600             mov byte ptr [esi + 6], 0
// 006c363b  8b4804               mov ecx, dword ptr [eax + 4]
// 006c363e  8b11                 mov edx, dword ptr [ecx]
// 006c3640  807a0600             cmp byte ptr [edx + 6], 0
// 006c3644  741d                 je 0x6c3663
// 006c3646  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006c364a  50                   push eax
// 006c364b  56                   push esi
// 006c364c  e8dff9ffff           call 0x6c3030
// 006c3651  83c408               add esp, 8
// 006c3654  85c0                 test eax, eax
// 006c3656  7410                 je 0x6c3668
// 006c3658  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006c365b  8b5108               mov edx, dword ptr [ecx + 8]
// 006c365e  895608               mov dword ptr [esi + 8], edx
// 006c3661  eb05                 jmp 0x6c3668
// 006c3663  8b00                 mov eax, dword ptr [eax]
// 006c3665  89460c               mov dword ptr [esi + 0xc], eax
// 006c3668  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006c366b  2b4e28               sub ecx, dword ptr [esi + 0x28]
// 006c366e  b8abaaaa2a           mov eax, 0x2aaaaaab
// 006c3673  f7e9                 imul ecx
// 006c3675  c1fa02               sar edx, 2
// 006c3678  8bca                 mov ecx, edx
// 006c367a  c1e91f               shr ecx, 0x1f
// 006c367d  03ca                 add ecx, edx
// 006c367f  51                   push ecx
// 006c3680  56                   push esi
// 006c3681  e87a740200           call 0x6eab00
// 006c3686  83c408               add esp, 8
// 006c3689  5e                   pop esi
// 006c368a  c3                   ret 
// library lua-5.1.4/ldo.c (function _resume)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
