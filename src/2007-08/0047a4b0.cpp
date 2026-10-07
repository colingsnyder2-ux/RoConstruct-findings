// roc 2007-08 0047a4b0  unit: G3D::TextureManager::TextureArgs  size: 429 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047a4b0
//
// 0047a4b0  6aff                 push -1
// 0047a4b2  6851557400           push 0x745551
// 0047a4b7  64a100000000         mov eax, dword ptr fs:[0]
// 0047a4bd  50                   push eax
// 0047a4be  83ec08               sub esp, 8
// 0047a4c1  53                   push ebx
// 0047a4c2  55                   push ebp
// 0047a4c3  56                   push esi
// 0047a4c4  57                   push edi
// 0047a4c5  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047a4ca  33c4                 xor eax, esp
// 0047a4cc  50                   push eax
// 0047a4cd  8d44241c             lea eax, [esp + 0x1c]
// 0047a4d1  64a300000000         mov dword ptr fs:[0], eax
// 0047a4d7  8bf1                 mov esi, ecx
// 0047a4d9  89742418             mov dword ptr [esp + 0x18], esi
// 0047a4dd  8b6e04               mov ebp, dword ptr [esi + 4]
// 0047a4e0  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0047a4e4  3bdd                 cmp ebx, ebp
// 0047a4e6  896c2414             mov dword ptr [esp + 0x14], ebp
// 0047a4ea  895e04               mov dword ptr [esi + 4], ebx
// 0047a4ed  7d2c                 jge 0x47a51b
// 0047a4ef  8d3cdd00000000       lea edi, [ebx*8]
// 0047a4f6  2bfb                 sub edi, ebx
// 0047a4f8  03ff                 add edi, edi
// 0047a4fa  03ff                 add edi, edi
// 0047a4fc  03ff                 add edi, edi
// 0047a4fe  2beb                 sub ebp, ebx
// 0047a500  8b06                 mov eax, dword ptr [esi]
// 0047a502  8b1407               mov edx, dword ptr [edi + eax]
// 0047a505  8d0c07               lea ecx, [edi + eax]
// 0047a508  8b4204               mov eax, dword ptr [edx + 4]
// 0047a50b  6a00                 push 0
// 0047a50d  ffd0                 call eax
// 0047a50f  83c738               add edi, 0x38
// 0047a512  83ed01               sub ebp, 1
// 0047a515  75e9                 jne 0x47a500
// 0047a517  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0047a51b  f60558d18b0001       test byte ptr [0x8bd158], 1
// 0047a522  7514                 jne 0x47a538
// 0047a524  830d58d18b0001       or dword ptr [0x8bd158], 1
// 0047a52b  b90a000000           mov ecx, 0xa
// 0047a530  890d54d18b00         mov dword ptr [0x8bd154], ecx
// 0047a536  eb06                 jmp 0x47a53e
// 0047a538  8b0d54d18b00         mov ecx, dword ptr [0x8bd154]
// 0047a53e  8b7e04               mov edi, dword ptr [esi + 4]
// 0047a541  8b5608               mov edx, dword ptr [esi + 8]
// 0047a544  3bfa                 cmp edi, edx
// 0047a546  7e7a                 jle 0x47a5c2
// 0047a548  85d2                 test edx, edx
// 0047a54a  7509                 jne 0x47a555
// 0047a54c  895e08               mov dword ptr [esi + 8], ebx
// 0047a54f  55                   push ebp
// 0047a550  e991000000           jmp 0x47a5e6
// 0047a555  3bf9                 cmp edi, ecx
// 0047a557  7c63                 jl 0x47a5bc
// 0047a559  d905387b7900         fld dword ptr [0x797b38]
// 0047a55f  8bca                 mov ecx, edx
// 0047a561  8d04cd00000000       lea eax, [ecx*8]
// 0047a568  d95c2430             fstp dword ptr [esp + 0x30]
// 0047a56c  2bc1                 sub eax, ecx
// 0047a56e  03c0                 add eax, eax
// 0047a570  03c0                 add eax, eax
// 0047a572  03c0                 add eax, eax
// 0047a574  3d801a0600           cmp eax, 0x61a80
// 0047a579  7608                 jbe 0x47a583
// 0047a57b  d905347b7900         fld dword ptr [0x797b34]
// 0047a581  eb0d                 jmp 0x47a590
// 0047a583  3d00fa0000           cmp eax, 0xfa00
// 0047a588  760a                 jbe 0x47a594
// 0047a58a  d90588797900         fld dword ptr [0x797988]
// 0047a590  d95c2430             fstp dword ptr [esp + 0x30]
// 0047a594  8bd9                 mov ebx, ecx
// 0047a596  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0047a59a  db44242c             fild dword ptr [esp + 0x2c]
// 0047a59e  d84c2430             fmul dword ptr [esp + 0x30]
// 0047a5a2  e8b9671b00           call 0x630d60
// 0047a5a7  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0047a5ab  2bc3                 sub eax, ebx
// 0047a5ad  03c7                 add eax, edi
// 0047a5af  894608               mov dword ptr [esi + 8], eax
// 0047a5b2  8b0d54d18b00         mov ecx, dword ptr [0x8bd154]
// 0047a5b8  3bc1                 cmp eax, ecx
// 0047a5ba  7d03                 jge 0x47a5bf
// 0047a5bc  894e08               mov dword ptr [esi + 8], ecx
// 0047a5bf  55                   push ebp
// 0047a5c0  eb24                 jmp 0x47a5e6
// 0047a5c2  b856555555           mov eax, 0x55555556
// 0047a5c7  f7ea                 imul edx
// 0047a5c9  8bc2                 mov eax, edx
// 0047a5cb  c1e81f               shr eax, 0x1f
// 0047a5ce  03c2                 add eax, edx
// 0047a5d0  3bf8                 cmp edi, eax
// 0047a5d2  7f1d                 jg 0x47a5f1
// 0047a5d4  807c243000           cmp byte ptr [esp + 0x30], 0
// 0047a5d9  7416                 je 0x47a5f1
// 0047a5db  3bf9                 cmp edi, ecx
// 0047a5dd  7e12                 jle 0x47a5f1
// 0047a5df  3bfd                 cmp edi, ebp
// 0047a5e1  7c02                 jl 0x47a5e5
// 0047a5e3  8bfd                 mov edi, ebp
// 0047a5e5  57                   push edi
// 0047a5e6  8bce                 mov ecx, esi
// 0047a5e8  e853fbffff           call 0x47a140
// 0047a5ed  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0047a5f1  3b6e04               cmp ebp, dword ptr [esi + 4]
// 0047a5f4  896c2430             mov dword ptr [esp + 0x30], ebp
// 0047a5f8  7d4d                 jge 0x47a647
// 0047a5fa  8d9b00000000         lea ebx, [ebx]
// 0047a600  8b16                 mov edx, dword ptr [esi]
// 0047a602  8d0ced00000000       lea ecx, [ebp*8]
// 0047a609  2bcd                 sub ecx, ebp
// 0047a60b  8d3cca               lea edi, [edx + ecx*8]
// 0047a60e  897c242c             mov dword ptr [esp + 0x2c], edi
// 0047a612  33db                 xor ebx, ebx
// 0047a614  3bfb                 cmp edi, ebx
// 0047a616  895c2424             mov dword ptr [esp + 0x24], ebx
// 0047a61a  7417                 je 0x47a633
// 0047a61c  8d4f04               lea ecx, [edi + 4]
// 0047a61f  c644242401           mov byte ptr [esp + 0x24], 1
// 0047a624  c707a4317900         mov dword ptr [edi], 0x7931a4
// 0047a62a  ff15a4e67700         call dword ptr [0x77e6a4]
// 0047a630  895f20               mov dword ptr [edi + 0x20], ebx
// 0047a633  83c501               add ebp, 1
// 0047a636  3b6e04               cmp ebp, dword ptr [esi + 4]
// 0047a639  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0047a641  896c2430             mov dword ptr [esp + 0x30], ebp
// 0047a645  7cb9                 jl 0x47a600
// 0047a647  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0047a64b  64890d00000000       mov dword ptr fs:[0], ecx
// 0047a652  59                   pop ecx
// 0047a653  5f                   pop edi
// 0047a654  5e                   pop esi
// 0047a655  5d                   pop ebp
// 0047a656  5b                   pop ebx
// 0047a657  83c414               add esp, 0x14
// 0047a65a  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?resize@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
