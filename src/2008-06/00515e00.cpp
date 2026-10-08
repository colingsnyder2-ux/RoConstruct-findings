// from server: 100% by auto
// roc 2008-06 00515e00  unit: G3D::BinaryInput  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00515e00
//
// 00515e00  51                   push ecx
// 00515e01  56                   push esi
// 00515e02  8bf1                 mov esi, ecx
// 00515e04  8b4644               mov eax, dword ptr [esi + 0x44]
// 00515e07  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00515e0a  8b5638               mov edx, dword ptr [esi + 0x38]
// 00515e0d  57                   push edi
// 00515e0e  03c8                 add ecx, eax
// 00515e10  4a                   dec edx
// 00515e11  33ff                 xor edi, edi
// 00515e13  3bca                 cmp ecx, edx
// 00515e15  c744240800000000     mov dword ptr [esp + 8], 0
// 00515e1d  7d10                 jge 0x515e2f
// 00515e1f  40                   inc eax
// 00515e20  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 00515e23  7e0a                 jle 0x515e2f
// 00515e25  6a01                 push 1
// 00515e27  51                   push ecx
// 00515e28  8bce                 mov ecx, esi
// 00515e2a  e8a1f9ffff           call 0x5157d0
// 00515e2f  8b4644               mov eax, dword ptr [esi + 0x44]
// 00515e32  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00515e35  8b5638               mov edx, dword ptr [esi + 0x38]
// 00515e38  03c8                 add ecx, eax
// 00515e3a  4a                   dec edx
// 00515e3b  3bca                 cmp ecx, edx
// 00515e3d  7d46                 jge 0x515e85
// 00515e3f  53                   push ebx
// 00515e40  8b5e40               mov ebx, dword ptr [esi + 0x40]
// 00515e43  803c1800             cmp byte ptr [eax + ebx], 0
// 00515e47  743b                 je 0x515e84
// 00515e49  8d5901               lea ebx, [ecx + 1]
// 00515e4c  3bda                 cmp ebx, edx
// 00515e4e  bf01000000           mov edi, 1
// 00515e53  7d2f                 jge 0x515e84
// 00515e55  8b5640               mov edx, dword ptr [esi + 0x40]
// 00515e58  03d0                 add edx, eax
// 00515e5a  803c3a00             cmp byte ptr [edx + edi], 0
// 00515e5e  7424                 je 0x515e84
// 00515e60  40                   inc eax
// 00515e61  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 00515e64  7e0a                 jle 0x515e70
// 00515e66  6a01                 push 1
// 00515e68  51                   push ecx
// 00515e69  8bce                 mov ecx, esi
// 00515e6b  e860f9ffff           call 0x5157d0
// 00515e70  8b4644               mov eax, dword ptr [esi + 0x44]
// 00515e73  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00515e76  8b5e38               mov ebx, dword ptr [esi + 0x38]
// 00515e79  47                   inc edi
// 00515e7a  03c8                 add ecx, eax
// 00515e7c  8d1439               lea edx, [ecx + edi]
// 00515e7f  4b                   dec ebx
// 00515e80  3bd3                 cmp edx, ebx
// 00515e82  7cd1                 jl 0x515e55
// 00515e84  5b                   pop ebx
// 00515e85  47                   inc edi
// 00515e86  57                   push edi
// 00515e87  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00515e8b  57                   push edi
// 00515e8c  8bce                 mov ecx, esi
// 00515e8e  e8bdfeffff           call 0x515d50
// 00515e93  8bc7                 mov eax, edi
// 00515e95  5f                   pop edi
// 00515e96  5e                   pop esi
// 00515e97  59                   pop ecx
// 00515e98  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?readString@BinaryInput@G3D@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
