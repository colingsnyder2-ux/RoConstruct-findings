// roc 2008-06 0065e4b0  unit: seg_00650000  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065e4b0
//
// 0065e4b0  8b4708               mov eax, dword ptr [edi + 8]
// 0065e4b3  83ec0c               sub esp, 0xc
// 0065e4b6  55                   push ebp
// 0065e4b7  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0065e4bb  85c0                 test eax, eax
// 0065e4bd  7508                 jne 0x65e4c7
// 0065e4bf  83c8ff               or eax, 0xffffffff
// 0065e4c2  5d                   pop ebp
// 0065e4c3  83c40c               add esp, 0xc
// 0065e4c6  c3                   ret 
// 0065e4c7  83f803               cmp eax, 3
// 0065e4ca  7530                 jne 0x65e4fc
// 0065e4cc  dd07                 fld qword ptr [edi]
// 0065e4ce  dd5c2408             fstp qword ptr [esp + 8]
// 0065e4d2  dd442408             fld qword ptr [esp + 8]
// 0065e4d6  db5c2404             fistp dword ptr [esp + 4]
// 0065e4da  db442404             fild dword ptr [esp + 4]
// 0065e4de  dc5c2408             fcomp qword ptr [esp + 8]
// 0065e4e2  dfe0                 fnstsw ax
// 0065e4e4  f6c444               test ah, 0x44
// 0065e4e7  7a13                 jp 0x65e4fc
// 0065e4e9  8b442404             mov eax, dword ptr [esp + 4]
// 0065e4ed  85c0                 test eax, eax
// 0065e4ef  7e0b                 jle 0x65e4fc
// 0065e4f1  3b451c               cmp eax, dword ptr [ebp + 0x1c]
// 0065e4f4  7f06                 jg 0x65e4fc
// 0065e4f6  48                   dec eax
// 0065e4f7  5d                   pop ebp
// 0065e4f8  83c40c               add esp, 0xc
// 0065e4fb  c3                   ret 
// 0065e4fc  56                   push esi
// 0065e4fd  8bd7                 mov edx, edi
// 0065e4ff  8bc5                 mov eax, ebp
// 0065e501  e81affffff           call 0x65e420
// 0065e506  8bf0                 mov esi, eax
// 0065e508  53                   push ebx
// 0065e509  8da42400000000       lea esp, [esp]
// 0065e510  8d5e10               lea ebx, [esi + 0x10]
// 0065e513  57                   push edi
// 0065e514  53                   push ebx
// 0065e515  e85641fcff           call 0x622670
// 0065e51a  83c408               add esp, 8
// 0065e51d  85c0                 test eax, eax
// 0065e51f  7534                 jne 0x65e555
// 0065e521  837e180b             cmp dword ptr [esi + 0x18], 0xb
// 0065e525  750c                 jne 0x65e533
// 0065e527  837f0804             cmp dword ptr [edi + 8], 4
// 0065e52b  7c06                 jl 0x65e533
// 0065e52d  8b03                 mov eax, dword ptr [ebx]
// 0065e52f  3b07                 cmp eax, dword ptr [edi]
// 0065e531  7422                 je 0x65e555
// 0065e533  8b761c               mov esi, dword ptr [esi + 0x1c]
// 0065e536  85f6                 test esi, esi
// 0065e538  75d6                 jne 0x65e510
// 0065e53a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0065e53e  68f0c38400           push 0x84c3f0
// 0065e543  51                   push ecx
// 0065e544  e88752fcff           call 0x6237d0
// 0065e549  83c408               add esp, 8
// 0065e54c  5b                   pop ebx
// 0065e54d  5e                   pop esi
// 0065e54e  33c0                 xor eax, eax
// 0065e550  5d                   pop ebp
// 0065e551  83c40c               add esp, 0xc
// 0065e554  c3                   ret 
// 0065e555  8bc6                 mov eax, esi
// 0065e557  2b4510               sub eax, dword ptr [ebp + 0x10]
// 0065e55a  5b                   pop ebx
// 0065e55b  c1f805               sar eax, 5
// 0065e55e  03451c               add eax, dword ptr [ebp + 0x1c]
// 0065e561  5e                   pop esi
// 0065e562  5d                   pop ebp
// 0065e563  83c40c               add esp, 0xc
// 0065e566  c3                   ret 
// library lua-5.1.4/ltable.c (function _findindex)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltable.c
