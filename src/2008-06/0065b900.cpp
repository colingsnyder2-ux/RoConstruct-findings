// from server: 100% by auto
// roc 2008-06 0065b900  unit: RBX::BallBallContact  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065b900
//
// 0065b900  837e2000             cmp dword ptr [esi + 0x20], 0
// 0065b904  7407                 je 0x65b90d
// 0065b906  8b4620               mov eax, dword ptr [esi + 0x20]
// 0065b909  806005fc             and byte ptr [eax + 5], 0xfc
// 0065b90d  57                   push edi
// 0065b90e  33ff                 xor edi, edi
// 0065b910  397e28               cmp dword ptr [esi + 0x28], edi
// 0065b913  7e36                 jle 0x65b94b
// 0065b915  55                   push ebp
// 0065b916  33ed                 xor ebp, ebp
// 0065b918  eb06                 jmp 0x65b920
// 0065b91a  8d9b00000000         lea ebx, [ebx]
// 0065b920  8b4608               mov eax, dword ptr [esi + 8]
// 0065b923  03c5                 add eax, ebp
// 0065b925  83780804             cmp dword ptr [eax + 8], 4
// 0065b929  7c16                 jl 0x65b941
// 0065b92b  8b00                 mov eax, dword ptr [eax]
// 0065b92d  f6400503             test byte ptr [eax + 5], 3
// 0065b931  740e                 je 0x65b941
// 0065b933  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065b937  50                   push eax
// 0065b938  51                   push ecx
// 0065b939  e892fcffff           call 0x65b5d0
// 0065b93e  83c408               add esp, 8
// 0065b941  47                   inc edi
// 0065b942  83c510               add ebp, 0x10
// 0065b945  3b7e28               cmp edi, dword ptr [esi + 0x28]
// 0065b948  7cd6                 jl 0x65b920
// 0065b94a  5d                   pop ebp
// 0065b94b  33c0                 xor eax, eax
// 0065b94d  394624               cmp dword ptr [esi + 0x24], eax
// 0065b950  7e18                 jle 0x65b96a
// 0065b952  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0065b955  833c8200             cmp dword ptr [edx + eax*4], 0
// 0065b959  7409                 je 0x65b964
// 0065b95b  8bca                 mov ecx, edx
// 0065b95d  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 0065b960  806105fc             and byte ptr [ecx + 5], 0xfc
// 0065b964  40                   inc eax
// 0065b965  3b4624               cmp eax, dword ptr [esi + 0x24]
// 0065b968  7ce8                 jl 0x65b952
// 0065b96a  33ff                 xor edi, edi
// 0065b96c  397e34               cmp dword ptr [esi + 0x34], edi
// 0065b96f  7e28                 jle 0x65b999
// 0065b971  8b5610               mov edx, dword ptr [esi + 0x10]
// 0065b974  833cba00             cmp dword ptr [edx + edi*4], 0
// 0065b978  8d04ba               lea eax, [edx + edi*4]
// 0065b97b  7416                 je 0x65b993
// 0065b97d  8b00                 mov eax, dword ptr [eax]
// 0065b97f  f6400503             test byte ptr [eax + 5], 3
// 0065b983  740e                 je 0x65b993
// 0065b985  50                   push eax
// 0065b986  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0065b98a  50                   push eax
// 0065b98b  e840fcffff           call 0x65b5d0
// 0065b990  83c408               add esp, 8
// 0065b993  47                   inc edi
// 0065b994  3b7e34               cmp edi, dword ptr [esi + 0x34]
// 0065b997  7cd8                 jl 0x65b971
// 0065b999  33ff                 xor edi, edi
// 0065b99b  397e38               cmp dword ptr [esi + 0x38], edi
// 0065b99e  7e26                 jle 0x65b9c6
// 0065b9a0  33c0                 xor eax, eax
// 0065b9a2  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0065b9a5  833c0800             cmp dword ptr [eax + ecx], 0
// 0065b9a9  7412                 je 0x65b9bd
// 0065b9ab  8bd1                 mov edx, ecx
// 0065b9ad  8d0c02               lea ecx, [edx + eax]
// 0065b9b0  8b11                 mov edx, dword ptr [ecx]
// 0065b9b2  8a5205               mov dl, byte ptr [edx + 5]
// 0065b9b5  8b09                 mov ecx, dword ptr [ecx]
// 0065b9b7  80e2fc               and dl, 0xfc
// 0065b9ba  885105               mov byte ptr [ecx + 5], dl
// 0065b9bd  47                   inc edi
// 0065b9be  83c00c               add eax, 0xc
// 0065b9c1  3b7e38               cmp edi, dword ptr [esi + 0x38]
// 0065b9c4  7cdc                 jl 0x65b9a2
// 0065b9c6  5f                   pop edi
// 0065b9c7  c3                   ret 
// library lua-5.1.4/lgc.c (function _traverseproto)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
