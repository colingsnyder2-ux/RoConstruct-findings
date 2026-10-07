// roc 2012-06 00932800  unit: RBX::BallCellContact  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00932800
//
// 00932800  837e2000             cmp dword ptr [esi + 0x20], 0
// 00932804  7407                 je 0x93280d
// 00932806  8b4620               mov eax, dword ptr [esi + 0x20]
// 00932809  806005fc             and byte ptr [eax + 5], 0xfc
// 0093280d  57                   push edi
// 0093280e  33ff                 xor edi, edi
// 00932810  397e28               cmp dword ptr [esi + 0x28], edi
// 00932813  7e36                 jle 0x93284b
// 00932815  55                   push ebp
// 00932816  33ed                 xor ebp, ebp
// 00932818  eb06                 jmp 0x932820
// 0093281a  8d9b00000000         lea ebx, [ebx]
// 00932820  8b4608               mov eax, dword ptr [esi + 8]
// 00932823  03c5                 add eax, ebp
// 00932825  83780804             cmp dword ptr [eax + 8], 4
// 00932829  7c16                 jl 0x932841
// 0093282b  8b00                 mov eax, dword ptr [eax]
// 0093282d  f6400503             test byte ptr [eax + 5], 3
// 00932831  740e                 je 0x932841
// 00932833  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00932837  50                   push eax
// 00932838  51                   push ecx
// 00932839  e892fcffff           call 0x9324d0
// 0093283e  83c408               add esp, 8
// 00932841  47                   inc edi
// 00932842  83c510               add ebp, 0x10
// 00932845  3b7e28               cmp edi, dword ptr [esi + 0x28]
// 00932848  7cd6                 jl 0x932820
// 0093284a  5d                   pop ebp
// 0093284b  33c0                 xor eax, eax
// 0093284d  394624               cmp dword ptr [esi + 0x24], eax
// 00932850  7e18                 jle 0x93286a
// 00932852  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00932855  833c8200             cmp dword ptr [edx + eax*4], 0
// 00932859  7409                 je 0x932864
// 0093285b  8bca                 mov ecx, edx
// 0093285d  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00932860  806105fc             and byte ptr [ecx + 5], 0xfc
// 00932864  40                   inc eax
// 00932865  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00932868  7ce8                 jl 0x932852
// 0093286a  33ff                 xor edi, edi
// 0093286c  397e34               cmp dword ptr [esi + 0x34], edi
// 0093286f  7e28                 jle 0x932899
// 00932871  8b5610               mov edx, dword ptr [esi + 0x10]
// 00932874  833cba00             cmp dword ptr [edx + edi*4], 0
// 00932878  8d04ba               lea eax, [edx + edi*4]
// 0093287b  7416                 je 0x932893
// 0093287d  8b00                 mov eax, dword ptr [eax]
// 0093287f  f6400503             test byte ptr [eax + 5], 3
// 00932883  740e                 je 0x932893
// 00932885  50                   push eax
// 00932886  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0093288a  50                   push eax
// 0093288b  e840fcffff           call 0x9324d0
// 00932890  83c408               add esp, 8
// 00932893  47                   inc edi
// 00932894  3b7e34               cmp edi, dword ptr [esi + 0x34]
// 00932897  7cd8                 jl 0x932871
// 00932899  33ff                 xor edi, edi
// 0093289b  397e38               cmp dword ptr [esi + 0x38], edi
// 0093289e  7e26                 jle 0x9328c6
// 009328a0  33c0                 xor eax, eax
// 009328a2  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 009328a5  833c0800             cmp dword ptr [eax + ecx], 0
// 009328a9  7412                 je 0x9328bd
// 009328ab  8bd1                 mov edx, ecx
// 009328ad  8d0c02               lea ecx, [edx + eax]
// 009328b0  8b11                 mov edx, dword ptr [ecx]
// 009328b2  8a5205               mov dl, byte ptr [edx + 5]
// 009328b5  8b09                 mov ecx, dword ptr [ecx]
// 009328b7  80e2fc               and dl, 0xfc
// 009328ba  885105               mov byte ptr [ecx + 5], dl
// 009328bd  47                   inc edi
// 009328be  83c00c               add eax, 0xc
// 009328c1  3b7e38               cmp edi, dword ptr [esi + 0x38]
// 009328c4  7cdc                 jl 0x9328a2
// 009328c6  5f                   pop edi
// 009328c7  c3                   ret 
// library lua-5.1.4/lgc.c (function _traverseproto)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
