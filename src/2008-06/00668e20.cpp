// roc 2008-06 00668e20  unit: RBX::JointStage  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00668e20
//
// 00668e20  56                   push esi
// 00668e21  8b742408             mov esi, dword ptr [esp + 8]
// 00668e25  57                   push edi
// 00668e26  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00668e2a  3bf7                 cmp esi, edi
// 00668e2c  7505                 jne 0x668e33
// 00668e2e  5f                   pop edi
// 00668e2f  32c0                 xor al, al
// 00668e31  5e                   pop esi
// 00668e32  c3                   ret 
// 00668e33  8b06                 mov eax, dword ptr [esi]
// 00668e35  8b5014               mov edx, dword ptr [eax + 0x14]
// 00668e38  53                   push ebx
// 00668e39  8bce                 mov ecx, esi
// 00668e3b  ffd2                 call edx
// 00668e3d  8bd8                 mov ebx, eax
// 00668e3f  8b07                 mov eax, dword ptr [edi]
// 00668e41  8b5014               mov edx, dword ptr [eax + 0x14]
// 00668e44  8bcf                 mov ecx, edi
// 00668e46  ffd2                 call edx
// 00668e48  3bd8                 cmp ebx, eax
// 00668e4a  740d                 je 0x668e59
// 00668e4c  33c9                 xor ecx, ecx
// 00668e4e  3bd8                 cmp ebx, eax
// 00668e50  5b                   pop ebx
// 00668e51  0f9cc1               setl cl
// 00668e54  5f                   pop edi
// 00668e55  8ac1                 mov al, cl
// 00668e57  5e                   pop esi
// 00668e58  c3                   ret 
// 00668e59  57                   push edi
// 00668e5a  56                   push esi
// 00668e5b  e810ffffff           call 0x668d70
// 00668e60  83c408               add esp, 8
// 00668e63  83f801               cmp eax, 1
// 00668e66  7414                 je 0x668e7c
// 00668e68  83f8ff               cmp eax, -1
// 00668e6b  741a                 je 0x668e87
// 00668e6d  57                   push edi
// 00668e6e  56                   push esi
// 00668e6f  e8ecfdffff           call 0x668c60
// 00668e74  83c408               add esp, 8
// 00668e77  83f801               cmp eax, 1
// 00668e7a  7506                 jne 0x668e82
// 00668e7c  5b                   pop ebx
// 00668e7d  5f                   pop edi
// 00668e7e  b001                 mov al, 1
// 00668e80  5e                   pop esi
// 00668e81  c3                   ret 
// 00668e82  83f8ff               cmp eax, -1
// 00668e85  7506                 jne 0x668e8d
// 00668e87  5b                   pop ebx
// 00668e88  5f                   pop edi
// 00668e89  32c0                 xor al, al
// 00668e8b  5e                   pop esi
// 00668e8c  c3                   ret 
// 00668e8d  3bf7                 cmp esi, edi
// 00668e8f  5b                   pop ebx
// 00668e90  1bc0                 sbb eax, eax
// 00668e92  5f                   pop edi
// 00668e93  f7d8                 neg eax
// 00668e95  5e                   pop esi
// 00668e96  c3                   ret 
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ?lighterJoint@JointSort@RBX@@SA_NPBVJoint@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
