// from server: 100% by auto
// roc 2007-08 0047d730  unit: G3D::H_N::?$Table  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047d730
//
// 0047d730  56                   push esi
// 0047d731  57                   push edi
// 0047d732  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0047d736  8b4704               mov eax, dword ptr [edi + 4]
// 0047d739  6a01                 push 1
// 0047d73b  50                   push eax
// 0047d73c  8bf1                 mov esi, ecx
// 0047d73e  e87df8ffff           call 0x47cfc0
// 0047d743  33c0                 xor eax, eax
// 0047d745  394604               cmp dword ptr [esi + 4], eax
// 0047d748  7e18                 jle 0x47d762
// 0047d74a  8d9b00000000         lea ebx, [ebx]
// 0047d750  8b0f                 mov ecx, dword ptr [edi]
// 0047d752  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 0047d755  8b16                 mov edx, dword ptr [esi]
// 0047d757  890c82               mov dword ptr [edx + eax*4], ecx
// 0047d75a  83c001               add eax, 1
// 0047d75d  3b4604               cmp eax, dword ptr [esi + 4]
// 0047d760  7cee                 jl 0x47d750
// 0047d762  5f                   pop edi
// 0047d763  8bc6                 mov eax, esi
// 0047d765  5e                   pop esi
// 0047d766  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??4?$Array@H@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
