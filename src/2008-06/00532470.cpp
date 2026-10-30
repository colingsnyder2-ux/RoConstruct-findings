// from server: 100% by auto
// roc 2008-06 00532470  unit: seg_00530000  size: 1042 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00532470
//
// 00532470  83ec3c               sub esp, 0x3c
// 00532473  56                   push esi
// 00532474  8b742444             mov esi, dword ptr [esp + 0x44]
// 00532478  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 0053247f  57                   push edi
// 00532480  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 00532486  897c2418             mov dword ptr [esp + 0x18], edi
// 0053248a  7415                 je 0x5324a1
// 0053248c  837f2400             cmp dword ptr [edi + 0x24], 0
// 00532490  750f                 jne 0x5324a1
// 00532492  e859ffffff           call 0x5323f0
// 00532497  84c0                 test al, al
// 00532499  7506                 jne 0x5324a1
// 0053249b  5f                   pop edi
// 0053249c  5e                   pop esi
// 0053249d  83c43c               add esp, 0x3c
// 005324a0  c3                   ret 
// 005324a1  807f0800             cmp byte ptr [edi + 8], 0
// 005324a5  53                   push ebx
// 005324a6  55                   push ebp
// 005324a7  0f85be030000         jne 0x53286b
// 005324ad  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 005324b4  8b4618               mov eax, dword ptr [esi + 0x18]
// 005324b7  8b08                 mov ecx, dword ptr [eax]
// 005324b9  8b5004               mov edx, dword ptr [eax + 4]
// 005324bc  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 005324bf  8b4710               mov eax, dword ptr [edi + 0x10]
// 005324c2  894c2438             mov dword ptr [esp + 0x38], ecx
// 005324c6  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 005324c9  8954243c             mov dword ptr [esp + 0x3c], edx
// 005324cd  8b5718               mov edx, dword ptr [edi + 0x18]
// 005324d0  894c2428             mov dword ptr [esp + 0x28], ecx
// 005324d4  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 005324d7  8954242c             mov dword ptr [esp + 0x2c], edx
// 005324db  8b5720               mov edx, dword ptr [edi + 0x20]
// 005324de  89742448             mov dword ptr [esp + 0x48], esi
// 005324e2  894c2430             mov dword ptr [esp + 0x30], ecx
// 005324e6  89542434             mov dword ptr [esp + 0x34], edx
// 005324ea  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005324f2  0f8e3e030000         jle 0x532836
// 005324f8  81c644010000         add esi, 0x144
// 005324fe  8d4f70               lea ecx, [edi + 0x70]
// 00532501  8974241c             mov dword ptr [esp + 0x1c], esi
// 00532505  894c2418             mov dword ptr [esp + 0x18], ecx
// 00532509  eb09                 jmp 0x532514
// 0053250b  eb03                 jmp 0x532510
// 0053250d  8d4900               lea ecx, [ecx]
// 00532510  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00532514  83f808               cmp eax, 8
// 00532517  8b542454             mov edx, dword ptr [esp + 0x54]
// 0053251b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053251f  8b34b2               mov esi, dword ptr [edx + esi*4]
// 00532522  8b29                 mov ebp, dword ptr [ecx]
// 00532524  8b79d8               mov edi, dword ptr [ecx - 0x28]
// 00532527  89742424             mov dword ptr [esp + 0x24], esi
// 0053252b  896c2414             mov dword ptr [esp + 0x14], ebp
// 0053252f  7d2d                 jge 0x53255e
// 00532531  6a00                 push 0
// 00532533  50                   push eax
// 00532534  8d442440             lea eax, [esp + 0x40]
// 00532538  53                   push ebx
// 00532539  50                   push eax
// 0053253a  e8b1fcffff           call 0x5321f0
// 0053253f  83c410               add esp, 0x10
// 00532542  84c0                 test al, al
// 00532544  0f842e030000         je 0x532878
// 0053254a  8b442444             mov eax, dword ptr [esp + 0x44]
// 0053254e  83f808               cmp eax, 8
// 00532551  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00532555  7d07                 jge 0x53255e
// 00532557  b901000000           mov ecx, 1
// 0053255c  eb29                 jmp 0x532587
// 0053255e  8d48f8               lea ecx, [eax - 8]
// 00532561  8bd3                 mov edx, ebx
// 00532563  d3fa                 sar edx, cl
// 00532565  81e2ff000000         and edx, 0xff
// 0053256b  8b8c9790000000       mov ecx, dword ptr [edi + edx*4 + 0x90]
// 00532572  85c9                 test ecx, ecx
// 00532574  740c                 je 0x532582
// 00532576  0fb6bc3a90040000     movzx edi, byte ptr [edx + edi + 0x490]
// 0053257e  2bc1                 sub eax, ecx
// 00532580  eb28                 jmp 0x5325aa
// 00532582  b909000000           mov ecx, 9
// 00532587  51                   push ecx
// 00532588  57                   push edi
// 00532589  50                   push eax
// 0053258a  8d4c2444             lea ecx, [esp + 0x44]
// 0053258e  53                   push ebx
// 0053258f  51                   push ecx
// 00532590  e87bfdffff           call 0x532310
// 00532595  8bf8                 mov edi, eax
// 00532597  83c414               add esp, 0x14
// 0053259a  85ff                 test edi, edi
// 0053259c  0f8cd6020000         jl 0x532878
// 005325a2  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 005325a6  8b442444             mov eax, dword ptr [esp + 0x44]
// 005325aa  85ff                 test edi, edi
// 005325ac  7452                 je 0x532600
// 005325ae  3bc7                 cmp eax, edi
// 005325b0  7d20                 jge 0x5325d2
// 005325b2  57                   push edi
// 005325b3  50                   push eax
// 005325b4  8d542440             lea edx, [esp + 0x40]
// 005325b8  53                   push ebx
// 005325b9  52                   push edx
// 005325ba  e831fcffff           call 0x5321f0
// 005325bf  83c410               add esp, 0x10
// 005325c2  84c0                 test al, al
// 005325c4  0f84ae020000         je 0x532878
// 005325ca  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 005325ce  8b442444             mov eax, dword ptr [esp + 0x44]
// 005325d2  8bcf                 mov ecx, edi
// 005325d4  2bc7                 sub eax, edi
// 005325d6  ba01000000           mov edx, 1
// 005325db  d3e2                 shl edx, cl
// 005325dd  8beb                 mov ebp, ebx
// 005325df  8bc8                 mov ecx, eax
// 005325e1  d3fd                 sar ebp, cl
// 005325e3  4a                   dec edx
// 005325e4  23d5                 and edx, ebp
// 005325e6  3b14bd48ca8200       cmp edx, dword ptr [edi*4 + 0x82ca48]
// 005325ed  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005325f1  7d0b                 jge 0x5325fe
// 005325f3  8b3cbd88ca8200       mov edi, dword ptr [edi*4 + 0x82ca88]
// 005325fa  03fa                 add edi, edx
// 005325fc  eb02                 jmp 0x532600
// 005325fe  8bfa                 mov edi, edx
// 00532600  8b542410             mov edx, dword ptr [esp + 0x10]
// 00532604  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00532608  80bc0a9800000000     cmp byte ptr [edx + ecx + 0x98], 0
// 00532610  7413                 je 0x532625
// 00532612  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00532616  8b09                 mov ecx, dword ptr [ecx]
// 00532618  017c8c28             add dword ptr [esp + ecx*4 + 0x28], edi
// 0053261c  8d4c8c28             lea ecx, [esp + ecx*4 + 0x28]
// 00532620  8b09                 mov ecx, dword ptr [ecx]
// 00532622  66890e               mov word ptr [esi], cx
// 00532625  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00532629  80bc0aa200000000     cmp byte ptr [edx + ecx + 0xa2], 0
// 00532631  be01000000           mov esi, 1
// 00532636  0f840b010000         je 0x532747
// 0053263c  8d642400             lea esp, [esp]
// 00532640  83f808               cmp eax, 8
// 00532643  7d2d                 jge 0x532672
// 00532645  6a00                 push 0
// 00532647  50                   push eax
// 00532648  8d542440             lea edx, [esp + 0x40]
// 0053264c  53                   push ebx
// 0053264d  52                   push edx
// 0053264e  e89dfbffff           call 0x5321f0
// 00532653  83c410               add esp, 0x10
// 00532656  84c0                 test al, al
// 00532658  0f841a020000         je 0x532878
// 0053265e  8b442444             mov eax, dword ptr [esp + 0x44]
// 00532662  83f808               cmp eax, 8
// 00532665  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00532669  7d07                 jge 0x532672
// 0053266b  b901000000           mov ecx, 1
// 00532670  eb29                 jmp 0x53269b
// 00532672  8d48f8               lea ecx, [eax - 8]
// 00532675  8bd3                 mov edx, ebx
// 00532677  d3fa                 sar edx, cl
// 00532679  81e2ff000000         and edx, 0xff
// 0053267f  8b8c9590000000       mov ecx, dword ptr [ebp + edx*4 + 0x90]
// 00532686  85c9                 test ecx, ecx
// 00532688  740c                 je 0x532696
// 0053268a  0fb6bc2a90040000     movzx edi, byte ptr [edx + ebp + 0x490]
// 00532692  2bc1                 sub eax, ecx
// 00532694  eb28                 jmp 0x5326be
// 00532696  b909000000           mov ecx, 9
// 0053269b  51                   push ecx
// 0053269c  55                   push ebp
// 0053269d  50                   push eax
// 0053269e  8d442444             lea eax, [esp + 0x44]
// 005326a2  53                   push ebx
// 005326a3  50                   push eax
// 005326a4  e867fcffff           call 0x532310
// 005326a9  8bf8                 mov edi, eax
// 005326ab  83c414               add esp, 0x14
// 005326ae  85ff                 test edi, edi
// 005326b0  0f8cc2010000         jl 0x532878
// 005326b6  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 005326ba  8b442444             mov eax, dword ptr [esp + 0x44]
// 005326be  8bcf                 mov ecx, edi
// 005326c0  c1f904               sar ecx, 4
// 005326c3  83e70f               and edi, 0xf
// 005326c6  7465                 je 0x53272d
// 005326c8  03f1                 add esi, ecx
// 005326ca  3bc7                 cmp eax, edi
// 005326cc  7d20                 jge 0x5326ee
// 005326ce  57                   push edi
// 005326cf  50                   push eax
// 005326d0  8d4c2440             lea ecx, [esp + 0x40]
// 005326d4  53                   push ebx
// 005326d5  51                   push ecx
// 005326d6  e815fbffff           call 0x5321f0
// 005326db  83c410               add esp, 0x10
// 005326de  84c0                 test al, al
// 005326e0  0f8492010000         je 0x532878
// 005326e6  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 005326ea  8b442444             mov eax, dword ptr [esp + 0x44]
// 005326ee  8bcf                 mov ecx, edi
// 005326f0  2bc7                 sub eax, edi
// 005326f2  ba01000000           mov edx, 1
// 005326f7  d3e2                 shl edx, cl
// 005326f9  8beb                 mov ebp, ebx
// 005326fb  8bc8                 mov ecx, eax
// 005326fd  d3fd                 sar ebp, cl
// 005326ff  4a                   dec edx
// 00532700  23d5                 and edx, ebp
// 00532702  3b14bd48ca8200       cmp edx, dword ptr [edi*4 + 0x82ca48]
// 00532709  7d0b                 jge 0x532716
// 0053270b  8b3cbd88ca8200       mov edi, dword ptr [edi*4 + 0x82ca88]
// 00532712  03fa                 add edi, edx
// 00532714  eb02                 jmp 0x532718
// 00532716  8bfa                 mov edi, edx
// 00532718  8b14b5b0b18200       mov edx, dword ptr [esi*4 + 0x82b1b0]
// 0053271f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00532723  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00532727  66893c51             mov word ptr [ecx + edx*2], di
// 0053272b  eb0b                 jmp 0x532738
// 0053272d  83f90f               cmp ecx, 0xf
// 00532730  0f85d4000000         jne 0x53280a
// 00532736  03f1                 add esi, ecx
// 00532738  46                   inc esi
// 00532739  83fe40               cmp esi, 0x40
// 0053273c  0f8cfefeffff         jl 0x532640
// 00532742  e9c3000000           jmp 0x53280a
// 00532747  83f808               cmp eax, 8
// 0053274a  7d2d                 jge 0x532779
// 0053274c  6a00                 push 0
// 0053274e  50                   push eax
// 0053274f  8d542440             lea edx, [esp + 0x40]
// 00532753  53                   push ebx
// 00532754  52                   push edx
// 00532755  e896faffff           call 0x5321f0
// 0053275a  83c410               add esp, 0x10
// 0053275d  84c0                 test al, al
// 0053275f  0f8413010000         je 0x532878
// 00532765  8b442444             mov eax, dword ptr [esp + 0x44]
// 00532769  83f808               cmp eax, 8
// 0053276c  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00532770  7d07                 jge 0x532779
// 00532772  b901000000           mov ecx, 1
// 00532777  eb29                 jmp 0x5327a2
// 00532779  8d48f8               lea ecx, [eax - 8]
// 0053277c  8bd3                 mov edx, ebx
// 0053277e  d3fa                 sar edx, cl
// 00532780  81e2ff000000         and edx, 0xff
// 00532786  8b8c9590000000       mov ecx, dword ptr [ebp + edx*4 + 0x90]
// 0053278d  85c9                 test ecx, ecx
// 0053278f  740c                 je 0x53279d
// 00532791  0fb6bc2a90040000     movzx edi, byte ptr [edx + ebp + 0x490]
// 00532799  2bc1                 sub eax, ecx
// 0053279b  eb28                 jmp 0x5327c5
// 0053279d  b909000000           mov ecx, 9
// 005327a2  51                   push ecx
// 005327a3  55                   push ebp
// 005327a4  50                   push eax
// 005327a5  8d442444             lea eax, [esp + 0x44]
// 005327a9  53                   push ebx
// 005327aa  50                   push eax
// 005327ab  e860fbffff           call 0x532310
// 005327b0  8bf8                 mov edi, eax
// 005327b2  83c414               add esp, 0x14
// 005327b5  85ff                 test edi, edi
// 005327b7  0f8cbb000000         jl 0x532878
// 005327bd  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 005327c1  8b442444             mov eax, dword ptr [esp + 0x44]
// 005327c5  8bcf                 mov ecx, edi
// 005327c7  c1f904               sar ecx, 4
// 005327ca  83e70f               and edi, 0xf
// 005327cd  742a                 je 0x5327f9
// 005327cf  03f1                 add esi, ecx
// 005327d1  3bc7                 cmp eax, edi
// 005327d3  7d20                 jge 0x5327f5
// 005327d5  57                   push edi
// 005327d6  50                   push eax
// 005327d7  8d4c2440             lea ecx, [esp + 0x40]
// 005327db  53                   push ebx
// 005327dc  51                   push ecx
// 005327dd  e80efaffff           call 0x5321f0
// 005327e2  83c410               add esp, 0x10
// 005327e5  84c0                 test al, al
// 005327e7  0f848b000000         je 0x532878
// 005327ed  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 005327f1  8b442444             mov eax, dword ptr [esp + 0x44]
// 005327f5  2bc7                 sub eax, edi
// 005327f7  eb07                 jmp 0x532800
// 005327f9  83f90f               cmp ecx, 0xf
// 005327fc  750c                 jne 0x53280a
// 005327fe  03f1                 add esi, ecx
// 00532800  46                   inc esi
// 00532801  83fe40               cmp esi, 0x40
// 00532804  0f8c3dffffff         jl 0x532747
// 0053280a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053280e  ba04000000           mov edx, 4
// 00532813  01542418             add dword ptr [esp + 0x18], edx
// 00532817  0154241c             add dword ptr [esp + 0x1c], edx
// 0053281b  8b542450             mov edx, dword ptr [esp + 0x50]
// 0053281f  41                   inc ecx
// 00532820  3b8a40010000         cmp ecx, dword ptr [edx + 0x140]
// 00532826  894c2410             mov dword ptr [esp + 0x10], ecx
// 0053282a  0f8ce0fcffff         jl 0x532510
// 00532830  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00532834  8bf2                 mov esi, edx
// 00532836  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00532839  8b542438             mov edx, dword ptr [esp + 0x38]
// 0053283d  8911                 mov dword ptr [ecx], edx
// 0053283f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00532842  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00532846  895104               mov dword ptr [ecx + 4], edx
// 00532849  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0053284d  8b542430             mov edx, dword ptr [esp + 0x30]
// 00532851  894710               mov dword ptr [edi + 0x10], eax
// 00532854  8b442428             mov eax, dword ptr [esp + 0x28]
// 00532858  894714               mov dword ptr [edi + 0x14], eax
// 0053285b  8b442434             mov eax, dword ptr [esp + 0x34]
// 0053285f  894f18               mov dword ptr [edi + 0x18], ecx
// 00532862  89571c               mov dword ptr [edi + 0x1c], edx
// 00532865  895f0c               mov dword ptr [edi + 0xc], ebx
// 00532868  894720               mov dword ptr [edi + 0x20], eax
// 0053286b  ff4f24               dec dword ptr [edi + 0x24]
// 0053286e  5d                   pop ebp
// 0053286f  5b                   pop ebx
// 00532870  5f                   pop edi
// 00532871  b001                 mov al, 1
// 00532873  5e                   pop esi
// 00532874  83c43c               add esp, 0x3c
// 00532877  c3                   ret 
// 00532878  5d                   pop ebp
// 00532879  5b                   pop ebx
// 0053287a  5f                   pop edi
// 0053287b  32c0                 xor al, al
// 0053287d  5e                   pop esi
// 0053287e  83c43c               add esp, 0x3c
// 00532881  c3                   ret 
// library jpeg-6b/jdhuff.c (function _decode_mcu)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
