// from server: 100% by auto
// roc 2008-06 00535610  unit: seg_00530000  size: 369 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00535610
//
// 00535610  83ec38               sub esp, 0x38
// 00535613  53                   push ebx
// 00535614  8b580c               mov ebx, dword ptr [eax + 0xc]
// 00535617  55                   push ebp
// 00535618  8b6814               mov ebp, dword ptr [eax + 0x14]
// 0053561b  56                   push esi
// 0053561c  8b742448             mov esi, dword ptr [esp + 0x48]
// 00535620  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 00535626  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00535629  8b4808               mov ecx, dword ptr [eax + 8]
// 0053562c  89542430             mov dword ptr [esp + 0x30], edx
// 00535630  8b5004               mov edx, dword ptr [eax + 4]
// 00535633  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00535637  8b5810               mov ebx, dword ptr [eax + 0x10]
// 0053563a  8b00                 mov eax, dword ptr [eax]
// 0053563c  57                   push edi
// 0053563d  33ff                 xor edi, edi
// 0053563f  3bc2                 cmp eax, edx
// 00535641  897c2414             mov dword ptr [esp + 0x14], edi
// 00535645  897c2418             mov dword ptr [esp + 0x18], edi
// 00535649  897c241c             mov dword ptr [esp + 0x1c], edi
// 0053564d  89542444             mov dword ptr [esp + 0x44], edx
// 00535651  894c2440             mov dword ptr [esp + 0x40], ecx
// 00535655  895c2438             mov dword ptr [esp + 0x38], ebx
// 00535659  896c2424             mov dword ptr [esp + 0x24], ebp
// 0053565d  89442430             mov dword ptr [esp + 0x30], eax
// 00535661  0f8fd4000000         jg 0x53573b
// 00535667  8d2cc504000000       lea ebp, [eax*8 + 4]
// 0053566e  896c2410             mov dword ptr [esp + 0x10], ebp
// 00535672  3b4c2420             cmp ecx, dword ptr [esp + 0x20]
// 00535676  0f8fad000000         jg 0x535729
// 0053567c  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00535680  8b448500             mov eax, dword ptr [ebp + eax*4]
// 00535684  8bd1                 mov edx, ecx
// 00535686  c1e205               shl edx, 5
// 00535689  03d3                 add edx, ebx
// 0053568b  8d2c50               lea ebp, [eax + edx*2]
// 0053568e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00535692  8b542424             mov edx, dword ptr [esp + 0x24]
// 00535696  2bc1                 sub eax, ecx
// 00535698  40                   inc eax
// 00535699  8d348d02000000       lea esi, [ecx*4 + 2]
// 005356a0  896c2428             mov dword ptr [esp + 0x28], ebp
// 005356a4  8944242c             mov dword ptr [esp + 0x2c], eax
// 005356a8  3bda                 cmp ebx, edx
// 005356aa  7f5a                 jg 0x535706
// 005356ac  2bd3                 sub edx, ebx
// 005356ae  8d0cdd04000000       lea ecx, [ebx*8 + 4]
// 005356b5  42                   inc edx
// 005356b6  eb08                 jmp 0x5356c0
// 005356b8  8da42400000000       lea esp, [esp]
// 005356bf  90                   nop 
// 005356c0  0fb74500             movzx eax, word ptr [ebp]
// 005356c4  83c502               add ebp, 2
// 005356c7  896c243c             mov dword ptr [esp + 0x3c], ebp
// 005356cb  85c0                 test eax, eax
// 005356cd  7423                 je 0x5356f2
// 005356cf  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005356d3  0fafd8               imul ebx, eax
// 005356d6  015c2414             add dword ptr [esp + 0x14], ebx
// 005356da  8bde                 mov ebx, esi
// 005356dc  0fafd8               imul ebx, eax
// 005356df  015c2418             add dword ptr [esp + 0x18], ebx
// 005356e3  8bd9                 mov ebx, ecx
// 005356e5  0fafd8               imul ebx, eax
// 005356e8  03f8                 add edi, eax
// 005356ea  015c241c             add dword ptr [esp + 0x1c], ebx
// 005356ee  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 005356f2  83c108               add ecx, 8
// 005356f5  83ea01               sub edx, 1
// 005356f8  75c6                 jne 0x5356c0
// 005356fa  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005356fe  8b542424             mov edx, dword ptr [esp + 0x24]
// 00535702  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00535706  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0053570a  83c540               add ebp, 0x40
// 0053570d  83c604               add esi, 4
// 00535710  83e801               sub eax, 1
// 00535713  896c2428             mov dword ptr [esp + 0x28], ebp
// 00535717  8944242c             mov dword ptr [esp + 0x2c], eax
// 0053571b  758b                 jne 0x5356a8
// 0053571d  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00535721  8b542444             mov edx, dword ptr [esp + 0x44]
// 00535725  8b442430             mov eax, dword ptr [esp + 0x30]
// 00535729  8344241008           add dword ptr [esp + 0x10], 8
// 0053572e  40                   inc eax
// 0053572f  3bc2                 cmp eax, edx
// 00535731  89442430             mov dword ptr [esp + 0x30], eax
// 00535735  0f8e37ffffff         jle 0x535672
// 0053573b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0053573f  8bcf                 mov ecx, edi
// 00535741  d1f9                 sar ecx, 1
// 00535743  8d0411               lea eax, [ecx + edx]
// 00535746  99                   cdq 
// 00535747  f7ff                 idiv edi
// 00535749  8b5674               mov edx, dword ptr [esi + 0x74]
// 0053574c  8b12                 mov edx, dword ptr [edx]
// 0053574e  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00535752  880413               mov byte ptr [ebx + edx], al
// 00535755  8b442418             mov eax, dword ptr [esp + 0x18]
// 00535759  03c1                 add eax, ecx
// 0053575b  99                   cdq 
// 0053575c  f7ff                 idiv edi
// 0053575e  8b5674               mov edx, dword ptr [esi + 0x74]
// 00535761  8b5204               mov edx, dword ptr [edx + 4]
// 00535764  880413               mov byte ptr [ebx + edx], al
// 00535767  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0053576b  03c1                 add eax, ecx
// 0053576d  99                   cdq 
// 0053576e  f7ff                 idiv edi
// 00535770  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00535773  8b5108               mov edx, dword ptr [ecx + 8]
// 00535776  5f                   pop edi
// 00535777  5e                   pop esi
// 00535778  5d                   pop ebp
// 00535779  880413               mov byte ptr [ebx + edx], al
// 0053577c  5b                   pop ebx
// 0053577d  83c438               add esp, 0x38
// 00535780  c3                   ret 
// library jpeg-6b/jquant2.c (function _compute_color)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
