// roc 2008-06 0065c9d0  unit: RBX::BallBallContact  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065c9d0
//
// 0065c9d0  83ec08               sub esp, 8
// 0065c9d3  53                   push ebx
// 0065c9d4  55                   push ebp
// 0065c9d5  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0065c9d9  56                   push esi
// 0065c9da  8b742418             mov esi, dword ptr [esp + 0x18]
// 0065c9de  57                   push edi
// 0065c9df  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0065c9e7  eb07                 jmp 0x65c9f0
// 0065c9e9  8da42400000000       lea esp, [esp]
// 0065c9f0  837d0805             cmp dword ptr [ebp + 8], 5
// 0065c9f4  0f8587000000         jne 0x65ca81
// 0065c9fa  8b442424             mov eax, dword ptr [esp + 0x24]
// 0065c9fe  8b5d00               mov ebx, dword ptr [ebp]
// 0065ca01  50                   push eax
// 0065ca02  53                   push ebx
// 0065ca03  56                   push esi
// 0065ca04  e847210000           call 0x65eb50
// 0065ca09  8bc8                 mov ecx, eax
// 0065ca0b  83c40c               add esp, 0xc
// 0065ca0e  83790800             cmp dword ptr [ecx + 8], 0
// 0065ca12  894c2414             mov dword ptr [esp + 0x14], ecx
// 0065ca16  752c                 jne 0x65ca44
// 0065ca18  8b4308               mov eax, dword ptr [ebx + 8]
// 0065ca1b  85c0                 test eax, eax
// 0065ca1d  7425                 je 0x65ca44
// 0065ca1f  f6400602             test byte ptr [eax + 6], 2
// 0065ca23  751f                 jne 0x65ca44
// 0065ca25  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0065ca28  8b91c0000000         mov edx, dword ptr [ecx + 0xc0]
// 0065ca2e  52                   push edx
// 0065ca2f  6a01                 push 1
// 0065ca31  50                   push eax
// 0065ca32  e899fbffff           call 0x65c5d0
// 0065ca37  8bf8                 mov edi, eax
// 0065ca39  83c40c               add esp, 0xc
// 0065ca3c  85ff                 test edi, edi
// 0065ca3e  7564                 jne 0x65caa4
// 0065ca40  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065ca44  8b442428             mov eax, dword ptr [esp + 0x28]
// 0065ca48  8b10                 mov edx, dword ptr [eax]
// 0065ca4a  8911                 mov dword ptr [ecx], edx
// 0065ca4c  8b5004               mov edx, dword ptr [eax + 4]
// 0065ca4f  895104               mov dword ptr [ecx + 4], edx
// 0065ca52  8b5008               mov edx, dword ptr [eax + 8]
// 0065ca55  895108               mov dword ptr [ecx + 8], edx
// 0065ca58  b904000000           mov ecx, 4
// 0065ca5d  394808               cmp dword ptr [eax + 8], ecx
// 0065ca60  7c6a                 jl 0x65cacc
// 0065ca62  8b00                 mov eax, dword ptr [eax]
// 0065ca64  f6400503             test byte ptr [eax + 5], 3
// 0065ca68  7462                 je 0x65cacc
// 0065ca6a  844b05               test byte ptr [ebx + 5], cl
// 0065ca6d  745d                 je 0x65cacc
// 0065ca6f  53                   push ebx
// 0065ca70  56                   push esi
// 0065ca71  e84afaffff           call 0x65c4c0
// 0065ca76  83c408               add esp, 8
// 0065ca79  5f                   pop edi
// 0065ca7a  5e                   pop esi
// 0065ca7b  5d                   pop ebp
// 0065ca7c  5b                   pop ebx
// 0065ca7d  83c408               add esp, 8
// 0065ca80  c3                   ret 
// 0065ca81  6a01                 push 1
// 0065ca83  55                   push ebp
// 0065ca84  56                   push esi
// 0065ca85  e876fbffff           call 0x65c600
// 0065ca8a  8bf8                 mov edi, eax
// 0065ca8c  83c40c               add esp, 0xc
// 0065ca8f  837f0800             cmp dword ptr [edi + 8], 0
// 0065ca93  750f                 jne 0x65caa4
// 0065ca95  6824c38400           push 0x84c324
// 0065ca9a  55                   push ebp
// 0065ca9b  56                   push esi
// 0065ca9c  e85f6ffcff           call 0x623a00
// 0065caa1  83c40c               add esp, 0xc
// 0065caa4  837f0806             cmp dword ptr [edi + 8], 6
// 0065caa8  742a                 je 0x65cad4
// 0065caaa  8b442410             mov eax, dword ptr [esp + 0x10]
// 0065caae  40                   inc eax
// 0065caaf  83f864               cmp eax, 0x64
// 0065cab2  8bef                 mov ebp, edi
// 0065cab4  89442410             mov dword ptr [esp + 0x10], eax
// 0065cab8  0f8c32ffffff         jl 0x65c9f0
// 0065cabe  682cc38400           push 0x84c32c
// 0065cac3  56                   push esi
// 0065cac4  e8076dfcff           call 0x6237d0
// 0065cac9  83c408               add esp, 8
// 0065cacc  5f                   pop edi
// 0065cacd  5e                   pop esi
// 0065cace  5d                   pop ebp
// 0065cacf  5b                   pop ebx
// 0065cad0  83c408               add esp, 8
// 0065cad3  c3                   ret 
// 0065cad4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0065cad8  8b542424             mov edx, dword ptr [esp + 0x24]
// 0065cadc  57                   push edi
// 0065cadd  8bc5                 mov eax, ebp
// 0065cadf  e86cfdffff           call 0x65c850
// 0065cae4  83c404               add esp, 4
// 0065cae7  5f                   pop edi
// 0065cae8  5e                   pop esi
// 0065cae9  5d                   pop ebp
// 0065caea  5b                   pop ebx
// 0065caeb  83c408               add esp, 8
// 0065caee  c3                   ret 
// library lua-5.1.4/lvm.c (function _luaV_settable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
