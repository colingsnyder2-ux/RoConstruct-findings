// roc 2009-06 006af8f0  unit: RBX::NormalBreakConnector  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006af8f0
//
// 006af8f0  8b442404             mov eax, dword ptr [esp + 4]
// 006af8f4  53                   push ebx
// 006af8f5  55                   push ebp
// 006af8f6  56                   push esi
// 006af8f7  8bf1                 mov esi, ecx
// 006af8f9  8b6e04               mov ebp, dword ptr [esi + 4]
// 006af8fc  b901000000           mov ecx, 1
// 006af901  894604               mov dword ptr [esi + 4], eax
// 006af904  57                   push edi
// 006af905  840d78fca400         test byte ptr [0xa4fc78], cl
// 006af90b  7513                 jne 0x6af920
// 006af90d  090d78fca400         or dword ptr [0xa4fc78], ecx
// 006af913  bb0a000000           mov ebx, 0xa
// 006af918  891d74fca400         mov dword ptr [0xa4fc74], ebx
// 006af91e  eb06                 jmp 0x6af926
// 006af920  8b1d74fca400         mov ebx, dword ptr [0xa4fc74]
// 006af926  8b4e08               mov ecx, dword ptr [esi + 8]
// 006af929  8b7e04               mov edi, dword ptr [esi + 4]
// 006af92c  3bf9                 cmp edi, ecx
// 006af92e  0f8e8a000000         jle 0x6af9be
// 006af934  85c9                 test ecx, ecx
// 006af936  7512                 jne 0x6af94a
// 006af938  55                   push ebp
// 006af939  8bce                 mov ecx, esi
// 006af93b  894608               mov dword ptr [esi + 8], eax
// 006af93e  e85d64fcff           call 0x675da0
// 006af943  5f                   pop edi
// 006af944  5e                   pop esi
// 006af945  5d                   pop ebp
// 006af946  5b                   pop ebx
// 006af947  c20800               ret 8
// 006af94a  3bfb                 cmp edi, ebx
// 006af94c  7d12                 jge 0x6af960
// 006af94e  55                   push ebp
// 006af94f  8bce                 mov ecx, esi
// 006af951  895e08               mov dword ptr [esi + 8], ebx
// 006af954  e84764fcff           call 0x675da0
// 006af959  5f                   pop edi
// 006af95a  5e                   pop esi
// 006af95b  5d                   pop ebp
// 006af95c  5b                   pop ebx
// 006af95d  c20800               ret 8
// 006af960  d90548e88b00         fld dword ptr [0x8be848]
// 006af966  8bc1                 mov eax, ecx
// 006af968  03c0                 add eax, eax
// 006af96a  03c0                 add eax, eax
// 006af96c  3d801a0600           cmp eax, 0x61a80
// 006af971  760a                 jbe 0x6af97d
// 006af973  ddd8                 fstp st(0)
// 006af975  d905a0ef8b00         fld dword ptr [0x8befa0]
// 006af97b  eb0f                 jmp 0x6af98c
// 006af97d  3d00fa0000           cmp eax, 0xfa00
// 006af982  7608                 jbe 0x6af98c
// 006af984  ddd8                 fstp st(0)
// 006af986  d90544d08b00         fld dword ptr [0x8bd044]
// 006af98c  8bd9                 mov ebx, ecx
// 006af98e  895c2418             mov dword ptr [esp + 0x18], ebx
// 006af992  da4c2418             fimul dword ptr [esp + 0x18]
// 006af996  e825a50600           call 0x719ec0
// 006af99b  2bc3                 sub eax, ebx
// 006af99d  03c7                 add eax, edi
// 006af99f  894608               mov dword ptr [esi + 8], eax
// 006af9a2  8b0d74fca400         mov ecx, dword ptr [0xa4fc74]
// 006af9a8  3bc1                 cmp eax, ecx
// 006af9aa  7d03                 jge 0x6af9af
// 006af9ac  894e08               mov dword ptr [esi + 8], ecx
// 006af9af  55                   push ebp
// 006af9b0  8bce                 mov ecx, esi
// 006af9b2  e8e963fcff           call 0x675da0
// 006af9b7  5f                   pop edi
// 006af9b8  5e                   pop esi
// 006af9b9  5d                   pop ebp
// 006af9ba  5b                   pop ebx
// 006af9bb  c20800               ret 8
// 006af9be  b856555555           mov eax, 0x55555556
// 006af9c3  f7e9                 imul ecx
// 006af9c5  8bc2                 mov eax, edx
// 006af9c7  c1e81f               shr eax, 0x1f
// 006af9ca  03c2                 add eax, edx
// 006af9cc  3bf8                 cmp edi, eax
// 006af9ce  7f19                 jg 0x6af9e9
// 006af9d0  807c241800           cmp byte ptr [esp + 0x18], 0
// 006af9d5  7412                 je 0x6af9e9
// 006af9d7  3bfb                 cmp edi, ebx
// 006af9d9  7e0e                 jle 0x6af9e9
// 006af9db  3bfd                 cmp edi, ebp
// 006af9dd  7c02                 jl 0x6af9e1
// 006af9df  8bfd                 mov edi, ebp
// 006af9e1  57                   push edi
// 006af9e2  8bce                 mov ecx, esi
// 006af9e4  e8b763fcff           call 0x675da0
// 006af9e9  5f                   pop edi
// 006af9ea  5e                   pop esi
// 006af9eb  5d                   pop ebp
// 006af9ec  5b                   pop ebx
// 006af9ed  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
