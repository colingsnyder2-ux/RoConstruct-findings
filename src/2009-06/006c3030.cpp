// roc 2009-06 006c3030  unit: lua_exception  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c3030
//
// 006c3030  8b442408             mov eax, dword ptr [esp + 8]
// 006c3034  53                   push ebx
// 006c3035  56                   push esi
// 006c3036  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c303a  f6463802             test byte ptr [esi + 0x38], 2
// 006c303e  57                   push edi
// 006c303f  7405                 je 0x6c3046
// 006c3041  e88affffff           call 0x6c2fd0
// 006c3046  8b5614               mov edx, dword ptr [esi + 0x14]
// 006c3049  8d7ae8               lea edi, [edx - 0x18]
// 006c304c  897e14               mov dword ptr [esi + 0x14], edi
// 006c304f  8b5a10               mov ebx, dword ptr [edx + 0x10]
// 006c3052  8b4a04               mov ecx, dword ptr [edx + 4]
// 006c3055  8b3f                 mov edi, dword ptr [edi]
// 006c3057  897e0c               mov dword ptr [esi + 0xc], edi
// 006c305a  8b52f4               mov edx, dword ptr [edx - 0xc]
// 006c305d  895c2410             mov dword ptr [esp + 0x10], ebx
// 006c3061  895618               mov dword ptr [esi + 0x18], edx
// 006c3064  85db                 test ebx, ebx
// 006c3066  742d                 je 0x6c3095
// 006c3068  55                   push ebp
// 006c3069  8da42400000000       lea esp, [esp]
// 006c3070  3b4608               cmp eax, dword ptr [esi + 8]
// 006c3073  731f                 jae 0x6c3094
// 006c3075  8bd0                 mov edx, eax
// 006c3077  8b2a                 mov ebp, dword ptr [edx]
// 006c3079  8bf9                 mov edi, ecx
// 006c307b  892f                 mov dword ptr [edi], ebp
// 006c307d  8b6a04               mov ebp, dword ptr [edx + 4]
// 006c3080  896f04               mov dword ptr [edi + 4], ebp
// 006c3083  8b5208               mov edx, dword ptr [edx + 8]
// 006c3086  83c010               add eax, 0x10
// 006c3089  83c110               add ecx, 0x10
// 006c308c  83eb01               sub ebx, 1
// 006c308f  895708               mov dword ptr [edi + 8], edx
// 006c3092  75dc                 jne 0x6c3070
// 006c3094  5d                   pop ebp
// 006c3095  33c0                 xor eax, eax
// 006c3097  3bd8                 cmp ebx, eax
// 006c3099  7e10                 jle 0x6c30ab
// 006c309b  eb03                 jmp 0x6c30a0
// 006c309d  8d4900               lea ecx, [ecx]
// 006c30a0  4b                   dec ebx
// 006c30a1  894108               mov dword ptr [ecx + 8], eax
// 006c30a4  83c110               add ecx, 0x10
// 006c30a7  3bd8                 cmp ebx, eax
// 006c30a9  7ff5                 jg 0x6c30a0
// 006c30ab  8b442410             mov eax, dword ptr [esp + 0x10]
// 006c30af  5f                   pop edi
// 006c30b0  894e08               mov dword ptr [esi + 8], ecx
// 006c30b3  5e                   pop esi
// 006c30b4  40                   inc eax
// 006c30b5  5b                   pop ebx
// 006c30b6  c3                   ret 
// library lua-5.1.4/ldo.c (function _luaD_poscall)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
