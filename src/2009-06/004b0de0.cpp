// roc 2009-06 004b0de0  unit: G3D::Shader  size: 295 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b0de0
//
// 004b0de0  6aff                 push -1
// 004b0de2  68e8818500           push 0x8581e8
// 004b0de7  64a100000000         mov eax, dword ptr fs:[0]
// 004b0ded  50                   push eax
// 004b0dee  64892500000000       mov dword ptr fs:[0], esp
// 004b0df5  83ec48               sub esp, 0x48
// 004b0df8  d9ee                 fldz 
// 004b0dfa  55                   push ebp
// 004b0dfb  d9542410             fst dword ptr [esp + 0x10]
// 004b0dff  56                   push esi
// 004b0e00  d9542410             fst dword ptr [esp + 0x10]
// 004b0e04  57                   push edi
// 004b0e05  d9542410             fst dword ptr [esp + 0x10]
// 004b0e09  8bf9                 mov edi, ecx
// 004b0e0b  d954240c             fst dword ptr [esp + 0xc]
// 004b0e0f  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 004b0e17  d9542428             fst dword ptr [esp + 0x28]
// 004b0e1b  d9542424             fst dword ptr [esp + 0x24]
// 004b0e1f  d9542420             fst dword ptr [esp + 0x20]
// 004b0e23  d954241c             fst dword ptr [esp + 0x1c]
// 004b0e27  d9542438             fst dword ptr [esp + 0x38]
// 004b0e2b  d9542434             fst dword ptr [esp + 0x34]
// 004b0e2f  d9542430             fst dword ptr [esp + 0x30]
// 004b0e33  d954242c             fst dword ptr [esp + 0x2c]
// 004b0e37  d9542448             fst dword ptr [esp + 0x48]
// 004b0e3b  d9542444             fst dword ptr [esp + 0x44]
// 004b0e3f  d9542440             fst dword ptr [esp + 0x40]
// 004b0e43  d95c243c             fstp dword ptr [esp + 0x3c]
// 004b0e47  8b742468             mov esi, dword ptr [esp + 0x68]
// 004b0e4b  8b0e                 mov ecx, dword ptr [esi]
// 004b0e4d  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 004b0e55  e8e69ffeff           call 0x49ae40
// 004b0e5a  8b36                 mov esi, dword ptr [esi]
// 004b0e5c  8b2da4e18900         mov ebp, dword ptr [0x89e1a4]
// 004b0e62  89442450             mov dword ptr [esp + 0x50], eax
// 004b0e66  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 004b0e6a  3bf0                 cmp esi, eax
// 004b0e6c  7441                 je 0x4b0eaf
// 004b0e6e  85c0                 test eax, eax
// 004b0e70  742b                 je 0x4b0e9d
// 004b0e72  83c004               add eax, 4
// 004b0e75  50                   push eax
// 004b0e76  ffd5                 call ebp
// 004b0e78  85c0                 test eax, eax
// 004b0e7a  7519                 jne 0x4b0e95
// 004b0e7c  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004b0e80  e8fb3ef9ff           call 0x444d80
// 004b0e85  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004b0e89  85c9                 test ecx, ecx
// 004b0e8b  7408                 je 0x4b0e95
// 004b0e8d  8b01                 mov eax, dword ptr [ecx]
// 004b0e8f  8b10                 mov edx, dword ptr [eax]
// 004b0e91  6a01                 push 1
// 004b0e93  ffd2                 call edx
// 004b0e95  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 004b0e9d  85f6                 test esi, esi
// 004b0e9f  740e                 je 0x4b0eaf
// 004b0ea1  8d4604               lea eax, [esi + 4]
// 004b0ea4  50                   push eax
// 004b0ea5  89742450             mov dword ptr [esp + 0x50], esi
// 004b0ea9  ff15d0e18900         call dword ptr [0x89e1d0]
// 004b0eaf  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 004b0eb3  8d44240c             lea eax, [esp + 0xc]
// 004b0eb7  50                   push eax
// 004b0eb8  51                   push ecx
// 004b0eb9  8bcf                 mov ecx, edi
// 004b0ebb  e880f9ffff           call 0x4b0840
// 004b0ec0  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 004b0ec4  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 004b0ecc  85c0                 test eax, eax
// 004b0ece  7423                 je 0x4b0ef3
// 004b0ed0  83c004               add eax, 4
// 004b0ed3  50                   push eax
// 004b0ed4  ffd5                 call ebp
// 004b0ed6  85c0                 test eax, eax
// 004b0ed8  7519                 jne 0x4b0ef3
// 004b0eda  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004b0ede  e89d3ef9ff           call 0x444d80
// 004b0ee3  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004b0ee7  85c9                 test ecx, ecx
// 004b0ee9  7408                 je 0x4b0ef3
// 004b0eeb  8b11                 mov edx, dword ptr [ecx]
// 004b0eed  8b02                 mov eax, dword ptr [edx]
// 004b0eef  6a01                 push 1
// 004b0ef1  ffd0                 call eax
// 004b0ef3  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004b0ef7  5f                   pop edi
// 004b0ef8  5e                   pop esi
// 004b0ef9  5d                   pop ebp
// 004b0efa  64890d00000000       mov dword ptr fs:[0], ecx
// 004b0f01  83c454               add esp, 0x54
// 004b0f04  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?set@ArgList@VertexAndPixelShader@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$ReferenceCountedPointer@VTexture@G3D@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
