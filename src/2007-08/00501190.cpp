// roc 2007-08 00501190  unit: G3D::Shader  size: 411 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00501190
//
// 00501190  6aff                 push -1
// 00501192  68d9ee7400           push 0x74eed9
// 00501197  64a100000000         mov eax, dword ptr fs:[0]
// 0050119d  50                   push eax
// 0050119e  83ec08               sub esp, 8
// 005011a1  53                   push ebx
// 005011a2  55                   push ebp
// 005011a3  56                   push esi
// 005011a4  57                   push edi
// 005011a5  a188518b00           mov eax, dword ptr [0x8b5188]
// 005011aa  33c4                 xor eax, esp
// 005011ac  50                   push eax
// 005011ad  8d44241c             lea eax, [esp + 0x1c]
// 005011b1  64a300000000         mov dword ptr fs:[0], eax
// 005011b7  8bf1                 mov esi, ecx
// 005011b9  89742418             mov dword ptr [esp + 0x18], esi
// 005011bd  8b4604               mov eax, dword ptr [esi + 4]
// 005011c0  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 005011c4  3be8                 cmp ebp, eax
// 005011c6  89442414             mov dword ptr [esp + 0x14], eax
// 005011ca  896e04               mov dword ptr [esi + 4], ebp
// 005011cd  7d27                 jge 0x5011f6
// 005011cf  8d3ced00000000       lea edi, [ebp*8]
// 005011d6  2bfd                 sub edi, ebp
// 005011d8  03ff                 add edi, edi
// 005011da  8bd8                 mov ebx, eax
// 005011dc  03ff                 add edi, edi
// 005011de  2bdd                 sub ebx, ebp
// 005011e0  8b0e                 mov ecx, dword ptr [esi]
// 005011e2  03cf                 add ecx, edi
// 005011e4  ff15ace67700         call dword ptr [0x77e6ac]
// 005011ea  83c71c               add edi, 0x1c
// 005011ed  83eb01               sub ebx, 1
// 005011f0  75ee                 jne 0x5011e0
// 005011f2  8b442414             mov eax, dword ptr [esp + 0x14]
// 005011f6  f60538098c0001       test byte ptr [0x8c0938], 1
// 005011fd  7514                 jne 0x501213
// 005011ff  830d38098c0001       or dword ptr [0x8c0938], 1
// 00501206  bb0a000000           mov ebx, 0xa
// 0050120b  891d34098c00         mov dword ptr [0x8c0934], ebx
// 00501211  eb06                 jmp 0x501219
// 00501213  8b1d34098c00         mov ebx, dword ptr [0x8c0934]
// 00501219  8b7e04               mov edi, dword ptr [esi + 4]
// 0050121c  8b4e08               mov ecx, dword ptr [esi + 8]
// 0050121f  3bf9                 cmp edi, ecx
// 00501221  7e7f                 jle 0x5012a2
// 00501223  85c9                 test ecx, ecx
// 00501225  7509                 jne 0x501230
// 00501227  896e08               mov dword ptr [esi + 8], ebp
// 0050122a  50                   push eax
// 0050122b  e99a000000           jmp 0x5012ca
// 00501230  3bfb                 cmp edi, ebx
// 00501232  7d09                 jge 0x50123d
// 00501234  895e08               mov dword ptr [esi + 8], ebx
// 00501237  50                   push eax
// 00501238  e98d000000           jmp 0x5012ca
// 0050123d  d905387b7900         fld dword ptr [0x797b38]
// 00501243  8d04cd00000000       lea eax, [ecx*8]
// 0050124a  2bc1                 sub eax, ecx
// 0050124c  d95c2430             fstp dword ptr [esp + 0x30]
// 00501250  03c0                 add eax, eax
// 00501252  03c0                 add eax, eax
// 00501254  3d801a0600           cmp eax, 0x61a80
// 00501259  7608                 jbe 0x501263
// 0050125b  d905347b7900         fld dword ptr [0x797b34]
// 00501261  eb0d                 jmp 0x501270
// 00501263  3d00fa0000           cmp eax, 0xfa00
// 00501268  760a                 jbe 0x501274
// 0050126a  d90588797900         fld dword ptr [0x797988]
// 00501270  d95c2430             fstp dword ptr [esp + 0x30]
// 00501274  8be9                 mov ebp, ecx
// 00501276  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0050127a  db44242c             fild dword ptr [esp + 0x2c]
// 0050127e  d84c2430             fmul dword ptr [esp + 0x30]
// 00501282  e8d9fa1200           call 0x630d60
// 00501287  2bc5                 sub eax, ebp
// 00501289  03c7                 add eax, edi
// 0050128b  894608               mov dword ptr [esi + 8], eax
// 0050128e  8b0d34098c00         mov ecx, dword ptr [0x8c0934]
// 00501294  3bc1                 cmp eax, ecx
// 00501296  8b442414             mov eax, dword ptr [esp + 0x14]
// 0050129a  7d03                 jge 0x50129f
// 0050129c  894e08               mov dword ptr [esi + 8], ecx
// 0050129f  50                   push eax
// 005012a0  eb28                 jmp 0x5012ca
// 005012a2  b856555555           mov eax, 0x55555556
// 005012a7  f7e9                 imul ecx
// 005012a9  8bc2                 mov eax, edx
// 005012ab  c1e81f               shr eax, 0x1f
// 005012ae  03c2                 add eax, edx
// 005012b0  3bf8                 cmp edi, eax
// 005012b2  7f1d                 jg 0x5012d1
// 005012b4  807c243000           cmp byte ptr [esp + 0x30], 0
// 005012b9  7416                 je 0x5012d1
// 005012bb  3bfb                 cmp edi, ebx
// 005012bd  7e12                 jle 0x5012d1
// 005012bf  8b442414             mov eax, dword ptr [esp + 0x14]
// 005012c3  3bf8                 cmp edi, eax
// 005012c5  7c02                 jl 0x5012c9
// 005012c7  8bf8                 mov edi, eax
// 005012c9  57                   push edi
// 005012ca  8bce                 mov ecx, esi
// 005012cc  e80fefffff           call 0x5001e0
// 005012d1  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005012d5  3b7e04               cmp edi, dword ptr [esi + 4]
// 005012d8  897c2430             mov dword ptr [esp + 0x30], edi
// 005012dc  7d37                 jge 0x501315
// 005012de  83cbff               or ebx, 0xffffffff
// 005012e1  8b16                 mov edx, dword ptr [esi]
// 005012e3  8d0cfd00000000       lea ecx, [edi*8]
// 005012ea  2bcf                 sub ecx, edi
// 005012ec  8d0c8a               lea ecx, [edx + ecx*4]
// 005012ef  894c242c             mov dword ptr [esp + 0x2c], ecx
// 005012f3  85c9                 test ecx, ecx
// 005012f5  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005012fd  7406                 je 0x501305
// 005012ff  ff15a4e67700         call dword ptr [0x77e6a4]
// 00501305  83c701               add edi, 1
// 00501308  3b7e04               cmp edi, dword ptr [esi + 4]
// 0050130b  895c2424             mov dword ptr [esp + 0x24], ebx
// 0050130f  897c2430             mov dword ptr [esp + 0x30], edi
// 00501313  7ccc                 jl 0x5012e1
// 00501315  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00501319  64890d00000000       mov dword ptr fs:[0], ecx
// 00501320  59                   pop ecx
// 00501321  5f                   pop edi
// 00501322  5e                   pop esi
// 00501323  5d                   pop ebp
// 00501324  5b                   pop ebx
// 00501325  83c414               add esp, 0x14
// 00501328  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
