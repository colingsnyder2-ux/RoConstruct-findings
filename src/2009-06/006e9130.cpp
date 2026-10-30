// from server: 100% by auto
// roc 2009-06 006e9130  unit: RBX::PartDropTool  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e9130
//
// 006e9130  837e2000             cmp dword ptr [esi + 0x20], 0
// 006e9134  7407                 je 0x6e913d
// 006e9136  8b4620               mov eax, dword ptr [esi + 0x20]
// 006e9139  806005fc             and byte ptr [eax + 5], 0xfc
// 006e913d  57                   push edi
// 006e913e  33ff                 xor edi, edi
// 006e9140  397e28               cmp dword ptr [esi + 0x28], edi
// 006e9143  7e36                 jle 0x6e917b
// 006e9145  55                   push ebp
// 006e9146  33ed                 xor ebp, ebp
// 006e9148  eb06                 jmp 0x6e9150
// 006e914a  8d9b00000000         lea ebx, [ebx]
// 006e9150  8b4608               mov eax, dword ptr [esi + 8]
// 006e9153  03c5                 add eax, ebp
// 006e9155  83780804             cmp dword ptr [eax + 8], 4
// 006e9159  7c16                 jl 0x6e9171
// 006e915b  8b00                 mov eax, dword ptr [eax]
// 006e915d  f6400503             test byte ptr [eax + 5], 3
// 006e9161  740e                 je 0x6e9171
// 006e9163  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e9167  50                   push eax
// 006e9168  51                   push ecx
// 006e9169  e892fcffff           call 0x6e8e00
// 006e916e  83c408               add esp, 8
// 006e9171  47                   inc edi
// 006e9172  83c510               add ebp, 0x10
// 006e9175  3b7e28               cmp edi, dword ptr [esi + 0x28]
// 006e9178  7cd6                 jl 0x6e9150
// 006e917a  5d                   pop ebp
// 006e917b  33c0                 xor eax, eax
// 006e917d  394624               cmp dword ptr [esi + 0x24], eax
// 006e9180  7e18                 jle 0x6e919a
// 006e9182  8b561c               mov edx, dword ptr [esi + 0x1c]
// 006e9185  833c8200             cmp dword ptr [edx + eax*4], 0
// 006e9189  7409                 je 0x6e9194
// 006e918b  8bca                 mov ecx, edx
// 006e918d  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 006e9190  806105fc             and byte ptr [ecx + 5], 0xfc
// 006e9194  40                   inc eax
// 006e9195  3b4624               cmp eax, dword ptr [esi + 0x24]
// 006e9198  7ce8                 jl 0x6e9182
// 006e919a  33ff                 xor edi, edi
// 006e919c  397e34               cmp dword ptr [esi + 0x34], edi
// 006e919f  7e28                 jle 0x6e91c9
// 006e91a1  8b5610               mov edx, dword ptr [esi + 0x10]
// 006e91a4  833cba00             cmp dword ptr [edx + edi*4], 0
// 006e91a8  8d04ba               lea eax, [edx + edi*4]
// 006e91ab  7416                 je 0x6e91c3
// 006e91ad  8b00                 mov eax, dword ptr [eax]
// 006e91af  f6400503             test byte ptr [eax + 5], 3
// 006e91b3  740e                 je 0x6e91c3
// 006e91b5  50                   push eax
// 006e91b6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006e91ba  50                   push eax
// 006e91bb  e840fcffff           call 0x6e8e00
// 006e91c0  83c408               add esp, 8
// 006e91c3  47                   inc edi
// 006e91c4  3b7e34               cmp edi, dword ptr [esi + 0x34]
// 006e91c7  7cd8                 jl 0x6e91a1
// 006e91c9  33ff                 xor edi, edi
// 006e91cb  397e38               cmp dword ptr [esi + 0x38], edi
// 006e91ce  7e26                 jle 0x6e91f6
// 006e91d0  33c0                 xor eax, eax
// 006e91d2  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006e91d5  833c0800             cmp dword ptr [eax + ecx], 0
// 006e91d9  7412                 je 0x6e91ed
// 006e91db  8bd1                 mov edx, ecx
// 006e91dd  8d0c02               lea ecx, [edx + eax]
// 006e91e0  8b11                 mov edx, dword ptr [ecx]
// 006e91e2  8a5205               mov dl, byte ptr [edx + 5]
// 006e91e5  8b09                 mov ecx, dword ptr [ecx]
// 006e91e7  80e2fc               and dl, 0xfc
// 006e91ea  885105               mov byte ptr [ecx + 5], dl
// 006e91ed  47                   inc edi
// 006e91ee  83c00c               add eax, 0xc
// 006e91f1  3b7e38               cmp edi, dword ptr [esi + 0x38]
// 006e91f4  7cdc                 jl 0x6e91d2
// 006e91f6  5f                   pop edi
// 006e91f7  c3                   ret 
// library lua-5.1.4/lgc.c (function _traverseproto)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
