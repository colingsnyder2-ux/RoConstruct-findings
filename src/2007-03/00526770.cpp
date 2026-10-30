// roc 2007-03 00526770  unit: seg_00520000  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00526770
//
// 00526770  53                   push ebx
// 00526771  55                   push ebp
// 00526772  56                   push esi
// 00526773  57                   push edi
// 00526774  8bd8                 mov ebx, eax
// 00526776  85db                 test ebx, ebx
// 00526778  8bf9                 mov edi, ecx
// 0052677a  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 0052677d  7519                 jne 0x526798
// 0052677f  8b4720               mov eax, dword ptr [edi + 0x20]
// 00526782  8b08                 mov ecx, dword ptr [eax]
// 00526784  c7411428000000       mov dword ptr [ecx + 0x14], 0x28
// 0052678b  8b4720               mov eax, dword ptr [edi + 0x20]
// 0052678e  8b10                 mov edx, dword ptr [eax]
// 00526790  50                   push eax
// 00526791  8b02                 mov eax, dword ptr [edx]
// 00526793  ffd0                 call eax
// 00526795  83c404               add esp, 4
// 00526798  8bcb                 mov ecx, ebx
// 0052679a  be01000000           mov esi, 1
// 0052679f  d3e6                 shl esi, cl
// 005267a1  03eb                 add ebp, ebx
// 005267a3  b918000000           mov ecx, 0x18
// 005267a8  2bcd                 sub ecx, ebp
// 005267aa  83ee01               sub esi, 1
// 005267ad  23742414             and esi, dword ptr [esp + 0x14]
// 005267b1  d3e6                 shl esi, cl
// 005267b3  0b7708               or esi, dword ptr [edi + 8]
// 005267b6  83fd08               cmp ebp, 8
// 005267b9  7c50                 jl 0x52680b
// 005267bb  eb03                 jmp 0x5267c0
// 005267bd  8d4900               lea ecx, [ecx]
// 005267c0  8b0f                 mov ecx, dword ptr [edi]
// 005267c2  8bde                 mov ebx, esi
// 005267c4  c1fb10               sar ebx, 0x10
// 005267c7  81e3ff000000         and ebx, 0xff
// 005267cd  8819                 mov byte ptr [ecx], bl
// 005267cf  830701               add dword ptr [edi], 1
// 005267d2  834704ff             add dword ptr [edi + 4], -1
// 005267d6  7509                 jne 0x5267e1
// 005267d8  e863ffffff           call 0x526740
// 005267dd  84c0                 test al, al
// 005267df  7437                 je 0x526818
// 005267e1  81fbff000000         cmp ebx, 0xff
// 005267e7  7517                 jne 0x526800
// 005267e9  8b17                 mov edx, dword ptr [edi]
// 005267eb  c60200               mov byte ptr [edx], 0
// 005267ee  830701               add dword ptr [edi], 1
// 005267f1  834704ff             add dword ptr [edi + 4], -1
// 005267f5  7509                 jne 0x526800
// 005267f7  e844ffffff           call 0x526740
// 005267fc  84c0                 test al, al
// 005267fe  7418                 je 0x526818
// 00526800  83ed08               sub ebp, 8
// 00526803  c1e608               shl esi, 8
// 00526806  83fd08               cmp ebp, 8
// 00526809  7db5                 jge 0x5267c0
// 0052680b  897708               mov dword ptr [edi + 8], esi
// 0052680e  896f0c               mov dword ptr [edi + 0xc], ebp
// 00526811  5f                   pop edi
// 00526812  5e                   pop esi
// 00526813  5d                   pop ebp
// 00526814  b001                 mov al, 1
// 00526816  5b                   pop ebx
// 00526817  c3                   ret 
// 00526818  5f                   pop edi
// 00526819  5e                   pop esi
// 0052681a  5d                   pop ebp
// 0052681b  32c0                 xor al, al
// 0052681d  5b                   pop ebx
// 0052681e  c3                   ret 
// library jpeg-6b/jchuff.c (function _emit_bits)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
