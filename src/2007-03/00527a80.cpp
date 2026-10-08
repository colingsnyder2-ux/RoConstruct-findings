// roc 2007-03 00527a80  unit: seg_00520000  size: 545 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00527a80
//
// 00527a80  81ec18010000         sub esp, 0x118
// 00527a86  8b84241c010000       mov eax, dword ptr [esp + 0x11c]
// 00527a8d  8b8830010000         mov ecx, dword ptr [eax + 0x130]
// 00527a93  8b5018               mov edx, dword ptr [eax + 0x18]
// 00527a96  53                   push ebx
// 00527a97  55                   push ebp
// 00527a98  8ba838010000         mov ebp, dword ptr [eax + 0x138]
// 00527a9e  56                   push esi
// 00527a9f  894c2414             mov dword ptr [esp + 0x14], ecx
// 00527aa3  8b0a                 mov ecx, dword ptr [edx]
// 00527aa5  57                   push edi
// 00527aa6  8bb85c010000         mov edi, dword ptr [eax + 0x15c]
// 00527aac  894f10               mov dword ptr [edi + 0x10], ecx
// 00527aaf  8b5018               mov edx, dword ptr [eax + 0x18]
// 00527ab2  8b4a04               mov ecx, dword ptr [edx + 4]
// 00527ab5  894f14               mov dword ptr [edi + 0x14], ecx
// 00527ab8  83b8bc00000000       cmp dword ptr [eax + 0xbc], 0
// 00527abf  7414                 je 0x527ad5
// 00527ac1  837f4400             cmp dword ptr [edi + 0x44], 0
// 00527ac5  750e                 jne 0x527ad5
// 00527ac7  8b5748               mov edx, dword ptr [edi + 0x48]
// 00527aca  52                   push edx
// 00527acb  8bc7                 mov eax, edi
// 00527acd  e84efbffff           call 0x527620
// 00527ad2  83c404               add esp, 4
// 00527ad5  8b842430010000       mov eax, dword ptr [esp + 0x130]
// 00527adc  8b8c242c010000       mov ecx, dword ptr [esp + 0x12c]
// 00527ae3  8b18                 mov ebx, dword ptr [eax]
// 00527ae5  8bb12c010000         mov esi, dword ptr [ecx + 0x12c]
// 00527aeb  8bc6                 mov eax, esi
// 00527aed  3b442418             cmp eax, dword ptr [esp + 0x18]
// 00527af1  895c2424             mov dword ptr [esp + 0x24], ebx
// 00527af5  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00527afd  7f2c                 jg 0x527b2b
// 00527aff  90                   nop 
// 00527b00  8b1485202c7a00       mov edx, dword ptr [eax*4 + 0x7a2c20]
// 00527b07  0fbf1453             movsx edx, word ptr [ebx + edx*2]
// 00527b0b  85d2                 test edx, edx
// 00527b0d  7d02                 jge 0x527b11
// 00527b0f  f7da                 neg edx
// 00527b11  8bcd                 mov ecx, ebp
// 00527b13  d3fa                 sar edx, cl
// 00527b15  83fa01               cmp edx, 1
// 00527b18  89548428             mov dword ptr [esp + eax*4 + 0x28], edx
// 00527b1c  7504                 jne 0x527b22
// 00527b1e  8944241c             mov dword ptr [esp + 0x1c], eax
// 00527b22  83c001               add eax, 1
// 00527b25  3b442418             cmp eax, dword ptr [esp + 0x18]
// 00527b29  7ed5                 jle 0x527b00
// 00527b2b  8b6f40               mov ebp, dword ptr [edi + 0x40]
// 00527b2e  036f3c               add ebp, dword ptr [edi + 0x3c]
// 00527b31  33db                 xor ebx, ebx
// 00527b33  8bce                 mov ecx, esi
// 00527b35  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 00527b39  895c2410             mov dword ptr [esp + 0x10], ebx
// 00527b3d  89742414             mov dword ptr [esp + 0x14], esi
// 00527b41  0f8f12010000         jg 0x527c59
// 00527b47  eb07                 jmp 0x527b50
// 00527b49  8da42400000000       lea esp, [esp]
// 00527b50  8b448c28             mov eax, dword ptr [esp + ecx*4 + 0x28]
// 00527b54  85c0                 test eax, eax
// 00527b56  89442420             mov dword ptr [esp + 0x20], eax
// 00527b5a  750a                 jne 0x527b66
// 00527b5c  8344241001           add dword ptr [esp + 0x10], 1
// 00527b61  e9b4000000           jmp 0x527c1a
// 00527b66  837c24100f           cmp dword ptr [esp + 0x10], 0xf
// 00527b6b  7e45                 jle 0x527bb2
// 00527b6d  8d4900               lea ecx, [ecx]
// 00527b70  3b4c241c             cmp ecx, dword ptr [esp + 0x1c]
// 00527b74  7f3c                 jg 0x527bb2
// 00527b76  8bc7                 mov eax, edi
// 00527b78  e823faffff           call 0x5275a0
// 00527b7d  8b4734               mov eax, dword ptr [edi + 0x34]
// 00527b80  bef0000000           mov esi, 0xf0
// 00527b85  8bcf                 mov ecx, edi
// 00527b87  e8b4f9ffff           call 0x527540
// 00527b8c  8b742410             mov esi, dword ptr [esp + 0x10]
// 00527b90  83ee10               sub esi, 0x10
// 00527b93  8bc3                 mov eax, ebx
// 00527b95  8bcd                 mov ecx, ebp
// 00527b97  89742410             mov dword ptr [esp + 0x10], esi
// 00527b9b  e8d0f9ffff           call 0x527570
// 00527ba0  8b6f40               mov ebp, dword ptr [edi + 0x40]
// 00527ba3  8b442420             mov eax, dword ptr [esp + 0x20]
// 00527ba7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00527bab  33db                 xor ebx, ebx
// 00527bad  83fe0f               cmp esi, 0xf
// 00527bb0  7fbe                 jg 0x527b70
// 00527bb2  83f801               cmp eax, 1
// 00527bb5  7e0a                 jle 0x527bc1
// 00527bb7  2401                 and al, 1
// 00527bb9  88042b               mov byte ptr [ebx + ebp], al
// 00527bbc  83c301               add ebx, 1
// 00527bbf  eb59                 jmp 0x527c1a
// 00527bc1  8bc7                 mov eax, edi
// 00527bc3  e8d8f9ffff           call 0x5275a0
// 00527bc8  8b742410             mov esi, dword ptr [esp + 0x10]
// 00527bcc  8b4734               mov eax, dword ptr [edi + 0x34]
// 00527bcf  c1e604               shl esi, 4
// 00527bd2  83c601               add esi, 1
// 00527bd5  8bcf                 mov ecx, edi
// 00527bd7  e864f9ffff           call 0x527540
// 00527bdc  8b442414             mov eax, dword ptr [esp + 0x14]
// 00527be0  8b0c85202c7a00       mov ecx, dword ptr [eax*4 + 0x7a2c20]
// 00527be7  8b442424             mov eax, dword ptr [esp + 0x24]
// 00527beb  33d2                 xor edx, edx
// 00527bed  66391448             cmp word ptr [eax + ecx*2], dx
// 00527bf1  b801000000           mov eax, 1
// 00527bf6  0f9dc2               setge dl
// 00527bf9  8bcf                 mov ecx, edi
// 00527bfb  52                   push edx
// 00527bfc  e85ff8ffff           call 0x527460
// 00527c01  83c404               add esp, 4
// 00527c04  8bc3                 mov eax, ebx
// 00527c06  8bcd                 mov ecx, ebp
// 00527c08  e863f9ffff           call 0x527570
// 00527c0d  8b6f40               mov ebp, dword ptr [edi + 0x40]
// 00527c10  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00527c14  33db                 xor ebx, ebx
// 00527c16  895c2410             mov dword ptr [esp + 0x10], ebx
// 00527c1a  83c101               add ecx, 1
// 00527c1d  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 00527c21  894c2414             mov dword ptr [esp + 0x14], ecx
// 00527c25  0f8e25ffffff         jle 0x527b50
// 00527c2b  837c241000           cmp dword ptr [esp + 0x10], 0
// 00527c30  7f04                 jg 0x527c36
// 00527c32  85db                 test ebx, ebx
// 00527c34  7623                 jbe 0x527c59
// 00527c36  83473801             add dword ptr [edi + 0x38], 1
// 00527c3a  8b4738               mov eax, dword ptr [edi + 0x38]
// 00527c3d  015f3c               add dword ptr [edi + 0x3c], ebx
// 00527c40  3dff7f0000           cmp eax, 0x7fff
// 00527c45  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 00527c48  7408                 je 0x527c52
// 00527c4a  81f9a9030000         cmp ecx, 0x3a9
// 00527c50  7607                 jbe 0x527c59
// 00527c52  8bc7                 mov eax, edi
// 00527c54  e847f9ffff           call 0x5275a0
// 00527c59  8b84242c010000       mov eax, dword ptr [esp + 0x12c]
// 00527c60  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00527c63  8b5710               mov edx, dword ptr [edi + 0x10]
// 00527c66  8911                 mov dword ptr [ecx], edx
// 00527c68  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00527c6b  8b5714               mov edx, dword ptr [edi + 0x14]
// 00527c6e  895104               mov dword ptr [ecx + 4], edx
// 00527c71  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 00527c77  85c0                 test eax, eax
// 00527c79  7419                 je 0x527c94
// 00527c7b  837f4400             cmp dword ptr [edi + 0x44], 0
// 00527c7f  750f                 jne 0x527c90
// 00527c81  894744               mov dword ptr [edi + 0x44], eax
// 00527c84  8b4748               mov eax, dword ptr [edi + 0x48]
// 00527c87  83c001               add eax, 1
// 00527c8a  83e007               and eax, 7
// 00527c8d  894748               mov dword ptr [edi + 0x48], eax
// 00527c90  834744ff             add dword ptr [edi + 0x44], -1
// 00527c94  5f                   pop edi
// 00527c95  5e                   pop esi
// 00527c96  5d                   pop ebp
// 00527c97  b001                 mov al, 1
// 00527c99  5b                   pop ebx
// 00527c9a  81c418010000         add esp, 0x118
// 00527ca0  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_AC_refine)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
