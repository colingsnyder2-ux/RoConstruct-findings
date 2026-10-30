// from server: 100% by auto
// roc 2011-06 0077e540  unit: lua_exception  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077e540
//
// 0077e540  8b442408             mov eax, dword ptr [esp + 8]
// 0077e544  53                   push ebx
// 0077e545  56                   push esi
// 0077e546  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0077e54a  f6463802             test byte ptr [esi + 0x38], 2
// 0077e54e  57                   push edi
// 0077e54f  7405                 je 0x77e556
// 0077e551  e88affffff           call 0x77e4e0
// 0077e556  8b5614               mov edx, dword ptr [esi + 0x14]
// 0077e559  8d7ae8               lea edi, [edx - 0x18]
// 0077e55c  897e14               mov dword ptr [esi + 0x14], edi
// 0077e55f  8b5a10               mov ebx, dword ptr [edx + 0x10]
// 0077e562  8b4a04               mov ecx, dword ptr [edx + 4]
// 0077e565  8b3f                 mov edi, dword ptr [edi]
// 0077e567  897e0c               mov dword ptr [esi + 0xc], edi
// 0077e56a  8b52f4               mov edx, dword ptr [edx - 0xc]
// 0077e56d  895c2410             mov dword ptr [esp + 0x10], ebx
// 0077e571  895618               mov dword ptr [esi + 0x18], edx
// 0077e574  85db                 test ebx, ebx
// 0077e576  742d                 je 0x77e5a5
// 0077e578  55                   push ebp
// 0077e579  8da42400000000       lea esp, [esp]
// 0077e580  3b4608               cmp eax, dword ptr [esi + 8]
// 0077e583  731f                 jae 0x77e5a4
// 0077e585  8bd0                 mov edx, eax
// 0077e587  8b2a                 mov ebp, dword ptr [edx]
// 0077e589  8bf9                 mov edi, ecx
// 0077e58b  892f                 mov dword ptr [edi], ebp
// 0077e58d  8b6a04               mov ebp, dword ptr [edx + 4]
// 0077e590  896f04               mov dword ptr [edi + 4], ebp
// 0077e593  8b5208               mov edx, dword ptr [edx + 8]
// 0077e596  83c010               add eax, 0x10
// 0077e599  83c110               add ecx, 0x10
// 0077e59c  83eb01               sub ebx, 1
// 0077e59f  895708               mov dword ptr [edi + 8], edx
// 0077e5a2  75dc                 jne 0x77e580
// 0077e5a4  5d                   pop ebp
// 0077e5a5  33c0                 xor eax, eax
// 0077e5a7  3bd8                 cmp ebx, eax
// 0077e5a9  7e10                 jle 0x77e5bb
// 0077e5ab  eb03                 jmp 0x77e5b0
// 0077e5ad  8d4900               lea ecx, [ecx]
// 0077e5b0  4b                   dec ebx
// 0077e5b1  894108               mov dword ptr [ecx + 8], eax
// 0077e5b4  83c110               add ecx, 0x10
// 0077e5b7  3bd8                 cmp ebx, eax
// 0077e5b9  7ff5                 jg 0x77e5b0
// 0077e5bb  8b442410             mov eax, dword ptr [esp + 0x10]
// 0077e5bf  5f                   pop edi
// 0077e5c0  894e08               mov dword ptr [esi + 8], ecx
// 0077e5c3  5e                   pop esi
// 0077e5c4  40                   inc eax
// 0077e5c5  5b                   pop ebx
// 0077e5c6  c3                   ret 
// library lua-5.1.4/ldo.c (function _luaD_poscall)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
