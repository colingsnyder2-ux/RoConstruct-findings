// roc 2009-06 004aa4d0  unit: G3D::Win32Window  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004aa4d0
//
// 004aa4d0  8b442404             mov eax, dword ptr [esp + 4]
// 004aa4d4  53                   push ebx
// 004aa4d5  55                   push ebp
// 004aa4d6  56                   push esi
// 004aa4d7  8bf1                 mov esi, ecx
// 004aa4d9  8b6e04               mov ebp, dword ptr [esi + 4]
// 004aa4dc  b901000000           mov ecx, 1
// 004aa4e1  894604               mov dword ptr [esi + 4], eax
// 004aa4e4  57                   push edi
// 004aa4e5  840d1cd1a300         test byte ptr [0xa3d11c], cl
// 004aa4eb  7513                 jne 0x4aa500
// 004aa4ed  090d1cd1a300         or dword ptr [0xa3d11c], ecx
// 004aa4f3  bb0a000000           mov ebx, 0xa
// 004aa4f8  891d18d1a300         mov dword ptr [0xa3d118], ebx
// 004aa4fe  eb06                 jmp 0x4aa506
// 004aa500  8b1d18d1a300         mov ebx, dword ptr [0xa3d118]
// 004aa506  8b4e08               mov ecx, dword ptr [esi + 8]
// 004aa509  8b7e04               mov edi, dword ptr [esi + 4]
// 004aa50c  3bf9                 cmp edi, ecx
// 004aa50e  0f8e8a000000         jle 0x4aa59e
// 004aa514  85c9                 test ecx, ecx
// 004aa516  7512                 jne 0x4aa52a
// 004aa518  55                   push ebp
// 004aa519  8bce                 mov ecx, esi
// 004aa51b  894608               mov dword ptr [esi + 8], eax
// 004aa51e  e87db81c00           call 0x675da0
// 004aa523  5f                   pop edi
// 004aa524  5e                   pop esi
// 004aa525  5d                   pop ebp
// 004aa526  5b                   pop ebx
// 004aa527  c20800               ret 8
// 004aa52a  3bfb                 cmp edi, ebx
// 004aa52c  7d12                 jge 0x4aa540
// 004aa52e  55                   push ebp
// 004aa52f  8bce                 mov ecx, esi
// 004aa531  895e08               mov dword ptr [esi + 8], ebx
// 004aa534  e867b81c00           call 0x675da0
// 004aa539  5f                   pop edi
// 004aa53a  5e                   pop esi
// 004aa53b  5d                   pop ebp
// 004aa53c  5b                   pop ebx
// 004aa53d  c20800               ret 8
// 004aa540  d90548e88b00         fld dword ptr [0x8be848]
// 004aa546  8bc1                 mov eax, ecx
// 004aa548  03c0                 add eax, eax
// 004aa54a  03c0                 add eax, eax
// 004aa54c  3d801a0600           cmp eax, 0x61a80
// 004aa551  760a                 jbe 0x4aa55d
// 004aa553  ddd8                 fstp st(0)
// 004aa555  d905a0ef8b00         fld dword ptr [0x8befa0]
// 004aa55b  eb0f                 jmp 0x4aa56c
// 004aa55d  3d00fa0000           cmp eax, 0xfa00
// 004aa562  7608                 jbe 0x4aa56c
// 004aa564  ddd8                 fstp st(0)
// 004aa566  d90544d08b00         fld dword ptr [0x8bd044]
// 004aa56c  8bd9                 mov ebx, ecx
// 004aa56e  895c2418             mov dword ptr [esp + 0x18], ebx
// 004aa572  da4c2418             fimul dword ptr [esp + 0x18]
// 004aa576  e845f92600           call 0x719ec0
// 004aa57b  2bc3                 sub eax, ebx
// 004aa57d  03c7                 add eax, edi
// 004aa57f  894608               mov dword ptr [esi + 8], eax
// 004aa582  8b0d18d1a300         mov ecx, dword ptr [0xa3d118]
// 004aa588  3bc1                 cmp eax, ecx
// 004aa58a  7d03                 jge 0x4aa58f
// 004aa58c  894e08               mov dword ptr [esi + 8], ecx
// 004aa58f  55                   push ebp
// 004aa590  8bce                 mov ecx, esi
// 004aa592  e809b81c00           call 0x675da0
// 004aa597  5f                   pop edi
// 004aa598  5e                   pop esi
// 004aa599  5d                   pop ebp
// 004aa59a  5b                   pop ebx
// 004aa59b  c20800               ret 8
// 004aa59e  b856555555           mov eax, 0x55555556
// 004aa5a3  f7e9                 imul ecx
// 004aa5a5  8bc2                 mov eax, edx
// 004aa5a7  c1e81f               shr eax, 0x1f
// 004aa5aa  03c2                 add eax, edx
// 004aa5ac  3bf8                 cmp edi, eax
// 004aa5ae  7f19                 jg 0x4aa5c9
// 004aa5b0  807c241800           cmp byte ptr [esp + 0x18], 0
// 004aa5b5  7412                 je 0x4aa5c9
// 004aa5b7  3bfb                 cmp edi, ebx
// 004aa5b9  7e0e                 jle 0x4aa5c9
// 004aa5bb  3bfd                 cmp edi, ebp
// 004aa5bd  7c02                 jl 0x4aa5c1
// 004aa5bf  8bfd                 mov edi, ebp
// 004aa5c1  57                   push edi
// 004aa5c2  8bce                 mov ecx, esi
// 004aa5c4  e8d7b71c00           call 0x675da0
// 004aa5c9  5f                   pop edi
// 004aa5ca  5e                   pop esi
// 004aa5cb  5d                   pop ebp
// 004aa5cc  5b                   pop ebx
// 004aa5cd  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
