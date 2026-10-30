// from server: 100% by auto
// roc 2008-06 0065b9d0  unit: RBX::BallBallContact  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065b9d0
//
// 0065b9d0  8b460c               mov eax, dword ptr [esi + 0xc]
// 0065b9d3  f6400503             test byte ptr [eax + 5], 3
// 0065b9d7  740a                 je 0x65b9e3
// 0065b9d9  50                   push eax
// 0065b9da  53                   push ebx
// 0065b9db  e8f0fbffff           call 0x65b5d0
// 0065b9e0  83c408               add esp, 8
// 0065b9e3  807e0600             cmp byte ptr [esi + 6], 0
// 0065b9e7  55                   push ebp
// 0065b9e8  57                   push edi
// 0065b9e9  7432                 je 0x65ba1d
// 0065b9eb  33ed                 xor ebp, ebp
// 0065b9ed  807e0700             cmp byte ptr [esi + 7], 0
// 0065b9f1  766c                 jbe 0x65ba5f
// 0065b9f3  8d7e18               lea edi, [esi + 0x18]
// 0065b9f6  837f0804             cmp dword ptr [edi + 8], 4
// 0065b9fa  7c12                 jl 0x65ba0e
// 0065b9fc  8b07                 mov eax, dword ptr [edi]
// 0065b9fe  f6400503             test byte ptr [eax + 5], 3
// 0065ba02  740a                 je 0x65ba0e
// 0065ba04  50                   push eax
// 0065ba05  53                   push ebx
// 0065ba06  e8c5fbffff           call 0x65b5d0
// 0065ba0b  83c408               add esp, 8
// 0065ba0e  0fb64607             movzx eax, byte ptr [esi + 7]
// 0065ba12  45                   inc ebp
// 0065ba13  83c710               add edi, 0x10
// 0065ba16  3be8                 cmp ebp, eax
// 0065ba18  7cdc                 jl 0x65b9f6
// 0065ba1a  5f                   pop edi
// 0065ba1b  5d                   pop ebp
// 0065ba1c  c3                   ret 
// 0065ba1d  8b4610               mov eax, dword ptr [esi + 0x10]
// 0065ba20  f6400503             test byte ptr [eax + 5], 3
// 0065ba24  740a                 je 0x65ba30
// 0065ba26  50                   push eax
// 0065ba27  53                   push ebx
// 0065ba28  e8a3fbffff           call 0x65b5d0
// 0065ba2d  83c408               add esp, 8
// 0065ba30  33ff                 xor edi, edi
// 0065ba32  807e0700             cmp byte ptr [esi + 7], 0
// 0065ba36  7627                 jbe 0x65ba5f
// 0065ba38  8d6e14               lea ebp, [esi + 0x14]
// 0065ba3b  eb03                 jmp 0x65ba40
// 0065ba3d  8d4900               lea ecx, [ecx]
// 0065ba40  8b4500               mov eax, dword ptr [ebp]
// 0065ba43  f6400503             test byte ptr [eax + 5], 3
// 0065ba47  740a                 je 0x65ba53
// 0065ba49  50                   push eax
// 0065ba4a  53                   push ebx
// 0065ba4b  e880fbffff           call 0x65b5d0
// 0065ba50  83c408               add esp, 8
// 0065ba53  0fb64e07             movzx ecx, byte ptr [esi + 7]
// 0065ba57  47                   inc edi
// 0065ba58  83c504               add ebp, 4
// 0065ba5b  3bf9                 cmp edi, ecx
// 0065ba5d  7ce1                 jl 0x65ba40
// 0065ba5f  5f                   pop edi
// 0065ba60  5d                   pop ebp
// 0065ba61  c3                   ret 
// library lua-5.1.4/lgc.c (function _traverseclosure)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
