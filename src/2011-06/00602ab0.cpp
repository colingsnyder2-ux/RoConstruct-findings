// roc 2011-06 00602ab0  unit: RBX::UnifiedWidget  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00602ab0
//
// 00602ab0  55                   push ebp
// 00602ab1  56                   push esi
// 00602ab2  8bf1                 mov esi, ecx
// 00602ab4  8b4604               mov eax, dword ptr [esi + 4]
// 00602ab7  83e802               sub eax, 2
// 00602aba  57                   push edi
// 00602abb  7456                 je 0x602b13
// 00602abd  83e801               sub eax, 1
// 00602ac0  7451                 je 0x602b13
// 00602ac2  83e805               sub eax, 5
// 00602ac5  756d                 jne 0x602b34
// 00602ac7  53                   push ebx
// 00602ac8  8b5e08               mov ebx, dword ptr [esi + 8]
// 00602acb  33ed                 xor ebp, ebp
// 00602acd  3bdd                 cmp ebx, ebp
// 00602acf  743a                 je 0x602b0b
// 00602ad1  8b7b04               mov edi, dword ptr [ebx + 4]
// 00602ad4  3bfd                 cmp edi, ebp
// 00602ad6  742a                 je 0x602b02
// 00602ad8  8d4704               lea eax, [edi + 4]
// 00602adb  83c9ff               or ecx, 0xffffffff
// 00602ade  f00fc108             lock xadd dword ptr [eax], ecx
// 00602ae2  751e                 jne 0x602b02
// 00602ae4  8b17                 mov edx, dword ptr [edi]
// 00602ae6  8b4204               mov eax, dword ptr [edx + 4]
// 00602ae9  8bcf                 mov ecx, edi
// 00602aeb  ffd0                 call eax
// 00602aed  8d4f08               lea ecx, [edi + 8]
// 00602af0  83caff               or edx, 0xffffffff
// 00602af3  f00fc111             lock xadd dword ptr [ecx], edx
// 00602af7  7509                 jne 0x602b02
// 00602af9  8b07                 mov eax, dword ptr [edi]
// 00602afb  8b5008               mov edx, dword ptr [eax + 8]
// 00602afe  8bcf                 mov ecx, edi
// 00602b00  ffd2                 call edx
// 00602b02  53                   push ebx
// 00602b03  e850752000           call 0x80a058
// 00602b08  83c404               add esp, 4
// 00602b0b  5b                   pop ebx
// 00602b0c  5f                   pop edi
// 00602b0d  896e04               mov dword ptr [esi + 4], ebp
// 00602b10  5e                   pop esi
// 00602b11  5d                   pop ebp
// 00602b12  c3                   ret 
// 00602b13  8b7e08               mov edi, dword ptr [esi + 8]
// 00602b16  33ed                 xor ebp, ebp
// 00602b18  3bfd                 cmp edi, ebp
// 00602b1a  7411                 je 0x602b2d
// 00602b1c  8bcf                 mov ecx, edi
// 00602b1e  ff15d004a400         call dword ptr [0xa404d0]
// 00602b24  57                   push edi
// 00602b25  e82e752000           call 0x80a058
// 00602b2a  83c404               add esp, 4
// 00602b2d  5f                   pop edi
// 00602b2e  896e04               mov dword ptr [esi + 4], ebp
// 00602b31  5e                   pop esi
// 00602b32  5d                   pop ebp
// 00602b33  c3                   ret 
// 00602b34  5f                   pop edi
// 00602b35  c7460400000000       mov dword ptr [esi + 4], 0
// 00602b3c  5e                   pop esi
// 00602b3d  5d                   pop ebp
// 00602b3e  c3                   ret 
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?clearValue@XmlNameValuePair@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
