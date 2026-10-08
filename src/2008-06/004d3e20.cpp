// roc 2008-06 004d3e20  unit: seg_004d0000  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d3e20
//
// 004d3e20  53                   push ebx
// 004d3e21  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004d3e25  55                   push ebp
// 004d3e26  57                   push edi
// 004d3e27  53                   push ebx
// 004d3e28  8bf9                 mov edi, ecx
// 004d3e2a  e801ffffff           call 0x4d3d30
// 004d3e2f  0fb66c2414           movzx ebp, byte ptr [esp + 0x14]
// 004d3e34  0fb6c0               movzx eax, al
// 004d3e37  3bc5                 cmp eax, ebp
// 004d3e39  0f8499000000         je 0x4d3ed8
// 004d3e3f  56                   push esi
// 004d3e40  3cff                 cmp al, 0xff
// 004d3e42  741f                 je 0x4d3e63
// 004d3e44  8b0f                 mov ecx, dword ptr [edi]
// 004d3e46  8b3481               mov esi, dword ptr [ecx + eax*4]
// 004d3e49  8d0481               lea eax, [ecx + eax*4]
// 004d3e4c  c70000000000         mov dword ptr [eax], 0
// 004d3e52  8b16                 mov edx, dword ptr [esi]
// 004d3e54  52                   push edx
// 004d3e55  e820c81c00           call 0x6a067a
// 004d3e5a  56                   push esi
// 004d3e5b  e81ac81c00           call 0x6a067a
// 004d3e60  83c408               add esp, 8
// 004d3e63  6a0c                 push 0xc
// 004d3e65  e8b6ca1c00           call 0x6a0920
// 004d3e6a  8bf0                 mov esi, eax
// 004d3e6c  8bc3                 mov eax, ebx
// 004d3e6e  83c404               add esp, 4
// 004d3e71  8d5001               lea edx, [eax + 1]
// 004d3e74  8a08                 mov cl, byte ptr [eax]
// 004d3e76  40                   inc eax
// 004d3e77  84c9                 test cl, cl
// 004d3e79  75f9                 jne 0x4d3e74
// 004d3e7b  2bc2                 sub eax, edx
// 004d3e7d  40                   inc eax
// 004d3e7e  50                   push eax
// 004d3e7f  e89cca1c00           call 0x6a0920
// 004d3e84  83c404               add esp, 4
// 004d3e87  8906                 mov dword ptr [esi], eax
// 004d3e89  8bcb                 mov ecx, ebx
// 004d3e8b  8bd0                 mov edx, eax
// 004d3e8d  8d4900               lea ecx, [ecx]
// 004d3e90  8a01                 mov al, byte ptr [ecx]
// 004d3e92  8802                 mov byte ptr [edx], al
// 004d3e94  41                   inc ecx
// 004d3e95  42                   inc edx
// 004d3e96  84c0                 test al, al
// 004d3e98  75f6                 jne 0x4d3e90
// 004d3e9a  c7460400000000       mov dword ptr [esi + 4], 0
// 004d3ea1  3b6f04               cmp ebp, dword ptr [edi + 4]
// 004d3ea4  7326                 jae 0x4d3ecc
// 004d3ea6  8b07                 mov eax, dword ptr [edi]
// 004d3ea8  8b1ca8               mov ebx, dword ptr [eax + ebp*4]
// 004d3eab  85db                 test ebx, ebx
// 004d3ead  7411                 je 0x4d3ec0
// 004d3eaf  8b0b                 mov ecx, dword ptr [ebx]
// 004d3eb1  51                   push ecx
// 004d3eb2  e8c3c71c00           call 0x6a067a
// 004d3eb7  53                   push ebx
// 004d3eb8  e8bdc71c00           call 0x6a067a
// 004d3ebd  83c408               add esp, 8
// 004d3ec0  8b17                 mov edx, dword ptr [edi]
// 004d3ec2  8934aa               mov dword ptr [edx + ebp*4], esi
// 004d3ec5  5e                   pop esi
// 004d3ec6  5f                   pop edi
// 004d3ec7  5d                   pop ebp
// 004d3ec8  5b                   pop ebx
// 004d3ec9  c20800               ret 8
// 004d3ecc  55                   push ebp
// 004d3ecd  6a00                 push 0
// 004d3ecf  56                   push esi
// 004d3ed0  8bcf                 mov ecx, edi
// 004d3ed2  e829aeffff           call 0x4ced00
// 004d3ed7  5e                   pop esi
// 004d3ed8  5f                   pop edi
// 004d3ed9  5d                   pop ebp
// 004d3eda  5b                   pop ebx
// 004d3edb  c20800               ret 8
// library rbxgs-raknet/RPCMap.cpp (function ?AddIdentifierAtIndex@RPCMap@@QAEXPBDE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
