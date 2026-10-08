// roc 2009-12 005fcae0  unit: G3D::TextInput::WrongSymbol  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fcae0
//
// 005fcae0  56                   push esi
// 005fcae1  57                   push edi
// 005fcae2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005fcae6  8b4704               mov eax, dword ptr [edi + 4]
// 005fcae9  6a01                 push 1
// 005fcaeb  50                   push eax
// 005fcaec  8bf1                 mov esi, ecx
// 005fcaee  e8eda0edff           call 0x4d6be0
// 005fcaf3  33c0                 xor eax, eax
// 005fcaf5  394604               cmp dword ptr [esi + 4], eax
// 005fcaf8  7e16                 jle 0x5fcb10
// 005fcafa  8d9b00000000         lea ebx, [ebx]
// 005fcb00  8b0f                 mov ecx, dword ptr [edi]
// 005fcb02  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 005fcb05  8b16                 mov edx, dword ptr [esi]
// 005fcb07  890c82               mov dword ptr [edx + eax*4], ecx
// 005fcb0a  40                   inc eax
// 005fcb0b  3b4604               cmp eax, dword ptr [esi + 4]
// 005fcb0e  7cf0                 jl 0x5fcb00
// 005fcb10  5f                   pop edi
// 005fcb11  8bc6                 mov eax, esi
// 005fcb13  5e                   pop esi
// 005fcb14  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??4?$Array@H@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
