// roc 2009-06 00485240  unit: RBX::MeshGen  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00485240
//
// 00485240  8b442404             mov eax, dword ptr [esp + 4]
// 00485244  53                   push ebx
// 00485245  55                   push ebp
// 00485246  56                   push esi
// 00485247  8bf1                 mov esi, ecx
// 00485249  8b6e04               mov ebp, dword ptr [esi + 4]
// 0048524c  b901000000           mov ecx, 1
// 00485251  894604               mov dword ptr [esi + 4], eax
// 00485254  57                   push edi
// 00485255  840d3cc7a300         test byte ptr [0xa3c73c], cl
// 0048525b  7513                 jne 0x485270
// 0048525d  090d3cc7a300         or dword ptr [0xa3c73c], ecx
// 00485263  bb10000000           mov ebx, 0x10
// 00485268  891d38c7a300         mov dword ptr [0xa3c738], ebx
// 0048526e  eb06                 jmp 0x485276
// 00485270  8b1d38c7a300         mov ebx, dword ptr [0xa3c738]
// 00485276  8b4e08               mov ecx, dword ptr [esi + 8]
// 00485279  8b7e04               mov edi, dword ptr [esi + 4]
// 0048527c  3bf9                 cmp edi, ecx
// 0048527e  0f8e88000000         jle 0x48530c
// 00485284  85c9                 test ecx, ecx
// 00485286  7512                 jne 0x48529a
// 00485288  55                   push ebp
// 00485289  8bce                 mov ecx, esi
// 0048528b  894608               mov dword ptr [esi + 8], eax
// 0048528e  e8ddfbffff           call 0x484e70
// 00485293  5f                   pop edi
// 00485294  5e                   pop esi
// 00485295  5d                   pop ebp
// 00485296  5b                   pop ebx
// 00485297  c20800               ret 8
// 0048529a  3bfb                 cmp edi, ebx
// 0048529c  7d12                 jge 0x4852b0
// 0048529e  55                   push ebp
// 0048529f  8bce                 mov ecx, esi
// 004852a1  895e08               mov dword ptr [esi + 8], ebx
// 004852a4  e8c7fbffff           call 0x484e70
// 004852a9  5f                   pop edi
// 004852aa  5e                   pop esi
// 004852ab  5d                   pop ebp
// 004852ac  5b                   pop ebx
// 004852ad  c20800               ret 8
// 004852b0  d90548e88b00         fld dword ptr [0x8be848]
// 004852b6  8bc1                 mov eax, ecx
// 004852b8  03c0                 add eax, eax
// 004852ba  3d801a0600           cmp eax, 0x61a80
// 004852bf  760a                 jbe 0x4852cb
// 004852c1  ddd8                 fstp st(0)
// 004852c3  d905a0ef8b00         fld dword ptr [0x8befa0]
// 004852c9  eb0f                 jmp 0x4852da
// 004852cb  3d00fa0000           cmp eax, 0xfa00
// 004852d0  7608                 jbe 0x4852da
// 004852d2  ddd8                 fstp st(0)
// 004852d4  d90544d08b00         fld dword ptr [0x8bd044]
// 004852da  8bd9                 mov ebx, ecx
// 004852dc  895c2418             mov dword ptr [esp + 0x18], ebx
// 004852e0  da4c2418             fimul dword ptr [esp + 0x18]
// 004852e4  e8d74b2900           call 0x719ec0
// 004852e9  2bc3                 sub eax, ebx
// 004852eb  03c7                 add eax, edi
// 004852ed  894608               mov dword ptr [esi + 8], eax
// 004852f0  8b0d38c7a300         mov ecx, dword ptr [0xa3c738]
// 004852f6  3bc1                 cmp eax, ecx
// 004852f8  7d03                 jge 0x4852fd
// 004852fa  894e08               mov dword ptr [esi + 8], ecx
// 004852fd  55                   push ebp
// 004852fe  8bce                 mov ecx, esi
// 00485300  e86bfbffff           call 0x484e70
// 00485305  5f                   pop edi
// 00485306  5e                   pop esi
// 00485307  5d                   pop ebp
// 00485308  5b                   pop ebx
// 00485309  c20800               ret 8
// 0048530c  b856555555           mov eax, 0x55555556
// 00485311  f7e9                 imul ecx
// 00485313  8bc2                 mov eax, edx
// 00485315  c1e81f               shr eax, 0x1f
// 00485318  03c2                 add eax, edx
// 0048531a  3bf8                 cmp edi, eax
// 0048531c  7f19                 jg 0x485337
// 0048531e  807c241800           cmp byte ptr [esp + 0x18], 0
// 00485323  7412                 je 0x485337
// 00485325  3bfb                 cmp edi, ebx
// 00485327  7e0e                 jle 0x485337
// 00485329  3bfd                 cmp edi, ebp
// 0048532b  7c02                 jl 0x48532f
// 0048532d  8bfd                 mov edi, ebp
// 0048532f  57                   push edi
// 00485330  8bce                 mov ecx, esi
// 00485332  e839fbffff           call 0x484e70
// 00485337  5f                   pop edi
// 00485338  5e                   pop esi
// 00485339  5d                   pop ebp
// 0048533a  5b                   pop ebx
// 0048533b  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@G@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
