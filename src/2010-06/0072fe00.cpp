// from server: 100% by auto
// roc 2010-06 0072fe00  unit: lua_exception  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072fe00
//
// 0072fe00  8b442408             mov eax, dword ptr [esp + 8]
// 0072fe04  53                   push ebx
// 0072fe05  56                   push esi
// 0072fe06  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0072fe0a  f6463802             test byte ptr [esi + 0x38], 2
// 0072fe0e  57                   push edi
// 0072fe0f  7405                 je 0x72fe16
// 0072fe11  e88affffff           call 0x72fda0
// 0072fe16  8b5614               mov edx, dword ptr [esi + 0x14]
// 0072fe19  8d7ae8               lea edi, [edx - 0x18]
// 0072fe1c  897e14               mov dword ptr [esi + 0x14], edi
// 0072fe1f  8b5a10               mov ebx, dword ptr [edx + 0x10]
// 0072fe22  8b4a04               mov ecx, dword ptr [edx + 4]
// 0072fe25  8b3f                 mov edi, dword ptr [edi]
// 0072fe27  897e0c               mov dword ptr [esi + 0xc], edi
// 0072fe2a  8b52f4               mov edx, dword ptr [edx - 0xc]
// 0072fe2d  895c2410             mov dword ptr [esp + 0x10], ebx
// 0072fe31  895618               mov dword ptr [esi + 0x18], edx
// 0072fe34  85db                 test ebx, ebx
// 0072fe36  742d                 je 0x72fe65
// 0072fe38  55                   push ebp
// 0072fe39  8da42400000000       lea esp, [esp]
// 0072fe40  3b4608               cmp eax, dword ptr [esi + 8]
// 0072fe43  731f                 jae 0x72fe64
// 0072fe45  8bd0                 mov edx, eax
// 0072fe47  8b2a                 mov ebp, dword ptr [edx]
// 0072fe49  8bf9                 mov edi, ecx
// 0072fe4b  892f                 mov dword ptr [edi], ebp
// 0072fe4d  8b6a04               mov ebp, dword ptr [edx + 4]
// 0072fe50  896f04               mov dword ptr [edi + 4], ebp
// 0072fe53  8b5208               mov edx, dword ptr [edx + 8]
// 0072fe56  83c010               add eax, 0x10
// 0072fe59  83c110               add ecx, 0x10
// 0072fe5c  83eb01               sub ebx, 1
// 0072fe5f  895708               mov dword ptr [edi + 8], edx
// 0072fe62  75dc                 jne 0x72fe40
// 0072fe64  5d                   pop ebp
// 0072fe65  33c0                 xor eax, eax
// 0072fe67  3bd8                 cmp ebx, eax
// 0072fe69  7e10                 jle 0x72fe7b
// 0072fe6b  eb03                 jmp 0x72fe70
// 0072fe6d  8d4900               lea ecx, [ecx]
// 0072fe70  4b                   dec ebx
// 0072fe71  894108               mov dword ptr [ecx + 8], eax
// 0072fe74  83c110               add ecx, 0x10
// 0072fe77  3bd8                 cmp ebx, eax
// 0072fe79  7ff5                 jg 0x72fe70
// 0072fe7b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0072fe7f  5f                   pop edi
// 0072fe80  894e08               mov dword ptr [esi + 8], ecx
// 0072fe83  5e                   pop esi
// 0072fe84  40                   inc eax
// 0072fe85  5b                   pop ebx
// 0072fe86  c3                   ret 
// library lua-5.1.4/ldo.c (function _luaD_poscall)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
