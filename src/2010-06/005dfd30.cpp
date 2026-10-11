// roc 2010-06 005dfd30  unit: RBX::GlobalSettings  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005dfd30
//
// 005dfd30  55                   push ebp
// 005dfd31  56                   push esi
// 005dfd32  8bf1                 mov esi, ecx
// 005dfd34  8b4604               mov eax, dword ptr [esi + 4]
// 005dfd37  83e802               sub eax, 2
// 005dfd3a  57                   push edi
// 005dfd3b  7456                 je 0x5dfd93
// 005dfd3d  83e801               sub eax, 1
// 005dfd40  7451                 je 0x5dfd93
// 005dfd42  83e805               sub eax, 5
// 005dfd45  756d                 jne 0x5dfdb4
// 005dfd47  53                   push ebx
// 005dfd48  8b5e08               mov ebx, dword ptr [esi + 8]
// 005dfd4b  33ed                 xor ebp, ebp
// 005dfd4d  3bdd                 cmp ebx, ebp
// 005dfd4f  743a                 je 0x5dfd8b
// 005dfd51  8b7b04               mov edi, dword ptr [ebx + 4]
// 005dfd54  3bfd                 cmp edi, ebp
// 005dfd56  742a                 je 0x5dfd82
// 005dfd58  8d4704               lea eax, [edi + 4]
// 005dfd5b  83c9ff               or ecx, 0xffffffff
// 005dfd5e  f00fc108             lock xadd dword ptr [eax], ecx
// 005dfd62  751e                 jne 0x5dfd82
// 005dfd64  8b17                 mov edx, dword ptr [edi]
// 005dfd66  8b4204               mov eax, dword ptr [edx + 4]
// 005dfd69  8bcf                 mov ecx, edi
// 005dfd6b  ffd0                 call eax
// 005dfd6d  8d4f08               lea ecx, [edi + 8]
// 005dfd70  83caff               or edx, 0xffffffff
// 005dfd73  f00fc111             lock xadd dword ptr [ecx], edx
// 005dfd77  7509                 jne 0x5dfd82
// 005dfd79  8b07                 mov eax, dword ptr [edi]
// 005dfd7b  8b5008               mov edx, dword ptr [eax + 8]
// 005dfd7e  8bcf                 mov ecx, edi
// 005dfd80  ffd2                 call edx
// 005dfd82  53                   push ebx
// 005dfd83  e8127c1c00           call 0x7a799a
// 005dfd88  83c404               add esp, 4
// 005dfd8b  5b                   pop ebx
// 005dfd8c  5f                   pop edi
// 005dfd8d  896e04               mov dword ptr [esi + 4], ebp
// 005dfd90  5e                   pop esi
// 005dfd91  5d                   pop ebp
// 005dfd92  c3                   ret 
// 005dfd93  8b7e08               mov edi, dword ptr [esi + 8]
// 005dfd96  33ed                 xor ebp, ebp
// 005dfd98  3bfd                 cmp edi, ebp
// 005dfd9a  7411                 je 0x5dfdad
// 005dfd9c  8bcf                 mov ecx, edi
// 005dfd9e  ff1500a49e00         call dword ptr [0x9ea400]
// 005dfda4  57                   push edi
// 005dfda5  e8f07b1c00           call 0x7a799a
// 005dfdaa  83c404               add esp, 4
// 005dfdad  5f                   pop edi
// 005dfdae  896e04               mov dword ptr [esi + 4], ebp
// 005dfdb1  5e                   pop esi
// 005dfdb2  5d                   pop ebp
// 005dfdb3  c3                   ret 
// 005dfdb4  5f                   pop edi
// 005dfdb5  c7460400000000       mov dword ptr [esi + 4], 0
// 005dfdbc  5e                   pop esi
// 005dfdbd  5d                   pop ebp
// 005dfdbe  c3                   ret 
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?clearValue@XmlNameValuePair@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
