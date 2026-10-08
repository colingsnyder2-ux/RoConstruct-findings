// from server: 100% by auto
// roc 2010-06 00558ea0  unit: G3D::BinaryInput  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00558ea0
//
// 00558ea0  51                   push ecx
// 00558ea1  56                   push esi
// 00558ea2  8bf1                 mov esi, ecx
// 00558ea4  8b4644               mov eax, dword ptr [esi + 0x44]
// 00558ea7  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00558eaa  8b5638               mov edx, dword ptr [esi + 0x38]
// 00558ead  57                   push edi
// 00558eae  03c8                 add ecx, eax
// 00558eb0  4a                   dec edx
// 00558eb1  33ff                 xor edi, edi
// 00558eb3  3bca                 cmp ecx, edx
// 00558eb5  c744240800000000     mov dword ptr [esp + 8], 0
// 00558ebd  7d10                 jge 0x558ecf
// 00558ebf  40                   inc eax
// 00558ec0  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 00558ec3  7e0a                 jle 0x558ecf
// 00558ec5  6a01                 push 1
// 00558ec7  51                   push ecx
// 00558ec8  8bce                 mov ecx, esi
// 00558eca  e881f9ffff           call 0x558850
// 00558ecf  8b4644               mov eax, dword ptr [esi + 0x44]
// 00558ed2  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00558ed5  8b5638               mov edx, dword ptr [esi + 0x38]
// 00558ed8  03c8                 add ecx, eax
// 00558eda  4a                   dec edx
// 00558edb  3bca                 cmp ecx, edx
// 00558edd  7d46                 jge 0x558f25
// 00558edf  53                   push ebx
// 00558ee0  8b5e40               mov ebx, dword ptr [esi + 0x40]
// 00558ee3  803c1800             cmp byte ptr [eax + ebx], 0
// 00558ee7  743b                 je 0x558f24
// 00558ee9  8d5901               lea ebx, [ecx + 1]
// 00558eec  3bda                 cmp ebx, edx
// 00558eee  bf01000000           mov edi, 1
// 00558ef3  7d2f                 jge 0x558f24
// 00558ef5  8b5640               mov edx, dword ptr [esi + 0x40]
// 00558ef8  03d0                 add edx, eax
// 00558efa  803c3a00             cmp byte ptr [edx + edi], 0
// 00558efe  7424                 je 0x558f24
// 00558f00  40                   inc eax
// 00558f01  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 00558f04  7e0a                 jle 0x558f10
// 00558f06  6a01                 push 1
// 00558f08  51                   push ecx
// 00558f09  8bce                 mov ecx, esi
// 00558f0b  e840f9ffff           call 0x558850
// 00558f10  8b4644               mov eax, dword ptr [esi + 0x44]
// 00558f13  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00558f16  8b5e38               mov ebx, dword ptr [esi + 0x38]
// 00558f19  47                   inc edi
// 00558f1a  03c8                 add ecx, eax
// 00558f1c  8d1439               lea edx, [ecx + edi]
// 00558f1f  4b                   dec ebx
// 00558f20  3bd3                 cmp edx, ebx
// 00558f22  7cd1                 jl 0x558ef5
// 00558f24  5b                   pop ebx
// 00558f25  47                   inc edi
// 00558f26  57                   push edi
// 00558f27  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00558f2b  57                   push edi
// 00558f2c  8bce                 mov ecx, esi
// 00558f2e  e8bdfeffff           call 0x558df0
// 00558f33  8bc7                 mov eax, edi
// 00558f35  5f                   pop edi
// 00558f36  5e                   pop esi
// 00558f37  59                   pop ecx
// 00558f38  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?readString@BinaryInput@G3D@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
