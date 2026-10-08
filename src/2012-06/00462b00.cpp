// roc 2012-06 00462b00  unit: RBX::MergeBinder  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00462b00
//
// 00462b00  55                   push ebp
// 00462b01  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00462b05  3b6c240c             cmp ebp, dword ptr [esp + 0xc]
// 00462b09  7473                 je 0x462b7e
// 00462b0b  53                   push ebx
// 00462b0c  56                   push esi
// 00462b0d  57                   push edi
// 00462b0e  8d750c               lea esi, [ebp + 0xc]
// 00462b11  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00462b15  8b08                 mov ecx, dword ptr [eax]
// 00462b17  894d00               mov dword ptr [ebp], ecx
// 00462b1a  8b5004               mov edx, dword ptr [eax + 4]
// 00462b1d  8956f8               mov dword ptr [esi - 8], edx
// 00462b20  8b4808               mov ecx, dword ptr [eax + 8]
// 00462b23  894efc               mov dword ptr [esi - 4], ecx
// 00462b26  8b580c               mov ebx, dword ptr [eax + 0xc]
// 00462b29  3b1e                 cmp ebx, dword ptr [esi]
// 00462b2b  7442                 je 0x462b6f
// 00462b2d  85db                 test ebx, ebx
// 00462b2f  740c                 je 0x462b3d
// 00462b31  8d5304               lea edx, [ebx + 4]
// 00462b34  b801000000           mov eax, 1
// 00462b39  f00fc102             lock xadd dword ptr [edx], eax
// 00462b3d  8b3e                 mov edi, dword ptr [esi]
// 00462b3f  85ff                 test edi, edi
// 00462b41  742a                 je 0x462b6d
// 00462b43  8d4f04               lea ecx, [edi + 4]
// 00462b46  83caff               or edx, 0xffffffff
// 00462b49  f00fc111             lock xadd dword ptr [ecx], edx
// 00462b4d  751e                 jne 0x462b6d
// 00462b4f  8b07                 mov eax, dword ptr [edi]
// 00462b51  8b5004               mov edx, dword ptr [eax + 4]
// 00462b54  8bcf                 mov ecx, edi
// 00462b56  ffd2                 call edx
// 00462b58  8d4708               lea eax, [edi + 8]
// 00462b5b  83c9ff               or ecx, 0xffffffff
// 00462b5e  f00fc108             lock xadd dword ptr [eax], ecx
// 00462b62  7509                 jne 0x462b6d
// 00462b64  8b17                 mov edx, dword ptr [edi]
// 00462b66  8b4208               mov eax, dword ptr [edx + 8]
// 00462b69  8bcf                 mov ecx, edi
// 00462b6b  ffd0                 call eax
// 00462b6d  891e                 mov dword ptr [esi], ebx
// 00462b6f  83c510               add ebp, 0x10
// 00462b72  83c610               add esi, 0x10
// 00462b75  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 00462b79  7596                 jne 0x462b11
// 00462b7b  5f                   pop edi
// 00462b7c  5e                   pop esi
// 00462b7d  5b                   pop ebx
// 00462b7e  5d                   pop ebp
// 00462b7f  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Fill@PAUIDREFItem@MergeBinder@RBX@@U123@@std@@YAXPAUIDREFItem@MergeBinder@RBX@@0ABU123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
