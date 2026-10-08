// roc 2009-12 006124a0  unit: seg_00610000  size: 537 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006124a0
//
// 006124a0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006124a4  33c9                 xor ecx, ecx
// 006124a6  55                   push ebp
// 006124a7  bd01000000           mov ebp, 1
// 006124ac  3bc1                 cmp eax, ecx
// 006124ae  0f84fe010000         je 0x6126b2
// 006124b4  803831               cmp byte ptr [eax], 0x31
// 006124b7  0f85f5010000         jne 0x6126b2
// 006124bd  837c242438           cmp dword ptr [esp + 0x24], 0x38
// 006124c2  0f85ea010000         jne 0x6126b2
// 006124c8  57                   push edi
// 006124c9  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006124cd  3bf9                 cmp edi, ecx
// 006124cf  7506                 jne 0x6124d7
// 006124d1  5f                   pop edi
// 006124d2  8d45fd               lea eax, [ebp - 3]
// 006124d5  5d                   pop ebp
// 006124d6  c3                   ret 
// 006124d7  894f18               mov dword ptr [edi + 0x18], ecx
// 006124da  394f20               cmp dword ptr [edi + 0x20], ecx
// 006124dd  750a                 jne 0x6124e9
// 006124df  c7472020c16100       mov dword ptr [edi + 0x20], 0x61c120
// 006124e6  894f28               mov dword ptr [edi + 0x28], ecx
// 006124e9  394f24               cmp dword ptr [edi + 0x24], ecx
// 006124ec  7507                 jne 0x6124f5
// 006124ee  c7472480ca6100       mov dword ptr [edi + 0x24], 0x61ca80
// 006124f5  837c2410ff           cmp dword ptr [esp + 0x10], -1
// 006124fa  7508                 jne 0x612504
// 006124fc  c744241006000000     mov dword ptr [esp + 0x10], 6
// 00612504  53                   push ebx
// 00612505  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00612509  3bd9                 cmp ebx, ecx
// 0061250b  7d06                 jge 0x612513
// 0061250d  33ed                 xor ebp, ebp
// 0061250f  f7db                 neg ebx
// 00612511  eb0d                 jmp 0x612520
// 00612513  83fb0f               cmp ebx, 0xf
// 00612516  7e08                 jle 0x612520
// 00612518  bd02000000           mov ebp, 2
// 0061251d  83eb10               sub ebx, 0x10
// 00612520  8b442420             mov eax, dword ptr [esp + 0x20]
// 00612524  48                   dec eax
// 00612525  83f808               cmp eax, 8
// 00612528  0f877b010000         ja 0x6126a9
// 0061252e  837c241808           cmp dword ptr [esp + 0x18], 8
// 00612533  0f8570010000         jne 0x6126a9
// 00612539  8d4bf8               lea ecx, [ebx - 8]
// 0061253c  83f907               cmp ecx, 7
// 0061253f  0f8764010000         ja 0x6126a9
// 00612545  837c241409           cmp dword ptr [esp + 0x14], 9
// 0061254a  0f8759010000         ja 0x6126a9
// 00612550  837c242404           cmp dword ptr [esp + 0x24], 4
// 00612555  0f874e010000         ja 0x6126a9
// 0061255b  83fb08               cmp ebx, 8
// 0061255e  7505                 jne 0x612565
// 00612560  bb09000000           mov ebx, 9
// 00612565  8b5728               mov edx, dword ptr [edi + 0x28]
// 00612568  8b4720               mov eax, dword ptr [edi + 0x20]
// 0061256b  56                   push esi
// 0061256c  68c0160000           push 0x16c0
// 00612571  6a01                 push 1
// 00612573  52                   push edx
// 00612574  ffd0                 call eax
// 00612576  8bf0                 mov esi, eax
// 00612578  83c40c               add esp, 0xc
// 0061257b  85f6                 test esi, esi
// 0061257d  0f841c010000         je 0x61269f
// 00612583  89771c               mov dword ptr [edi + 0x1c], esi
// 00612586  896e18               mov dword ptr [esi + 0x18], ebp
// 00612589  8bcb                 mov ecx, ebx
// 0061258b  bd01000000           mov ebp, 1
// 00612590  d3e5                 shl ebp, cl
// 00612592  895e30               mov dword ptr [esi + 0x30], ebx
// 00612595  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00612599  b801000000           mov eax, 1
// 0061259e  8d4dff               lea ecx, [ebp - 1]
// 006125a1  894e34               mov dword ptr [esi + 0x34], ecx
// 006125a4  8d4b07               lea ecx, [ebx + 7]
// 006125a7  d3e0                 shl eax, cl
// 006125a9  894e50               mov dword ptr [esi + 0x50], ecx
// 006125ac  83c102               add ecx, 2
// 006125af  893e                 mov dword ptr [esi], edi
// 006125b1  89464c               mov dword ptr [esi + 0x4c], eax
// 006125b4  48                   dec eax
// 006125b5  894654               mov dword ptr [esi + 0x54], eax
// 006125b8  b8abaaaaaa           mov eax, 0xaaaaaaab
// 006125bd  f7e1                 mul ecx
// 006125bf  d1ea                 shr edx, 1
// 006125c1  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 006125c8  896e2c               mov dword ptr [esi + 0x2c], ebp
// 006125cb  895658               mov dword ptr [esi + 0x58], edx
// 006125ce  8b5728               mov edx, dword ptr [edi + 0x28]
// 006125d1  8b4720               mov eax, dword ptr [edi + 0x20]
// 006125d4  6a02                 push 2
// 006125d6  55                   push ebp
// 006125d7  52                   push edx
// 006125d8  ffd0                 call eax
// 006125da  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 006125dd  894638               mov dword ptr [esi + 0x38], eax
// 006125e0  8b5728               mov edx, dword ptr [edi + 0x28]
// 006125e3  8b4720               mov eax, dword ptr [edi + 0x20]
// 006125e6  6a02                 push 2
// 006125e8  51                   push ecx
// 006125e9  52                   push edx
// 006125ea  ffd0                 call eax
// 006125ec  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 006125ef  894640               mov dword ptr [esi + 0x40], eax
// 006125f2  8b5728               mov edx, dword ptr [edi + 0x28]
// 006125f5  8b4720               mov eax, dword ptr [edi + 0x20]
// 006125f8  6a02                 push 2
// 006125fa  51                   push ecx
// 006125fb  52                   push edx
// 006125fc  ffd0                 call eax
// 006125fe  894644               mov dword ptr [esi + 0x44], eax
// 00612601  8d4b06               lea ecx, [ebx + 6]
// 00612604  b801000000           mov eax, 1
// 00612609  d3e0                 shl eax, cl
// 0061260b  6a04                 push 4
// 0061260d  89869c160000         mov dword ptr [esi + 0x169c], eax
// 00612613  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00612616  8b5720               mov edx, dword ptr [edi + 0x20]
// 00612619  50                   push eax
// 0061261a  51                   push ecx
// 0061261b  ffd2                 call edx
// 0061261d  8b8e9c160000         mov ecx, dword ptr [esi + 0x169c]
// 00612623  83c430               add esp, 0x30
// 00612626  837e3800             cmp dword ptr [esi + 0x38], 0
// 0061262a  8d148d00000000       lea edx, [ecx*4]
// 00612631  894608               mov dword ptr [esi + 8], eax
// 00612634  89560c               mov dword ptr [esi + 0xc], edx
// 00612637  744e                 je 0x612687
// 00612639  837e4000             cmp dword ptr [esi + 0x40], 0
// 0061263d  7448                 je 0x612687
// 0061263f  837e4400             cmp dword ptr [esi + 0x44], 0
// 00612643  7442                 je 0x612687
// 00612645  85c0                 test eax, eax
// 00612647  743e                 je 0x612687
// 00612649  8bd1                 mov edx, ecx
// 0061264b  d1ea                 shr edx, 1
// 0061264d  8d1450               lea edx, [eax + edx*2]
// 00612650  8d0448               lea eax, [eax + ecx*2]
// 00612653  03c1                 add eax, ecx
// 00612655  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00612659  8996a4160000         mov dword ptr [esi + 0x16a4], edx
// 0061265f  8b542428             mov edx, dword ptr [esp + 0x28]
// 00612663  57                   push edi
// 00612664  898698160000         mov dword ptr [esi + 0x1698], eax
// 0061266a  898e84000000         mov dword ptr [esi + 0x84], ecx
// 00612670  899688000000         mov dword ptr [esi + 0x88], edx
// 00612676  c6462408             mov byte ptr [esi + 0x24], 8
// 0061267a  e891fdffff           call 0x612410
// 0061267f  83c404               add esp, 4
// 00612682  5e                   pop esi
// 00612683  5b                   pop ebx
// 00612684  5f                   pop edi
// 00612685  5d                   pop ebp
// 00612686  c3                   ret 
// 00612687  c746049a020000       mov dword ptr [esi + 4], 0x29a
// 0061268e  a190a79c00           mov eax, dword ptr [0x9ca790]
// 00612693  57                   push edi
// 00612694  894718               mov dword ptr [edi + 0x18], eax
// 00612697  e804efffff           call 0x6115a0
// 0061269c  83c404               add esp, 4
// 0061269f  5e                   pop esi
// 006126a0  5b                   pop ebx
// 006126a1  5f                   pop edi
// 006126a2  b8fcffffff           mov eax, 0xfffffffc
// 006126a7  5d                   pop ebp
// 006126a8  c3                   ret 
// 006126a9  5b                   pop ebx
// 006126aa  5f                   pop edi
// 006126ab  b8feffffff           mov eax, 0xfffffffe
// 006126b0  5d                   pop ebp
// 006126b1  c3                   ret 
// 006126b2  b8faffffff           mov eax, 0xfffffffa
// 006126b7  5d                   pop ebp
// 006126b8  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflateInit2_)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
