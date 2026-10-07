// roc 2009-06 00574d90  unit: G3D::BinaryInput  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00574d90
//
// 00574d90  51                   push ecx
// 00574d91  56                   push esi
// 00574d92  8bf1                 mov esi, ecx
// 00574d94  8b4644               mov eax, dword ptr [esi + 0x44]
// 00574d97  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00574d9a  8b5638               mov edx, dword ptr [esi + 0x38]
// 00574d9d  57                   push edi
// 00574d9e  03c8                 add ecx, eax
// 00574da0  4a                   dec edx
// 00574da1  33ff                 xor edi, edi
// 00574da3  3bca                 cmp ecx, edx
// 00574da5  c744240800000000     mov dword ptr [esp + 8], 0
// 00574dad  7d10                 jge 0x574dbf
// 00574daf  40                   inc eax
// 00574db0  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 00574db3  7e0a                 jle 0x574dbf
// 00574db5  6a01                 push 1
// 00574db7  51                   push ecx
// 00574db8  8bce                 mov ecx, esi
// 00574dba  e891f9ffff           call 0x574750
// 00574dbf  8b4644               mov eax, dword ptr [esi + 0x44]
// 00574dc2  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00574dc5  8b5638               mov edx, dword ptr [esi + 0x38]
// 00574dc8  03c8                 add ecx, eax
// 00574dca  4a                   dec edx
// 00574dcb  3bca                 cmp ecx, edx
// 00574dcd  7d46                 jge 0x574e15
// 00574dcf  53                   push ebx
// 00574dd0  8b5e40               mov ebx, dword ptr [esi + 0x40]
// 00574dd3  803c1800             cmp byte ptr [eax + ebx], 0
// 00574dd7  743b                 je 0x574e14
// 00574dd9  8d5901               lea ebx, [ecx + 1]
// 00574ddc  3bda                 cmp ebx, edx
// 00574dde  bf01000000           mov edi, 1
// 00574de3  7d2f                 jge 0x574e14
// 00574de5  8b5640               mov edx, dword ptr [esi + 0x40]
// 00574de8  03d0                 add edx, eax
// 00574dea  803c3a00             cmp byte ptr [edx + edi], 0
// 00574dee  7424                 je 0x574e14
// 00574df0  40                   inc eax
// 00574df1  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 00574df4  7e0a                 jle 0x574e00
// 00574df6  6a01                 push 1
// 00574df8  51                   push ecx
// 00574df9  8bce                 mov ecx, esi
// 00574dfb  e850f9ffff           call 0x574750
// 00574e00  8b4644               mov eax, dword ptr [esi + 0x44]
// 00574e03  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00574e06  8b5e38               mov ebx, dword ptr [esi + 0x38]
// 00574e09  47                   inc edi
// 00574e0a  03c8                 add ecx, eax
// 00574e0c  8d1439               lea edx, [ecx + edi]
// 00574e0f  4b                   dec ebx
// 00574e10  3bd3                 cmp edx, ebx
// 00574e12  7cd1                 jl 0x574de5
// 00574e14  5b                   pop ebx
// 00574e15  47                   inc edi
// 00574e16  57                   push edi
// 00574e17  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00574e1b  57                   push edi
// 00574e1c  8bce                 mov ecx, esi
// 00574e1e  e8bdfeffff           call 0x574ce0
// 00574e23  8bc7                 mov eax, edi
// 00574e25  5f                   pop edi
// 00574e26  5e                   pop esi
// 00574e27  59                   pop ecx
// 00574e28  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?readString@BinaryInput@G3D@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
