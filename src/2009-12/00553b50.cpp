// roc 2009-12 00553b50  unit: RBX::Network::ClientReplicator  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00553b50
//
// 00553b50  57                   push edi
// 00553b51  8bf9                 mov edi, ecx
// 00553b53  837f0400             cmp dword ptr [edi + 4], 0
// 00553b57  750d                 jne 0x553b66
// 00553b59  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00553b5d  c60000               mov byte ptr [eax], 0
// 00553b60  33c0                 xor eax, eax
// 00553b62  5f                   pop edi
// 00553b63  c20c00               ret 0xc
// 00553b66  8b4704               mov eax, dword ptr [edi + 4]
// 00553b69  8b0f                 mov ecx, dword ptr [edi]
// 00553b6b  53                   push ebx
// 00553b6c  55                   push ebp
// 00553b6d  8d68ff               lea ebp, [eax - 1]
// 00553b70  99                   cdq 
// 00553b71  2bc2                 sub eax, edx
// 00553b73  8b542410             mov edx, dword ptr [esp + 0x10]
// 00553b77  56                   push esi
// 00553b78  8bf0                 mov esi, eax
// 00553b7a  d1fe                 sar esi, 1
// 00553b7c  8d04b1               lea eax, [ecx + esi*4]
// 00553b7f  50                   push eax
// 00553b80  52                   push edx
// 00553b81  33db                 xor ebx, ebx
// 00553b83  ff542424             call dword ptr [esp + 0x24]
// 00553b87  83c408               add esp, 8
// 00553b8a  85c0                 test eax, eax
// 00553b8c  7431                 je 0x553bbf
// 00553b8e  7d05                 jge 0x553b95
// 00553b90  8d6eff               lea ebp, [esi - 1]
// 00553b93  eb03                 jmp 0x553b98
// 00553b95  8d5e01               lea ebx, [esi + 1]
// 00553b98  8bc5                 mov eax, ebp
// 00553b9a  2bc3                 sub eax, ebx
// 00553b9c  99                   cdq 
// 00553b9d  2bc2                 sub eax, edx
// 00553b9f  8bf0                 mov esi, eax
// 00553ba1  d1fe                 sar esi, 1
// 00553ba3  03f3                 add esi, ebx
// 00553ba5  3bdd                 cmp ebx, ebp
// 00553ba7  7f26                 jg 0x553bcf
// 00553ba9  8b07                 mov eax, dword ptr [edi]
// 00553bab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00553baf  8d04b0               lea eax, [eax + esi*4]
// 00553bb2  50                   push eax
// 00553bb3  51                   push ecx
// 00553bb4  ff542424             call dword ptr [esp + 0x24]
// 00553bb8  83c408               add esp, 8
// 00553bbb  85c0                 test eax, eax
// 00553bbd  75cf                 jne 0x553b8e
// 00553bbf  8b542418             mov edx, dword ptr [esp + 0x18]
// 00553bc3  8bc6                 mov eax, esi
// 00553bc5  5e                   pop esi
// 00553bc6  5d                   pop ebp
// 00553bc7  5b                   pop ebx
// 00553bc8  c60201               mov byte ptr [edx], 1
// 00553bcb  5f                   pop edi
// 00553bcc  c20c00               ret 0xc
// 00553bcf  8b442418             mov eax, dword ptr [esp + 0x18]
// 00553bd3  5e                   pop esi
// 00553bd4  5d                   pop ebp
// 00553bd5  c60000               mov byte ptr [eax], 0
// 00553bd8  8bc3                 mov eax, ebx
// 00553bda  5b                   pop ebx
// 00553bdb  5f                   pop edi
// 00553bdc  c20c00               ret 0xc
// library rbxgs-raknet/DS_Table.cpp (function ?GetIndexFromKey@?$OrderedList@PAURow@Table@DataStructures@@PAU123@$1?RowSort@@YAHABQAU123@0@Z@DataStructures@@QBEIABQAURow@Table@2@PA_NP6AH00@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_Table.cpp
