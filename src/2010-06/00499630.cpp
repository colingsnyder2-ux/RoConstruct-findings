// roc 2010-06 00499630  unit: G3D::Shader  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00499630
//
// 00499630  83ec18               sub esp, 0x18
// 00499633  53                   push ebx
// 00499634  56                   push esi
// 00499635  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00499638  8d5904               lea ebx, [ecx + 4]
// 0049963b  57                   push edi
// 0049963c  8b7b0c               mov edi, dword ptr [ebx + 0xc]
// 0049963f  85ff                 test edi, edi
// 00499641  752f                 jne 0x499672
// 00499643  8b542410             mov edx, dword ptr [esp + 0x10]
// 00499647  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049964b  c644242001           mov byte ptr [esp + 0x20], 1
// 00499650  8b442428             mov eax, dword ptr [esp + 0x28]
// 00499654  8908                 mov dword ptr [eax], ecx
// 00499656  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0049965a  895004               mov dword ptr [eax + 4], edx
// 0049965d  895808               mov dword ptr [eax + 8], ebx
// 00499660  89780c               mov dword ptr [eax + 0xc], edi
// 00499663  5f                   pop edi
// 00499664  897010               mov dword ptr [eax + 0x10], esi
// 00499667  5e                   pop esi
// 00499668  894814               mov dword ptr [eax + 0x14], ecx
// 0049966b  5b                   pop ebx
// 0049966c  83c418               add esp, 0x18
// 0049966f  c20400               ret 4
// 00499672  8b16                 mov edx, dword ptr [esi]
// 00499674  33c9                 xor ecx, ecx
// 00499676  884c2420             mov byte ptr [esp + 0x20], cl
// 0049967a  85d2                 test edx, edx
// 0049967c  75d2                 jne 0x499650
// 0049967e  8bff                 mov edi, edi
// 00499680  41                   inc ecx
// 00499681  3bcf                 cmp ecx, edi
// 00499683  7dc6                 jge 0x49964b
// 00499685  8b148e               mov edx, dword ptr [esi + ecx*4]
// 00499688  85d2                 test edx, edx
// 0049968a  74f4                 je 0x499680
// 0049968c  ebc2                 jmp 0x499650
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?begin@?$Set@PAV?$Array@H@G3D@@@G3D@@QBE?AVIterator@12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
