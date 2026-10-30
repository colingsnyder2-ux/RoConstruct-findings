// roc 2007-03 00522680  unit: seg_00520000  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00522680
//
// 00522680  53                   push ebx
// 00522681  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00522685  55                   push ebp
// 00522686  56                   push esi
// 00522687  8bb38c010000         mov esi, dword ptr [ebx + 0x18c]
// 0052268d  837e1800             cmp dword ptr [esi + 0x18], 0
// 00522691  57                   push edi
// 00522692  751d                 jne 0x5226b1
// 00522694  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00522697  8b5614               mov edx, dword ptr [esi + 0x14]
// 0052269a  8b4304               mov eax, dword ptr [ebx + 4]
// 0052269d  6a00                 push 0
// 0052269f  51                   push ecx
// 005226a0  8b4e08               mov ecx, dword ptr [esi + 8]
// 005226a3  52                   push edx
// 005226a4  8b501c               mov edx, dword ptr [eax + 0x1c]
// 005226a7  51                   push ecx
// 005226a8  53                   push ebx
// 005226a9  ffd2                 call edx
// 005226ab  83c414               add esp, 0x14
// 005226ae  89460c               mov dword ptr [esi + 0xc], eax
// 005226b1  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 005226b5  8b7e10               mov edi, dword ptr [esi + 0x10]
// 005226b8  8b4d00               mov ecx, dword ptr [ebp]
// 005226bb  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005226bf  2b7e18               sub edi, dword ptr [esi + 0x18]
// 005226c2  2bc1                 sub eax, ecx
// 005226c4  3bf8                 cmp edi, eax
// 005226c6  7602                 jbe 0x5226ca
// 005226c8  8bf8                 mov edi, eax
// 005226ca  8b4360               mov eax, dword ptr [ebx + 0x60]
// 005226cd  2b4614               sub eax, dword ptr [esi + 0x14]
// 005226d0  3bf8                 cmp edi, eax
// 005226d2  7602                 jbe 0x5226d6
// 005226d4  8bf8                 mov edi, eax
// 005226d6  8b542424             mov edx, dword ptr [esp + 0x24]
// 005226da  8b83a8010000         mov eax, dword ptr [ebx + 0x1a8]
// 005226e0  8b4004               mov eax, dword ptr [eax + 4]
// 005226e3  8d0c8a               lea ecx, [edx + ecx*4]
// 005226e6  8b5618               mov edx, dword ptr [esi + 0x18]
// 005226e9  57                   push edi
// 005226ea  51                   push ecx
// 005226eb  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005226ee  8d1491               lea edx, [ecx + edx*4]
// 005226f1  52                   push edx
// 005226f2  53                   push ebx
// 005226f3  ffd0                 call eax
// 005226f5  017d00               add dword ptr [ebp], edi
// 005226f8  017e18               add dword ptr [esi + 0x18], edi
// 005226fb  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005226fe  8b4610               mov eax, dword ptr [esi + 0x10]
// 00522701  83c410               add esp, 0x10
// 00522704  3bc8                 cmp ecx, eax
// 00522706  720a                 jb 0x522712
// 00522708  014614               add dword ptr [esi + 0x14], eax
// 0052270b  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00522712  5f                   pop edi
// 00522713  5e                   pop esi
// 00522714  5d                   pop ebp
// 00522715  5b                   pop ebx
// 00522716  c3                   ret 
// library jpeg-6b/jdpostct.c (function _post_process_2pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
