// roc 2009-12 005f57b0  unit: G3D::BinaryInput  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f57b0
//
// 005f57b0  51                   push ecx
// 005f57b1  56                   push esi
// 005f57b2  8bf1                 mov esi, ecx
// 005f57b4  8b4644               mov eax, dword ptr [esi + 0x44]
// 005f57b7  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005f57ba  8b5638               mov edx, dword ptr [esi + 0x38]
// 005f57bd  57                   push edi
// 005f57be  03c8                 add ecx, eax
// 005f57c0  4a                   dec edx
// 005f57c1  33ff                 xor edi, edi
// 005f57c3  3bca                 cmp ecx, edx
// 005f57c5  c744240800000000     mov dword ptr [esp + 8], 0
// 005f57cd  7d10                 jge 0x5f57df
// 005f57cf  40                   inc eax
// 005f57d0  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 005f57d3  7e0a                 jle 0x5f57df
// 005f57d5  6a01                 push 1
// 005f57d7  51                   push ecx
// 005f57d8  8bce                 mov ecx, esi
// 005f57da  e8e1f9ffff           call 0x5f51c0
// 005f57df  8b4644               mov eax, dword ptr [esi + 0x44]
// 005f57e2  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005f57e5  8b5638               mov edx, dword ptr [esi + 0x38]
// 005f57e8  03c8                 add ecx, eax
// 005f57ea  4a                   dec edx
// 005f57eb  3bca                 cmp ecx, edx
// 005f57ed  7d46                 jge 0x5f5835
// 005f57ef  53                   push ebx
// 005f57f0  8b5e40               mov ebx, dword ptr [esi + 0x40]
// 005f57f3  803c1800             cmp byte ptr [eax + ebx], 0
// 005f57f7  743b                 je 0x5f5834
// 005f57f9  8d5901               lea ebx, [ecx + 1]
// 005f57fc  3bda                 cmp ebx, edx
// 005f57fe  bf01000000           mov edi, 1
// 005f5803  7d2f                 jge 0x5f5834
// 005f5805  8b5640               mov edx, dword ptr [esi + 0x40]
// 005f5808  03d0                 add edx, eax
// 005f580a  803c3a00             cmp byte ptr [edx + edi], 0
// 005f580e  7424                 je 0x5f5834
// 005f5810  40                   inc eax
// 005f5811  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 005f5814  7e0a                 jle 0x5f5820
// 005f5816  6a01                 push 1
// 005f5818  51                   push ecx
// 005f5819  8bce                 mov ecx, esi
// 005f581b  e8a0f9ffff           call 0x5f51c0
// 005f5820  8b4644               mov eax, dword ptr [esi + 0x44]
// 005f5823  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005f5826  8b5e38               mov ebx, dword ptr [esi + 0x38]
// 005f5829  47                   inc edi
// 005f582a  03c8                 add ecx, eax
// 005f582c  8d1439               lea edx, [ecx + edi]
// 005f582f  4b                   dec ebx
// 005f5830  3bd3                 cmp edx, ebx
// 005f5832  7cd1                 jl 0x5f5805
// 005f5834  5b                   pop ebx
// 005f5835  47                   inc edi
// 005f5836  57                   push edi
// 005f5837  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005f583b  57                   push edi
// 005f583c  8bce                 mov ecx, esi
// 005f583e  e8bdfeffff           call 0x5f5700
// 005f5843  8bc7                 mov eax, edi
// 005f5845  5f                   pop edi
// 005f5846  5e                   pop esi
// 005f5847  59                   pop ecx
// 005f5848  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?readString@BinaryInput@G3D@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
