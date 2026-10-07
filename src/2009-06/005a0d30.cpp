// roc 2009-06 005a0d30  unit: seg_005a0000  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a0d30
//
// 005a0d30  83ec28               sub esp, 0x28
// 005a0d33  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a0d37  8b91a8010000         mov edx, dword ptr [ecx + 0x1a8]
// 005a0d3d  8b4218               mov eax, dword ptr [edx + 0x18]
// 005a0d40  8b495c               mov ecx, dword ptr [ecx + 0x5c]
// 005a0d43  56                   push esi
// 005a0d44  8b30                 mov esi, dword ptr [eax]
// 005a0d46  89742414             mov dword ptr [esp + 0x14], esi
// 005a0d4a  8b7004               mov esi, dword ptr [eax + 4]
// 005a0d4d  8b4008               mov eax, dword ptr [eax + 8]
// 005a0d50  894c2410             mov dword ptr [esp + 0x10], ecx
// 005a0d54  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005a0d58  89542424             mov dword ptr [esp + 0x24], edx
// 005a0d5c  89742418             mov dword ptr [esp + 0x18], esi
// 005a0d60  89442420             mov dword ptr [esp + 0x20], eax
// 005a0d64  85c9                 test ecx, ecx
// 005a0d66  0f8ee0000000         jle 0x5a0e4c
// 005a0d6c  8b442434             mov eax, dword ptr [esp + 0x34]
// 005a0d70  53                   push ebx
// 005a0d71  55                   push ebp
// 005a0d72  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 005a0d76  2bc5                 sub eax, ebp
// 005a0d78  57                   push edi
// 005a0d79  896c2410             mov dword ptr [esp + 0x10], ebp
// 005a0d7d  89442418             mov dword ptr [esp + 0x18], eax
// 005a0d81  894c2414             mov dword ptr [esp + 0x14], ecx
// 005a0d85  eb0d                 jmp 0x5a0d94
// 005a0d87  eb07                 jmp 0x5a0d90
// 005a0d89  8da42400000000       lea esp, [esp]
// 005a0d90  8b442418             mov eax, dword ptr [esp + 0x18]
// 005a0d94  8b4a30               mov ecx, dword ptr [edx + 0x30]
// 005a0d97  8b7500               mov esi, dword ptr [ebp]
// 005a0d9a  8b5a3c               mov ebx, dword ptr [edx + 0x3c]
// 005a0d9d  8b7a38               mov edi, dword ptr [edx + 0x38]
// 005a0da0  8b0428               mov eax, dword ptr [eax + ebp]
// 005a0da3  894c2434             mov dword ptr [esp + 0x34], ecx
// 005a0da7  c1e106               shl ecx, 6
// 005a0daa  03d9                 add ebx, ecx
// 005a0dac  8974243c             mov dword ptr [esp + 0x3c], esi
// 005a0db0  8b7234               mov esi, dword ptr [edx + 0x34]
// 005a0db3  03f1                 add esi, ecx
// 005a0db5  03f9                 add edi, ecx
// 005a0db7  895c2428             mov dword ptr [esp + 0x28], ebx
// 005a0dbb  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005a0dbf  33c9                 xor ecx, ecx
// 005a0dc1  895c2448             mov dword ptr [esp + 0x48], ebx
// 005a0dc5  85db                 test ebx, ebx
// 005a0dc7  7663                 jbe 0x5a0e2c
// 005a0dc9  8da42400000000       lea esp, [esp]
// 005a0dd0  0fb610               movzx edx, byte ptr [eax]
// 005a0dd3  8b1c8e               mov ebx, dword ptr [esi + ecx*4]
// 005a0dd6  8b2c8f               mov ebp, dword ptr [edi + ecx*4]
// 005a0dd9  03da                 add ebx, edx
// 005a0ddb  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a0ddf  0fb61413             movzx edx, byte ptr [ebx + edx]
// 005a0de3  0fb65801             movzx ebx, byte ptr [eax + 1]
// 005a0de7  03eb                 add ebp, ebx
// 005a0de9  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005a0ded  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 005a0df1  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 005a0df5  8b6c8d00             mov ebp, dword ptr [ebp + ecx*4]
// 005a0df9  40                   inc eax
// 005a0dfa  03d3                 add edx, ebx
// 005a0dfc  0fb65801             movzx ebx, byte ptr [eax + 1]
// 005a0e00  40                   inc eax
// 005a0e01  03eb                 add ebp, ebx
// 005a0e03  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 005a0e07  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 005a0e0b  03d3                 add edx, ebx
// 005a0e0d  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 005a0e11  41                   inc ecx
// 005a0e12  8813                 mov byte ptr [ebx], dl
// 005a0e14  43                   inc ebx
// 005a0e15  40                   inc eax
// 005a0e16  83e10f               and ecx, 0xf
// 005a0e19  836c244801           sub dword ptr [esp + 0x48], 1
// 005a0e1e  895c243c             mov dword ptr [esp + 0x3c], ebx
// 005a0e22  75ac                 jne 0x5a0dd0
// 005a0e24  8b542430             mov edx, dword ptr [esp + 0x30]
// 005a0e28  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005a0e2c  8b442434             mov eax, dword ptr [esp + 0x34]
// 005a0e30  40                   inc eax
// 005a0e31  83e00f               and eax, 0xf
// 005a0e34  83c504               add ebp, 4
// 005a0e37  836c241401           sub dword ptr [esp + 0x14], 1
// 005a0e3c  894230               mov dword ptr [edx + 0x30], eax
// 005a0e3f  896c2410             mov dword ptr [esp + 0x10], ebp
// 005a0e43  0f8547ffffff         jne 0x5a0d90
// 005a0e49  5f                   pop edi
// 005a0e4a  5d                   pop ebp
// 005a0e4b  5b                   pop ebx
// 005a0e4c  5e                   pop esi
// 005a0e4d  83c428               add esp, 0x28
// 005a0e50  c3                   ret 
// library jpeg-6b/jquant1.c (function _quantize3_ord_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
