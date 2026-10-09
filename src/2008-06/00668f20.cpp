// roc 2008-06 00668f20  unit: RBX::JointStage  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00668f20
//
// 00668f20  53                   push ebx
// 00668f21  56                   push esi
// 00668f22  57                   push edi
// 00668f23  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00668f27  837f0400             cmp dword ptr [edi + 4], 0
// 00668f2b  8bf1                 mov esi, ecx
// 00668f2d  7508                 jne 0x668f37
// 00668f2f  56                   push esi
// 00668f30  8bcf                 mov ecx, edi
// 00668f32  e8f9c8fdff           call 0x645830
// 00668f37  8b4f04               mov ecx, dword ptr [edi + 4]
// 00668f3a  8b01                 mov eax, dword ptr [ecx]
// 00668f3c  8b5004               mov edx, dword ptr [eax + 4]
// 00668f3f  ffd2                 call edx
// 00668f41  8bd8                 mov ebx, eax
// 00668f43  8b06                 mov eax, dword ptr [esi]
// 00668f45  8b5004               mov edx, dword ptr [eax + 4]
// 00668f48  8bce                 mov ecx, esi
// 00668f4a  ffd2                 call edx
// 00668f4c  3bd8                 cmp ebx, eax
// 00668f4e  8bcf                 mov ecx, edi
// 00668f50  0f9fc3               setg bl
// 00668f53  e888d1f7ff           call 0x5e60e0
// 00668f58  84c0                 test al, al
// 00668f5a  0f94c0               sete al
// 00668f5d  3ad8                 cmp bl, al
// 00668f5f  741e                 je 0x668f7f
// 00668f61  8b4e08               mov ecx, dword ptr [esi + 8]
// 00668f64  57                   push edi
// 00668f65  84c0                 test al, al
// 00668f67  740b                 je 0x668f74
// 00668f69  e8c2650000           call 0x66f530
// 00668f6e  5f                   pop edi
// 00668f6f  5e                   pop esi
// 00668f70  5b                   pop ebx
// 00668f71  c20400               ret 4
// 00668f74  e8d7650000           call 0x66f550
// 00668f79  5f                   pop edi
// 00668f7a  5e                   pop esi
// 00668f7b  5b                   pop ebx
// 00668f7c  c20400               ret 4
// 00668f7f  84db                 test bl, bl
// 00668f81  7409                 je 0x668f8c
// 00668f83  8b4e08               mov ecx, dword ptr [esi + 8]
// 00668f86  57                   push edi
// 00668f87  e884650000           call 0x66f510
// 00668f8c  5f                   pop edi
// 00668f8d  5e                   pop esi
// 00668f8e  5b                   pop ebx
// 00668f8f  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ?cleanAssembly@TreeStage@RBX@@AAEXPAVAssembly@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
