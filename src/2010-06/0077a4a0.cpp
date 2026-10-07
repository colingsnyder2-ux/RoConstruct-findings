// roc 2010-06 0077a4a0  unit: RBX::PartDropTool  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077a4a0
//
// 0077a4a0  8b460c               mov eax, dword ptr [esi + 0xc]
// 0077a4a3  f6400503             test byte ptr [eax + 5], 3
// 0077a4a7  740a                 je 0x77a4b3
// 0077a4a9  50                   push eax
// 0077a4aa  53                   push ebx
// 0077a4ab  e8f0fbffff           call 0x77a0a0
// 0077a4b0  83c408               add esp, 8
// 0077a4b3  807e0600             cmp byte ptr [esi + 6], 0
// 0077a4b7  55                   push ebp
// 0077a4b8  57                   push edi
// 0077a4b9  7432                 je 0x77a4ed
// 0077a4bb  33ed                 xor ebp, ebp
// 0077a4bd  807e0700             cmp byte ptr [esi + 7], 0
// 0077a4c1  766c                 jbe 0x77a52f
// 0077a4c3  8d7e18               lea edi, [esi + 0x18]
// 0077a4c6  837f0804             cmp dword ptr [edi + 8], 4
// 0077a4ca  7c12                 jl 0x77a4de
// 0077a4cc  8b07                 mov eax, dword ptr [edi]
// 0077a4ce  f6400503             test byte ptr [eax + 5], 3
// 0077a4d2  740a                 je 0x77a4de
// 0077a4d4  50                   push eax
// 0077a4d5  53                   push ebx
// 0077a4d6  e8c5fbffff           call 0x77a0a0
// 0077a4db  83c408               add esp, 8
// 0077a4de  0fb64607             movzx eax, byte ptr [esi + 7]
// 0077a4e2  45                   inc ebp
// 0077a4e3  83c710               add edi, 0x10
// 0077a4e6  3be8                 cmp ebp, eax
// 0077a4e8  7cdc                 jl 0x77a4c6
// 0077a4ea  5f                   pop edi
// 0077a4eb  5d                   pop ebp
// 0077a4ec  c3                   ret 
// 0077a4ed  8b4610               mov eax, dword ptr [esi + 0x10]
// 0077a4f0  f6400503             test byte ptr [eax + 5], 3
// 0077a4f4  740a                 je 0x77a500
// 0077a4f6  50                   push eax
// 0077a4f7  53                   push ebx
// 0077a4f8  e8a3fbffff           call 0x77a0a0
// 0077a4fd  83c408               add esp, 8
// 0077a500  33ff                 xor edi, edi
// 0077a502  807e0700             cmp byte ptr [esi + 7], 0
// 0077a506  7627                 jbe 0x77a52f
// 0077a508  8d6e14               lea ebp, [esi + 0x14]
// 0077a50b  eb03                 jmp 0x77a510
// 0077a50d  8d4900               lea ecx, [ecx]
// 0077a510  8b4500               mov eax, dword ptr [ebp]
// 0077a513  f6400503             test byte ptr [eax + 5], 3
// 0077a517  740a                 je 0x77a523
// 0077a519  50                   push eax
// 0077a51a  53                   push ebx
// 0077a51b  e880fbffff           call 0x77a0a0
// 0077a520  83c408               add esp, 8
// 0077a523  0fb64e07             movzx ecx, byte ptr [esi + 7]
// 0077a527  47                   inc edi
// 0077a528  83c504               add ebp, 4
// 0077a52b  3bf9                 cmp edi, ecx
// 0077a52d  7ce1                 jl 0x77a510
// 0077a52f  5f                   pop edi
// 0077a530  5d                   pop ebp
// 0077a531  c3                   ret 
// library lua-5.1.4/lgc.c (function _traverseclosure)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
