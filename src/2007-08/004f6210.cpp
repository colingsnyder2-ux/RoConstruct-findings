// roc 2007-08 004f6210  unit: boost::bad_lexical_cast  size: 291 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f6210
//
// 004f6210  6aff                 push -1
// 004f6212  68d1dd7400           push 0x74ddd1
// 004f6217  64a100000000         mov eax, dword ptr fs:[0]
// 004f621d  50                   push eax
// 004f621e  83ec0c               sub esp, 0xc
// 004f6221  53                   push ebx
// 004f6222  55                   push ebp
// 004f6223  56                   push esi
// 004f6224  57                   push edi
// 004f6225  a188518b00           mov eax, dword ptr [0x8b5188]
// 004f622a  33c4                 xor eax, esp
// 004f622c  50                   push eax
// 004f622d  8d442420             lea eax, [esp + 0x20]
// 004f6231  64a300000000         mov dword ptr fs:[0], eax
// 004f6237  8bf9                 mov edi, ecx
// 004f6239  8b4708               mov eax, dword ptr [edi + 8]
// 004f623c  8b37                 mov esi, dword ptr [edi]
// 004f623e  8d0440               lea eax, [eax + eax*2]
// 004f6241  03c0                 add eax, eax
// 004f6243  03c0                 add eax, eax
// 004f6245  03c0                 add eax, eax
// 004f6247  6a10                 push 0x10
// 004f6249  50                   push eax
// 004f624a  89742420             mov dword ptr [esp + 0x20], esi
// 004f624e  e80d9e0000           call 0x500060
// 004f6253  8b542438             mov edx, dword ptr [esp + 0x38]
// 004f6257  8907                 mov dword ptr [edi], eax
// 004f6259  8b7f08               mov edi, dword ptr [edi + 8]
// 004f625c  83c408               add esp, 8
// 004f625f  3bd7                 cmp edx, edi
// 004f6261  8bcf                 mov ecx, edi
// 004f6263  7d02                 jge 0x4f6267
// 004f6265  8bca                 mov ecx, edx
// 004f6267  8d0c49               lea ecx, [ecx + ecx*2]
// 004f626a  8bfe                 mov edi, esi
// 004f626c  8bf0                 mov esi, eax
// 004f626e  8d2cc8               lea ebp, [eax + ecx*8]
// 004f6271  33db                 xor ebx, ebx
// 004f6273  3bf5                 cmp esi, ebp
// 004f6275  89742414             mov dword ptr [esp + 0x14], esi
// 004f6279  7344                 jae 0x4f62bf
// 004f627b  eb03                 jmp 0x4f6280
// 004f627d  8d4900               lea ecx, [ecx]
// 004f6280  8974241c             mov dword ptr [esp + 0x1c], esi
// 004f6284  3bf3                 cmp esi, ebx
// 004f6286  895c2428             mov dword ptr [esp + 0x28], ebx
// 004f628a  741d                 je 0x4f62a9
// 004f628c  57                   push edi
// 004f628d  8bce                 mov ecx, esi
// 004f628f  e87cebffff           call 0x4f4e10
// 004f6294  8d570c               lea edx, [edi + 0xc]
// 004f6297  8d4e0c               lea ecx, [esi + 0xc]
// 004f629a  52                   push edx
// 004f629b  c644242c01           mov byte ptr [esp + 0x2c], 1
// 004f62a0  e86bebffff           call 0x4f4e10
// 004f62a5  8b542430             mov edx, dword ptr [esp + 0x30]
// 004f62a9  83c618               add esi, 0x18
// 004f62ac  83c718               add edi, 0x18
// 004f62af  3bf5                 cmp esi, ebp
// 004f62b1  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004f62b9  89742414             mov dword ptr [esp + 0x14], esi
// 004f62bd  72c1                 jb 0x4f6280
// 004f62bf  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004f62c3  8d0452               lea eax, [edx + edx*2]
// 004f62c6  8d7cc500             lea edi, [ebp + eax*8]
// 004f62ca  3bef                 cmp ebp, edi
// 004f62cc  8bf5                 mov esi, ebp
// 004f62ce  89742430             mov dword ptr [esp + 0x30], esi
// 004f62d2  7340                 jae 0x4f6314
// 004f62d4  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004f62d7  51                   push ecx
// 004f62d8  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 004f62e0  e82b950000           call 0x4ff810
// 004f62e5  895e0c               mov dword ptr [esi + 0xc], ebx
// 004f62e8  895e10               mov dword ptr [esi + 0x10], ebx
// 004f62eb  895e14               mov dword ptr [esi + 0x14], ebx
// 004f62ee  8b16                 mov edx, dword ptr [esi]
// 004f62f0  52                   push edx
// 004f62f1  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 004f62f9  e812950000           call 0x4ff810
// 004f62fe  891e                 mov dword ptr [esi], ebx
// 004f6300  895e04               mov dword ptr [esi + 4], ebx
// 004f6303  895e08               mov dword ptr [esi + 8], ebx
// 004f6306  83c618               add esi, 0x18
// 004f6309  83c408               add esp, 8
// 004f630c  3bf7                 cmp esi, edi
// 004f630e  89742430             mov dword ptr [esp + 0x30], esi
// 004f6312  72c0                 jb 0x4f62d4
// 004f6314  55                   push ebp
// 004f6315  e8f6940000           call 0x4ff810
// 004f631a  83c404               add esp, 4
// 004f631d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004f6321  64890d00000000       mov dword ptr fs:[0], ecx
// 004f6328  59                   pop ecx
// 004f6329  5f                   pop edi
// 004f632a  5e                   pop esi
// 004f632b  5d                   pop ebp
// 004f632c  5b                   pop ebx
// 004f632d  83c418               add esp, 0x18
// 004f6330  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ?realloc@?$Array@VVertex@MeshAlg@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
