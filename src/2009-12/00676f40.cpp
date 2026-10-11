// roc 2009-12 00676f40  unit: RBX::GlobalSettings  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00676f40
//
// 00676f40  55                   push ebp
// 00676f41  56                   push esi
// 00676f42  8bf1                 mov esi, ecx
// 00676f44  8b4604               mov eax, dword ptr [esi + 4]
// 00676f47  83e802               sub eax, 2
// 00676f4a  57                   push edi
// 00676f4b  7456                 je 0x676fa3
// 00676f4d  83e801               sub eax, 1
// 00676f50  7451                 je 0x676fa3
// 00676f52  83e805               sub eax, 5
// 00676f55  756d                 jne 0x676fc4
// 00676f57  53                   push ebx
// 00676f58  8b5e08               mov ebx, dword ptr [esi + 8]
// 00676f5b  33ed                 xor ebp, ebp
// 00676f5d  3bdd                 cmp ebx, ebp
// 00676f5f  743a                 je 0x676f9b
// 00676f61  8b7b04               mov edi, dword ptr [ebx + 4]
// 00676f64  3bfd                 cmp edi, ebp
// 00676f66  742a                 je 0x676f92
// 00676f68  8d4704               lea eax, [edi + 4]
// 00676f6b  83c9ff               or ecx, 0xffffffff
// 00676f6e  f00fc108             lock xadd dword ptr [eax], ecx
// 00676f72  751e                 jne 0x676f92
// 00676f74  8b17                 mov edx, dword ptr [edi]
// 00676f76  8b4204               mov eax, dword ptr [edx + 4]
// 00676f79  8bcf                 mov ecx, edi
// 00676f7b  ffd0                 call eax
// 00676f7d  8d4f08               lea ecx, [edi + 8]
// 00676f80  83caff               or edx, 0xffffffff
// 00676f83  f00fc111             lock xadd dword ptr [ecx], edx
// 00676f87  7509                 jne 0x676f92
// 00676f89  8b07                 mov eax, dword ptr [edi]
// 00676f8b  8b5008               mov edx, dword ptr [eax + 8]
// 00676f8e  8bcf                 mov ecx, edi
// 00676f90  ffd2                 call edx
// 00676f92  53                   push ebx
// 00676f93  e8c2c81700           call 0x7f385a
// 00676f98  83c404               add esp, 4
// 00676f9b  5b                   pop ebx
// 00676f9c  5f                   pop edi
// 00676f9d  896e04               mov dword ptr [esi + 4], ebp
// 00676fa0  5e                   pop esi
// 00676fa1  5d                   pop ebp
// 00676fa2  c3                   ret 
// 00676fa3  8b7e08               mov edi, dword ptr [esi + 8]
// 00676fa6  33ed                 xor ebp, ebp
// 00676fa8  3bfd                 cmp edi, ebp
// 00676faa  7411                 je 0x676fbd
// 00676fac  8bcf                 mov ecx, edi
// 00676fae  ff15e4b69800         call dword ptr [0x98b6e4]
// 00676fb4  57                   push edi
// 00676fb5  e8a0c81700           call 0x7f385a
// 00676fba  83c404               add esp, 4
// 00676fbd  5f                   pop edi
// 00676fbe  896e04               mov dword ptr [esi + 4], ebp
// 00676fc1  5e                   pop esi
// 00676fc2  5d                   pop ebp
// 00676fc3  c3                   ret 
// 00676fc4  5f                   pop edi
// 00676fc5  c7460400000000       mov dword ptr [esi + 4], 0
// 00676fcc  5e                   pop esi
// 00676fcd  5d                   pop ebp
// 00676fce  c3                   ret 
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?clearValue@XmlNameValuePair@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
