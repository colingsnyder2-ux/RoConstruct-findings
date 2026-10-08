// from server: 100% by auto
// roc 2007-08 005294d0  unit: seg_00520000  size: 371 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005294d0
//
// 005294d0  83ec38               sub esp, 0x38
// 005294d3  53                   push ebx
// 005294d4  8b580c               mov ebx, dword ptr [eax + 0xc]
// 005294d7  55                   push ebp
// 005294d8  8b6814               mov ebp, dword ptr [eax + 0x14]
// 005294db  56                   push esi
// 005294dc  8b742448             mov esi, dword ptr [esp + 0x48]
// 005294e0  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 005294e6  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005294e9  8b4808               mov ecx, dword ptr [eax + 8]
// 005294ec  89542430             mov dword ptr [esp + 0x30], edx
// 005294f0  8b5004               mov edx, dword ptr [eax + 4]
// 005294f3  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005294f7  8b5810               mov ebx, dword ptr [eax + 0x10]
// 005294fa  8b00                 mov eax, dword ptr [eax]
// 005294fc  57                   push edi
// 005294fd  33ff                 xor edi, edi
// 005294ff  3bc2                 cmp eax, edx
// 00529501  897c2414             mov dword ptr [esp + 0x14], edi
// 00529505  897c2418             mov dword ptr [esp + 0x18], edi
// 00529509  897c241c             mov dword ptr [esp + 0x1c], edi
// 0052950d  89542444             mov dword ptr [esp + 0x44], edx
// 00529511  894c2440             mov dword ptr [esp + 0x40], ecx
// 00529515  895c2438             mov dword ptr [esp + 0x38], ebx
// 00529519  896c2424             mov dword ptr [esp + 0x24], ebp
// 0052951d  89442430             mov dword ptr [esp + 0x30], eax
// 00529521  0f8fd6000000         jg 0x5295fd
// 00529527  8d2cc504000000       lea ebp, [eax*8 + 4]
// 0052952e  896c2410             mov dword ptr [esp + 0x10], ebp
// 00529532  3b4c2420             cmp ecx, dword ptr [esp + 0x20]
// 00529536  0f8fad000000         jg 0x5295e9
// 0052953c  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00529540  8b448500             mov eax, dword ptr [ebp + eax*4]
// 00529544  8bd1                 mov edx, ecx
// 00529546  c1e205               shl edx, 5
// 00529549  03d3                 add edx, ebx
// 0052954b  8d2c50               lea ebp, [eax + edx*2]
// 0052954e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00529552  8b542424             mov edx, dword ptr [esp + 0x24]
// 00529556  2bc1                 sub eax, ecx
// 00529558  83c001               add eax, 1
// 0052955b  8d348d02000000       lea esi, [ecx*4 + 2]
// 00529562  896c2428             mov dword ptr [esp + 0x28], ebp
// 00529566  8944242c             mov dword ptr [esp + 0x2c], eax
// 0052956a  8d9b00000000         lea ebx, [ebx]
// 00529570  3bda                 cmp ebx, edx
// 00529572  7f52                 jg 0x5295c6
// 00529574  2bd3                 sub edx, ebx
// 00529576  8d0cdd04000000       lea ecx, [ebx*8 + 4]
// 0052957d  83c201               add edx, 1
// 00529580  0fb74500             movzx eax, word ptr [ebp]
// 00529584  83c502               add ebp, 2
// 00529587  85c0                 test eax, eax
// 00529589  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0052958d  7423                 je 0x5295b2
// 0052958f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00529593  0fafd8               imul ebx, eax
// 00529596  015c2414             add dword ptr [esp + 0x14], ebx
// 0052959a  8bde                 mov ebx, esi
// 0052959c  0fafd8               imul ebx, eax
// 0052959f  015c2418             add dword ptr [esp + 0x18], ebx
// 005295a3  8bd9                 mov ebx, ecx
// 005295a5  0fafd8               imul ebx, eax
// 005295a8  03f8                 add edi, eax
// 005295aa  015c241c             add dword ptr [esp + 0x1c], ebx
// 005295ae  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 005295b2  83c108               add ecx, 8
// 005295b5  83ea01               sub edx, 1
// 005295b8  75c6                 jne 0x529580
// 005295ba  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005295be  8b542424             mov edx, dword ptr [esp + 0x24]
// 005295c2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005295c6  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 005295ca  83c540               add ebp, 0x40
// 005295cd  83c604               add esi, 4
// 005295d0  83e801               sub eax, 1
// 005295d3  896c2428             mov dword ptr [esp + 0x28], ebp
// 005295d7  8944242c             mov dword ptr [esp + 0x2c], eax
// 005295db  7593                 jne 0x529570
// 005295dd  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 005295e1  8b542444             mov edx, dword ptr [esp + 0x44]
// 005295e5  8b442430             mov eax, dword ptr [esp + 0x30]
// 005295e9  8344241008           add dword ptr [esp + 0x10], 8
// 005295ee  83c001               add eax, 1
// 005295f1  3bc2                 cmp eax, edx
// 005295f3  89442430             mov dword ptr [esp + 0x30], eax
// 005295f7  0f8e35ffffff         jle 0x529532
// 005295fd  8b542414             mov edx, dword ptr [esp + 0x14]
// 00529601  8bcf                 mov ecx, edi
// 00529603  d1f9                 sar ecx, 1
// 00529605  8d0411               lea eax, [ecx + edx]
// 00529608  99                   cdq 
// 00529609  f7ff                 idiv edi
// 0052960b  8b5674               mov edx, dword ptr [esi + 0x74]
// 0052960e  8b12                 mov edx, dword ptr [edx]
// 00529610  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00529614  880413               mov byte ptr [ebx + edx], al
// 00529617  8b442418             mov eax, dword ptr [esp + 0x18]
// 0052961b  03c1                 add eax, ecx
// 0052961d  99                   cdq 
// 0052961e  f7ff                 idiv edi
// 00529620  8b5674               mov edx, dword ptr [esi + 0x74]
// 00529623  8b5204               mov edx, dword ptr [edx + 4]
// 00529626  880413               mov byte ptr [ebx + edx], al
// 00529629  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0052962d  03c1                 add eax, ecx
// 0052962f  99                   cdq 
// 00529630  f7ff                 idiv edi
// 00529632  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00529635  8b5108               mov edx, dword ptr [ecx + 8]
// 00529638  5f                   pop edi
// 00529639  5e                   pop esi
// 0052963a  5d                   pop ebp
// 0052963b  880413               mov byte ptr [ebx + edx], al
// 0052963e  5b                   pop ebx
// 0052963f  83c438               add esp, 0x38
// 00529642  c3                   ret 
// library jpeg-6b/jquant2.c (function _compute_color)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
