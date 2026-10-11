// roc 2007-08 0055d3d0  unit: RBX::DataModel  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055d3d0
//
// 0055d3d0  55                   push ebp
// 0055d3d1  56                   push esi
// 0055d3d2  8bf1                 mov esi, ecx
// 0055d3d4  8b4604               mov eax, dword ptr [esi + 4]
// 0055d3d7  83e802               sub eax, 2
// 0055d3da  57                   push edi
// 0055d3db  7456                 je 0x55d433
// 0055d3dd  83e801               sub eax, 1
// 0055d3e0  7451                 je 0x55d433
// 0055d3e2  83e805               sub eax, 5
// 0055d3e5  756d                 jne 0x55d454
// 0055d3e7  53                   push ebx
// 0055d3e8  8b5e08               mov ebx, dword ptr [esi + 8]
// 0055d3eb  33ed                 xor ebp, ebp
// 0055d3ed  3bdd                 cmp ebx, ebp
// 0055d3ef  743a                 je 0x55d42b
// 0055d3f1  8b7b04               mov edi, dword ptr [ebx + 4]
// 0055d3f4  3bfd                 cmp edi, ebp
// 0055d3f6  742a                 je 0x55d422
// 0055d3f8  8d4704               lea eax, [edi + 4]
// 0055d3fb  83c9ff               or ecx, 0xffffffff
// 0055d3fe  f00fc108             lock xadd dword ptr [eax], ecx
// 0055d402  751e                 jne 0x55d422
// 0055d404  8b17                 mov edx, dword ptr [edi]
// 0055d406  8b4204               mov eax, dword ptr [edx + 4]
// 0055d409  8bcf                 mov ecx, edi
// 0055d40b  ffd0                 call eax
// 0055d40d  8d4f08               lea ecx, [edi + 8]
// 0055d410  83caff               or edx, 0xffffffff
// 0055d413  f00fc111             lock xadd dword ptr [ecx], edx
// 0055d417  7509                 jne 0x55d422
// 0055d419  8b07                 mov eax, dword ptr [edi]
// 0055d41b  8b5008               mov edx, dword ptr [eax + 8]
// 0055d41e  8bcf                 mov ecx, edi
// 0055d420  ffd2                 call edx
// 0055d422  53                   push ebx
// 0055d423  e83a280d00           call 0x62fc62
// 0055d428  83c404               add esp, 4
// 0055d42b  5b                   pop ebx
// 0055d42c  5f                   pop edi
// 0055d42d  896e04               mov dword ptr [esi + 4], ebp
// 0055d430  5e                   pop esi
// 0055d431  5d                   pop ebp
// 0055d432  c3                   ret 
// 0055d433  8b7e08               mov edi, dword ptr [esi + 8]
// 0055d436  33ed                 xor ebp, ebp
// 0055d438  3bfd                 cmp edi, ebp
// 0055d43a  7411                 je 0x55d44d
// 0055d43c  8bcf                 mov ecx, edi
// 0055d43e  ff15ace67700         call dword ptr [0x77e6ac]
// 0055d444  57                   push edi
// 0055d445  e818280d00           call 0x62fc62
// 0055d44a  83c404               add esp, 4
// 0055d44d  5f                   pop edi
// 0055d44e  896e04               mov dword ptr [esi + 4], ebp
// 0055d451  5e                   pop esi
// 0055d452  5d                   pop ebp
// 0055d453  c3                   ret 
// 0055d454  5f                   pop edi
// 0055d455  c7460400000000       mov dword ptr [esi + 4], 0
// 0055d45c  5e                   pop esi
// 0055d45d  5d                   pop ebp
// 0055d45e  c3                   ret 
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?clearValue@XmlNameValuePair@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
