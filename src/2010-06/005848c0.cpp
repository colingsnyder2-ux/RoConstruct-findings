// from server: 100% by auto
// roc 2010-06 005848c0  unit: seg_00580000  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005848c0
//
// 005848c0  83ec28               sub esp, 0x28
// 005848c3  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005848c7  8b91a8010000         mov edx, dword ptr [ecx + 0x1a8]
// 005848cd  8b4218               mov eax, dword ptr [edx + 0x18]
// 005848d0  8b495c               mov ecx, dword ptr [ecx + 0x5c]
// 005848d3  56                   push esi
// 005848d4  8b30                 mov esi, dword ptr [eax]
// 005848d6  89742414             mov dword ptr [esp + 0x14], esi
// 005848da  8b7004               mov esi, dword ptr [eax + 4]
// 005848dd  8b4008               mov eax, dword ptr [eax + 8]
// 005848e0  894c2410             mov dword ptr [esp + 0x10], ecx
// 005848e4  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005848e8  89542424             mov dword ptr [esp + 0x24], edx
// 005848ec  89742418             mov dword ptr [esp + 0x18], esi
// 005848f0  89442420             mov dword ptr [esp + 0x20], eax
// 005848f4  85c9                 test ecx, ecx
// 005848f6  0f8ee0000000         jle 0x5849dc
// 005848fc  8b442434             mov eax, dword ptr [esp + 0x34]
// 00584900  53                   push ebx
// 00584901  55                   push ebp
// 00584902  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00584906  2bc5                 sub eax, ebp
// 00584908  57                   push edi
// 00584909  896c2410             mov dword ptr [esp + 0x10], ebp
// 0058490d  89442418             mov dword ptr [esp + 0x18], eax
// 00584911  894c2414             mov dword ptr [esp + 0x14], ecx
// 00584915  eb0d                 jmp 0x584924
// 00584917  eb07                 jmp 0x584920
// 00584919  8da42400000000       lea esp, [esp]
// 00584920  8b442418             mov eax, dword ptr [esp + 0x18]
// 00584924  8b4a30               mov ecx, dword ptr [edx + 0x30]
// 00584927  8b7500               mov esi, dword ptr [ebp]
// 0058492a  8b5a3c               mov ebx, dword ptr [edx + 0x3c]
// 0058492d  8b7a38               mov edi, dword ptr [edx + 0x38]
// 00584930  8b0428               mov eax, dword ptr [eax + ebp]
// 00584933  894c2434             mov dword ptr [esp + 0x34], ecx
// 00584937  c1e106               shl ecx, 6
// 0058493a  03d9                 add ebx, ecx
// 0058493c  8974243c             mov dword ptr [esp + 0x3c], esi
// 00584940  8b7234               mov esi, dword ptr [edx + 0x34]
// 00584943  03f1                 add esi, ecx
// 00584945  03f9                 add edi, ecx
// 00584947  895c2428             mov dword ptr [esp + 0x28], ebx
// 0058494b  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0058494f  33c9                 xor ecx, ecx
// 00584951  895c2448             mov dword ptr [esp + 0x48], ebx
// 00584955  85db                 test ebx, ebx
// 00584957  7663                 jbe 0x5849bc
// 00584959  8da42400000000       lea esp, [esp]
// 00584960  0fb610               movzx edx, byte ptr [eax]
// 00584963  8b1c8e               mov ebx, dword ptr [esi + ecx*4]
// 00584966  8b2c8f               mov ebp, dword ptr [edi + ecx*4]
// 00584969  03da                 add ebx, edx
// 0058496b  8b542420             mov edx, dword ptr [esp + 0x20]
// 0058496f  0fb61413             movzx edx, byte ptr [ebx + edx]
// 00584973  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00584977  03eb                 add ebp, ebx
// 00584979  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0058497d  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 00584981  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00584985  8b6c8d00             mov ebp, dword ptr [ebp + ecx*4]
// 00584989  40                   inc eax
// 0058498a  03d3                 add edx, ebx
// 0058498c  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00584990  40                   inc eax
// 00584991  03eb                 add ebp, ebx
// 00584993  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00584997  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 0058499b  03d3                 add edx, ebx
// 0058499d  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 005849a1  41                   inc ecx
// 005849a2  8813                 mov byte ptr [ebx], dl
// 005849a4  43                   inc ebx
// 005849a5  40                   inc eax
// 005849a6  83e10f               and ecx, 0xf
// 005849a9  836c244801           sub dword ptr [esp + 0x48], 1
// 005849ae  895c243c             mov dword ptr [esp + 0x3c], ebx
// 005849b2  75ac                 jne 0x584960
// 005849b4  8b542430             mov edx, dword ptr [esp + 0x30]
// 005849b8  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005849bc  8b442434             mov eax, dword ptr [esp + 0x34]
// 005849c0  40                   inc eax
// 005849c1  83e00f               and eax, 0xf
// 005849c4  83c504               add ebp, 4
// 005849c7  836c241401           sub dword ptr [esp + 0x14], 1
// 005849cc  894230               mov dword ptr [edx + 0x30], eax
// 005849cf  896c2410             mov dword ptr [esp + 0x10], ebp
// 005849d3  0f8547ffffff         jne 0x584920
// 005849d9  5f                   pop edi
// 005849da  5d                   pop ebp
// 005849db  5b                   pop ebx
// 005849dc  5e                   pop esi
// 005849dd  83c428               add esp, 0x28
// 005849e0  c3                   ret 
// library jpeg-6b/jquant1.c (function _quantize3_ord_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
