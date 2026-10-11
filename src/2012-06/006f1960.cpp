// roc 2012-06 006f1960  unit: RBX::DataModel  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006f1960
//
// 006f1960  55                   push ebp
// 006f1961  56                   push esi
// 006f1962  8bf1                 mov esi, ecx
// 006f1964  8b4604               mov eax, dword ptr [esi + 4]
// 006f1967  83e802               sub eax, 2
// 006f196a  57                   push edi
// 006f196b  7456                 je 0x6f19c3
// 006f196d  83e801               sub eax, 1
// 006f1970  7451                 je 0x6f19c3
// 006f1972  83e805               sub eax, 5
// 006f1975  756d                 jne 0x6f19e4
// 006f1977  53                   push ebx
// 006f1978  8b5e08               mov ebx, dword ptr [esi + 8]
// 006f197b  33ed                 xor ebp, ebp
// 006f197d  3bdd                 cmp ebx, ebp
// 006f197f  743a                 je 0x6f19bb
// 006f1981  8b7b04               mov edi, dword ptr [ebx + 4]
// 006f1984  3bfd                 cmp edi, ebp
// 006f1986  742a                 je 0x6f19b2
// 006f1988  8d4704               lea eax, [edi + 4]
// 006f198b  83c9ff               or ecx, 0xffffffff
// 006f198e  f00fc108             lock xadd dword ptr [eax], ecx
// 006f1992  751e                 jne 0x6f19b2
// 006f1994  8b17                 mov edx, dword ptr [edi]
// 006f1996  8b4204               mov eax, dword ptr [edx + 4]
// 006f1999  8bcf                 mov ecx, edi
// 006f199b  ffd0                 call eax
// 006f199d  8d4f08               lea ecx, [edi + 8]
// 006f19a0  83caff               or edx, 0xffffffff
// 006f19a3  f00fc111             lock xadd dword ptr [ecx], edx
// 006f19a7  7509                 jne 0x6f19b2
// 006f19a9  8b07                 mov eax, dword ptr [edi]
// 006f19ab  8b5008               mov edx, dword ptr [eax + 8]
// 006f19ae  8bcf                 mov ecx, edi
// 006f19b0  ffd2                 call edx
// 006f19b2  53                   push ebx
// 006f19b3  e85c072900           call 0x982114
// 006f19b8  83c404               add esp, 4
// 006f19bb  5b                   pop ebx
// 006f19bc  5f                   pop edi
// 006f19bd  896e04               mov dword ptr [esi + 4], ebp
// 006f19c0  5e                   pop esi
// 006f19c1  5d                   pop ebp
// 006f19c2  c3                   ret 
// 006f19c3  8b7e08               mov edi, dword ptr [esi + 8]
// 006f19c6  33ed                 xor ebp, ebp
// 006f19c8  3bfd                 cmp edi, ebp
// 006f19ca  7411                 je 0x6f19dd
// 006f19cc  8bcf                 mov ecx, edi
// 006f19ce  ff153c26b200         call dword ptr [0xb2263c]
// 006f19d4  57                   push edi
// 006f19d5  e83a072900           call 0x982114
// 006f19da  83c404               add esp, 4
// 006f19dd  5f                   pop edi
// 006f19de  896e04               mov dword ptr [esi + 4], ebp
// 006f19e1  5e                   pop esi
// 006f19e2  5d                   pop ebp
// 006f19e3  c3                   ret 
// 006f19e4  5f                   pop edi
// 006f19e5  c7460400000000       mov dword ptr [esi + 4], 0
// 006f19ec  5e                   pop esi
// 006f19ed  5d                   pop ebp
// 006f19ee  c3                   ret 
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?clearValue@XmlNameValuePair@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
