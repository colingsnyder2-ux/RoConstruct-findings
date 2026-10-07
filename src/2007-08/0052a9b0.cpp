// roc 2007-08 0052a9b0  unit: seg_00520000  size: 301 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052a9b0
//
// 0052a9b0  83ec28               sub esp, 0x28
// 0052a9b3  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0052a9b7  8b91a8010000         mov edx, dword ptr [ecx + 0x1a8]
// 0052a9bd  8b4218               mov eax, dword ptr [edx + 0x18]
// 0052a9c0  8b495c               mov ecx, dword ptr [ecx + 0x5c]
// 0052a9c3  56                   push esi
// 0052a9c4  8b30                 mov esi, dword ptr [eax]
// 0052a9c6  89742414             mov dword ptr [esp + 0x14], esi
// 0052a9ca  8b7004               mov esi, dword ptr [eax + 4]
// 0052a9cd  8b4008               mov eax, dword ptr [eax + 8]
// 0052a9d0  894c2410             mov dword ptr [esp + 0x10], ecx
// 0052a9d4  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0052a9d8  85c9                 test ecx, ecx
// 0052a9da  89542424             mov dword ptr [esp + 0x24], edx
// 0052a9de  89742418             mov dword ptr [esp + 0x18], esi
// 0052a9e2  89442420             mov dword ptr [esp + 0x20], eax
// 0052a9e6  0f8eec000000         jle 0x52aad8
// 0052a9ec  8b442434             mov eax, dword ptr [esp + 0x34]
// 0052a9f0  53                   push ebx
// 0052a9f1  55                   push ebp
// 0052a9f2  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0052a9f6  2bc5                 sub eax, ebp
// 0052a9f8  57                   push edi
// 0052a9f9  896c2410             mov dword ptr [esp + 0x10], ebp
// 0052a9fd  89442418             mov dword ptr [esp + 0x18], eax
// 0052aa01  894c2414             mov dword ptr [esp + 0x14], ecx
// 0052aa05  eb0d                 jmp 0x52aa14
// 0052aa07  eb07                 jmp 0x52aa10
// 0052aa09  8da42400000000       lea esp, [esp]
// 0052aa10  8b442418             mov eax, dword ptr [esp + 0x18]
// 0052aa14  8b4a30               mov ecx, dword ptr [edx + 0x30]
// 0052aa17  8b7500               mov esi, dword ptr [ebp]
// 0052aa1a  8b5a3c               mov ebx, dword ptr [edx + 0x3c]
// 0052aa1d  8b7a38               mov edi, dword ptr [edx + 0x38]
// 0052aa20  8b0428               mov eax, dword ptr [eax + ebp]
// 0052aa23  894c2434             mov dword ptr [esp + 0x34], ecx
// 0052aa27  c1e106               shl ecx, 6
// 0052aa2a  03d9                 add ebx, ecx
// 0052aa2c  8974243c             mov dword ptr [esp + 0x3c], esi
// 0052aa30  8b7234               mov esi, dword ptr [edx + 0x34]
// 0052aa33  03f1                 add esi, ecx
// 0052aa35  03f9                 add edi, ecx
// 0052aa37  895c2428             mov dword ptr [esp + 0x28], ebx
// 0052aa3b  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0052aa3f  33c9                 xor ecx, ecx
// 0052aa41  85db                 test ebx, ebx
// 0052aa43  895c2448             mov dword ptr [esp + 0x48], ebx
// 0052aa47  766d                 jbe 0x52aab6
// 0052aa49  8da42400000000       lea esp, [esp]
// 0052aa50  0fb610               movzx edx, byte ptr [eax]
// 0052aa53  8b1c8e               mov ebx, dword ptr [esi + ecx*4]
// 0052aa56  8b2c8f               mov ebp, dword ptr [edi + ecx*4]
// 0052aa59  03da                 add ebx, edx
// 0052aa5b  8b542420             mov edx, dword ptr [esp + 0x20]
// 0052aa5f  0fb61413             movzx edx, byte ptr [ebx + edx]
// 0052aa63  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0052aa67  03eb                 add ebp, ebx
// 0052aa69  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0052aa6d  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 0052aa71  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0052aa75  8b6c8d00             mov ebp, dword ptr [ebp + ecx*4]
// 0052aa79  83c001               add eax, 1
// 0052aa7c  03d3                 add edx, ebx
// 0052aa7e  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0052aa82  83c001               add eax, 1
// 0052aa85  03eb                 add ebp, ebx
// 0052aa87  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0052aa8b  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 0052aa8f  03d3                 add edx, ebx
// 0052aa91  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0052aa95  83c101               add ecx, 1
// 0052aa98  8813                 mov byte ptr [ebx], dl
// 0052aa9a  83c301               add ebx, 1
// 0052aa9d  83c001               add eax, 1
// 0052aaa0  83e10f               and ecx, 0xf
// 0052aaa3  836c244801           sub dword ptr [esp + 0x48], 1
// 0052aaa8  895c243c             mov dword ptr [esp + 0x3c], ebx
// 0052aaac  75a2                 jne 0x52aa50
// 0052aaae  8b542430             mov edx, dword ptr [esp + 0x30]
// 0052aab2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0052aab6  8b442434             mov eax, dword ptr [esp + 0x34]
// 0052aaba  83c001               add eax, 1
// 0052aabd  83e00f               and eax, 0xf
// 0052aac0  83c504               add ebp, 4
// 0052aac3  836c241401           sub dword ptr [esp + 0x14], 1
// 0052aac8  894230               mov dword ptr [edx + 0x30], eax
// 0052aacb  896c2410             mov dword ptr [esp + 0x10], ebp
// 0052aacf  0f853bffffff         jne 0x52aa10
// 0052aad5  5f                   pop edi
// 0052aad6  5d                   pop ebp
// 0052aad7  5b                   pop ebx
// 0052aad8  5e                   pop esi
// 0052aad9  83c428               add esp, 0x28
// 0052aadc  c3                   ret 
// library jpeg-6b/jquant1.c (function _quantize3_ord_dither)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
