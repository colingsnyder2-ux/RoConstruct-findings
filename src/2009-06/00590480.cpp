// roc 2009-06 00590480  unit: seg_00590000  size: 537 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00590480
//
// 00590480  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00590484  33c9                 xor ecx, ecx
// 00590486  55                   push ebp
// 00590487  bd01000000           mov ebp, 1
// 0059048c  3bc1                 cmp eax, ecx
// 0059048e  0f84fe010000         je 0x590692
// 00590494  803831               cmp byte ptr [eax], 0x31
// 00590497  0f85f5010000         jne 0x590692
// 0059049d  837c242438           cmp dword ptr [esp + 0x24], 0x38
// 005904a2  0f85ea010000         jne 0x590692
// 005904a8  57                   push edi
// 005904a9  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005904ad  3bf9                 cmp edi, ecx
// 005904af  7506                 jne 0x5904b7
// 005904b1  5f                   pop edi
// 005904b2  8d45fd               lea eax, [ebp - 3]
// 005904b5  5d                   pop ebp
// 005904b6  c3                   ret 
// 005904b7  894f18               mov dword ptr [edi + 0x18], ecx
// 005904ba  394f20               cmp dword ptr [edi + 0x20], ecx
// 005904bd  750a                 jne 0x5904c9
// 005904bf  c74720f0a05900       mov dword ptr [edi + 0x20], 0x59a0f0
// 005904c6  894f28               mov dword ptr [edi + 0x28], ecx
// 005904c9  394f24               cmp dword ptr [edi + 0x24], ecx
// 005904cc  7507                 jne 0x5904d5
// 005904ce  c7472450aa5900       mov dword ptr [edi + 0x24], 0x59aa50
// 005904d5  837c2410ff           cmp dword ptr [esp + 0x10], -1
// 005904da  7508                 jne 0x5904e4
// 005904dc  c744241006000000     mov dword ptr [esp + 0x10], 6
// 005904e4  53                   push ebx
// 005904e5  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005904e9  3bd9                 cmp ebx, ecx
// 005904eb  7d06                 jge 0x5904f3
// 005904ed  33ed                 xor ebp, ebp
// 005904ef  f7db                 neg ebx
// 005904f1  eb0d                 jmp 0x590500
// 005904f3  83fb0f               cmp ebx, 0xf
// 005904f6  7e08                 jle 0x590500
// 005904f8  bd02000000           mov ebp, 2
// 005904fd  83eb10               sub ebx, 0x10
// 00590500  8b442420             mov eax, dword ptr [esp + 0x20]
// 00590504  48                   dec eax
// 00590505  83f808               cmp eax, 8
// 00590508  0f877b010000         ja 0x590689
// 0059050e  837c241808           cmp dword ptr [esp + 0x18], 8
// 00590513  0f8570010000         jne 0x590689
// 00590519  8d4bf8               lea ecx, [ebx - 8]
// 0059051c  83f907               cmp ecx, 7
// 0059051f  0f8764010000         ja 0x590689
// 00590525  837c241409           cmp dword ptr [esp + 0x14], 9
// 0059052a  0f8759010000         ja 0x590689
// 00590530  837c242404           cmp dword ptr [esp + 0x24], 4
// 00590535  0f874e010000         ja 0x590689
// 0059053b  83fb08               cmp ebx, 8
// 0059053e  7505                 jne 0x590545
// 00590540  bb09000000           mov ebx, 9
// 00590545  8b5728               mov edx, dword ptr [edi + 0x28]
// 00590548  8b4720               mov eax, dword ptr [edi + 0x20]
// 0059054b  56                   push esi
// 0059054c  68c0160000           push 0x16c0
// 00590551  6a01                 push 1
// 00590553  52                   push edx
// 00590554  ffd0                 call eax
// 00590556  8bf0                 mov esi, eax
// 00590558  83c40c               add esp, 0xc
// 0059055b  85f6                 test esi, esi
// 0059055d  0f841c010000         je 0x59067f
// 00590563  89771c               mov dword ptr [edi + 0x1c], esi
// 00590566  896e18               mov dword ptr [esi + 0x18], ebp
// 00590569  8bcb                 mov ecx, ebx
// 0059056b  bd01000000           mov ebp, 1
// 00590570  d3e5                 shl ebp, cl
// 00590572  895e30               mov dword ptr [esi + 0x30], ebx
// 00590575  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00590579  b801000000           mov eax, 1
// 0059057e  8d4dff               lea ecx, [ebp - 1]
// 00590581  894e34               mov dword ptr [esi + 0x34], ecx
// 00590584  8d4b07               lea ecx, [ebx + 7]
// 00590587  d3e0                 shl eax, cl
// 00590589  894e50               mov dword ptr [esi + 0x50], ecx
// 0059058c  83c102               add ecx, 2
// 0059058f  893e                 mov dword ptr [esi], edi
// 00590591  89464c               mov dword ptr [esi + 0x4c], eax
// 00590594  48                   dec eax
// 00590595  894654               mov dword ptr [esi + 0x54], eax
// 00590598  b8abaaaaaa           mov eax, 0xaaaaaaab
// 0059059d  f7e1                 mul ecx
// 0059059f  d1ea                 shr edx, 1
// 005905a1  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 005905a8  896e2c               mov dword ptr [esi + 0x2c], ebp
// 005905ab  895658               mov dword ptr [esi + 0x58], edx
// 005905ae  8b5728               mov edx, dword ptr [edi + 0x28]
// 005905b1  8b4720               mov eax, dword ptr [edi + 0x20]
// 005905b4  6a02                 push 2
// 005905b6  55                   push ebp
// 005905b7  52                   push edx
// 005905b8  ffd0                 call eax
// 005905ba  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 005905bd  894638               mov dword ptr [esi + 0x38], eax
// 005905c0  8b5728               mov edx, dword ptr [edi + 0x28]
// 005905c3  8b4720               mov eax, dword ptr [edi + 0x20]
// 005905c6  6a02                 push 2
// 005905c8  51                   push ecx
// 005905c9  52                   push edx
// 005905ca  ffd0                 call eax
// 005905cc  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 005905cf  894640               mov dword ptr [esi + 0x40], eax
// 005905d2  8b5728               mov edx, dword ptr [edi + 0x28]
// 005905d5  8b4720               mov eax, dword ptr [edi + 0x20]
// 005905d8  6a02                 push 2
// 005905da  51                   push ecx
// 005905db  52                   push edx
// 005905dc  ffd0                 call eax
// 005905de  894644               mov dword ptr [esi + 0x44], eax
// 005905e1  8d4b06               lea ecx, [ebx + 6]
// 005905e4  b801000000           mov eax, 1
// 005905e9  d3e0                 shl eax, cl
// 005905eb  6a04                 push 4
// 005905ed  89869c160000         mov dword ptr [esi + 0x169c], eax
// 005905f3  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 005905f6  8b5720               mov edx, dword ptr [edi + 0x20]
// 005905f9  50                   push eax
// 005905fa  51                   push ecx
// 005905fb  ffd2                 call edx
// 005905fd  8b8e9c160000         mov ecx, dword ptr [esi + 0x169c]
// 00590603  83c430               add esp, 0x30
// 00590606  837e3800             cmp dword ptr [esi + 0x38], 0
// 0059060a  8d148d00000000       lea edx, [ecx*4]
// 00590611  894608               mov dword ptr [esi + 8], eax
// 00590614  89560c               mov dword ptr [esi + 0xc], edx
// 00590617  744e                 je 0x590667
// 00590619  837e4000             cmp dword ptr [esi + 0x40], 0
// 0059061d  7448                 je 0x590667
// 0059061f  837e4400             cmp dword ptr [esi + 0x44], 0
// 00590623  7442                 je 0x590667
// 00590625  85c0                 test eax, eax
// 00590627  743e                 je 0x590667
// 00590629  8bd1                 mov edx, ecx
// 0059062b  d1ea                 shr edx, 1
// 0059062d  8d1450               lea edx, [eax + edx*2]
// 00590630  8d0448               lea eax, [eax + ecx*2]
// 00590633  03c1                 add eax, ecx
// 00590635  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00590639  8996a4160000         mov dword ptr [esi + 0x16a4], edx
// 0059063f  8b542428             mov edx, dword ptr [esp + 0x28]
// 00590643  57                   push edi
// 00590644  898698160000         mov dword ptr [esi + 0x1698], eax
// 0059064a  898e84000000         mov dword ptr [esi + 0x84], ecx
// 00590650  899688000000         mov dword ptr [esi + 0x88], edx
// 00590656  c6462408             mov byte ptr [esi + 0x24], 8
// 0059065a  e891fdffff           call 0x5903f0
// 0059065f  83c404               add esp, 4
// 00590662  5e                   pop esi
// 00590663  5b                   pop ebx
// 00590664  5f                   pop edi
// 00590665  5d                   pop ebp
// 00590666  c3                   ret 
// 00590667  c746049a020000       mov dword ptr [esi + 4], 0x29a
// 0059066e  a100398d00           mov eax, dword ptr [0x8d3900]
// 00590673  57                   push edi
// 00590674  894718               mov dword ptr [edi + 0x18], eax
// 00590677  e8f4eeffff           call 0x58f570
// 0059067c  83c404               add esp, 4
// 0059067f  5e                   pop esi
// 00590680  5b                   pop ebx
// 00590681  5f                   pop edi
// 00590682  b8fcffffff           mov eax, 0xfffffffc
// 00590687  5d                   pop ebp
// 00590688  c3                   ret 
// 00590689  5b                   pop ebx
// 0059068a  5f                   pop edi
// 0059068b  b8feffffff           mov eax, 0xfffffffe
// 00590690  5d                   pop ebp
// 00590691  c3                   ret 
// 00590692  b8faffffff           mov eax, 0xfffffffa
// 00590697  5d                   pop ebp
// 00590698  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflateInit2_)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
