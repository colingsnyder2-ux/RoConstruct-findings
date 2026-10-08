// from server: 100% by auto
// roc 2010-06 00583480  unit: seg_00580000  size: 369 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00583480
//
// 00583480  83ec38               sub esp, 0x38
// 00583483  53                   push ebx
// 00583484  8b580c               mov ebx, dword ptr [eax + 0xc]
// 00583487  55                   push ebp
// 00583488  8b6814               mov ebp, dword ptr [eax + 0x14]
// 0058348b  56                   push esi
// 0058348c  8b742448             mov esi, dword ptr [esp + 0x48]
// 00583490  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 00583496  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00583499  8b4808               mov ecx, dword ptr [eax + 8]
// 0058349c  89542430             mov dword ptr [esp + 0x30], edx
// 005834a0  8b5004               mov edx, dword ptr [eax + 4]
// 005834a3  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005834a7  8b5810               mov ebx, dword ptr [eax + 0x10]
// 005834aa  8b00                 mov eax, dword ptr [eax]
// 005834ac  57                   push edi
// 005834ad  33ff                 xor edi, edi
// 005834af  3bc2                 cmp eax, edx
// 005834b1  897c2414             mov dword ptr [esp + 0x14], edi
// 005834b5  897c2418             mov dword ptr [esp + 0x18], edi
// 005834b9  897c241c             mov dword ptr [esp + 0x1c], edi
// 005834bd  89542444             mov dword ptr [esp + 0x44], edx
// 005834c1  894c2440             mov dword ptr [esp + 0x40], ecx
// 005834c5  895c2438             mov dword ptr [esp + 0x38], ebx
// 005834c9  896c2424             mov dword ptr [esp + 0x24], ebp
// 005834cd  89442430             mov dword ptr [esp + 0x30], eax
// 005834d1  0f8fd4000000         jg 0x5835ab
// 005834d7  8d2cc504000000       lea ebp, [eax*8 + 4]
// 005834de  896c2410             mov dword ptr [esp + 0x10], ebp
// 005834e2  3b4c2420             cmp ecx, dword ptr [esp + 0x20]
// 005834e6  0f8fad000000         jg 0x583599
// 005834ec  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 005834f0  8b448500             mov eax, dword ptr [ebp + eax*4]
// 005834f4  8bd1                 mov edx, ecx
// 005834f6  c1e205               shl edx, 5
// 005834f9  03d3                 add edx, ebx
// 005834fb  8d2c50               lea ebp, [eax + edx*2]
// 005834fe  8b442420             mov eax, dword ptr [esp + 0x20]
// 00583502  8b542424             mov edx, dword ptr [esp + 0x24]
// 00583506  2bc1                 sub eax, ecx
// 00583508  40                   inc eax
// 00583509  8d348d02000000       lea esi, [ecx*4 + 2]
// 00583510  896c2428             mov dword ptr [esp + 0x28], ebp
// 00583514  8944242c             mov dword ptr [esp + 0x2c], eax
// 00583518  3bda                 cmp ebx, edx
// 0058351a  7f5a                 jg 0x583576
// 0058351c  2bd3                 sub edx, ebx
// 0058351e  8d0cdd04000000       lea ecx, [ebx*8 + 4]
// 00583525  42                   inc edx
// 00583526  eb08                 jmp 0x583530
// 00583528  8da42400000000       lea esp, [esp]
// 0058352f  90                   nop 
// 00583530  0fb74500             movzx eax, word ptr [ebp]
// 00583534  83c502               add ebp, 2
// 00583537  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0058353b  85c0                 test eax, eax
// 0058353d  7423                 je 0x583562
// 0058353f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00583543  0fafd8               imul ebx, eax
// 00583546  015c2414             add dword ptr [esp + 0x14], ebx
// 0058354a  8bde                 mov ebx, esi
// 0058354c  0fafd8               imul ebx, eax
// 0058354f  015c2418             add dword ptr [esp + 0x18], ebx
// 00583553  8bd9                 mov ebx, ecx
// 00583555  0fafd8               imul ebx, eax
// 00583558  03f8                 add edi, eax
// 0058355a  015c241c             add dword ptr [esp + 0x1c], ebx
// 0058355e  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00583562  83c108               add ecx, 8
// 00583565  83ea01               sub edx, 1
// 00583568  75c6                 jne 0x583530
// 0058356a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0058356e  8b542424             mov edx, dword ptr [esp + 0x24]
// 00583572  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00583576  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0058357a  83c540               add ebp, 0x40
// 0058357d  83c604               add esi, 4
// 00583580  83e801               sub eax, 1
// 00583583  896c2428             mov dword ptr [esp + 0x28], ebp
// 00583587  8944242c             mov dword ptr [esp + 0x2c], eax
// 0058358b  758b                 jne 0x583518
// 0058358d  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00583591  8b542444             mov edx, dword ptr [esp + 0x44]
// 00583595  8b442430             mov eax, dword ptr [esp + 0x30]
// 00583599  8344241008           add dword ptr [esp + 0x10], 8
// 0058359e  40                   inc eax
// 0058359f  3bc2                 cmp eax, edx
// 005835a1  89442430             mov dword ptr [esp + 0x30], eax
// 005835a5  0f8e37ffffff         jle 0x5834e2
// 005835ab  8b542414             mov edx, dword ptr [esp + 0x14]
// 005835af  8bcf                 mov ecx, edi
// 005835b1  d1f9                 sar ecx, 1
// 005835b3  8d0411               lea eax, [ecx + edx]
// 005835b6  99                   cdq 
// 005835b7  f7ff                 idiv edi
// 005835b9  8b5674               mov edx, dword ptr [esi + 0x74]
// 005835bc  8b12                 mov edx, dword ptr [edx]
// 005835be  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 005835c2  880413               mov byte ptr [ebx + edx], al
// 005835c5  8b442418             mov eax, dword ptr [esp + 0x18]
// 005835c9  03c1                 add eax, ecx
// 005835cb  99                   cdq 
// 005835cc  f7ff                 idiv edi
// 005835ce  8b5674               mov edx, dword ptr [esi + 0x74]
// 005835d1  8b5204               mov edx, dword ptr [edx + 4]
// 005835d4  880413               mov byte ptr [ebx + edx], al
// 005835d7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005835db  03c1                 add eax, ecx
// 005835dd  99                   cdq 
// 005835de  f7ff                 idiv edi
// 005835e0  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 005835e3  8b5108               mov edx, dword ptr [ecx + 8]
// 005835e6  5f                   pop edi
// 005835e7  5e                   pop esi
// 005835e8  5d                   pop ebp
// 005835e9  880413               mov byte ptr [ebx + edx], al
// 005835ec  5b                   pop ebx
// 005835ed  83c438               add esp, 0x38
// 005835f0  c3                   ret 
// library jpeg-6b/jquant2.c (function _compute_color)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
