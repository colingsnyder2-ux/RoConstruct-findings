// roc 2009-12 004431d0  unit: RBX::MergeBinder  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004431d0
//
// 004431d0  55                   push ebp
// 004431d1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 004431d5  3b6c240c             cmp ebp, dword ptr [esp + 0xc]
// 004431d9  7473                 je 0x44324e
// 004431db  53                   push ebx
// 004431dc  56                   push esi
// 004431dd  57                   push edi
// 004431de  8d750c               lea esi, [ebp + 0xc]
// 004431e1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004431e5  8b08                 mov ecx, dword ptr [eax]
// 004431e7  894d00               mov dword ptr [ebp], ecx
// 004431ea  8b5004               mov edx, dword ptr [eax + 4]
// 004431ed  8956f8               mov dword ptr [esi - 8], edx
// 004431f0  8b4808               mov ecx, dword ptr [eax + 8]
// 004431f3  894efc               mov dword ptr [esi - 4], ecx
// 004431f6  8b580c               mov ebx, dword ptr [eax + 0xc]
// 004431f9  3b1e                 cmp ebx, dword ptr [esi]
// 004431fb  7442                 je 0x44323f
// 004431fd  85db                 test ebx, ebx
// 004431ff  740c                 je 0x44320d
// 00443201  8d5304               lea edx, [ebx + 4]
// 00443204  b801000000           mov eax, 1
// 00443209  f00fc102             lock xadd dword ptr [edx], eax
// 0044320d  8b3e                 mov edi, dword ptr [esi]
// 0044320f  85ff                 test edi, edi
// 00443211  742a                 je 0x44323d
// 00443213  8d4f04               lea ecx, [edi + 4]
// 00443216  83caff               or edx, 0xffffffff
// 00443219  f00fc111             lock xadd dword ptr [ecx], edx
// 0044321d  751e                 jne 0x44323d
// 0044321f  8b07                 mov eax, dword ptr [edi]
// 00443221  8b5004               mov edx, dword ptr [eax + 4]
// 00443224  8bcf                 mov ecx, edi
// 00443226  ffd2                 call edx
// 00443228  8d4708               lea eax, [edi + 8]
// 0044322b  83c9ff               or ecx, 0xffffffff
// 0044322e  f00fc108             lock xadd dword ptr [eax], ecx
// 00443232  7509                 jne 0x44323d
// 00443234  8b17                 mov edx, dword ptr [edi]
// 00443236  8b4208               mov eax, dword ptr [edx + 8]
// 00443239  8bcf                 mov ecx, edi
// 0044323b  ffd0                 call eax
// 0044323d  891e                 mov dword ptr [esi], ebx
// 0044323f  83c510               add ebp, 0x10
// 00443242  83c610               add esi, 0x10
// 00443245  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 00443249  7596                 jne 0x4431e1
// 0044324b  5f                   pop edi
// 0044324c  5e                   pop esi
// 0044324d  5b                   pop ebx
// 0044324e  5d                   pop ebp
// 0044324f  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Fill@PAUIDREFItem@MergeBinder@RBX@@U123@@std@@YAXPAUIDREFItem@MergeBinder@RBX@@0ABU123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
