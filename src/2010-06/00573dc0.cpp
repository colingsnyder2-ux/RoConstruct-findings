// from server: 100% by auto
// roc 2010-06 00573dc0  unit: seg_00570000  size: 537 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00573dc0
//
// 00573dc0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00573dc4  33c9                 xor ecx, ecx
// 00573dc6  55                   push ebp
// 00573dc7  bd01000000           mov ebp, 1
// 00573dcc  3bc1                 cmp eax, ecx
// 00573dce  0f84fe010000         je 0x573fd2
// 00573dd4  803831               cmp byte ptr [eax], 0x31
// 00573dd7  0f85f5010000         jne 0x573fd2
// 00573ddd  837c242438           cmp dword ptr [esp + 0x24], 0x38
// 00573de2  0f85ea010000         jne 0x573fd2
// 00573de8  57                   push edi
// 00573de9  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00573ded  3bf9                 cmp edi, ecx
// 00573def  7506                 jne 0x573df7
// 00573df1  5f                   pop edi
// 00573df2  8d45fd               lea eax, [ebp - 3]
// 00573df5  5d                   pop ebp
// 00573df6  c3                   ret 
// 00573df7  894f18               mov dword ptr [edi + 0x18], ecx
// 00573dfa  394f20               cmp dword ptr [edi + 0x20], ecx
// 00573dfd  750a                 jne 0x573e09
// 00573dff  c7472080dc5700       mov dword ptr [edi + 0x20], 0x57dc80
// 00573e06  894f28               mov dword ptr [edi + 0x28], ecx
// 00573e09  394f24               cmp dword ptr [edi + 0x24], ecx
// 00573e0c  7507                 jne 0x573e15
// 00573e0e  c74724e0e55700       mov dword ptr [edi + 0x24], 0x57e5e0
// 00573e15  837c2410ff           cmp dword ptr [esp + 0x10], -1
// 00573e1a  7508                 jne 0x573e24
// 00573e1c  c744241006000000     mov dword ptr [esp + 0x10], 6
// 00573e24  53                   push ebx
// 00573e25  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00573e29  3bd9                 cmp ebx, ecx
// 00573e2b  7d06                 jge 0x573e33
// 00573e2d  33ed                 xor ebp, ebp
// 00573e2f  f7db                 neg ebx
// 00573e31  eb0d                 jmp 0x573e40
// 00573e33  83fb0f               cmp ebx, 0xf
// 00573e36  7e08                 jle 0x573e40
// 00573e38  bd02000000           mov ebp, 2
// 00573e3d  83eb10               sub ebx, 0x10
// 00573e40  8b442420             mov eax, dword ptr [esp + 0x20]
// 00573e44  48                   dec eax
// 00573e45  83f808               cmp eax, 8
// 00573e48  0f877b010000         ja 0x573fc9
// 00573e4e  837c241808           cmp dword ptr [esp + 0x18], 8
// 00573e53  0f8570010000         jne 0x573fc9
// 00573e59  8d4bf8               lea ecx, [ebx - 8]
// 00573e5c  83f907               cmp ecx, 7
// 00573e5f  0f8764010000         ja 0x573fc9
// 00573e65  837c241409           cmp dword ptr [esp + 0x14], 9
// 00573e6a  0f8759010000         ja 0x573fc9
// 00573e70  837c242404           cmp dword ptr [esp + 0x24], 4
// 00573e75  0f874e010000         ja 0x573fc9
// 00573e7b  83fb08               cmp ebx, 8
// 00573e7e  7505                 jne 0x573e85
// 00573e80  bb09000000           mov ebx, 9
// 00573e85  8b5728               mov edx, dword ptr [edi + 0x28]
// 00573e88  8b4720               mov eax, dword ptr [edi + 0x20]
// 00573e8b  56                   push esi
// 00573e8c  68c0160000           push 0x16c0
// 00573e91  6a01                 push 1
// 00573e93  52                   push edx
// 00573e94  ffd0                 call eax
// 00573e96  8bf0                 mov esi, eax
// 00573e98  83c40c               add esp, 0xc
// 00573e9b  85f6                 test esi, esi
// 00573e9d  0f841c010000         je 0x573fbf
// 00573ea3  89771c               mov dword ptr [edi + 0x1c], esi
// 00573ea6  896e18               mov dword ptr [esi + 0x18], ebp
// 00573ea9  8bcb                 mov ecx, ebx
// 00573eab  bd01000000           mov ebp, 1
// 00573eb0  d3e5                 shl ebp, cl
// 00573eb2  895e30               mov dword ptr [esi + 0x30], ebx
// 00573eb5  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00573eb9  b801000000           mov eax, 1
// 00573ebe  8d4dff               lea ecx, [ebp - 1]
// 00573ec1  894e34               mov dword ptr [esi + 0x34], ecx
// 00573ec4  8d4b07               lea ecx, [ebx + 7]
// 00573ec7  d3e0                 shl eax, cl
// 00573ec9  894e50               mov dword ptr [esi + 0x50], ecx
// 00573ecc  83c102               add ecx, 2
// 00573ecf  893e                 mov dword ptr [esi], edi
// 00573ed1  89464c               mov dword ptr [esi + 0x4c], eax
// 00573ed4  48                   dec eax
// 00573ed5  894654               mov dword ptr [esi + 0x54], eax
// 00573ed8  b8abaaaaaa           mov eax, 0xaaaaaaab
// 00573edd  f7e1                 mul ecx
// 00573edf  d1ea                 shr edx, 1
// 00573ee1  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 00573ee8  896e2c               mov dword ptr [esi + 0x2c], ebp
// 00573eeb  895658               mov dword ptr [esi + 0x58], edx
// 00573eee  8b5728               mov edx, dword ptr [edi + 0x28]
// 00573ef1  8b4720               mov eax, dword ptr [edi + 0x20]
// 00573ef4  6a02                 push 2
// 00573ef6  55                   push ebp
// 00573ef7  52                   push edx
// 00573ef8  ffd0                 call eax
// 00573efa  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00573efd  894638               mov dword ptr [esi + 0x38], eax
// 00573f00  8b5728               mov edx, dword ptr [edi + 0x28]
// 00573f03  8b4720               mov eax, dword ptr [edi + 0x20]
// 00573f06  6a02                 push 2
// 00573f08  51                   push ecx
// 00573f09  52                   push edx
// 00573f0a  ffd0                 call eax
// 00573f0c  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 00573f0f  894640               mov dword ptr [esi + 0x40], eax
// 00573f12  8b5728               mov edx, dword ptr [edi + 0x28]
// 00573f15  8b4720               mov eax, dword ptr [edi + 0x20]
// 00573f18  6a02                 push 2
// 00573f1a  51                   push ecx
// 00573f1b  52                   push edx
// 00573f1c  ffd0                 call eax
// 00573f1e  894644               mov dword ptr [esi + 0x44], eax
// 00573f21  8d4b06               lea ecx, [ebx + 6]
// 00573f24  b801000000           mov eax, 1
// 00573f29  d3e0                 shl eax, cl
// 00573f2b  6a04                 push 4
// 00573f2d  89869c160000         mov dword ptr [esi + 0x169c], eax
// 00573f33  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00573f36  8b5720               mov edx, dword ptr [edi + 0x20]
// 00573f39  50                   push eax
// 00573f3a  51                   push ecx
// 00573f3b  ffd2                 call edx
// 00573f3d  8b8e9c160000         mov ecx, dword ptr [esi + 0x169c]
// 00573f43  83c430               add esp, 0x30
// 00573f46  837e3800             cmp dword ptr [esi + 0x38], 0
// 00573f4a  8d148d00000000       lea edx, [ecx*4]
// 00573f51  894608               mov dword ptr [esi + 8], eax
// 00573f54  89560c               mov dword ptr [esi + 0xc], edx
// 00573f57  744e                 je 0x573fa7
// 00573f59  837e4000             cmp dword ptr [esi + 0x40], 0
// 00573f5d  7448                 je 0x573fa7
// 00573f5f  837e4400             cmp dword ptr [esi + 0x44], 0
// 00573f63  7442                 je 0x573fa7
// 00573f65  85c0                 test eax, eax
// 00573f67  743e                 je 0x573fa7
// 00573f69  8bd1                 mov edx, ecx
// 00573f6b  d1ea                 shr edx, 1
// 00573f6d  8d1450               lea edx, [eax + edx*2]
// 00573f70  8d0448               lea eax, [eax + ecx*2]
// 00573f73  03c1                 add eax, ecx
// 00573f75  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00573f79  8996a4160000         mov dword ptr [esi + 0x16a4], edx
// 00573f7f  8b542428             mov edx, dword ptr [esp + 0x28]
// 00573f83  57                   push edi
// 00573f84  898698160000         mov dword ptr [esi + 0x1698], eax
// 00573f8a  898e84000000         mov dword ptr [esi + 0x84], ecx
// 00573f90  899688000000         mov dword ptr [esi + 0x88], edx
// 00573f96  c6462408             mov byte ptr [esi + 0x24], 8
// 00573f9a  e891fdffff           call 0x573d30
// 00573f9f  83c404               add esp, 4
// 00573fa2  5e                   pop esi
// 00573fa3  5b                   pop ebx
// 00573fa4  5f                   pop edi
// 00573fa5  5d                   pop ebp
// 00573fa6  c3                   ret 
// 00573fa7  c746049a020000       mov dword ptr [esi + 4], 0x29a
// 00573fae  a11085a200           mov eax, dword ptr [0xa28510]
// 00573fb3  57                   push edi
// 00573fb4  894718               mov dword ptr [edi + 0x18], eax
// 00573fb7  e804efffff           call 0x572ec0
// 00573fbc  83c404               add esp, 4
// 00573fbf  5e                   pop esi
// 00573fc0  5b                   pop ebx
// 00573fc1  5f                   pop edi
// 00573fc2  b8fcffffff           mov eax, 0xfffffffc
// 00573fc7  5d                   pop ebp
// 00573fc8  c3                   ret 
// 00573fc9  5b                   pop ebx
// 00573fca  5f                   pop edi
// 00573fcb  b8feffffff           mov eax, 0xfffffffe
// 00573fd0  5d                   pop ebp
// 00573fd1  c3                   ret 
// 00573fd2  b8faffffff           mov eax, 0xfffffffa
// 00573fd7  5d                   pop ebp
// 00573fd8  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflateInit2_)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
