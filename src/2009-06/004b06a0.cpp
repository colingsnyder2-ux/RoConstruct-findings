// roc 2009-06 004b06a0  unit: G3D::Shader  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b06a0
//
// 004b06a0  83ec18               sub esp, 0x18
// 004b06a3  53                   push ebx
// 004b06a4  56                   push esi
// 004b06a5  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004b06a8  8d5904               lea ebx, [ecx + 4]
// 004b06ab  57                   push edi
// 004b06ac  8b7b0c               mov edi, dword ptr [ebx + 0xc]
// 004b06af  85ff                 test edi, edi
// 004b06b1  752f                 jne 0x4b06e2
// 004b06b3  8b542410             mov edx, dword ptr [esp + 0x10]
// 004b06b7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b06bb  c644242001           mov byte ptr [esp + 0x20], 1
// 004b06c0  8b442428             mov eax, dword ptr [esp + 0x28]
// 004b06c4  8908                 mov dword ptr [eax], ecx
// 004b06c6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004b06ca  895004               mov dword ptr [eax + 4], edx
// 004b06cd  895808               mov dword ptr [eax + 8], ebx
// 004b06d0  89780c               mov dword ptr [eax + 0xc], edi
// 004b06d3  5f                   pop edi
// 004b06d4  897010               mov dword ptr [eax + 0x10], esi
// 004b06d7  5e                   pop esi
// 004b06d8  894814               mov dword ptr [eax + 0x14], ecx
// 004b06db  5b                   pop ebx
// 004b06dc  83c418               add esp, 0x18
// 004b06df  c20400               ret 4
// 004b06e2  8b16                 mov edx, dword ptr [esi]
// 004b06e4  33c9                 xor ecx, ecx
// 004b06e6  884c2420             mov byte ptr [esp + 0x20], cl
// 004b06ea  85d2                 test edx, edx
// 004b06ec  75d2                 jne 0x4b06c0
// 004b06ee  8bff                 mov edi, edi
// 004b06f0  41                   inc ecx
// 004b06f1  3bcf                 cmp ecx, edi
// 004b06f3  7dc6                 jge 0x4b06bb
// 004b06f5  8b148e               mov edx, dword ptr [esi + ecx*4]
// 004b06f8  85d2                 test edx, edx
// 004b06fa  74f4                 je 0x4b06f0
// 004b06fc  ebc2                 jmp 0x4b06c0
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?begin@?$Set@PAV?$Array@H@G3D@@@G3D@@QBE?AVIterator@12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
