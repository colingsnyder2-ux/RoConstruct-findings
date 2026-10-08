// roc 2009-12 005ff1b0  unit: G3D::_internal::DialogTemplate  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ff1b0
//
// 005ff1b0  53                   push ebx
// 005ff1b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005ff1b5  56                   push esi
// 005ff1b6  8bc3                 mov eax, ebx
// 005ff1b8  57                   push edi
// 005ff1b9  8bf1                 mov esi, ecx
// 005ff1bb  8d5001               lea edx, [eax + 1]
// 005ff1be  8bff                 mov edi, edi
// 005ff1c0  8a08                 mov cl, byte ptr [eax]
// 005ff1c2  40                   inc eax
// 005ff1c3  84c9                 test cl, cl
// 005ff1c5  75f9                 jne 0x5ff1c0
// 005ff1c7  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005ff1ca  2bc2                 sub eax, edx
// 005ff1cc  8d7801               lea edi, [eax + 1]
// 005ff1cf  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005ff1d2  03c7                 add eax, edi
// 005ff1d4  3bc8                 cmp ecx, eax
// 005ff1d6  7c02                 jl 0x5ff1da
// 005ff1d8  8bc1                 mov eax, ecx
// 005ff1da  3b4638               cmp eax, dword ptr [esi + 0x38]
// 005ff1dd  894634               mov dword ptr [esi + 0x34], eax
// 005ff1e0  7e09                 jle 0x5ff1eb
// 005ff1e2  51                   push ecx
// 005ff1e3  57                   push edi
// 005ff1e4  8bce                 mov ecx, esi
// 005ff1e6  e8c5fdffff           call 0x5fefb0
// 005ff1eb  8b4630               mov eax, dword ptr [esi + 0x30]
// 005ff1ee  03463c               add eax, dword ptr [esi + 0x3c]
// 005ff1f1  57                   push edi
// 005ff1f2  53                   push ebx
// 005ff1f3  50                   push eax
// 005ff1f4  e877bdfeff           call 0x5eaf70
// 005ff1f9  017e3c               add dword ptr [esi + 0x3c], edi
// 005ff1fc  83c40c               add esp, 0xc
// 005ff1ff  5f                   pop edi
// 005ff200  5e                   pop esi
// 005ff201  5b                   pop ebx
// 005ff202  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?writeString@BinaryOutput@G3D@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
