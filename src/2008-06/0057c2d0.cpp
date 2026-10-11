// roc 2008-06 0057c2d0  unit: RBX::VInstance::?$SignalDesc  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057c2d0
//
// 0057c2d0  55                   push ebp
// 0057c2d1  56                   push esi
// 0057c2d2  8bf1                 mov esi, ecx
// 0057c2d4  8b4604               mov eax, dword ptr [esi + 4]
// 0057c2d7  83e802               sub eax, 2
// 0057c2da  57                   push edi
// 0057c2db  7456                 je 0x57c333
// 0057c2dd  83e801               sub eax, 1
// 0057c2e0  7451                 je 0x57c333
// 0057c2e2  83e805               sub eax, 5
// 0057c2e5  756d                 jne 0x57c354
// 0057c2e7  53                   push ebx
// 0057c2e8  8b5e08               mov ebx, dword ptr [esi + 8]
// 0057c2eb  33ed                 xor ebp, ebp
// 0057c2ed  3bdd                 cmp ebx, ebp
// 0057c2ef  743a                 je 0x57c32b
// 0057c2f1  8b7b04               mov edi, dword ptr [ebx + 4]
// 0057c2f4  3bfd                 cmp edi, ebp
// 0057c2f6  742a                 je 0x57c322
// 0057c2f8  8d4704               lea eax, [edi + 4]
// 0057c2fb  83c9ff               or ecx, 0xffffffff
// 0057c2fe  f00fc108             lock xadd dword ptr [eax], ecx
// 0057c302  751e                 jne 0x57c322
// 0057c304  8b17                 mov edx, dword ptr [edi]
// 0057c306  8b4204               mov eax, dword ptr [edx + 4]
// 0057c309  8bcf                 mov ecx, edi
// 0057c30b  ffd0                 call eax
// 0057c30d  8d4f08               lea ecx, [edi + 8]
// 0057c310  83caff               or edx, 0xffffffff
// 0057c313  f00fc111             lock xadd dword ptr [ecx], edx
// 0057c317  7509                 jne 0x57c322
// 0057c319  8b07                 mov eax, dword ptr [edi]
// 0057c31b  8b5008               mov edx, dword ptr [eax + 8]
// 0057c31e  8bcf                 mov ecx, edi
// 0057c320  ffd2                 call edx
// 0057c322  53                   push ebx
// 0057c323  e852431200           call 0x6a067a
// 0057c328  83c404               add esp, 4
// 0057c32b  5b                   pop ebx
// 0057c32c  5f                   pop edi
// 0057c32d  896e04               mov dword ptr [esi + 4], ebp
// 0057c330  5e                   pop esi
// 0057c331  5d                   pop ebp
// 0057c332  c3                   ret 
// 0057c333  8b7e08               mov edi, dword ptr [esi + 8]
// 0057c336  33ed                 xor ebp, ebp
// 0057c338  3bfd                 cmp edi, ebp
// 0057c33a  7411                 je 0x57c34d
// 0057c33c  8bcf                 mov ecx, edi
// 0057c33e  ff1568248000         call dword ptr [0x802468]
// 0057c344  57                   push edi
// 0057c345  e830431200           call 0x6a067a
// 0057c34a  83c404               add esp, 4
// 0057c34d  5f                   pop edi
// 0057c34e  896e04               mov dword ptr [esi + 4], ebp
// 0057c351  5e                   pop esi
// 0057c352  5d                   pop ebp
// 0057c353  c3                   ret 
// 0057c354  5f                   pop edi
// 0057c355  c7460400000000       mov dword ptr [esi + 4], 0
// 0057c35c  5e                   pop esi
// 0057c35d  5d                   pop ebp
// 0057c35e  c3                   ret 
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?clearValue@XmlNameValuePair@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
