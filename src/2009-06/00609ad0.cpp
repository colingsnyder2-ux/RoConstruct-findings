// roc 2009-06 00609ad0  unit: RBX::GlobalSettings  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00609ad0
//
// 00609ad0  55                   push ebp
// 00609ad1  56                   push esi
// 00609ad2  8bf1                 mov esi, ecx
// 00609ad4  8b4604               mov eax, dword ptr [esi + 4]
// 00609ad7  83e802               sub eax, 2
// 00609ada  57                   push edi
// 00609adb  7456                 je 0x609b33
// 00609add  83e801               sub eax, 1
// 00609ae0  7451                 je 0x609b33
// 00609ae2  83e805               sub eax, 5
// 00609ae5  756d                 jne 0x609b54
// 00609ae7  53                   push ebx
// 00609ae8  8b5e08               mov ebx, dword ptr [esi + 8]
// 00609aeb  33ed                 xor ebp, ebp
// 00609aed  3bdd                 cmp ebx, ebp
// 00609aef  743a                 je 0x609b2b
// 00609af1  8b7b04               mov edi, dword ptr [ebx + 4]
// 00609af4  3bfd                 cmp edi, ebp
// 00609af6  742a                 je 0x609b22
// 00609af8  8d4704               lea eax, [edi + 4]
// 00609afb  83c9ff               or ecx, 0xffffffff
// 00609afe  f00fc108             lock xadd dword ptr [eax], ecx
// 00609b02  751e                 jne 0x609b22
// 00609b04  8b17                 mov edx, dword ptr [edi]
// 00609b06  8b4204               mov eax, dword ptr [edx + 4]
// 00609b09  8bcf                 mov ecx, edi
// 00609b0b  ffd0                 call eax
// 00609b0d  8d4f08               lea ecx, [edi + 8]
// 00609b10  83caff               or edx, 0xffffffff
// 00609b13  f00fc111             lock xadd dword ptr [ecx], edx
// 00609b17  7509                 jne 0x609b22
// 00609b19  8b07                 mov eax, dword ptr [edi]
// 00609b1b  8b5008               mov edx, dword ptr [eax + 8]
// 00609b1e  8bcf                 mov ecx, edi
// 00609b20  ffd2                 call edx
// 00609b22  53                   push ebx
// 00609b23  e80aef1000           call 0x718a32
// 00609b28  83c404               add esp, 4
// 00609b2b  5b                   pop ebx
// 00609b2c  5f                   pop edi
// 00609b2d  896e04               mov dword ptr [esi + 4], ebp
// 00609b30  5e                   pop esi
// 00609b31  5d                   pop ebp
// 00609b32  c3                   ret 
// 00609b33  8b7e08               mov edi, dword ptr [esi + 8]
// 00609b36  33ed                 xor ebp, ebp
// 00609b38  3bfd                 cmp edi, ebp
// 00609b3a  7411                 je 0x609b4d
// 00609b3c  8bcf                 mov ecx, edi
// 00609b3e  ff15c4e48900         call dword ptr [0x89e4c4]
// 00609b44  57                   push edi
// 00609b45  e8e8ee1000           call 0x718a32
// 00609b4a  83c404               add esp, 4
// 00609b4d  5f                   pop edi
// 00609b4e  896e04               mov dword ptr [esi + 4], ebp
// 00609b51  5e                   pop esi
// 00609b52  5d                   pop ebp
// 00609b53  c3                   ret 
// 00609b54  5f                   pop edi
// 00609b55  c7460400000000       mov dword ptr [esi + 4], 0
// 00609b5c  5e                   pop esi
// 00609b5d  5d                   pop ebp
// 00609b5e  c3                   ret 
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?clearValue@XmlNameValuePair@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
