// from server: 100% by auto
// roc 2008-06 004867f0  unit: G3D::Shader  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004867f0
//
// 004867f0  83ec18               sub esp, 0x18
// 004867f3  53                   push ebx
// 004867f4  56                   push esi
// 004867f5  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004867f8  8d5904               lea ebx, [ecx + 4]
// 004867fb  57                   push edi
// 004867fc  8b7b0c               mov edi, dword ptr [ebx + 0xc]
// 004867ff  85ff                 test edi, edi
// 00486801  752f                 jne 0x486832
// 00486803  8b542410             mov edx, dword ptr [esp + 0x10]
// 00486807  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048680b  c644242001           mov byte ptr [esp + 0x20], 1
// 00486810  8b442428             mov eax, dword ptr [esp + 0x28]
// 00486814  8908                 mov dword ptr [eax], ecx
// 00486816  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0048681a  895004               mov dword ptr [eax + 4], edx
// 0048681d  895808               mov dword ptr [eax + 8], ebx
// 00486820  89780c               mov dword ptr [eax + 0xc], edi
// 00486823  5f                   pop edi
// 00486824  897010               mov dword ptr [eax + 0x10], esi
// 00486827  5e                   pop esi
// 00486828  894814               mov dword ptr [eax + 0x14], ecx
// 0048682b  5b                   pop ebx
// 0048682c  83c418               add esp, 0x18
// 0048682f  c20400               ret 4
// 00486832  8b16                 mov edx, dword ptr [esi]
// 00486834  33c9                 xor ecx, ecx
// 00486836  884c2420             mov byte ptr [esp + 0x20], cl
// 0048683a  85d2                 test edx, edx
// 0048683c  75d2                 jne 0x486810
// 0048683e  8bff                 mov edi, edi
// 00486840  41                   inc ecx
// 00486841  3bcf                 cmp ecx, edi
// 00486843  7dc6                 jge 0x48680b
// 00486845  8b148e               mov edx, dword ptr [esi + ecx*4]
// 00486848  85d2                 test edx, edx
// 0048684a  74f4                 je 0x486840
// 0048684c  ebc2                 jmp 0x486810
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?begin@?$Set@PAV?$Array@H@G3D@@@G3D@@QBE?AVIterator@12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
