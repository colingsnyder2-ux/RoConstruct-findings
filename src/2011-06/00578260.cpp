// from server: 100% by auto
// roc 2011-06 00578260  unit: seg_00570000  size: 293 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00578260
//
// 00578260  83ec10               sub esp, 0x10
// 00578263  8b442420             mov eax, dword ptr [esp + 0x20]
// 00578267  8b08                 mov ecx, dword ptr [eax]
// 00578269  8b542414             mov edx, dword ptr [esp + 0x14]
// 0057826d  33c0                 xor eax, eax
// 0057826f  398214010000         cmp dword ptr [edx + 0x114], eax
// 00578275  894c240c             mov dword ptr [esp + 0xc], ecx
// 00578279  0f8e02010000         jle 0x578381
// 0057827f  53                   push ebx
// 00578280  55                   push ebp
// 00578281  56                   push esi
// 00578282  8b742428             mov esi, dword ptr [esp + 0x28]
// 00578286  57                   push edi
// 00578287  89742430             mov dword ptr [esp + 0x30], esi
// 0057828b  eb03                 jmp 0x578290
// 0057828d  8d4900               lea ecx, [ecx]
// 00578290  33c9                 xor ecx, ecx
// 00578292  894c2414             mov dword ptr [esp + 0x14], ecx
// 00578296  8b2e                 mov ebp, dword ptr [esi]
// 00578298  85c9                 test ecx, ecx
// 0057829a  7505                 jne 0x5782a1
// 0057829c  8b7efc               mov edi, dword ptr [esi - 4]
// 0057829f  eb03                 jmp 0x5782a4
// 005782a1  8b7e04               mov edi, dword ptr [esi + 4]
// 005782a4  0fb67500             movzx esi, byte ptr [ebp]
// 005782a8  0fb617               movzx edx, byte ptr [edi]
// 005782ab  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005782af  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 005782b2  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 005782b6  40                   inc eax
// 005782b7  45                   inc ebp
// 005782b8  89442418             mov dword ptr [esp + 0x18], eax
// 005782bc  0fb64500             movzx eax, byte ptr [ebp]
// 005782c0  8d3476               lea esi, [esi + esi*2]
// 005782c3  03f2                 add esi, edx
// 005782c5  0fb65701             movzx edx, byte ptr [edi + 1]
// 005782c9  47                   inc edi
// 005782ca  8d0440               lea eax, [eax + eax*2]
// 005782cd  03c2                 add eax, edx
// 005782cf  8d14b508000000       lea edx, [esi*4 + 8]
// 005782d6  c1fa04               sar edx, 4
// 005782d9  8811                 mov byte ptr [ecx], dl
// 005782db  8d1470               lea edx, [eax + esi*2]
// 005782de  8d541607             lea edx, [esi + edx + 7]
// 005782e2  41                   inc ecx
// 005782e3  c1fa04               sar edx, 4
// 005782e6  8811                 mov byte ptr [ecx], dl
// 005782e8  8b5b28               mov ebx, dword ptr [ebx + 0x28]
// 005782eb  47                   inc edi
// 005782ec  45                   inc ebp
// 005782ed  41                   inc ecx
// 005782ee  83eb02               sub ebx, 2
// 005782f1  8bd6                 mov edx, esi
// 005782f3  8bf0                 mov esi, eax
// 005782f5  895c2410             mov dword ptr [esp + 0x10], ebx
// 005782f9  7438                 je 0x578333
// 005782fb  eb03                 jmp 0x578300
// 005782fd  8d4900               lea ecx, [ecx]
// 00578300  0fb64500             movzx eax, byte ptr [ebp]
// 00578304  0fb61f               movzx ebx, byte ptr [edi]
// 00578307  8d0440               lea eax, [eax + eax*2]
// 0057830a  03c3                 add eax, ebx
// 0057830c  8d1c76               lea ebx, [esi + esi*2]
// 0057830f  8d541308             lea edx, [ebx + edx + 8]
// 00578313  c1fa04               sar edx, 4
// 00578316  8811                 mov byte ptr [ecx], dl
// 00578318  8d1476               lea edx, [esi + esi*2]
// 0057831b  8d540207             lea edx, [edx + eax + 7]
// 0057831f  41                   inc ecx
// 00578320  c1fa04               sar edx, 4
// 00578323  8811                 mov byte ptr [ecx], dl
// 00578325  47                   inc edi
// 00578326  45                   inc ebp
// 00578327  41                   inc ecx
// 00578328  836c241001           sub dword ptr [esp + 0x10], 1
// 0057832d  8bd6                 mov edx, esi
// 0057832f  8bf0                 mov esi, eax
// 00578331  75cd                 jne 0x578300
// 00578333  8b742430             mov esi, dword ptr [esp + 0x30]
// 00578337  8d1442               lea edx, [edx + eax*2]
// 0057833a  8d541008             lea edx, [eax + edx + 8]
// 0057833e  8d048507000000       lea eax, [eax*4 + 7]
// 00578345  c1fa04               sar edx, 4
// 00578348  c1f804               sar eax, 4
// 0057834b  8811                 mov byte ptr [ecx], dl
// 0057834d  884101               mov byte ptr [ecx + 1], al
// 00578350  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00578354  8b442418             mov eax, dword ptr [esp + 0x18]
// 00578358  41                   inc ecx
// 00578359  83f902               cmp ecx, 2
// 0057835c  894c2414             mov dword ptr [esp + 0x14], ecx
// 00578360  0f8c30ffffff         jl 0x578296
// 00578366  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057836a  83c604               add esi, 4
// 0057836d  3b8114010000         cmp eax, dword ptr [ecx + 0x114]
// 00578373  89742430             mov dword ptr [esp + 0x30], esi
// 00578377  0f8c13ffffff         jl 0x578290
// 0057837d  5f                   pop edi
// 0057837e  5e                   pop esi
// 0057837f  5d                   pop ebp
// 00578380  5b                   pop ebx
// 00578381  83c410               add esp, 0x10
// 00578384  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v2_fancy_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
