// roc 2009-12 004d7730  unit: G3D::H_N::?$Table  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d7730
//
// 004d7730  56                   push esi
// 004d7731  57                   push edi
// 004d7732  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004d7736  8b4704               mov eax, dword ptr [edi + 4]
// 004d7739  8bf1                 mov esi, ecx
// 004d773b  c7460400000000       mov dword ptr [esi + 4], 0
// 004d7742  c7460800000000       mov dword ptr [esi + 8], 0
// 004d7749  c70600000000         mov dword ptr [esi], 0
// 004d774f  85c0                 test eax, eax
// 004d7751  7e0a                 jle 0x4d775d
// 004d7753  6a01                 push 1
// 004d7755  50                   push eax
// 004d7756  e885f8ffff           call 0x4d6fe0
// 004d775b  eb06                 jmp 0x4d7763
// 004d775d  c70600000000         mov dword ptr [esi], 0
// 004d7763  33c0                 xor eax, eax
// 004d7765  394604               cmp dword ptr [esi + 4], eax
// 004d7768  7e16                 jle 0x4d7780
// 004d776a  8d9b00000000         lea ebx, [ebx]
// 004d7770  8b0f                 mov ecx, dword ptr [edi]
// 004d7772  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 004d7775  8b16                 mov edx, dword ptr [esi]
// 004d7777  890c82               mov dword ptr [edx + eax*4], ecx
// 004d777a  40                   inc eax
// 004d777b  3b4604               cmp eax, dword ptr [esi + 4]
// 004d777e  7cf0                 jl 0x4d7770
// 004d7780  5f                   pop edi
// 004d7781  5e                   pop esi
// 004d7782  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ?_copy@?$Array@H@G3D@@AAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
