// roc 2009-12 0069ec20  unit: std::strstream  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069ec20
//
// 0069ec20  53                   push ebx
// 0069ec21  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0069ec25  55                   push ebp
// 0069ec26  56                   push esi
// 0069ec27  57                   push edi
// 0069ec28  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0069ec2c  57                   push edi
// 0069ec2d  53                   push ebx
// 0069ec2e  e86dffffff           call 0x69eba0
// 0069ec33  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0069ec37  8bf0                 mov esi, eax
// 0069ec39  8b442428             mov eax, dword ptr [esp + 0x28]
// 0069ec3d  50                   push eax
// 0069ec3e  51                   push ecx
// 0069ec3f  e85cffffff           call 0x69eba0
// 0069ec44  83c410               add esp, 0x10
// 0069ec47  8be8                 mov ebp, eax
// 0069ec49  8bcb                 mov ecx, ebx
// 0069ec4b  83fe01               cmp esi, 1
// 0069ec4e  7402                 je 0x69ec52
// 0069ec50  8bcf                 mov ecx, edi
// 0069ec52  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0069ec56  83fd01               cmp ebp, 1
// 0069ec59  7404                 je 0x69ec5f
// 0069ec5b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0069ec5f  50                   push eax
// 0069ec60  51                   push ecx
// 0069ec61  e83affffff           call 0x69eba0
// 0069ec66  83c408               add esp, 8
// 0069ec69  83f8ff               cmp eax, -1
// 0069ec6c  7436                 je 0x69eca4
// 0069ec6e  85c0                 test eax, eax
// 0069ec70  740f                 je 0x69ec81
// 0069ec72  33d2                 xor edx, edx
// 0069ec74  83f801               cmp eax, 1
// 0069ec77  0f94c2               sete dl
// 0069ec7a  5f                   pop edi
// 0069ec7b  5e                   pop esi
// 0069ec7c  5d                   pop ebp
// 0069ec7d  5b                   pop ebx
// 0069ec7e  8bc2                 mov eax, edx
// 0069ec80  c3                   ret 
// 0069ec81  83fe01               cmp esi, 1
// 0069ec84  7402                 je 0x69ec88
// 0069ec86  8bfb                 mov edi, ebx
// 0069ec88  8b442420             mov eax, dword ptr [esp + 0x20]
// 0069ec8c  83fd01               cmp ebp, 1
// 0069ec8f  7404                 je 0x69ec95
// 0069ec91  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0069ec95  50                   push eax
// 0069ec96  57                   push edi
// 0069ec97  e804ffffff           call 0x69eba0
// 0069ec9c  83c408               add esp, 8
// 0069ec9f  5f                   pop edi
// 0069eca0  5e                   pop esi
// 0069eca1  5d                   pop ebp
// 0069eca2  5b                   pop ebx
// 0069eca3  c3                   ret 
// 0069eca4  5f                   pop edi
// 0069eca5  5e                   pop esi
// 0069eca6  5d                   pop ebp
// 0069eca7  83c8ff               or eax, 0xffffffff
// 0069ecaa  5b                   pop ebx
// 0069ecab  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?compare@Guid@RBX@@SAHPBV12@000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
