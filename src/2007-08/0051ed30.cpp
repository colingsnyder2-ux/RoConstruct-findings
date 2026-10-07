// roc 2007-08 0051ed30  unit: seg_00510000  size: 503 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051ed30
//
// 0051ed30  b8dcff0000           mov eax, 0xffdc
// 0051ed35  394620               cmp dword ptr [esi + 0x20], eax
// 0051ed38  7f05                 jg 0x51ed3f
// 0051ed3a  39461c               cmp dword ptr [esi + 0x1c], eax
// 0051ed3d  7e18                 jle 0x51ed57
// 0051ed3f  8b0e                 mov ecx, dword ptr [esi]
// 0051ed41  c7411429000000       mov dword ptr [ecx + 0x14], 0x29
// 0051ed48  8b16                 mov edx, dword ptr [esi]
// 0051ed4a  894218               mov dword ptr [edx + 0x18], eax
// 0051ed4d  8b06                 mov eax, dword ptr [esi]
// 0051ed4f  8b08                 mov ecx, dword ptr [eax]
// 0051ed51  56                   push esi
// 0051ed52  ffd1                 call ecx
// 0051ed54  83c404               add esp, 4
// 0051ed57  83bec000000008       cmp dword ptr [esi + 0xc0], 8
// 0051ed5e  741e                 je 0x51ed7e
// 0051ed60  8b16                 mov edx, dword ptr [esi]
// 0051ed62  c742140f000000       mov dword ptr [edx + 0x14], 0xf
// 0051ed69  8b06                 mov eax, dword ptr [esi]
// 0051ed6b  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0051ed71  894818               mov dword ptr [eax + 0x18], ecx
// 0051ed74  8b16                 mov edx, dword ptr [esi]
// 0051ed76  8b02                 mov eax, dword ptr [edx]
// 0051ed78  56                   push esi
// 0051ed79  ffd0                 call eax
// 0051ed7b  83c404               add esp, 4
// 0051ed7e  b80a000000           mov eax, 0xa
// 0051ed83  394624               cmp dword ptr [esi + 0x24], eax
// 0051ed86  7e20                 jle 0x51eda8
// 0051ed88  8b0e                 mov ecx, dword ptr [esi]
// 0051ed8a  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 0051ed91  8b16                 mov edx, dword ptr [esi]
// 0051ed93  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0051ed96  894a18               mov dword ptr [edx + 0x18], ecx
// 0051ed99  8b16                 mov edx, dword ptr [esi]
// 0051ed9b  89421c               mov dword ptr [edx + 0x1c], eax
// 0051ed9e  8b06                 mov eax, dword ptr [esi]
// 0051eda0  8b08                 mov ecx, dword ptr [eax]
// 0051eda2  56                   push esi
// 0051eda3  ffd1                 call ecx
// 0051eda5  83c404               add esp, 4
// 0051eda8  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0051edae  53                   push ebx
// 0051edaf  55                   push ebp
// 0051edb0  bb01000000           mov ebx, 1
// 0051edb5  33ed                 xor ebp, ebp
// 0051edb7  396e24               cmp dword ptr [esi + 0x24], ebp
// 0051edba  57                   push edi
// 0051edbb  899e10010000         mov dword ptr [esi + 0x110], ebx
// 0051edc1  899e14010000         mov dword ptr [esi + 0x114], ebx
// 0051edc7  7e64                 jle 0x51ee2d
// 0051edc9  8d780c               lea edi, [eax + 0xc]
// 0051edcc  8d642400             lea esp, [esp]
// 0051edd0  8b47fc               mov eax, dword ptr [edi - 4]
// 0051edd3  85c0                 test eax, eax
// 0051edd5  7e10                 jle 0x51ede7
// 0051edd7  83f804               cmp eax, 4
// 0051edda  7f0b                 jg 0x51ede7
// 0051eddc  8b07                 mov eax, dword ptr [edi]
// 0051edde  85c0                 test eax, eax
// 0051ede0  7e05                 jle 0x51ede7
// 0051ede2  83f804               cmp eax, 4
// 0051ede5  7e13                 jle 0x51edfa
// 0051ede7  8b16                 mov edx, dword ptr [esi]
// 0051ede9  c7421412000000       mov dword ptr [edx + 0x14], 0x12
// 0051edf0  8b06                 mov eax, dword ptr [esi]
// 0051edf2  8b08                 mov ecx, dword ptr [eax]
// 0051edf4  56                   push esi
// 0051edf5  ffd1                 call ecx
// 0051edf7  83c404               add esp, 4
// 0051edfa  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 0051ee00  8b4ffc               mov ecx, dword ptr [edi - 4]
// 0051ee03  3bc1                 cmp eax, ecx
// 0051ee05  7f02                 jg 0x51ee09
// 0051ee07  8bc1                 mov eax, ecx
// 0051ee09  898610010000         mov dword ptr [esi + 0x110], eax
// 0051ee0f  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 0051ee15  8b0f                 mov ecx, dword ptr [edi]
// 0051ee17  3bc1                 cmp eax, ecx
// 0051ee19  7f02                 jg 0x51ee1d
// 0051ee1b  8bc1                 mov eax, ecx
// 0051ee1d  03eb                 add ebp, ebx
// 0051ee1f  898614010000         mov dword ptr [esi + 0x114], eax
// 0051ee25  83c754               add edi, 0x54
// 0051ee28  3b6e24               cmp ebp, dword ptr [esi + 0x24]
// 0051ee2b  7ca3                 jl 0x51edd0
// 0051ee2d  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0051ee33  33ed                 xor ebp, ebp
// 0051ee35  396e24               cmp dword ptr [esi + 0x24], ebp
// 0051ee38  c7861801000008000000 mov dword ptr [esi + 0x118], 8
// 0051ee42  0f8e91000000         jle 0x51eed9
// 0051ee48  8d781c               lea edi, [eax + 0x1c]
// 0051ee4b  eb03                 jmp 0x51ee50
// 0051ee4d  8d4900               lea ecx, [ecx]
// 0051ee50  8b47ec               mov eax, dword ptr [edi - 0x14]
// 0051ee53  c7470808000000       mov dword ptr [edi + 8], 8
// 0051ee5a  0faf461c             imul eax, dword ptr [esi + 0x1c]
// 0051ee5e  8b9610010000         mov edx, dword ptr [esi + 0x110]
// 0051ee64  03d2                 add edx, edx
// 0051ee66  03d2                 add edx, edx
// 0051ee68  03d2                 add edx, edx
// 0051ee6a  52                   push edx
// 0051ee6b  50                   push eax
// 0051ee6c  e8dff3ffff           call 0x51e250
// 0051ee71  8b57f0               mov edx, dword ptr [edi - 0x10]
// 0051ee74  8907                 mov dword ptr [edi], eax
// 0051ee76  0faf5620             imul edx, dword ptr [esi + 0x20]
// 0051ee7a  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 0051ee80  03c9                 add ecx, ecx
// 0051ee82  03c9                 add ecx, ecx
// 0051ee84  03c9                 add ecx, ecx
// 0051ee86  51                   push ecx
// 0051ee87  52                   push edx
// 0051ee88  e8c3f3ffff           call 0x51e250
// 0051ee8d  8b4fec               mov ecx, dword ptr [edi - 0x14]
// 0051ee90  894704               mov dword ptr [edi + 4], eax
// 0051ee93  0faf4e1c             imul ecx, dword ptr [esi + 0x1c]
// 0051ee97  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 0051ee9d  50                   push eax
// 0051ee9e  51                   push ecx
// 0051ee9f  e8acf3ffff           call 0x51e250
// 0051eea4  89470c               mov dword ptr [edi + 0xc], eax
// 0051eea7  8b47f0               mov eax, dword ptr [edi - 0x10]
// 0051eeaa  0faf4620             imul eax, dword ptr [esi + 0x20]
// 0051eeae  8b9614010000         mov edx, dword ptr [esi + 0x114]
// 0051eeb4  52                   push edx
// 0051eeb5  50                   push eax
// 0051eeb6  e895f3ffff           call 0x51e250
// 0051eebb  894710               mov dword ptr [edi + 0x10], eax
// 0051eebe  885f14               mov byte ptr [edi + 0x14], bl
// 0051eec1  c7473000000000       mov dword ptr [edi + 0x30], 0
// 0051eec8  03eb                 add ebp, ebx
// 0051eeca  83c420               add esp, 0x20
// 0051eecd  83c754               add edi, 0x54
// 0051eed0  3b6e24               cmp ebp, dword ptr [esi + 0x24]
// 0051eed3  0f8c77ffffff         jl 0x51ee50
// 0051eed9  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 0051eedf  8b5620               mov edx, dword ptr [esi + 0x20]
// 0051eee2  03c9                 add ecx, ecx
// 0051eee4  03c9                 add ecx, ecx
// 0051eee6  03c9                 add ecx, ecx
// 0051eee8  51                   push ecx
// 0051eee9  52                   push edx
// 0051eeea  e861f3ffff           call 0x51e250
// 0051eeef  89861c010000         mov dword ptr [esi + 0x11c], eax
// 0051eef5  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 0051eefb  83c408               add esp, 8
// 0051eefe  3b4624               cmp eax, dword ptr [esi + 0x24]
// 0051ef01  7c17                 jl 0x51ef1a
// 0051ef03  80bec800000000       cmp byte ptr [esi + 0xc8], 0
// 0051ef0a  750e                 jne 0x51ef1a
// 0051ef0c  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 0051ef12  5f                   pop edi
// 0051ef13  5d                   pop ebp
// 0051ef14  c6411000             mov byte ptr [ecx + 0x10], 0
// 0051ef18  5b                   pop ebx
// 0051ef19  c3                   ret 
// 0051ef1a  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 0051ef20  5f                   pop edi
// 0051ef21  5d                   pop ebp
// 0051ef22  885a10               mov byte ptr [edx + 0x10], bl
// 0051ef25  5b                   pop ebx
// 0051ef26  c3                   ret 
// library jpeg-6b/jdinput.c (function _initial_setup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
