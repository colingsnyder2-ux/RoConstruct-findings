// roc 2010-06 007812d0  unit: seg_00780000  size: 274 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007812d0
//
// 007812d0  83ec18               sub esp, 0x18
// 007812d3  53                   push ebx
// 007812d4  56                   push esi
// 007812d5  57                   push edi
// 007812d6  8bf0                 mov esi, eax
// 007812d8  33db                 xor ebx, ebx
// 007812da  55                   push ebp
// 007812db  eb03                 jmp 0x7812e0
// 007812dd  8d4900               lea ecx, [ecx]
// 007812e0  817e101d010000       cmp dword ptr [esi + 0x10], 0x11d
// 007812e7  7424                 je 0x78130d
// 007812e9  681d010000           push 0x11d
// 007812ee  56                   push esi
// 007812ef  e89c110000           call 0x782490
// 007812f4  50                   push eax
// 007812f5  8b4634               mov eax, dword ptr [esi + 0x34]
// 007812f8  683830a500           push 0xa53038
// 007812fd  50                   push eax
// 007812fe  e8dd1afbff           call 0x732de0
// 00781303  50                   push eax
// 00781304  56                   push esi
// 00781305  e886120000           call 0x782590
// 0078130a  83c41c               add esp, 0x1c
// 0078130d  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 00781310  56                   push esi
// 00781311  e86a260000           call 0x783980
// 00781316  8b7e30               mov edi, dword ptr [esi + 0x30]
// 00781319  0fb64f32             movzx ecx, byte ptr [edi + 0x32]
// 0078131d  8d541901             lea edx, [ecx + ebx + 1]
// 00781321  83c404               add esp, 4
// 00781324  81fac8000000         cmp edx, 0xc8
// 0078132a  7e47                 jle 0x781373
// 0078132c  8b07                 mov eax, dword ptr [edi]
// 0078132e  8b403c               mov eax, dword ptr [eax + 0x3c]
// 00781331  68dc30a500           push 0xa530dc
// 00781336  68c8000000           push 0xc8
// 0078133b  85c0                 test eax, eax
// 0078133d  7513                 jne 0x781352
// 0078133f  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00781342  687030a500           push 0xa53070
// 00781347  51                   push ecx
// 00781348  e8931afbff           call 0x732de0
// 0078134d  83c410               add esp, 0x10
// 00781350  eb12                 jmp 0x781364
// 00781352  8b5710               mov edx, dword ptr [edi + 0x10]
// 00781355  50                   push eax
// 00781356  684830a500           push 0xa53048
// 0078135b  52                   push edx
// 0078135c  e87f1afbff           call 0x732de0
// 00781361  83c414               add esp, 0x14
// 00781364  6a00                 push 0
// 00781366  50                   push eax
// 00781367  8b470c               mov eax, dword ptr [edi + 0xc]
// 0078136a  50                   push eax
// 0078136b  e880110000           call 0x7824f0
// 00781370  83c40c               add esp, 0xc
// 00781373  55                   push ebp
// 00781374  56                   push esi
// 00781375  e8a6d8ffff           call 0x77ec20
// 0078137a  0fb64f32             movzx ecx, byte ptr [edi + 0x32]
// 0078137e  03cb                 add ecx, ebx
// 00781380  83c408               add esp, 8
// 00781383  6689844fac000000     mov word ptr [edi + ecx*2 + 0xac], ax
// 0078138b  43                   inc ebx
// 0078138c  837e102c             cmp dword ptr [esi + 0x10], 0x2c
// 00781390  750e                 jne 0x7813a0
// 00781392  56                   push esi
// 00781393  e8e8250000           call 0x783980
// 00781398  83c404               add esp, 4
// 0078139b  e940ffffff           jmp 0x7812e0
// 007813a0  837e103d             cmp dword ptr [esi + 0x10], 0x3d
// 007813a4  5d                   pop ebp
// 007813a5  7514                 jne 0x7813bb
// 007813a7  56                   push esi
// 007813a8  e8d3250000           call 0x783980
// 007813ad  83c404               add esp, 4
// 007813b0  8d7c240c             lea edi, [esp + 0xc]
// 007813b4  e8d7e6ffff           call 0x77fa90
// 007813b9  eb06                 jmp 0x7813c1
// 007813bb  33c0                 xor eax, eax
// 007813bd  8944240c             mov dword ptr [esp + 0xc], eax
// 007813c1  50                   push eax
// 007813c2  8d4c2410             lea ecx, [esp + 0x10]
// 007813c6  8bd3                 mov edx, ebx
// 007813c8  8bc6                 mov eax, esi
// 007813ca  e8f1dbffff           call 0x77efc0
// 007813cf  83c404               add esp, 4
// 007813d2  8bd3                 mov edx, ebx
// 007813d4  8bc6                 mov eax, esi
// 007813d6  e8e5d8ffff           call 0x77ecc0
// 007813db  5f                   pop edi
// 007813dc  5e                   pop esi
// 007813dd  5b                   pop ebx
// 007813de  83c418               add esp, 0x18
// 007813e1  c3                   ret 
// library lua-5.1.4/lparser.c (function _localstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
