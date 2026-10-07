// roc 2007-08 0050f8e0  unit: G3D::TextInput::WrongSymbol  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050f8e0
//
// 0050f8e0  56                   push esi
// 0050f8e1  57                   push edi
// 0050f8e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0050f8e6  8b4704               mov eax, dword ptr [edi + 4]
// 0050f8e9  6a01                 push 1
// 0050f8eb  50                   push eax
// 0050f8ec  8bf1                 mov esi, ecx
// 0050f8ee  e8add1f6ff           call 0x47caa0
// 0050f8f3  33c0                 xor eax, eax
// 0050f8f5  394604               cmp dword ptr [esi + 4], eax
// 0050f8f8  7e18                 jle 0x50f912
// 0050f8fa  8d9b00000000         lea ebx, [ebx]
// 0050f900  8b0f                 mov ecx, dword ptr [edi]
// 0050f902  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 0050f905  8b16                 mov edx, dword ptr [esi]
// 0050f907  890c82               mov dword ptr [edx + eax*4], ecx
// 0050f90a  83c001               add eax, 1
// 0050f90d  3b4604               cmp eax, dword ptr [esi + 4]
// 0050f910  7cee                 jl 0x50f900
// 0050f912  5f                   pop edi
// 0050f913  8bc6                 mov eax, esi
// 0050f915  5e                   pop esi
// 0050f916  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??4?$Array@H@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
