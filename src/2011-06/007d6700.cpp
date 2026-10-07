// roc 2011-06 007d6700  unit: RBX::EquationDisplay  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d6700
//
// 007d6700  837e2000             cmp dword ptr [esi + 0x20], 0
// 007d6704  7407                 je 0x7d670d
// 007d6706  8b4620               mov eax, dword ptr [esi + 0x20]
// 007d6709  806005fc             and byte ptr [eax + 5], 0xfc
// 007d670d  57                   push edi
// 007d670e  33ff                 xor edi, edi
// 007d6710  397e28               cmp dword ptr [esi + 0x28], edi
// 007d6713  7e36                 jle 0x7d674b
// 007d6715  55                   push ebp
// 007d6716  33ed                 xor ebp, ebp
// 007d6718  eb06                 jmp 0x7d6720
// 007d671a  8d9b00000000         lea ebx, [ebx]
// 007d6720  8b4608               mov eax, dword ptr [esi + 8]
// 007d6723  03c5                 add eax, ebp
// 007d6725  83780804             cmp dword ptr [eax + 8], 4
// 007d6729  7c16                 jl 0x7d6741
// 007d672b  8b00                 mov eax, dword ptr [eax]
// 007d672d  f6400503             test byte ptr [eax + 5], 3
// 007d6731  740e                 je 0x7d6741
// 007d6733  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007d6737  50                   push eax
// 007d6738  51                   push ecx
// 007d6739  e892fcffff           call 0x7d63d0
// 007d673e  83c408               add esp, 8
// 007d6741  47                   inc edi
// 007d6742  83c510               add ebp, 0x10
// 007d6745  3b7e28               cmp edi, dword ptr [esi + 0x28]
// 007d6748  7cd6                 jl 0x7d6720
// 007d674a  5d                   pop ebp
// 007d674b  33c0                 xor eax, eax
// 007d674d  394624               cmp dword ptr [esi + 0x24], eax
// 007d6750  7e18                 jle 0x7d676a
// 007d6752  8b561c               mov edx, dword ptr [esi + 0x1c]
// 007d6755  833c8200             cmp dword ptr [edx + eax*4], 0
// 007d6759  7409                 je 0x7d6764
// 007d675b  8bca                 mov ecx, edx
// 007d675d  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 007d6760  806105fc             and byte ptr [ecx + 5], 0xfc
// 007d6764  40                   inc eax
// 007d6765  3b4624               cmp eax, dword ptr [esi + 0x24]
// 007d6768  7ce8                 jl 0x7d6752
// 007d676a  33ff                 xor edi, edi
// 007d676c  397e34               cmp dword ptr [esi + 0x34], edi
// 007d676f  7e28                 jle 0x7d6799
// 007d6771  8b5610               mov edx, dword ptr [esi + 0x10]
// 007d6774  833cba00             cmp dword ptr [edx + edi*4], 0
// 007d6778  8d04ba               lea eax, [edx + edi*4]
// 007d677b  7416                 je 0x7d6793
// 007d677d  8b00                 mov eax, dword ptr [eax]
// 007d677f  f6400503             test byte ptr [eax + 5], 3
// 007d6783  740e                 je 0x7d6793
// 007d6785  50                   push eax
// 007d6786  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007d678a  50                   push eax
// 007d678b  e840fcffff           call 0x7d63d0
// 007d6790  83c408               add esp, 8
// 007d6793  47                   inc edi
// 007d6794  3b7e34               cmp edi, dword ptr [esi + 0x34]
// 007d6797  7cd8                 jl 0x7d6771
// 007d6799  33ff                 xor edi, edi
// 007d679b  397e38               cmp dword ptr [esi + 0x38], edi
// 007d679e  7e26                 jle 0x7d67c6
// 007d67a0  33c0                 xor eax, eax
// 007d67a2  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007d67a5  833c0800             cmp dword ptr [eax + ecx], 0
// 007d67a9  7412                 je 0x7d67bd
// 007d67ab  8bd1                 mov edx, ecx
// 007d67ad  8d0c02               lea ecx, [edx + eax]
// 007d67b0  8b11                 mov edx, dword ptr [ecx]
// 007d67b2  8a5205               mov dl, byte ptr [edx + 5]
// 007d67b5  8b09                 mov ecx, dword ptr [ecx]
// 007d67b7  80e2fc               and dl, 0xfc
// 007d67ba  885105               mov byte ptr [ecx + 5], dl
// 007d67bd  47                   inc edi
// 007d67be  83c00c               add eax, 0xc
// 007d67c1  3b7e38               cmp edi, dword ptr [esi + 0x38]
// 007d67c4  7cdc                 jl 0x7d67a2
// 007d67c6  5f                   pop edi
// 007d67c7  c3                   ret 
// library lua-5.1.4/lgc.c (function _traverseproto)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
