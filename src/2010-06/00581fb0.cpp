// from server: 100% by auto
// roc 2010-06 00581fb0  unit: seg_00580000  size: 293 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00581fb0
//
// 00581fb0  83ec10               sub esp, 0x10
// 00581fb3  8b442420             mov eax, dword ptr [esp + 0x20]
// 00581fb7  8b08                 mov ecx, dword ptr [eax]
// 00581fb9  8b542414             mov edx, dword ptr [esp + 0x14]
// 00581fbd  33c0                 xor eax, eax
// 00581fbf  398214010000         cmp dword ptr [edx + 0x114], eax
// 00581fc5  894c240c             mov dword ptr [esp + 0xc], ecx
// 00581fc9  0f8e02010000         jle 0x5820d1
// 00581fcf  53                   push ebx
// 00581fd0  55                   push ebp
// 00581fd1  56                   push esi
// 00581fd2  8b742428             mov esi, dword ptr [esp + 0x28]
// 00581fd6  57                   push edi
// 00581fd7  89742430             mov dword ptr [esp + 0x30], esi
// 00581fdb  eb03                 jmp 0x581fe0
// 00581fdd  8d4900               lea ecx, [ecx]
// 00581fe0  33c9                 xor ecx, ecx
// 00581fe2  894c2414             mov dword ptr [esp + 0x14], ecx
// 00581fe6  8b2e                 mov ebp, dword ptr [esi]
// 00581fe8  85c9                 test ecx, ecx
// 00581fea  7505                 jne 0x581ff1
// 00581fec  8b7efc               mov edi, dword ptr [esi - 4]
// 00581fef  eb03                 jmp 0x581ff4
// 00581ff1  8b7e04               mov edi, dword ptr [esi + 4]
// 00581ff4  0fb67500             movzx esi, byte ptr [ebp]
// 00581ff8  0fb617               movzx edx, byte ptr [edi]
// 00581ffb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00581fff  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00582002  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00582006  40                   inc eax
// 00582007  45                   inc ebp
// 00582008  89442418             mov dword ptr [esp + 0x18], eax
// 0058200c  0fb64500             movzx eax, byte ptr [ebp]
// 00582010  8d3476               lea esi, [esi + esi*2]
// 00582013  03f2                 add esi, edx
// 00582015  0fb65701             movzx edx, byte ptr [edi + 1]
// 00582019  47                   inc edi
// 0058201a  8d0440               lea eax, [eax + eax*2]
// 0058201d  03c2                 add eax, edx
// 0058201f  8d14b508000000       lea edx, [esi*4 + 8]
// 00582026  c1fa04               sar edx, 4
// 00582029  8811                 mov byte ptr [ecx], dl
// 0058202b  8d1470               lea edx, [eax + esi*2]
// 0058202e  8d541607             lea edx, [esi + edx + 7]
// 00582032  41                   inc ecx
// 00582033  c1fa04               sar edx, 4
// 00582036  8811                 mov byte ptr [ecx], dl
// 00582038  8b5b28               mov ebx, dword ptr [ebx + 0x28]
// 0058203b  47                   inc edi
// 0058203c  45                   inc ebp
// 0058203d  41                   inc ecx
// 0058203e  83eb02               sub ebx, 2
// 00582041  8bd6                 mov edx, esi
// 00582043  8bf0                 mov esi, eax
// 00582045  895c2410             mov dword ptr [esp + 0x10], ebx
// 00582049  7438                 je 0x582083
// 0058204b  eb03                 jmp 0x582050
// 0058204d  8d4900               lea ecx, [ecx]
// 00582050  0fb64500             movzx eax, byte ptr [ebp]
// 00582054  0fb61f               movzx ebx, byte ptr [edi]
// 00582057  8d0440               lea eax, [eax + eax*2]
// 0058205a  03c3                 add eax, ebx
// 0058205c  8d1c76               lea ebx, [esi + esi*2]
// 0058205f  8d541308             lea edx, [ebx + edx + 8]
// 00582063  c1fa04               sar edx, 4
// 00582066  8811                 mov byte ptr [ecx], dl
// 00582068  8d1476               lea edx, [esi + esi*2]
// 0058206b  8d540207             lea edx, [edx + eax + 7]
// 0058206f  41                   inc ecx
// 00582070  c1fa04               sar edx, 4
// 00582073  8811                 mov byte ptr [ecx], dl
// 00582075  47                   inc edi
// 00582076  45                   inc ebp
// 00582077  41                   inc ecx
// 00582078  836c241001           sub dword ptr [esp + 0x10], 1
// 0058207d  8bd6                 mov edx, esi
// 0058207f  8bf0                 mov esi, eax
// 00582081  75cd                 jne 0x582050
// 00582083  8b742430             mov esi, dword ptr [esp + 0x30]
// 00582087  8d1442               lea edx, [edx + eax*2]
// 0058208a  8d541008             lea edx, [eax + edx + 8]
// 0058208e  8d048507000000       lea eax, [eax*4 + 7]
// 00582095  c1fa04               sar edx, 4
// 00582098  c1f804               sar eax, 4
// 0058209b  8811                 mov byte ptr [ecx], dl
// 0058209d  884101               mov byte ptr [ecx + 1], al
// 005820a0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005820a4  8b442418             mov eax, dword ptr [esp + 0x18]
// 005820a8  41                   inc ecx
// 005820a9  83f902               cmp ecx, 2
// 005820ac  894c2414             mov dword ptr [esp + 0x14], ecx
// 005820b0  0f8c30ffffff         jl 0x581fe6
// 005820b6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005820ba  83c604               add esi, 4
// 005820bd  3b8114010000         cmp eax, dword ptr [ecx + 0x114]
// 005820c3  89742430             mov dword ptr [esp + 0x30], esi
// 005820c7  0f8c13ffffff         jl 0x581fe0
// 005820cd  5f                   pop edi
// 005820ce  5e                   pop esi
// 005820cf  5d                   pop ebp
// 005820d0  5b                   pop ebx
// 005820d1  83c410               add esp, 0x10
// 005820d4  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v2_fancy_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
