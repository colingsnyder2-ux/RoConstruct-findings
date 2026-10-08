// roc 2009-12 004dd1c0  unit: G3D::Shader  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dd1c0
//
// 004dd1c0  83ec18               sub esp, 0x18
// 004dd1c3  53                   push ebx
// 004dd1c4  56                   push esi
// 004dd1c5  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004dd1c8  8d5904               lea ebx, [ecx + 4]
// 004dd1cb  57                   push edi
// 004dd1cc  8b7b0c               mov edi, dword ptr [ebx + 0xc]
// 004dd1cf  85ff                 test edi, edi
// 004dd1d1  752f                 jne 0x4dd202
// 004dd1d3  8b542410             mov edx, dword ptr [esp + 0x10]
// 004dd1d7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004dd1db  c644242001           mov byte ptr [esp + 0x20], 1
// 004dd1e0  8b442428             mov eax, dword ptr [esp + 0x28]
// 004dd1e4  8908                 mov dword ptr [eax], ecx
// 004dd1e6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004dd1ea  895004               mov dword ptr [eax + 4], edx
// 004dd1ed  895808               mov dword ptr [eax + 8], ebx
// 004dd1f0  89780c               mov dword ptr [eax + 0xc], edi
// 004dd1f3  5f                   pop edi
// 004dd1f4  897010               mov dword ptr [eax + 0x10], esi
// 004dd1f7  5e                   pop esi
// 004dd1f8  894814               mov dword ptr [eax + 0x14], ecx
// 004dd1fb  5b                   pop ebx
// 004dd1fc  83c418               add esp, 0x18
// 004dd1ff  c20400               ret 4
// 004dd202  8b16                 mov edx, dword ptr [esi]
// 004dd204  33c9                 xor ecx, ecx
// 004dd206  884c2420             mov byte ptr [esp + 0x20], cl
// 004dd20a  85d2                 test edx, edx
// 004dd20c  75d2                 jne 0x4dd1e0
// 004dd20e  8bff                 mov edi, edi
// 004dd210  41                   inc ecx
// 004dd211  3bcf                 cmp ecx, edi
// 004dd213  7dc6                 jge 0x4dd1db
// 004dd215  8b148e               mov edx, dword ptr [esi + ecx*4]
// 004dd218  85d2                 test edx, edx
// 004dd21a  74f4                 je 0x4dd210
// 004dd21c  ebc2                 jmp 0x4dd1e0
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?begin@?$Set@PAV?$Array@H@G3D@@@G3D@@QBE?AVIterator@12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
