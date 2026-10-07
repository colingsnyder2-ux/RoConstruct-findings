// roc 2010-06 005874b0  unit: seg_00580000  size: 883 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005874b0
//
// 005874b0  81ec18010000         sub esp, 0x118
// 005874b6  8b84241c010000       mov eax, dword ptr [esp + 0x11c]
// 005874bd  8b8058010000         mov eax, dword ptr [eax + 0x158]
// 005874c3  8b4808               mov ecx, dword ptr [eax + 8]
// 005874c6  8b942420010000       mov edx, dword ptr [esp + 0x120]
// 005874cd  894c240c             mov dword ptr [esp + 0xc], ecx
// 005874d1  8b4a10               mov ecx, dword ptr [edx + 0x10]
// 005874d4  8b44880c             mov eax, dword ptr [eax + ecx*4 + 0xc]
// 005874d8  8b8c2434010000       mov ecx, dword ptr [esp + 0x134]
// 005874df  85c9                 test ecx, ecx
// 005874e1  0f8635030000         jbe 0x58781c
// 005874e7  8b94242c010000       mov edx, dword ptr [esp + 0x12c]
// 005874ee  53                   push ebx
// 005874ef  8b9c2434010000       mov ebx, dword ptr [esp + 0x134]
// 005874f6  55                   push ebp
// 005874f7  56                   push esi
// 005874f8  8bb42430010000       mov esi, dword ptr [esp + 0x130]
// 005874ff  8d549608             lea edx, [esi + edx*4 + 8]
// 00587503  89542420             mov dword ptr [esp + 0x20], edx
// 00587507  8d5008               lea edx, [eax + 8]
// 0058750a  89542410             mov dword ptr [esp + 0x10], edx
// 0058750e  8d542424             lea edx, [esp + 0x24]
// 00587512  2bd0                 sub edx, eax
// 00587514  89542414             mov dword ptr [esp + 0x14], edx
// 00587518  57                   push edi
// 00587519  8bbc2438010000       mov edi, dword ptr [esp + 0x138]
// 00587520  8d54242c             lea edx, [esp + 0x2c]
// 00587524  2bd0                 sub edx, eax
// 00587526  89542420             mov dword ptr [esp + 0x20], edx
// 0058752a  83c704               add edi, 4
// 0058752d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00587531  8b542424             mov edx, dword ptr [esp + 0x24]
// 00587535  8d442428             lea eax, [esp + 0x28]
// 00587539  be02000000           mov esi, 2
// 0058753e  8bff                 mov edi, edi
// 00587540  8b4af8               mov ecx, dword ptr [edx - 8]
// 00587543  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 00587547  83c580               add ebp, -0x80
// 0058754a  8928                 mov dword ptr [eax], ebp
// 0058754c  03cb                 add ecx, ebx
// 0058754e  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00587552  41                   inc ecx
// 00587553  83c580               add ebp, -0x80
// 00587556  896804               mov dword ptr [eax + 4], ebp
// 00587559  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0058755d  41                   inc ecx
// 0058755e  83c580               add ebp, -0x80
// 00587561  83c004               add eax, 4
// 00587564  896804               mov dword ptr [eax + 4], ebp
// 00587567  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0058756b  41                   inc ecx
// 0058756c  83c004               add eax, 4
// 0058756f  83c580               add ebp, -0x80
// 00587572  896804               mov dword ptr [eax + 4], ebp
// 00587575  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00587579  41                   inc ecx
// 0058757a  83c004               add eax, 4
// 0058757d  83c580               add ebp, -0x80
// 00587580  896804               mov dword ptr [eax + 4], ebp
// 00587583  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00587587  41                   inc ecx
// 00587588  83c004               add eax, 4
// 0058758b  83c580               add ebp, -0x80
// 0058758e  896804               mov dword ptr [eax + 4], ebp
// 00587591  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00587595  41                   inc ecx
// 00587596  83c004               add eax, 4
// 00587599  83c580               add ebp, -0x80
// 0058759c  896804               mov dword ptr [eax + 4], ebp
// 0058759f  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 005875a3  83c004               add eax, 4
// 005875a6  83c180               add ecx, -0x80
// 005875a9  894804               mov dword ptr [eax + 4], ecx
// 005875ac  8b4afc               mov ecx, dword ptr [edx - 4]
// 005875af  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 005875b3  83c004               add eax, 4
// 005875b6  03cb                 add ecx, ebx
// 005875b8  83c580               add ebp, -0x80
// 005875bb  896804               mov dword ptr [eax + 4], ebp
// 005875be  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005875c2  83c004               add eax, 4
// 005875c5  41                   inc ecx
// 005875c6  83c580               add ebp, -0x80
// 005875c9  896804               mov dword ptr [eax + 4], ebp
// 005875cc  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005875d0  83c004               add eax, 4
// 005875d3  41                   inc ecx
// 005875d4  83c580               add ebp, -0x80
// 005875d7  896804               mov dword ptr [eax + 4], ebp
// 005875da  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005875de  83c004               add eax, 4
// 005875e1  41                   inc ecx
// 005875e2  83c580               add ebp, -0x80
// 005875e5  896804               mov dword ptr [eax + 4], ebp
// 005875e8  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005875ec  83c004               add eax, 4
// 005875ef  41                   inc ecx
// 005875f0  83c580               add ebp, -0x80
// 005875f3  896804               mov dword ptr [eax + 4], ebp
// 005875f6  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005875fa  83c004               add eax, 4
// 005875fd  41                   inc ecx
// 005875fe  83c004               add eax, 4
// 00587601  83c580               add ebp, -0x80
// 00587604  8928                 mov dword ptr [eax], ebp
// 00587606  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0058760a  41                   inc ecx
// 0058760b  83c004               add eax, 4
// 0058760e  83c580               add ebp, -0x80
// 00587611  8928                 mov dword ptr [eax], ebp
// 00587613  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 00587617  83c180               add ecx, -0x80
// 0058761a  83c004               add eax, 4
// 0058761d  8908                 mov dword ptr [eax], ecx
// 0058761f  8b0a                 mov ecx, dword ptr [edx]
// 00587621  83c004               add eax, 4
// 00587624  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 00587628  83c580               add ebp, -0x80
// 0058762b  8928                 mov dword ptr [eax], ebp
// 0058762d  03cb                 add ecx, ebx
// 0058762f  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00587633  83c580               add ebp, -0x80
// 00587636  896804               mov dword ptr [eax + 4], ebp
// 00587639  41                   inc ecx
// 0058763a  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0058763e  83c004               add eax, 4
// 00587641  41                   inc ecx
// 00587642  83c580               add ebp, -0x80
// 00587645  896804               mov dword ptr [eax + 4], ebp
// 00587648  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0058764c  83c004               add eax, 4
// 0058764f  41                   inc ecx
// 00587650  83c580               add ebp, -0x80
// 00587653  896804               mov dword ptr [eax + 4], ebp
// 00587656  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0058765a  83c004               add eax, 4
// 0058765d  41                   inc ecx
// 0058765e  83c580               add ebp, -0x80
// 00587661  896804               mov dword ptr [eax + 4], ebp
// 00587664  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00587668  83c004               add eax, 4
// 0058766b  41                   inc ecx
// 0058766c  83c580               add ebp, -0x80
// 0058766f  896804               mov dword ptr [eax + 4], ebp
// 00587672  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00587676  83c004               add eax, 4
// 00587679  41                   inc ecx
// 0058767a  83c580               add ebp, -0x80
// 0058767d  896804               mov dword ptr [eax + 4], ebp
// 00587680  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 00587684  83c004               add eax, 4
// 00587687  83c180               add ecx, -0x80
// 0058768a  894804               mov dword ptr [eax + 4], ecx
// 0058768d  8b4a04               mov ecx, dword ptr [edx + 4]
// 00587690  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 00587694  83c004               add eax, 4
// 00587697  03cb                 add ecx, ebx
// 00587699  83c580               add ebp, -0x80
// 0058769c  896804               mov dword ptr [eax + 4], ebp
// 0058769f  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005876a3  83c004               add eax, 4
// 005876a6  41                   inc ecx
// 005876a7  83c580               add ebp, -0x80
// 005876aa  896804               mov dword ptr [eax + 4], ebp
// 005876ad  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005876b1  83c004               add eax, 4
// 005876b4  41                   inc ecx
// 005876b5  83c580               add ebp, -0x80
// 005876b8  896804               mov dword ptr [eax + 4], ebp
// 005876bb  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005876bf  83c004               add eax, 4
// 005876c2  41                   inc ecx
// 005876c3  83c580               add ebp, -0x80
// 005876c6  896804               mov dword ptr [eax + 4], ebp
// 005876c9  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005876cd  83c004               add eax, 4
// 005876d0  41                   inc ecx
// 005876d1  83c004               add eax, 4
// 005876d4  83c580               add ebp, -0x80
// 005876d7  8928                 mov dword ptr [eax], ebp
// 005876d9  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005876dd  41                   inc ecx
// 005876de  83c004               add eax, 4
// 005876e1  83c580               add ebp, -0x80
// 005876e4  8928                 mov dword ptr [eax], ebp
// 005876e6  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005876ea  41                   inc ecx
// 005876eb  83c004               add eax, 4
// 005876ee  83c580               add ebp, -0x80
// 005876f1  8928                 mov dword ptr [eax], ebp
// 005876f3  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 005876f7  83c004               add eax, 4
// 005876fa  83c180               add ecx, -0x80
// 005876fd  8908                 mov dword ptr [eax], ecx
// 005876ff  83c004               add eax, 4
// 00587702  83c210               add edx, 0x10
// 00587705  83ee01               sub esi, 1
// 00587708  0f8532feffff         jne 0x587540
// 0058770e  8d542428             lea edx, [esp + 0x28]
// 00587712  52                   push edx
// 00587713  ff542420             call dword ptr [esp + 0x20]
// 00587717  8b742418             mov esi, dword ptr [esp + 0x18]
// 0058771b  83c404               add esp, 4
// 0058771e  33ed                 xor ebp, ebp
// 00587720  8b4ef8               mov ecx, dword ptr [esi - 8]
// 00587723  8b44ac28             mov eax, dword ptr [esp + ebp*4 + 0x28]
// 00587727  8bd1                 mov edx, ecx
// 00587729  d1fa                 sar edx, 1
// 0058772b  85c0                 test eax, eax
// 0058772d  7d15                 jge 0x587744
// 0058772f  2bd0                 sub edx, eax
// 00587731  3bd1                 cmp edx, ecx
// 00587733  7c09                 jl 0x58773e
// 00587735  8bc2                 mov eax, edx
// 00587737  99                   cdq 
// 00587738  f7f9                 idiv ecx
// 0058773a  f7d8                 neg eax
// 0058773c  eb13                 jmp 0x587751
// 0058773e  33c0                 xor eax, eax
// 00587740  f7d8                 neg eax
// 00587742  eb0d                 jmp 0x587751
// 00587744  03c2                 add eax, edx
// 00587746  3bc1                 cmp eax, ecx
// 00587748  7c05                 jl 0x58774f
// 0058774a  99                   cdq 
// 0058774b  f7f9                 idiv ecx
// 0058774d  eb02                 jmp 0x587751
// 0058774f  33c0                 xor eax, eax
// 00587751  668947fc             mov word ptr [edi - 4], ax
// 00587755  8b4efc               mov ecx, dword ptr [esi - 4]
// 00587758  8b44ac2c             mov eax, dword ptr [esp + ebp*4 + 0x2c]
// 0058775c  8bd1                 mov edx, ecx
// 0058775e  d1fa                 sar edx, 1
// 00587760  85c0                 test eax, eax
// 00587762  7d15                 jge 0x587779
// 00587764  2bd0                 sub edx, eax
// 00587766  3bd1                 cmp edx, ecx
// 00587768  7c09                 jl 0x587773
// 0058776a  8bc2                 mov eax, edx
// 0058776c  99                   cdq 
// 0058776d  f7f9                 idiv ecx
// 0058776f  f7d8                 neg eax
// 00587771  eb13                 jmp 0x587786
// 00587773  33c0                 xor eax, eax
// 00587775  f7d8                 neg eax
// 00587777  eb0d                 jmp 0x587786
// 00587779  03c2                 add eax, edx
// 0058777b  3bc1                 cmp eax, ecx
// 0058777d  7c05                 jl 0x587784
// 0058777f  99                   cdq 
// 00587780  f7f9                 idiv ecx
// 00587782  eb02                 jmp 0x587786
// 00587784  33c0                 xor eax, eax
// 00587786  668947fe             mov word ptr [edi - 2], ax
// 0058778a  8b0e                 mov ecx, dword ptr [esi]
// 0058778c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00587790  8b0406               mov eax, dword ptr [esi + eax]
// 00587793  8bd1                 mov edx, ecx
// 00587795  d1fa                 sar edx, 1
// 00587797  85c0                 test eax, eax
// 00587799  7d15                 jge 0x5877b0
// 0058779b  2bd0                 sub edx, eax
// 0058779d  3bd1                 cmp edx, ecx
// 0058779f  7c09                 jl 0x5877aa
// 005877a1  8bc2                 mov eax, edx
// 005877a3  99                   cdq 
// 005877a4  f7f9                 idiv ecx
// 005877a6  f7d8                 neg eax
// 005877a8  eb13                 jmp 0x5877bd
// 005877aa  33c0                 xor eax, eax
// 005877ac  f7d8                 neg eax
// 005877ae  eb0d                 jmp 0x5877bd
// 005877b0  03c2                 add eax, edx
// 005877b2  3bc1                 cmp eax, ecx
// 005877b4  7c05                 jl 0x5877bb
// 005877b6  99                   cdq 
// 005877b7  f7f9                 idiv ecx
// 005877b9  eb02                 jmp 0x5877bd
// 005877bb  33c0                 xor eax, eax
// 005877bd  668907               mov word ptr [edi], ax
// 005877c0  8b4e04               mov ecx, dword ptr [esi + 4]
// 005877c3  8b442420             mov eax, dword ptr [esp + 0x20]
// 005877c7  8b0406               mov eax, dword ptr [esi + eax]
// 005877ca  8bd1                 mov edx, ecx
// 005877cc  d1fa                 sar edx, 1
// 005877ce  85c0                 test eax, eax
// 005877d0  7d15                 jge 0x5877e7
// 005877d2  2bd0                 sub edx, eax
// 005877d4  3bd1                 cmp edx, ecx
// 005877d6  7c09                 jl 0x5877e1
// 005877d8  8bc2                 mov eax, edx
// 005877da  99                   cdq 
// 005877db  f7f9                 idiv ecx
// 005877dd  f7d8                 neg eax
// 005877df  eb13                 jmp 0x5877f4
// 005877e1  33c0                 xor eax, eax
// 005877e3  f7d8                 neg eax
// 005877e5  eb0d                 jmp 0x5877f4
// 005877e7  03c2                 add eax, edx
// 005877e9  3bc1                 cmp eax, ecx
// 005877eb  7c05                 jl 0x5877f2
// 005877ed  99                   cdq 
// 005877ee  f7f9                 idiv ecx
// 005877f0  eb02                 jmp 0x5877f4
// 005877f2  33c0                 xor eax, eax
// 005877f4  66894702             mov word ptr [edi + 2], ax
// 005877f8  83c504               add ebp, 4
// 005877fb  83c708               add edi, 8
// 005877fe  83c610               add esi, 0x10
// 00587801  83fd40               cmp ebp, 0x40
// 00587804  0f8c16ffffff         jl 0x587720
// 0058780a  83c308               add ebx, 8
// 0058780d  836c241001           sub dword ptr [esp + 0x10], 1
// 00587812  0f8519fdffff         jne 0x587531
// 00587818  5f                   pop edi
// 00587819  5e                   pop esi
// 0058781a  5d                   pop ebp
// 0058781b  5b                   pop ebx
// 0058781c  81c418010000         add esp, 0x118
// 00587822  c3                   ret 
// library jpeg-6b/jcdctmgr.c (function _forward_DCT)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcdctmgr.c
