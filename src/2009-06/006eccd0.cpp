// from server: 100% by auto
// roc 2009-06 006eccd0  unit: RBX::PartDropTool  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006eccd0
//
// 006eccd0  53                   push ebx
// 006eccd1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006eccd5  55                   push ebp
// 006eccd6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006eccda  56                   push esi
// 006eccdb  57                   push edi
// 006eccdc  8d3c9d14000000       lea edi, [ebx*4 + 0x14]
// 006ecce3  57                   push edi
// 006ecce4  6a00                 push 0
// 006ecce6  6a00                 push 0
// 006ecce8  55                   push ebp
// 006ecce9  e8720a0000           call 0x6ed760
// 006eccee  8bf0                 mov esi, eax
// 006eccf0  6a06                 push 6
// 006eccf2  56                   push esi
// 006eccf3  55                   push ebp
// 006eccf4  e817d0ffff           call 0x6e9d10
// 006eccf9  8b442438             mov eax, dword ptr [esp + 0x38]
// 006eccfd  83c41c               add esp, 0x1c
// 006ecd00  c6460600             mov byte ptr [esi + 6], 0
// 006ecd04  89460c               mov dword ptr [esi + 0xc], eax
// 006ecd07  885e07               mov byte ptr [esi + 7], bl
// 006ecd0a  85db                 test ebx, ebx
// 006ecd0c  7411                 je 0x6ecd1f
// 006ecd0e  8d0437               lea eax, [edi + esi]
// 006ecd11  4b                   dec ebx
// 006ecd12  83e804               sub eax, 4
// 006ecd15  c70000000000         mov dword ptr [eax], 0
// 006ecd1b  85db                 test ebx, ebx
// 006ecd1d  75f2                 jne 0x6ecd11
// 006ecd1f  5f                   pop edi
// 006ecd20  8bc6                 mov eax, esi
// 006ecd22  5e                   pop esi
// 006ecd23  5d                   pop ebp
// 006ecd24  5b                   pop ebx
// 006ecd25  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_newLclosure)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
