// from server: 100% by auto
// roc 2012-06 008549d0  unit: lua_exception  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008549d0
//
// 008549d0  8b442408             mov eax, dword ptr [esp + 8]
// 008549d4  53                   push ebx
// 008549d5  56                   push esi
// 008549d6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008549da  f6463802             test byte ptr [esi + 0x38], 2
// 008549de  57                   push edi
// 008549df  7405                 je 0x8549e6
// 008549e1  e88affffff           call 0x854970
// 008549e6  8b5614               mov edx, dword ptr [esi + 0x14]
// 008549e9  8d7ae8               lea edi, [edx - 0x18]
// 008549ec  897e14               mov dword ptr [esi + 0x14], edi
// 008549ef  8b5a10               mov ebx, dword ptr [edx + 0x10]
// 008549f2  8b4a04               mov ecx, dword ptr [edx + 4]
// 008549f5  8b3f                 mov edi, dword ptr [edi]
// 008549f7  897e0c               mov dword ptr [esi + 0xc], edi
// 008549fa  8b52f4               mov edx, dword ptr [edx - 0xc]
// 008549fd  895c2410             mov dword ptr [esp + 0x10], ebx
// 00854a01  895618               mov dword ptr [esi + 0x18], edx
// 00854a04  85db                 test ebx, ebx
// 00854a06  742d                 je 0x854a35
// 00854a08  55                   push ebp
// 00854a09  8da42400000000       lea esp, [esp]
// 00854a10  3b4608               cmp eax, dword ptr [esi + 8]
// 00854a13  731f                 jae 0x854a34
// 00854a15  8bd0                 mov edx, eax
// 00854a17  8b2a                 mov ebp, dword ptr [edx]
// 00854a19  8bf9                 mov edi, ecx
// 00854a1b  892f                 mov dword ptr [edi], ebp
// 00854a1d  8b6a04               mov ebp, dword ptr [edx + 4]
// 00854a20  896f04               mov dword ptr [edi + 4], ebp
// 00854a23  8b5208               mov edx, dword ptr [edx + 8]
// 00854a26  83c010               add eax, 0x10
// 00854a29  83c110               add ecx, 0x10
// 00854a2c  83eb01               sub ebx, 1
// 00854a2f  895708               mov dword ptr [edi + 8], edx
// 00854a32  75dc                 jne 0x854a10
// 00854a34  5d                   pop ebp
// 00854a35  33c0                 xor eax, eax
// 00854a37  3bd8                 cmp ebx, eax
// 00854a39  7e10                 jle 0x854a4b
// 00854a3b  eb03                 jmp 0x854a40
// 00854a3d  8d4900               lea ecx, [ecx]
// 00854a40  4b                   dec ebx
// 00854a41  894108               mov dword ptr [ecx + 8], eax
// 00854a44  83c110               add ecx, 0x10
// 00854a47  3bd8                 cmp ebx, eax
// 00854a49  7ff5                 jg 0x854a40
// 00854a4b  8b442410             mov eax, dword ptr [esp + 0x10]
// 00854a4f  5f                   pop edi
// 00854a50  894e08               mov dword ptr [esi + 8], ecx
// 00854a53  5e                   pop esi
// 00854a54  40                   inc eax
// 00854a55  5b                   pop ebx
// 00854a56  c3                   ret 
// library lua-5.1.4/ldo.c (function _luaD_poscall)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
