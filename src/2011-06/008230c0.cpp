// from server: 100% by auto
// roc 2011-06 008230c0  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008230c0
//
// 008230c0  83ec08               sub esp, 8
// 008230c3  56                   push esi
// 008230c4  8bf1                 mov esi, ecx
// 008230c6  8b4608               mov eax, dword ptr [esi + 8]
// 008230c9  85c0                 test eax, eax
// 008230cb  756d                 jne 0x82313a
// 008230cd  8b4604               mov eax, dword ptr [esi + 4]
// 008230d0  85c0                 test eax, eax
// 008230d2  7505                 jne 0x8230d9
// 008230d4  5e                   pop esi
// 008230d5  83c408               add esp, 8
// 008230d8  c3                   ret 
// 008230d9  53                   push ebx
// 008230da  57                   push edi
// 008230db  8d4c240c             lea ecx, [esp + 0xc]
// 008230df  51                   push ecx
// 008230e0  6a00                 push 0
// 008230e2  50                   push eax
// 008230e3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008230eb  e8b0f4ffff           call 0x8225a0
// 008230f0  8bf8                 mov edi, eax
// 008230f2  83c40c               add esp, 0xc
// 008230f5  85ff                 test edi, edi
// 008230f7  743d                 je 0x823136
// 008230f9  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 008230fd  85db                 test ebx, ebx
// 008230ff  7435                 je 0x823136
// 00823101  8bce                 mov ecx, esi
// 00823103  e838f2ffff           call 0x822340
// 00823108  8d54240c             lea edx, [esp + 0xc]
// 0082310c  52                   push edx
// 0082310d  8bce                 mov ecx, esi
// 0082310f  897e04               mov dword ptr [esi + 4], edi
// 00823112  895e08               mov dword ptr [esi + 8], ebx
// 00823115  c7460c01000000       mov dword ptr [esi + 0xc], 1
// 0082311c  e86ff2ffff           call 0x822390
// 00823121  8b08                 mov ecx, dword ptr [eax]
// 00823123  894e18               mov dword ptr [esi + 0x18], ecx
// 00823126  8b5004               mov edx, dword ptr [eax + 4]
// 00823129  8b4608               mov eax, dword ptr [esi + 8]
// 0082312c  5f                   pop edi
// 0082312d  5b                   pop ebx
// 0082312e  89561c               mov dword ptr [esi + 0x1c], edx
// 00823131  5e                   pop esi
// 00823132  83c408               add esp, 8
// 00823135  c3                   ret 
// 00823136  5f                   pop edi
// 00823137  33c0                 xor eax, eax
// 00823139  5b                   pop ebx
// 0082313a  5e                   pop esi
// 0082313b  83c408               add esp, 8
// 0082313e  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?PreMultiply@CXTPImageManagerIconHandle@@QAEPAEXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
