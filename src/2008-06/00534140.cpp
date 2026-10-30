// from server: 100% by auto
// roc 2008-06 00534140  unit: seg_00530000  size: 293 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00534140
//
// 00534140  83ec10               sub esp, 0x10
// 00534143  8b442420             mov eax, dword ptr [esp + 0x20]
// 00534147  8b08                 mov ecx, dword ptr [eax]
// 00534149  8b542414             mov edx, dword ptr [esp + 0x14]
// 0053414d  33c0                 xor eax, eax
// 0053414f  398214010000         cmp dword ptr [edx + 0x114], eax
// 00534155  894c240c             mov dword ptr [esp + 0xc], ecx
// 00534159  0f8e02010000         jle 0x534261
// 0053415f  53                   push ebx
// 00534160  55                   push ebp
// 00534161  56                   push esi
// 00534162  8b742428             mov esi, dword ptr [esp + 0x28]
// 00534166  57                   push edi
// 00534167  89742430             mov dword ptr [esp + 0x30], esi
// 0053416b  eb03                 jmp 0x534170
// 0053416d  8d4900               lea ecx, [ecx]
// 00534170  33c9                 xor ecx, ecx
// 00534172  894c2414             mov dword ptr [esp + 0x14], ecx
// 00534176  8b2e                 mov ebp, dword ptr [esi]
// 00534178  85c9                 test ecx, ecx
// 0053417a  7505                 jne 0x534181
// 0053417c  8b7efc               mov edi, dword ptr [esi - 4]
// 0053417f  eb03                 jmp 0x534184
// 00534181  8b7e04               mov edi, dword ptr [esi + 4]
// 00534184  0fb67500             movzx esi, byte ptr [ebp]
// 00534188  0fb617               movzx edx, byte ptr [edi]
// 0053418b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0053418f  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00534192  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00534196  40                   inc eax
// 00534197  45                   inc ebp
// 00534198  89442418             mov dword ptr [esp + 0x18], eax
// 0053419c  0fb64500             movzx eax, byte ptr [ebp]
// 005341a0  8d3476               lea esi, [esi + esi*2]
// 005341a3  03f2                 add esi, edx
// 005341a5  0fb65701             movzx edx, byte ptr [edi + 1]
// 005341a9  47                   inc edi
// 005341aa  8d0440               lea eax, [eax + eax*2]
// 005341ad  03c2                 add eax, edx
// 005341af  8d14b508000000       lea edx, [esi*4 + 8]
// 005341b6  c1fa04               sar edx, 4
// 005341b9  8811                 mov byte ptr [ecx], dl
// 005341bb  8d1470               lea edx, [eax + esi*2]
// 005341be  8d541607             lea edx, [esi + edx + 7]
// 005341c2  41                   inc ecx
// 005341c3  c1fa04               sar edx, 4
// 005341c6  8811                 mov byte ptr [ecx], dl
// 005341c8  8b5b28               mov ebx, dword ptr [ebx + 0x28]
// 005341cb  47                   inc edi
// 005341cc  45                   inc ebp
// 005341cd  41                   inc ecx
// 005341ce  83eb02               sub ebx, 2
// 005341d1  8bd6                 mov edx, esi
// 005341d3  8bf0                 mov esi, eax
// 005341d5  895c2410             mov dword ptr [esp + 0x10], ebx
// 005341d9  7438                 je 0x534213
// 005341db  eb03                 jmp 0x5341e0
// 005341dd  8d4900               lea ecx, [ecx]
// 005341e0  0fb64500             movzx eax, byte ptr [ebp]
// 005341e4  0fb61f               movzx ebx, byte ptr [edi]
// 005341e7  8d0440               lea eax, [eax + eax*2]
// 005341ea  03c3                 add eax, ebx
// 005341ec  8d1c76               lea ebx, [esi + esi*2]
// 005341ef  8d541308             lea edx, [ebx + edx + 8]
// 005341f3  c1fa04               sar edx, 4
// 005341f6  8811                 mov byte ptr [ecx], dl
// 005341f8  8d1476               lea edx, [esi + esi*2]
// 005341fb  8d540207             lea edx, [edx + eax + 7]
// 005341ff  41                   inc ecx
// 00534200  c1fa04               sar edx, 4
// 00534203  8811                 mov byte ptr [ecx], dl
// 00534205  47                   inc edi
// 00534206  45                   inc ebp
// 00534207  41                   inc ecx
// 00534208  836c241001           sub dword ptr [esp + 0x10], 1
// 0053420d  8bd6                 mov edx, esi
// 0053420f  8bf0                 mov esi, eax
// 00534211  75cd                 jne 0x5341e0
// 00534213  8b742430             mov esi, dword ptr [esp + 0x30]
// 00534217  8d1442               lea edx, [edx + eax*2]
// 0053421a  8d541008             lea edx, [eax + edx + 8]
// 0053421e  8d048507000000       lea eax, [eax*4 + 7]
// 00534225  c1fa04               sar edx, 4
// 00534228  c1f804               sar eax, 4
// 0053422b  8811                 mov byte ptr [ecx], dl
// 0053422d  884101               mov byte ptr [ecx + 1], al
// 00534230  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00534234  8b442418             mov eax, dword ptr [esp + 0x18]
// 00534238  41                   inc ecx
// 00534239  83f902               cmp ecx, 2
// 0053423c  894c2414             mov dword ptr [esp + 0x14], ecx
// 00534240  0f8c30ffffff         jl 0x534176
// 00534246  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0053424a  83c604               add esi, 4
// 0053424d  3b8114010000         cmp eax, dword ptr [ecx + 0x114]
// 00534253  89742430             mov dword ptr [esp + 0x30], esi
// 00534257  0f8c13ffffff         jl 0x534170
// 0053425d  5f                   pop edi
// 0053425e  5e                   pop esi
// 0053425f  5d                   pop ebp
// 00534260  5b                   pop ebx
// 00534261  83c410               add esp, 0x10
// 00534264  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v2_fancy_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
