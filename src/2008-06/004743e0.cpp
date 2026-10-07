// roc 2008-06 004743e0  unit: G3D::Texture  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004743e0
//
// 004743e0  56                   push esi
// 004743e1  57                   push edi
// 004743e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004743e6  8b4704               mov eax, dword ptr [edi + 4]
// 004743e9  8bf1                 mov esi, ecx
// 004743eb  c7460400000000       mov dword ptr [esi + 4], 0
// 004743f2  c7460800000000       mov dword ptr [esi + 8], 0
// 004743f9  c70600000000         mov dword ptr [esi], 0
// 004743ff  85c0                 test eax, eax
// 00474401  7e0a                 jle 0x47440d
// 00474403  6a01                 push 1
// 00474405  50                   push eax
// 00474406  e8c5f8ffff           call 0x473cd0
// 0047440b  eb06                 jmp 0x474413
// 0047440d  c70600000000         mov dword ptr [esi], 0
// 00474413  33c0                 xor eax, eax
// 00474415  394604               cmp dword ptr [esi + 4], eax
// 00474418  7e16                 jle 0x474430
// 0047441a  8d9b00000000         lea ebx, [ebx]
// 00474420  8b0f                 mov ecx, dword ptr [edi]
// 00474422  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00474425  8b16                 mov edx, dword ptr [esi]
// 00474427  890c82               mov dword ptr [edx + eax*4], ecx
// 0047442a  40                   inc eax
// 0047442b  3b4604               cmp eax, dword ptr [esi + 4]
// 0047442e  7cf0                 jl 0x474420
// 00474430  5f                   pop edi
// 00474431  5e                   pop esi
// 00474432  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?_copy@?$Array@PBX@G3D@@AAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
