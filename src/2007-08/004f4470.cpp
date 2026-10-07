// roc 2007-08 004f4470  unit: boost::bad_lexical_cast  size: 343 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f4470
//
// 004f4470  6aff                 push -1
// 004f4472  6879db7400           push 0x74db79
// 004f4477  64a100000000         mov eax, dword ptr fs:[0]
// 004f447d  50                   push eax
// 004f447e  51                   push ecx
// 004f447f  53                   push ebx
// 004f4480  55                   push ebp
// 004f4481  56                   push esi
// 004f4482  57                   push edi
// 004f4483  a188518b00           mov eax, dword ptr [0x8b5188]
// 004f4488  33c4                 xor eax, esp
// 004f448a  50                   push eax
// 004f448b  8d442418             lea eax, [esp + 0x18]
// 004f448f  64a300000000         mov dword ptr fs:[0], eax
// 004f4495  8bf1                 mov esi, ecx
// 004f4497  89742414             mov dword ptr [esp + 0x14], esi
// 004f449b  8b442428             mov eax, dword ptr [esp + 0x28]
// 004f449f  8b5e04               mov ebx, dword ptr [esi + 4]
// 004f44a2  894604               mov dword ptr [esi + 4], eax
// 004f44a5  f605bcfb8b0001       test byte ptr [0x8bfbbc], 1
// 004f44ac  7514                 jne 0x4f44c2
// 004f44ae  830dbcfb8b0001       or dword ptr [0x8bfbbc], 1
// 004f44b5  bf0a000000           mov edi, 0xa
// 004f44ba  893db8fb8b00         mov dword ptr [0x8bfbb8], edi
// 004f44c0  eb06                 jmp 0x4f44c8
// 004f44c2  8b3db8fb8b00         mov edi, dword ptr [0x8bfbb8]
// 004f44c8  8b6e04               mov ebp, dword ptr [esi + 4]
// 004f44cb  8b4e08               mov ecx, dword ptr [esi + 8]
// 004f44ce  3be9                 cmp ebp, ecx
// 004f44d0  7e79                 jle 0x4f454b
// 004f44d2  85c9                 test ecx, ecx
// 004f44d4  7509                 jne 0x4f44df
// 004f44d6  894608               mov dword ptr [esi + 8], eax
// 004f44d9  53                   push ebx
// 004f44da  e990000000           jmp 0x4f456f
// 004f44df  3bef                 cmp ebp, edi
// 004f44e1  7d09                 jge 0x4f44ec
// 004f44e3  897e08               mov dword ptr [esi + 8], edi
// 004f44e6  53                   push ebx
// 004f44e7  e983000000           jmp 0x4f456f
// 004f44ec  d905387b7900         fld dword ptr [0x797b38]
// 004f44f2  8bc1                 mov eax, ecx
// 004f44f4  8d0440               lea eax, [eax + eax*2]
// 004f44f7  d95c242c             fstp dword ptr [esp + 0x2c]
// 004f44fb  03c0                 add eax, eax
// 004f44fd  03c0                 add eax, eax
// 004f44ff  03c0                 add eax, eax
// 004f4501  3d801a0600           cmp eax, 0x61a80
// 004f4506  7608                 jbe 0x4f4510
// 004f4508  d905347b7900         fld dword ptr [0x797b34]
// 004f450e  eb0d                 jmp 0x4f451d
// 004f4510  3d00fa0000           cmp eax, 0xfa00
// 004f4515  760a                 jbe 0x4f4521
// 004f4517  d90588797900         fld dword ptr [0x797988]
// 004f451d  d95c242c             fstp dword ptr [esp + 0x2c]
// 004f4521  8bf9                 mov edi, ecx
// 004f4523  897c2428             mov dword ptr [esp + 0x28], edi
// 004f4527  db442428             fild dword ptr [esp + 0x28]
// 004f452b  d84c242c             fmul dword ptr [esp + 0x2c]
// 004f452f  e82cc81300           call 0x630d60
// 004f4534  2bc7                 sub eax, edi
// 004f4536  03c5                 add eax, ebp
// 004f4538  894608               mov dword ptr [esi + 8], eax
// 004f453b  8b0db8fb8b00         mov ecx, dword ptr [0x8bfbb8]
// 004f4541  3bc1                 cmp eax, ecx
// 004f4543  7d03                 jge 0x4f4548
// 004f4545  894e08               mov dword ptr [esi + 8], ecx
// 004f4548  53                   push ebx
// 004f4549  eb24                 jmp 0x4f456f
// 004f454b  b856555555           mov eax, 0x55555556
// 004f4550  f7e9                 imul ecx
// 004f4552  8bc2                 mov eax, edx
// 004f4554  c1e81f               shr eax, 0x1f
// 004f4557  03c2                 add eax, edx
// 004f4559  3be8                 cmp ebp, eax
// 004f455b  7f19                 jg 0x4f4576
// 004f455d  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 004f4562  7412                 je 0x4f4576
// 004f4564  3bef                 cmp ebp, edi
// 004f4566  7e0e                 jle 0x4f4576
// 004f4568  3beb                 cmp ebp, ebx
// 004f456a  7c02                 jl 0x4f456e
// 004f456c  8beb                 mov ebp, ebx
// 004f456e  55                   push ebp
// 004f456f  8bce                 mov ecx, esi
// 004f4571  e8eaf9ffff           call 0x4f3f60
// 004f4576  3b5e04               cmp ebx, dword ptr [esi + 4]
// 004f4579  8bfb                 mov edi, ebx
// 004f457b  897c242c             mov dword ptr [esp + 0x2c], edi
// 004f457f  7d30                 jge 0x4f45b1
// 004f4581  83cbff               or ebx, 0xffffffff
// 004f4584  8b16                 mov edx, dword ptr [esi]
// 004f4586  8d0c7f               lea ecx, [edi + edi*2]
// 004f4589  8d0cca               lea ecx, [edx + ecx*8]
// 004f458c  894c2428             mov dword ptr [esp + 0x28], ecx
// 004f4590  85c9                 test ecx, ecx
// 004f4592  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004f459a  7405                 je 0x4f45a1
// 004f459c  e80fb10100           call 0x50f6b0
// 004f45a1  83c701               add edi, 1
// 004f45a4  3b7e04               cmp edi, dword ptr [esi + 4]
// 004f45a7  895c2420             mov dword ptr [esp + 0x20], ebx
// 004f45ab  897c242c             mov dword ptr [esp + 0x2c], edi
// 004f45af  7cd3                 jl 0x4f4584
// 004f45b1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004f45b5  64890d00000000       mov dword ptr fs:[0], ecx
// 004f45bc  59                   pop ecx
// 004f45bd  5f                   pop edi
// 004f45be  5e                   pop esi
// 004f45bf  5d                   pop ebp
// 004f45c0  5b                   pop ebx
// 004f45c1  83c410               add esp, 0x10
// 004f45c4  c20800               ret 8
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?resize@?$Array@VFace@MeshAlg@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
