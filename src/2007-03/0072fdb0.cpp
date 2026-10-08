// roc 2007-03 0072fdb0  unit: seg_00720000  size: 429 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0072fdb0
//
// 0072fdb0  6aff                 push -1
// 0072fdb2  68e1cc7600           push 0x76cce1
// 0072fdb7  64a100000000         mov eax, dword ptr fs:[0]
// 0072fdbd  50                   push eax
// 0072fdbe  83ec08               sub esp, 8
// 0072fdc1  53                   push ebx
// 0072fdc2  55                   push ebp
// 0072fdc3  56                   push esi
// 0072fdc4  57                   push edi
// 0072fdc5  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0072fdca  33c4                 xor eax, esp
// 0072fdcc  50                   push eax
// 0072fdcd  8d44241c             lea eax, [esp + 0x1c]
// 0072fdd1  64a300000000         mov dword ptr fs:[0], eax
// 0072fdd7  8bf1                 mov esi, ecx
// 0072fdd9  89742418             mov dword ptr [esp + 0x18], esi
// 0072fddd  8b6e04               mov ebp, dword ptr [esi + 4]
// 0072fde0  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0072fde4  3bdd                 cmp ebx, ebp
// 0072fde6  896c2414             mov dword ptr [esp + 0x14], ebp
// 0072fdea  895e04               mov dword ptr [esi + 4], ebx
// 0072fded  7d2c                 jge 0x72fe1b
// 0072fdef  8d3cdd00000000       lea edi, [ebx*8]
// 0072fdf6  2bfb                 sub edi, ebx
// 0072fdf8  03ff                 add edi, edi
// 0072fdfa  03ff                 add edi, edi
// 0072fdfc  03ff                 add edi, edi
// 0072fdfe  2beb                 sub ebp, ebx
// 0072fe00  8b06                 mov eax, dword ptr [esi]
// 0072fe02  8b1407               mov edx, dword ptr [edi + eax]
// 0072fe05  8d0c07               lea ecx, [edi + eax]
// 0072fe08  8b4204               mov eax, dword ptr [edx + 4]
// 0072fe0b  6a00                 push 0
// 0072fe0d  ffd0                 call eax
// 0072fe0f  83c738               add edi, 0x38
// 0072fe12  83ed01               sub ebp, 1
// 0072fe15  75e9                 jne 0x72fe00
// 0072fe17  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0072fe1b  f605b8298c0001       test byte ptr [0x8c29b8], 1
// 0072fe22  7514                 jne 0x72fe38
// 0072fe24  830db8298c0001       or dword ptr [0x8c29b8], 1
// 0072fe2b  b90a000000           mov ecx, 0xa
// 0072fe30  890db4298c00         mov dword ptr [0x8c29b4], ecx
// 0072fe36  eb06                 jmp 0x72fe3e
// 0072fe38  8b0db4298c00         mov ecx, dword ptr [0x8c29b4]
// 0072fe3e  8b7e04               mov edi, dword ptr [esi + 4]
// 0072fe41  8b5608               mov edx, dword ptr [esi + 8]
// 0072fe44  3bfa                 cmp edi, edx
// 0072fe46  7e7a                 jle 0x72fec2
// 0072fe48  85d2                 test edx, edx
// 0072fe4a  7509                 jne 0x72fe55
// 0072fe4c  895e08               mov dword ptr [esi + 8], ebx
// 0072fe4f  55                   push ebp
// 0072fe50  e991000000           jmp 0x72fee6
// 0072fe55  3bf9                 cmp edi, ecx
// 0072fe57  7c63                 jl 0x72febc
// 0072fe59  d905104c7900         fld dword ptr [0x794c10]
// 0072fe5f  8bca                 mov ecx, edx
// 0072fe61  8d04cd00000000       lea eax, [ecx*8]
// 0072fe68  d95c2430             fstp dword ptr [esp + 0x30]
// 0072fe6c  2bc1                 sub eax, ecx
// 0072fe6e  03c0                 add eax, eax
// 0072fe70  03c0                 add eax, eax
// 0072fe72  03c0                 add eax, eax
// 0072fe74  3d801a0600           cmp eax, 0x61a80
// 0072fe79  7608                 jbe 0x72fe83
// 0072fe7b  d9050c4c7900         fld dword ptr [0x794c0c]
// 0072fe81  eb0d                 jmp 0x72fe90
// 0072fe83  3d00fa0000           cmp eax, 0xfa00
// 0072fe88  760a                 jbe 0x72fe94
// 0072fe8a  d905084c7900         fld dword ptr [0x794c08]
// 0072fe90  d95c2430             fstp dword ptr [esp + 0x30]
// 0072fe94  8bd9                 mov ebx, ecx
// 0072fe96  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0072fe9a  db44242c             fild dword ptr [esp + 0x2c]
// 0072fe9e  d84c2430             fmul dword ptr [esp + 0x30]
// 0072fea2  e859f3eeff           call 0x61f200
// 0072fea7  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0072feab  2bc3                 sub eax, ebx
// 0072fead  03c7                 add eax, edi
// 0072feaf  894608               mov dword ptr [esi + 8], eax
// 0072feb2  8b0db4298c00         mov ecx, dword ptr [0x8c29b4]
// 0072feb8  3bc1                 cmp eax, ecx
// 0072feba  7d03                 jge 0x72febf
// 0072febc  894e08               mov dword ptr [esi + 8], ecx
// 0072febf  55                   push ebp
// 0072fec0  eb24                 jmp 0x72fee6
// 0072fec2  b856555555           mov eax, 0x55555556
// 0072fec7  f7ea                 imul edx
// 0072fec9  8bc2                 mov eax, edx
// 0072fecb  c1e81f               shr eax, 0x1f
// 0072fece  03c2                 add eax, edx
// 0072fed0  3bf8                 cmp edi, eax
// 0072fed2  7f1d                 jg 0x72fef1
// 0072fed4  807c243000           cmp byte ptr [esp + 0x30], 0
// 0072fed9  7416                 je 0x72fef1
// 0072fedb  3bf9                 cmp edi, ecx
// 0072fedd  7e12                 jle 0x72fef1
// 0072fedf  3bfd                 cmp edi, ebp
// 0072fee1  7c02                 jl 0x72fee5
// 0072fee3  8bfd                 mov edi, ebp
// 0072fee5  57                   push edi
// 0072fee6  8bce                 mov ecx, esi
// 0072fee8  e853fbffff           call 0x72fa40
// 0072feed  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0072fef1  3b6e04               cmp ebp, dword ptr [esi + 4]
// 0072fef4  896c2430             mov dword ptr [esp + 0x30], ebp
// 0072fef8  7d4d                 jge 0x72ff47
// 0072fefa  8d9b00000000         lea ebx, [ebx]
// 0072ff00  8b16                 mov edx, dword ptr [esi]
// 0072ff02  8d0ced00000000       lea ecx, [ebp*8]
// 0072ff09  2bcd                 sub ecx, ebp
// 0072ff0b  8d3cca               lea edi, [edx + ecx*8]
// 0072ff0e  897c242c             mov dword ptr [esp + 0x2c], edi
// 0072ff12  33db                 xor ebx, ebx
// 0072ff14  3bfb                 cmp edi, ebx
// 0072ff16  895c2424             mov dword ptr [esp + 0x24], ebx
// 0072ff1a  7417                 je 0x72ff33
// 0072ff1c  8d4f04               lea ecx, [edi + 4]
// 0072ff1f  c644242401           mov byte ptr [esp + 0x24], 1
// 0072ff24  c70798e57900         mov dword ptr [edi], 0x79e598
// 0072ff2a  ff1584e77700         call dword ptr [0x77e784]
// 0072ff30  895f20               mov dword ptr [edi + 0x20], ebx
// 0072ff33  83c501               add ebp, 1
// 0072ff36  3b6e04               cmp ebp, dword ptr [esi + 4]
// 0072ff39  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0072ff41  896c2430             mov dword ptr [esp + 0x30], ebp
// 0072ff45  7cb9                 jl 0x72ff00
// 0072ff47  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0072ff4b  64890d00000000       mov dword ptr fs:[0], ecx
// 0072ff52  59                   pop ecx
// 0072ff53  5f                   pop edi
// 0072ff54  5e                   pop esi
// 0072ff55  5d                   pop ebp
// 0072ff56  5b                   pop ebx
// 0072ff57  83c414               add esp, 0x14
// 0072ff5a  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?resize@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
