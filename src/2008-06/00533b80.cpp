// roc 2008-06 00533b80  unit: seg_00530000  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00533b80
//
// 00533b80  53                   push ebx
// 00533b81  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00533b85  55                   push ebp
// 00533b86  56                   push esi
// 00533b87  8bb38c010000         mov esi, dword ptr [ebx + 0x18c]
// 00533b8d  837e1800             cmp dword ptr [esi + 0x18], 0
// 00533b91  57                   push edi
// 00533b92  751d                 jne 0x533bb1
// 00533b94  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00533b97  8b5614               mov edx, dword ptr [esi + 0x14]
// 00533b9a  8b4304               mov eax, dword ptr [ebx + 4]
// 00533b9d  6a00                 push 0
// 00533b9f  51                   push ecx
// 00533ba0  8b4e08               mov ecx, dword ptr [esi + 8]
// 00533ba3  52                   push edx
// 00533ba4  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00533ba7  51                   push ecx
// 00533ba8  53                   push ebx
// 00533ba9  ffd2                 call edx
// 00533bab  83c414               add esp, 0x14
// 00533bae  89460c               mov dword ptr [esi + 0xc], eax
// 00533bb1  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00533bb5  8b7e10               mov edi, dword ptr [esi + 0x10]
// 00533bb8  8b4d00               mov ecx, dword ptr [ebp]
// 00533bbb  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00533bbf  2b7e18               sub edi, dword ptr [esi + 0x18]
// 00533bc2  2bc1                 sub eax, ecx
// 00533bc4  3bf8                 cmp edi, eax
// 00533bc6  7602                 jbe 0x533bca
// 00533bc8  8bf8                 mov edi, eax
// 00533bca  8b4360               mov eax, dword ptr [ebx + 0x60]
// 00533bcd  2b4614               sub eax, dword ptr [esi + 0x14]
// 00533bd0  3bf8                 cmp edi, eax
// 00533bd2  7602                 jbe 0x533bd6
// 00533bd4  8bf8                 mov edi, eax
// 00533bd6  8b542424             mov edx, dword ptr [esp + 0x24]
// 00533bda  8b83a8010000         mov eax, dword ptr [ebx + 0x1a8]
// 00533be0  8b4004               mov eax, dword ptr [eax + 4]
// 00533be3  8d0c8a               lea ecx, [edx + ecx*4]
// 00533be6  8b5618               mov edx, dword ptr [esi + 0x18]
// 00533be9  57                   push edi
// 00533bea  51                   push ecx
// 00533beb  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00533bee  8d1491               lea edx, [ecx + edx*4]
// 00533bf1  52                   push edx
// 00533bf2  53                   push ebx
// 00533bf3  ffd0                 call eax
// 00533bf5  017d00               add dword ptr [ebp], edi
// 00533bf8  017e18               add dword ptr [esi + 0x18], edi
// 00533bfb  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00533bfe  8b4610               mov eax, dword ptr [esi + 0x10]
// 00533c01  83c410               add esp, 0x10
// 00533c04  3bc8                 cmp ecx, eax
// 00533c06  720a                 jb 0x533c12
// 00533c08  014614               add dword ptr [esi + 0x14], eax
// 00533c0b  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00533c12  5f                   pop edi
// 00533c13  5e                   pop esi
// 00533c14  5d                   pop ebp
// 00533c15  5b                   pop ebx
// 00533c16  c3                   ret 
// library jpeg-6b/jdpostct.c (function _post_process_2pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
