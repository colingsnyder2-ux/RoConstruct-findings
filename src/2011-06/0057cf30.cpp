// from server: 100% by auto
// roc 2011-06 0057cf30  unit: seg_00570000  size: 621 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057cf30
//
// 0057cf30  81ec14010000         sub esp, 0x114
// 0057cf36  8b842418010000       mov eax, dword ptr [esp + 0x118]
// 0057cf3d  8b8838010000         mov ecx, dword ptr [eax + 0x138]
// 0057cf43  8b5018               mov edx, dword ptr [eax + 0x18]
// 0057cf46  53                   push ebx
// 0057cf47  8b9830010000         mov ebx, dword ptr [eax + 0x130]
// 0057cf4d  55                   push ebp
// 0057cf4e  56                   push esi
// 0057cf4f  8bb05c010000         mov esi, dword ptr [eax + 0x15c]
// 0057cf55  894c2410             mov dword ptr [esp + 0x10], ecx
// 0057cf59  8b0a                 mov ecx, dword ptr [edx]
// 0057cf5b  894e10               mov dword ptr [esi + 0x10], ecx
// 0057cf5e  8b5018               mov edx, dword ptr [eax + 0x18]
// 0057cf61  8b4a04               mov ecx, dword ptr [edx + 4]
// 0057cf64  894e14               mov dword ptr [esi + 0x14], ecx
// 0057cf67  83b8bc00000000       cmp dword ptr [eax + 0xbc], 0
// 0057cf6e  57                   push edi
// 0057cf6f  895c2418             mov dword ptr [esp + 0x18], ebx
// 0057cf73  741b                 je 0x57cf90
// 0057cf75  837e4400             cmp dword ptr [esi + 0x44], 0
// 0057cf79  7515                 jne 0x57cf90
// 0057cf7b  8b5648               mov edx, dword ptr [esi + 0x48]
// 0057cf7e  52                   push edx
// 0057cf7f  8bc6                 mov eax, esi
// 0057cf81  e8fafaffff           call 0x57ca80
// 0057cf86  8b84242c010000       mov eax, dword ptr [esp + 0x12c]
// 0057cf8d  83c404               add esp, 4
// 0057cf90  8b902c010000         mov edx, dword ptr [eax + 0x12c]
// 0057cf96  8b8c242c010000       mov ecx, dword ptr [esp + 0x12c]
// 0057cf9d  8b29                 mov ebp, dword ptr [ecx]
// 0057cf9f  8bc2                 mov eax, edx
// 0057cfa1  3bc3                 cmp eax, ebx
// 0057cfa3  896c2420             mov dword ptr [esp + 0x20], ebp
// 0057cfa7  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0057cfaf  7f2a                 jg 0x57cfdb
// 0057cfb1  8b0c85f058a800       mov ecx, dword ptr [eax*4 + 0xa858f0]
// 0057cfb8  0fbf7c4d00           movsx edi, word ptr [ebp + ecx*2]
// 0057cfbd  85ff                 test edi, edi
// 0057cfbf  7d02                 jge 0x57cfc3
// 0057cfc1  f7df                 neg edi
// 0057cfc3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057cfc7  d3ff                 sar edi, cl
// 0057cfc9  897c8424             mov dword ptr [esp + eax*4 + 0x24], edi
// 0057cfcd  83ff01               cmp edi, 1
// 0057cfd0  7504                 jne 0x57cfd6
// 0057cfd2  8944241c             mov dword ptr [esp + 0x1c], eax
// 0057cfd6  40                   inc eax
// 0057cfd7  3bc3                 cmp eax, ebx
// 0057cfd9  7ed6                 jle 0x57cfb1
// 0057cfdb  8b7e40               mov edi, dword ptr [esi + 0x40]
// 0057cfde  037e3c               add edi, dword ptr [esi + 0x3c]
// 0057cfe1  8bca                 mov ecx, edx
// 0057cfe3  33ed                 xor ebp, ebp
// 0057cfe5  33db                 xor ebx, ebx
// 0057cfe7  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 0057cfeb  89542410             mov dword ptr [esp + 0x10], edx
// 0057cfef  0f8f63010000         jg 0x57d158
// 0057cff5  8b448c24             mov eax, dword ptr [esp + ecx*4 + 0x24]
// 0057cff9  89442414             mov dword ptr [esp + 0x14], eax
// 0057cffd  85c0                 test eax, eax
// 0057cfff  7506                 jne 0x57d007
// 0057d001  45                   inc ebp
// 0057d002  e918010000           jmp 0x57d11f
// 0057d007  83fd0f               cmp ebp, 0xf
// 0057d00a  7e7a                 jle 0x57d086
// 0057d00c  8d642400             lea esp, [esp]
// 0057d010  3b4c241c             cmp ecx, dword ptr [esp + 0x1c]
// 0057d014  7f70                 jg 0x57d086
// 0057d016  8bc6                 mov eax, esi
// 0057d018  e8c3f9ffff           call 0x57c9e0
// 0057d01d  807e0c00             cmp byte ptr [esi + 0xc], 0
// 0057d021  8b4634               mov eax, dword ptr [esi + 0x34]
// 0057d024  740c                 je 0x57d032
// 0057d026  8b44865c             mov eax, dword ptr [esi + eax*4 + 0x5c]
// 0057d02a  ff80c0030000         inc dword ptr [eax + 0x3c0]
// 0057d030  eb1b                 jmp 0x57d04d
// 0057d032  8b44864c             mov eax, dword ptr [esi + eax*4 + 0x4c]
// 0057d036  0fbe90f0040000       movsx edx, byte ptr [eax + 0x4f0]
// 0057d03d  8b80c0030000         mov eax, dword ptr [eax + 0x3c0]
// 0057d043  52                   push edx
// 0057d044  50                   push eax
// 0057d045  e826f8ffff           call 0x57c870
// 0057d04a  83c408               add esp, 8
// 0057d04d  83ed10               sub ebp, 0x10
// 0057d050  807e0c00             cmp byte ptr [esi + 0xc], 0
// 0057d054  751e                 jne 0x57d074
// 0057d056  85db                 test ebx, ebx
// 0057d058  761a                 jbe 0x57d074
// 0057d05a  8d9b00000000         lea ebx, [ebx]
// 0057d060  0fbe0f               movsx ecx, byte ptr [edi]
// 0057d063  6a01                 push 1
// 0057d065  51                   push ecx
// 0057d066  e805f8ffff           call 0x57c870
// 0057d06b  83c408               add esp, 8
// 0057d06e  47                   inc edi
// 0057d06f  83eb01               sub ebx, 1
// 0057d072  75ec                 jne 0x57d060
// 0057d074  8b7e40               mov edi, dword ptr [esi + 0x40]
// 0057d077  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057d07b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057d07f  33db                 xor ebx, ebx
// 0057d081  83fd0f               cmp ebp, 0xf
// 0057d084  7f8a                 jg 0x57d010
// 0057d086  83f801               cmp eax, 1
// 0057d089  7e0b                 jle 0x57d096
// 0057d08b  2401                 and al, 1
// 0057d08d  88041f               mov byte ptr [edi + ebx], al
// 0057d090  43                   inc ebx
// 0057d091  e989000000           jmp 0x57d11f
// 0057d096  8bc6                 mov eax, esi
// 0057d098  e843f9ffff           call 0x57c9e0
// 0057d09d  8b4634               mov eax, dword ptr [esi + 0x34]
// 0057d0a0  c1e504               shl ebp, 4
// 0057d0a3  45                   inc ebp
// 0057d0a4  807e0c00             cmp byte ptr [esi + 0xc], 0
// 0057d0a8  740c                 je 0x57d0b6
// 0057d0aa  8b54865c             mov edx, dword ptr [esi + eax*4 + 0x5c]
// 0057d0ae  ff04aa               inc dword ptr [edx + ebp*4]
// 0057d0b1  8d04aa               lea eax, [edx + ebp*4]
// 0057d0b4  eb19                 jmp 0x57d0cf
// 0057d0b6  8b44864c             mov eax, dword ptr [esi + eax*4 + 0x4c]
// 0057d0ba  0fbe8c2800040000     movsx ecx, byte ptr [eax + ebp + 0x400]
// 0057d0c2  8b14a8               mov edx, dword ptr [eax + ebp*4]
// 0057d0c5  51                   push ecx
// 0057d0c6  52                   push edx
// 0057d0c7  e8a4f7ffff           call 0x57c870
// 0057d0cc  83c408               add esp, 8
// 0057d0cf  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057d0d3  8b0c85f058a800       mov ecx, dword ptr [eax*4 + 0xa858f0]
// 0057d0da  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057d0de  33d2                 xor edx, edx
// 0057d0e0  66391448             cmp word ptr [eax + ecx*2], dx
// 0057d0e4  6a01                 push 1
// 0057d0e6  0f9dc2               setge dl
// 0057d0e9  52                   push edx
// 0057d0ea  e881f7ffff           call 0x57c870
// 0057d0ef  83c408               add esp, 8
// 0057d0f2  807e0c00             cmp byte ptr [esi + 0xc], 0
// 0057d0f6  751c                 jne 0x57d114
// 0057d0f8  85db                 test ebx, ebx
// 0057d0fa  7618                 jbe 0x57d114
// 0057d0fc  8d642400             lea esp, [esp]
// 0057d100  0fbe0f               movsx ecx, byte ptr [edi]
// 0057d103  6a01                 push 1
// 0057d105  51                   push ecx
// 0057d106  e865f7ffff           call 0x57c870
// 0057d10b  83c408               add esp, 8
// 0057d10e  47                   inc edi
// 0057d10f  83eb01               sub ebx, 1
// 0057d112  75ec                 jne 0x57d100
// 0057d114  8b7e40               mov edi, dword ptr [esi + 0x40]
// 0057d117  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057d11b  33db                 xor ebx, ebx
// 0057d11d  33ed                 xor ebp, ebp
// 0057d11f  41                   inc ecx
// 0057d120  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 0057d124  894c2410             mov dword ptr [esp + 0x10], ecx
// 0057d128  0f8ec7feffff         jle 0x57cff5
// 0057d12e  85ed                 test ebp, ebp
// 0057d130  7f04                 jg 0x57d136
// 0057d132  85db                 test ebx, ebx
// 0057d134  7622                 jbe 0x57d158
// 0057d136  ff4638               inc dword ptr [esi + 0x38]
// 0057d139  8b4638               mov eax, dword ptr [esi + 0x38]
// 0057d13c  015e3c               add dword ptr [esi + 0x3c], ebx
// 0057d13f  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0057d142  3dff7f0000           cmp eax, 0x7fff
// 0057d147  7408                 je 0x57d151
// 0057d149  81f9a9030000         cmp ecx, 0x3a9
// 0057d14f  7607                 jbe 0x57d158
// 0057d151  8bc6                 mov eax, esi
// 0057d153  e888f8ffff           call 0x57c9e0
// 0057d158  8b842428010000       mov eax, dword ptr [esp + 0x128]
// 0057d15f  8b5018               mov edx, dword ptr [eax + 0x18]
// 0057d162  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0057d165  890a                 mov dword ptr [edx], ecx
// 0057d167  8b5018               mov edx, dword ptr [eax + 0x18]
// 0057d16a  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0057d16d  894a04               mov dword ptr [edx + 4], ecx
// 0057d170  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 0057d176  85c0                 test eax, eax
// 0057d178  7416                 je 0x57d190
// 0057d17a  837e4400             cmp dword ptr [esi + 0x44], 0
// 0057d17e  750d                 jne 0x57d18d
// 0057d180  8b5648               mov edx, dword ptr [esi + 0x48]
// 0057d183  42                   inc edx
// 0057d184  83e207               and edx, 7
// 0057d187  894644               mov dword ptr [esi + 0x44], eax
// 0057d18a  895648               mov dword ptr [esi + 0x48], edx
// 0057d18d  ff4e44               dec dword ptr [esi + 0x44]
// 0057d190  5f                   pop edi
// 0057d191  5e                   pop esi
// 0057d192  5d                   pop ebp
// 0057d193  b001                 mov al, 1
// 0057d195  5b                   pop ebx
// 0057d196  81c414010000         add esp, 0x114
// 0057d19c  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_AC_refine)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
