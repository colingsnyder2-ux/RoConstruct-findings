// from server: 100% by tester
// roc 2007-03 004ea870  unit: seg_004e0000  size: 428 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ea870
//
// 004ea870  6aff                 push -1
// 004ea872  68f1ec7400           push 0x74ecf1
// 004ea877  64a100000000         mov eax, dword ptr fs:[0]
// 004ea87d  50                   push eax
// 004ea87e  83ec10               sub esp, 0x10
// 004ea881  53                   push ebx
// 004ea882  55                   push ebp
// 004ea883  56                   push esi
// 004ea884  57                   push edi
// 004ea885  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004ea88a  33c4                 xor eax, esp
// 004ea88c  50                   push eax
// 004ea88d  8d442424             lea eax, [esp + 0x24]
// 004ea891  64a300000000         mov dword ptr fs:[0], eax
// 004ea897  8bf1                 mov esi, ecx
// 004ea899  8b4604               mov eax, dword ptr [esi + 4]
// 004ea89c  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 004ea8a0  3be8                 cmp ebp, eax
// 004ea8a2  89442420             mov dword ptr [esp + 0x20], eax
// 004ea8a6  896e04               mov dword ptr [esi + 4], ebp
// 004ea8a9  7d2a                 jge 0x4ea8d5
// 004ea8ab  8d7c6d00             lea edi, [ebp + ebp*2]
// 004ea8af  03ff                 add edi, edi
// 004ea8b1  03ff                 add edi, edi
// 004ea8b3  8bd8                 mov ebx, eax
// 004ea8b5  03ff                 add edi, edi
// 004ea8b7  2bdd                 sub ebx, ebp
// 004ea8b9  8da42400000000       lea esp, [esp]
// 004ea8c0  8b0e                 mov ecx, dword ptr [esi]
// 004ea8c2  03cf                 add ecx, edi
// 004ea8c4  e8d7cdffff           call 0x4e76a0
// 004ea8c9  83c718               add edi, 0x18
// 004ea8cc  83eb01               sub ebx, 1
// 004ea8cf  75ef                 jne 0x4ea8c0
// 004ea8d1  8b442420             mov eax, dword ptr [esp + 0x20]
// 004ea8d5  f605a8a08b0001       test byte ptr [0x8ba0a8], 1
// 004ea8dc  7514                 jne 0x4ea8f2
// 004ea8de  830da8a08b0001       or dword ptr [0x8ba0a8], 1
// 004ea8e5  bb0a000000           mov ebx, 0xa
// 004ea8ea  891da4a08b00         mov dword ptr [0x8ba0a4], ebx
// 004ea8f0  eb06                 jmp 0x4ea8f8
// 004ea8f2  8b1da4a08b00         mov ebx, dword ptr [0x8ba0a4]
// 004ea8f8  8b7e04               mov edi, dword ptr [esi + 4]
// 004ea8fb  8b4e08               mov ecx, dword ptr [esi + 8]
// 004ea8fe  3bf9                 cmp edi, ecx
// 004ea900  0f8ed6000000         jle 0x4ea9dc
// 004ea906  85c9                 test ecx, ecx
// 004ea908  7560                 jne 0x4ea96a
// 004ea90a  896e08               mov dword ptr [esi + 8], ebp
// 004ea90d  50                   push eax
// 004ea90e  8bce                 mov ecx, esi
// 004ea910  e82bf3ffff           call 0x4e9c40
// 004ea915  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004ea919  3b6e04               cmp ebp, dword ptr [esi + 4]
// 004ea91c  8bd5                 mov edx, ebp
// 004ea91e  7d34                 jge 0x4ea954
// 004ea920  8d4c6d00             lea ecx, [ebp + ebp*2]
// 004ea924  03c9                 add ecx, ecx
// 004ea926  03c9                 add ecx, ecx
// 004ea928  03c9                 add ecx, ecx
// 004ea92a  8d9b00000000         lea ebx, [ebx]
// 004ea930  8b06                 mov eax, dword ptr [esi]
// 004ea932  03c1                 add eax, ecx
// 004ea934  7413                 je 0x4ea949
// 004ea936  33ff                 xor edi, edi
// 004ea938  897804               mov dword ptr [eax + 4], edi
// 004ea93b  897808               mov dword ptr [eax + 8], edi
// 004ea93e  8938                 mov dword ptr [eax], edi
// 004ea940  897810               mov dword ptr [eax + 0x10], edi
// 004ea943  897814               mov dword ptr [eax + 0x14], edi
// 004ea946  89780c               mov dword ptr [eax + 0xc], edi
// 004ea949  83c201               add edx, 1
// 004ea94c  83c118               add ecx, 0x18
// 004ea94f  3b5604               cmp edx, dword ptr [esi + 4]
// 004ea952  7cdc                 jl 0x4ea930
// 004ea954  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004ea958  64890d00000000       mov dword ptr fs:[0], ecx
// 004ea95f  59                   pop ecx
// 004ea960  5f                   pop edi
// 004ea961  5e                   pop esi
// 004ea962  5d                   pop ebp
// 004ea963  5b                   pop ebx
// 004ea964  83c41c               add esp, 0x1c
// 004ea967  c20800               ret 8
// 004ea96a  3bfb                 cmp edi, ebx
// 004ea96c  7d05                 jge 0x4ea973
// 004ea96e  895e08               mov dword ptr [esi + 8], ebx
// 004ea971  eb9a                 jmp 0x4ea90d
// 004ea973  d905104c7900         fld dword ptr [0x794c10]
// 004ea979  8bc1                 mov eax, ecx
// 004ea97b  8d0440               lea eax, [eax + eax*2]
// 004ea97e  d95c2438             fstp dword ptr [esp + 0x38]
// 004ea982  03c0                 add eax, eax
// 004ea984  03c0                 add eax, eax
// 004ea986  03c0                 add eax, eax
// 004ea988  3d801a0600           cmp eax, 0x61a80
// 004ea98d  7608                 jbe 0x4ea997
// 004ea98f  d9050c4c7900         fld dword ptr [0x794c0c]
// 004ea995  eb0d                 jmp 0x4ea9a4
// 004ea997  3d00fa0000           cmp eax, 0xfa00
// 004ea99c  760a                 jbe 0x4ea9a8
// 004ea99e  d905084c7900         fld dword ptr [0x794c08]
// 004ea9a4  d95c2438             fstp dword ptr [esp + 0x38]
// 004ea9a8  8be9                 mov ebp, ecx
// 004ea9aa  896c2434             mov dword ptr [esp + 0x34], ebp
// 004ea9ae  db442434             fild dword ptr [esp + 0x34]
// 004ea9b2  d84c2438             fmul dword ptr [esp + 0x38]
// 004ea9b6  e845481300           call 0x61f200
// 004ea9bb  2bc5                 sub eax, ebp
// 004ea9bd  03c7                 add eax, edi
// 004ea9bf  894608               mov dword ptr [esi + 8], eax
// 004ea9c2  8b0da4a08b00         mov ecx, dword ptr [0x8ba0a4]
// 004ea9c8  3bc1                 cmp eax, ecx
// 004ea9ca  8b442420             mov eax, dword ptr [esp + 0x20]
// 004ea9ce  0f8d39ffffff         jge 0x4ea90d
// 004ea9d4  894e08               mov dword ptr [esi + 8], ecx
// 004ea9d7  e931ffffff           jmp 0x4ea90d
// 004ea9dc  b856555555           mov eax, 0x55555556
// 004ea9e1  f7e9                 imul ecx
// 004ea9e3  8bc2                 mov eax, edx
// 004ea9e5  c1e81f               shr eax, 0x1f
// 004ea9e8  03c2                 add eax, edx
// 004ea9ea  3bf8                 cmp edi, eax
// 004ea9ec  0f8f23ffffff         jg 0x4ea915
// 004ea9f2  807c243800           cmp byte ptr [esp + 0x38], 0
// 004ea9f7  0f8418ffffff         je 0x4ea915
// 004ea9fd  3bfb                 cmp edi, ebx
// 004ea9ff  0f8e10ffffff         jle 0x4ea915
// 004eaa05  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004eaa09  3bfd                 cmp edi, ebp
// 004eaa0b  7c02                 jl 0x4eaa0f
// 004eaa0d  8bfd                 mov edi, ebp
// 004eaa0f  57                   push edi
// 004eaa10  8bce                 mov ecx, esi
// 004eaa12  e829f2ffff           call 0x4e9c40
// 004eaa17  e9fdfeffff           jmp 0x4ea919
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ?resize@?$Array@VVertex@MeshAlg@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
