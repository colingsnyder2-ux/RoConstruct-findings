// roc 2009-12 00571e80  unit: CSHA1  size: 818 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00571e80
//
// 00571e80  8b442410             mov eax, dword ptr [esp + 0x10]
// 00571e84  83ec24               sub esp, 0x24
// 00571e87  03c0                 add eax, eax
// 00571e89  55                   push ebp
// 00571e8a  03c0                 add eax, eax
// 00571e8c  57                   push edi
// 00571e8d  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00571e91  03c0                 add eax, eax
// 00571e93  85ff                 test edi, edi
// 00571e95  0f840c030000         je 0x5721a7
// 00571e9b  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00571e9f  85ed                 test ebp, ebp
// 00571ea1  0f8400030000         je 0x5721a7
// 00571ea7  8a0f                 mov cl, byte ptr [edi]
// 00571ea9  80f903               cmp cl, 3
// 00571eac  740a                 je 0x571eb8
// 00571eae  807d0000             cmp byte ptr [ebp], 0
// 00571eb2  0f84ef020000         je 0x5721a7
// 00571eb8  99                   cdq 
// 00571eb9  83e27f               and edx, 0x7f
// 00571ebc  03c2                 add eax, edx
// 00571ebe  53                   push ebx
// 00571ebf  8bd8                 mov ebx, eax
// 00571ec1  0fb6c1               movzx eax, cl
// 00571ec4  c1fb07               sar ebx, 7
// 00571ec7  83e801               sub eax, 1
// 00571eca  56                   push esi
// 00571ecb  895c2438             mov dword ptr [esp + 0x38], ebx
// 00571ecf  0f8492020000         je 0x572167
// 00571ed5  83e801               sub eax, 1
// 00571ed8  0f84ee010000         je 0x5720cc
// 00571ede  83e801               sub eax, 1
// 00571ee1  740d                 je 0x571ef0
// 00571ee3  5e                   pop esi
// 00571ee4  5b                   pop ebx
// 00571ee5  5f                   pop edi
// 00571ee6  b8fbffffff           mov eax, 0xfffffffb
// 00571eeb  5d                   pop ebp
// 00571eec  83c424               add esp, 0x24
// 00571eef  c3                   ret 
// 00571ef0  8b4701               mov eax, dword ptr [edi + 1]
// 00571ef3  8b4f05               mov ecx, dword ptr [edi + 5]
// 00571ef6  8b5709               mov edx, dword ptr [edi + 9]
// 00571ef9  89442414             mov dword ptr [esp + 0x14], eax
// 00571efd  8b470d               mov eax, dword ptr [edi + 0xd]
// 00571f00  894c2418             mov dword ptr [esp + 0x18], ecx
// 00571f04  8954241c             mov dword ptr [esp + 0x1c], edx
// 00571f08  89442420             mov dword ptr [esp + 0x20], eax
// 00571f0c  895c2410             mov dword ptr [esp + 0x10], ebx
// 00571f10  85db                 test ebx, ebx
// 00571f12  0f8ea7010000         jle 0x5720bf
// 00571f18  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 00571f1c  83c530               add ebp, 0x30
// 00571f1f  896c2444             mov dword ptr [esp + 0x44], ebp
// 00571f23  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00571f27  eb07                 jmp 0x571f30
// 00571f29  8da42400000000       lea esp, [esp]
// 00571f30  33f6                 xor esi, esi
// 00571f32  8b542418             mov edx, dword ptr [esp + 0x18]
// 00571f36  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00571f3a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00571f3e  8a5c2415             mov bl, byte ptr [esp + 0x15]
// 00571f42  894c2424             mov dword ptr [esp + 0x24], ecx
// 00571f46  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00571f4a  89542428             mov dword ptr [esp + 0x28], edx
// 00571f4e  8b542444             mov edx, dword ptr [esp + 0x44]
// 00571f52  8944242c             mov dword ptr [esp + 0x2c], eax
// 00571f56  52                   push edx
// 00571f57  8d442428             lea eax, [esp + 0x28]
// 00571f5b  894c2434             mov dword ptr [esp + 0x34], ecx
// 00571f5f  50                   push eax
// 00571f60  8bc8                 mov ecx, eax
// 00571f62  51                   push ecx
// 00571f63  e8e8f2ffff           call 0x571250
// 00571f68  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 00571f6d  02c0                 add al, al
// 00571f6f  8ad3                 mov dl, bl
// 00571f71  c0ea07               shr dl, 7
// 00571f74  0ad0                 or dl, al
// 00571f76  8a442422             mov al, byte ptr [esp + 0x22]
// 00571f7a  88542420             mov byte ptr [esp + 0x20], dl
// 00571f7e  8ac8                 mov cl, al
// 00571f80  c0e907               shr cl, 7
// 00571f83  02db                 add bl, bl
// 00571f85  0acb                 or cl, bl
// 00571f87  884c2421             mov byte ptr [esp + 0x21], cl
// 00571f8b  8a4c2423             mov cl, byte ptr [esp + 0x23]
// 00571f8f  8ad1                 mov dl, cl
// 00571f91  c0ea07               shr dl, 7
// 00571f94  02c0                 add al, al
// 00571f96  0ad0                 or dl, al
// 00571f98  8a442424             mov al, byte ptr [esp + 0x24]
// 00571f9c  88542422             mov byte ptr [esp + 0x22], dl
// 00571fa0  8ad0                 mov dl, al
// 00571fa2  c0ea07               shr dl, 7
// 00571fa5  02c9                 add cl, cl
// 00571fa7  0ad1                 or dl, cl
// 00571fa9  8a4c2425             mov cl, byte ptr [esp + 0x25]
// 00571fad  88542423             mov byte ptr [esp + 0x23], dl
// 00571fb1  8ad1                 mov dl, cl
// 00571fb3  c0ea07               shr dl, 7
// 00571fb6  02c0                 add al, al
// 00571fb8  0ad0                 or dl, al
// 00571fba  8a442426             mov al, byte ptr [esp + 0x26]
// 00571fbe  88542424             mov byte ptr [esp + 0x24], dl
// 00571fc2  8ad0                 mov dl, al
// 00571fc4  c0ea07               shr dl, 7
// 00571fc7  02c9                 add cl, cl
// 00571fc9  0ad1                 or dl, cl
// 00571fcb  8a4c2427             mov cl, byte ptr [esp + 0x27]
// 00571fcf  88542425             mov byte ptr [esp + 0x25], dl
// 00571fd3  8ad1                 mov dl, cl
// 00571fd5  c0ea07               shr dl, 7
// 00571fd8  02c0                 add al, al
// 00571fda  0ad0                 or dl, al
// 00571fdc  8a442428             mov al, byte ptr [esp + 0x28]
// 00571fe0  88542426             mov byte ptr [esp + 0x26], dl
// 00571fe4  8ad0                 mov dl, al
// 00571fe6  c0ea07               shr dl, 7
// 00571fe9  02c9                 add cl, cl
// 00571feb  0ad1                 or dl, cl
// 00571fed  8a4c2429             mov cl, byte ptr [esp + 0x29]
// 00571ff1  88542427             mov byte ptr [esp + 0x27], dl
// 00571ff5  8ad1                 mov dl, cl
// 00571ff7  c0ea07               shr dl, 7
// 00571ffa  02c0                 add al, al
// 00571ffc  0ad0                 or dl, al
// 00571ffe  8a44242a             mov al, byte ptr [esp + 0x2a]
// 00572002  88542428             mov byte ptr [esp + 0x28], dl
// 00572006  8ad0                 mov dl, al
// 00572008  c0ea07               shr dl, 7
// 0057200b  02c9                 add cl, cl
// 0057200d  0ad1                 or dl, cl
// 0057200f  8a4c242b             mov cl, byte ptr [esp + 0x2b]
// 00572013  88542429             mov byte ptr [esp + 0x29], dl
// 00572017  8ad1                 mov dl, cl
// 00572019  83c40c               add esp, 0xc
// 0057201c  c0ea07               shr dl, 7
// 0057201f  02c0                 add al, al
// 00572021  0ad0                 or dl, al
// 00572023  8a442420             mov al, byte ptr [esp + 0x20]
// 00572027  8854241e             mov byte ptr [esp + 0x1e], dl
// 0057202b  02c9                 add cl, cl
// 0057202d  8ad0                 mov dl, al
// 0057202f  c0ea07               shr dl, 7
// 00572032  0ad1                 or dl, cl
// 00572034  8a4c2421             mov cl, byte ptr [esp + 0x21]
// 00572038  8854241f             mov byte ptr [esp + 0x1f], dl
// 0057203c  8ad1                 mov dl, cl
// 0057203e  c0ea07               shr dl, 7
// 00572041  02c0                 add al, al
// 00572043  0ad0                 or dl, al
// 00572045  8a442422             mov al, byte ptr [esp + 0x22]
// 00572049  02c9                 add cl, cl
// 0057204b  88542420             mov byte ptr [esp + 0x20], dl
// 0057204f  8ad0                 mov dl, al
// 00572051  c0ea07               shr dl, 7
// 00572054  0ad1                 or dl, cl
// 00572056  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 0057205b  c0e907               shr cl, 7
// 0057205e  02c0                 add al, al
// 00572060  0ac8                 or cl, al
// 00572062  884c2422             mov byte ptr [esp + 0x22], cl
// 00572066  8bc6                 mov eax, esi
// 00572068  88542421             mov byte ptr [esp + 0x21], dl
// 0057206c  c1e803               shr eax, 3
// 0057206f  0fb61c28             movzx ebx, byte ptr [eax + ebp]
// 00572073  8bd6                 mov edx, esi
// 00572075  83e207               and edx, 7
// 00572078  b107                 mov cl, 7
// 0057207a  2aca                 sub cl, dl
// 0057207c  d2eb                 shr bl, cl
// 0057207e  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 00572083  80e301               and bl, 1
// 00572086  02c9                 add cl, cl
// 00572088  0ad9                 or bl, cl
// 0057208a  885c2423             mov byte ptr [esp + 0x23], bl
// 0057208e  0fb65c2424           movzx ebx, byte ptr [esp + 0x24]
// 00572093  80e380               and bl, 0x80
// 00572096  8aca                 mov cl, dl
// 00572098  d2eb                 shr bl, cl
// 0057209a  46                   inc esi
// 0057209b  301c38               xor byte ptr [eax + edi], bl
// 0057209e  81fe80000000         cmp esi, 0x80
// 005720a4  0f8c88feffff         jl 0x571f32
// 005720aa  8b442410             mov eax, dword ptr [esp + 0x10]
// 005720ae  48                   dec eax
// 005720af  89442410             mov dword ptr [esp + 0x10], eax
// 005720b3  85c0                 test eax, eax
// 005720b5  0f8f75feffff         jg 0x571f30
// 005720bb  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 005720bf  5e                   pop esi
// 005720c0  8bc3                 mov eax, ebx
// 005720c2  5b                   pop ebx
// 005720c3  5f                   pop edi
// 005720c4  c1e007               shl eax, 7
// 005720c7  5d                   pop ebp
// 005720c8  83c424               add esp, 0x24
// 005720cb  c3                   ret 
// 005720cc  8b742440             mov esi, dword ptr [esp + 0x40]
// 005720d0  83c530               add ebp, 0x30
// 005720d3  55                   push ebp
// 005720d4  8d542428             lea edx, [esp + 0x28]
// 005720d8  52                   push edx
// 005720d9  56                   push esi
// 005720da  e831f5ffff           call 0x571610
// 005720df  8b4f01               mov ecx, dword ptr [edi + 1]
// 005720e2  334c2430             xor ecx, dword ptr [esp + 0x30]
// 005720e6  8b442454             mov eax, dword ptr [esp + 0x54]
// 005720ea  8908                 mov dword ptr [eax], ecx
// 005720ec  8b5705               mov edx, dword ptr [edi + 5]
// 005720ef  33542434             xor edx, dword ptr [esp + 0x34]
// 005720f3  4b                   dec ebx
// 005720f4  895004               mov dword ptr [eax + 4], edx
// 005720f7  8b4f09               mov ecx, dword ptr [edi + 9]
// 005720fa  334c2438             xor ecx, dword ptr [esp + 0x38]
// 005720fe  83c40c               add esp, 0xc
// 00572101  894808               mov dword ptr [eax + 8], ecx
// 00572104  8b570d               mov edx, dword ptr [edi + 0xd]
// 00572107  33542430             xor edx, dword ptr [esp + 0x30]
// 0057210b  89500c               mov dword ptr [eax + 0xc], edx
// 0057210e  85db                 test ebx, ebx
// 00572110  7ea9                 jle 0x5720bb
// 00572112  8d7814               lea edi, [eax + 0x14]
// 00572115  55                   push ebp
// 00572116  8d442428             lea eax, [esp + 0x28]
// 0057211a  50                   push eax
// 0057211b  56                   push esi
// 0057211c  e8eff4ffff           call 0x571610
// 00572121  8b4ef0               mov ecx, dword ptr [esi - 0x10]
// 00572124  334c2430             xor ecx, dword ptr [esp + 0x30]
// 00572128  4b                   dec ebx
// 00572129  894ffc               mov dword ptr [edi - 4], ecx
// 0057212c  8b56f4               mov edx, dword ptr [esi - 0xc]
// 0057212f  33542434             xor edx, dword ptr [esp + 0x34]
// 00572133  83c40c               add esp, 0xc
// 00572136  8917                 mov dword ptr [edi], edx
// 00572138  8b46f8               mov eax, dword ptr [esi - 8]
// 0057213b  3344242c             xor eax, dword ptr [esp + 0x2c]
// 0057213f  83c610               add esi, 0x10
// 00572142  894704               mov dword ptr [edi + 4], eax
// 00572145  8b4eec               mov ecx, dword ptr [esi - 0x14]
// 00572148  334c2430             xor ecx, dword ptr [esp + 0x30]
// 0057214c  83c710               add edi, 0x10
// 0057214f  894ff8               mov dword ptr [edi - 8], ecx
// 00572152  85db                 test ebx, ebx
// 00572154  7fbf                 jg 0x572115
// 00572156  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0057215a  5e                   pop esi
// 0057215b  8bc3                 mov eax, ebx
// 0057215d  5b                   pop ebx
// 0057215e  5f                   pop edi
// 0057215f  c1e007               shl eax, 7
// 00572162  5d                   pop ebp
// 00572163  83c424               add esp, 0x24
// 00572166  c3                   ret 
// 00572167  8bf3                 mov esi, ebx
// 00572169  85db                 test ebx, ebx
// 0057216b  0f8e4effffff         jle 0x5720bf
// 00572171  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00572175  83c530               add ebp, 0x30
// 00572178  896c2444             mov dword ptr [esp + 0x44], ebp
// 0057217c  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 00572180  8b542444             mov edx, dword ptr [esp + 0x44]
// 00572184  52                   push edx
// 00572185  55                   push ebp
// 00572186  57                   push edi
// 00572187  e884f4ffff           call 0x571610
// 0057218c  4e                   dec esi
// 0057218d  83c40c               add esp, 0xc
// 00572190  83c710               add edi, 0x10
// 00572193  83c510               add ebp, 0x10
// 00572196  85f6                 test esi, esi
// 00572198  7fe6                 jg 0x572180
// 0057219a  5e                   pop esi
// 0057219b  8bc3                 mov eax, ebx
// 0057219d  5b                   pop ebx
// 0057219e  5f                   pop edi
// 0057219f  c1e007               shl eax, 7
// 005721a2  5d                   pop ebp
// 005721a3  83c424               add esp, 0x24
// 005721a6  c3                   ret 
// 005721a7  5f                   pop edi
// 005721a8  b8fbffffff           mov eax, 0xfffffffb
// 005721ad  5d                   pop ebp
// 005721ae  83c424               add esp, 0x24
// 005721b1  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?blockDecrypt@@YAHPAUcipherInstance@@PAUkeyInstance@@PAEH2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
