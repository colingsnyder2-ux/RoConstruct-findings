// roc 2010-06 0077a3d0  unit: RBX::PartDropTool  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077a3d0
//
// 0077a3d0  837e2000             cmp dword ptr [esi + 0x20], 0
// 0077a3d4  7407                 je 0x77a3dd
// 0077a3d6  8b4620               mov eax, dword ptr [esi + 0x20]
// 0077a3d9  806005fc             and byte ptr [eax + 5], 0xfc
// 0077a3dd  57                   push edi
// 0077a3de  33ff                 xor edi, edi
// 0077a3e0  397e28               cmp dword ptr [esi + 0x28], edi
// 0077a3e3  7e36                 jle 0x77a41b
// 0077a3e5  55                   push ebp
// 0077a3e6  33ed                 xor ebp, ebp
// 0077a3e8  eb06                 jmp 0x77a3f0
// 0077a3ea  8d9b00000000         lea ebx, [ebx]
// 0077a3f0  8b4608               mov eax, dword ptr [esi + 8]
// 0077a3f3  03c5                 add eax, ebp
// 0077a3f5  83780804             cmp dword ptr [eax + 8], 4
// 0077a3f9  7c16                 jl 0x77a411
// 0077a3fb  8b00                 mov eax, dword ptr [eax]
// 0077a3fd  f6400503             test byte ptr [eax + 5], 3
// 0077a401  740e                 je 0x77a411
// 0077a403  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0077a407  50                   push eax
// 0077a408  51                   push ecx
// 0077a409  e892fcffff           call 0x77a0a0
// 0077a40e  83c408               add esp, 8
// 0077a411  47                   inc edi
// 0077a412  83c510               add ebp, 0x10
// 0077a415  3b7e28               cmp edi, dword ptr [esi + 0x28]
// 0077a418  7cd6                 jl 0x77a3f0
// 0077a41a  5d                   pop ebp
// 0077a41b  33c0                 xor eax, eax
// 0077a41d  394624               cmp dword ptr [esi + 0x24], eax
// 0077a420  7e18                 jle 0x77a43a
// 0077a422  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0077a425  833c8200             cmp dword ptr [edx + eax*4], 0
// 0077a429  7409                 je 0x77a434
// 0077a42b  8bca                 mov ecx, edx
// 0077a42d  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 0077a430  806105fc             and byte ptr [ecx + 5], 0xfc
// 0077a434  40                   inc eax
// 0077a435  3b4624               cmp eax, dword ptr [esi + 0x24]
// 0077a438  7ce8                 jl 0x77a422
// 0077a43a  33ff                 xor edi, edi
// 0077a43c  397e34               cmp dword ptr [esi + 0x34], edi
// 0077a43f  7e28                 jle 0x77a469
// 0077a441  8b5610               mov edx, dword ptr [esi + 0x10]
// 0077a444  833cba00             cmp dword ptr [edx + edi*4], 0
// 0077a448  8d04ba               lea eax, [edx + edi*4]
// 0077a44b  7416                 je 0x77a463
// 0077a44d  8b00                 mov eax, dword ptr [eax]
// 0077a44f  f6400503             test byte ptr [eax + 5], 3
// 0077a453  740e                 je 0x77a463
// 0077a455  50                   push eax
// 0077a456  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0077a45a  50                   push eax
// 0077a45b  e840fcffff           call 0x77a0a0
// 0077a460  83c408               add esp, 8
// 0077a463  47                   inc edi
// 0077a464  3b7e34               cmp edi, dword ptr [esi + 0x34]
// 0077a467  7cd8                 jl 0x77a441
// 0077a469  33ff                 xor edi, edi
// 0077a46b  397e38               cmp dword ptr [esi + 0x38], edi
// 0077a46e  7e26                 jle 0x77a496
// 0077a470  33c0                 xor eax, eax
// 0077a472  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0077a475  833c0800             cmp dword ptr [eax + ecx], 0
// 0077a479  7412                 je 0x77a48d
// 0077a47b  8bd1                 mov edx, ecx
// 0077a47d  8d0c02               lea ecx, [edx + eax]
// 0077a480  8b11                 mov edx, dword ptr [ecx]
// 0077a482  8a5205               mov dl, byte ptr [edx + 5]
// 0077a485  8b09                 mov ecx, dword ptr [ecx]
// 0077a487  80e2fc               and dl, 0xfc
// 0077a48a  885105               mov byte ptr [ecx + 5], dl
// 0077a48d  47                   inc edi
// 0077a48e  83c00c               add eax, 0xc
// 0077a491  3b7e38               cmp edi, dword ptr [esi + 0x38]
// 0077a494  7cdc                 jl 0x77a472
// 0077a496  5f                   pop edi
// 0077a497  c3                   ret 
// library lua-5.1.4/lgc.c (function _traverseproto)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
