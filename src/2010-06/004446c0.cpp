// roc 2010-06 004446c0  unit: RBX::MergeBinder  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004446c0
//
// 004446c0  55                   push ebp
// 004446c1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 004446c5  3b6c240c             cmp ebp, dword ptr [esp + 0xc]
// 004446c9  7473                 je 0x44473e
// 004446cb  53                   push ebx
// 004446cc  56                   push esi
// 004446cd  57                   push edi
// 004446ce  8d750c               lea esi, [ebp + 0xc]
// 004446d1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004446d5  8b08                 mov ecx, dword ptr [eax]
// 004446d7  894d00               mov dword ptr [ebp], ecx
// 004446da  8b5004               mov edx, dword ptr [eax + 4]
// 004446dd  8956f8               mov dword ptr [esi - 8], edx
// 004446e0  8b4808               mov ecx, dword ptr [eax + 8]
// 004446e3  894efc               mov dword ptr [esi - 4], ecx
// 004446e6  8b580c               mov ebx, dword ptr [eax + 0xc]
// 004446e9  3b1e                 cmp ebx, dword ptr [esi]
// 004446eb  7442                 je 0x44472f
// 004446ed  85db                 test ebx, ebx
// 004446ef  740c                 je 0x4446fd
// 004446f1  8d5304               lea edx, [ebx + 4]
// 004446f4  b801000000           mov eax, 1
// 004446f9  f00fc102             lock xadd dword ptr [edx], eax
// 004446fd  8b3e                 mov edi, dword ptr [esi]
// 004446ff  85ff                 test edi, edi
// 00444701  742a                 je 0x44472d
// 00444703  8d4f04               lea ecx, [edi + 4]
// 00444706  83caff               or edx, 0xffffffff
// 00444709  f00fc111             lock xadd dword ptr [ecx], edx
// 0044470d  751e                 jne 0x44472d
// 0044470f  8b07                 mov eax, dword ptr [edi]
// 00444711  8b5004               mov edx, dword ptr [eax + 4]
// 00444714  8bcf                 mov ecx, edi
// 00444716  ffd2                 call edx
// 00444718  8d4708               lea eax, [edi + 8]
// 0044471b  83c9ff               or ecx, 0xffffffff
// 0044471e  f00fc108             lock xadd dword ptr [eax], ecx
// 00444722  7509                 jne 0x44472d
// 00444724  8b17                 mov edx, dword ptr [edi]
// 00444726  8b4208               mov eax, dword ptr [edx + 8]
// 00444729  8bcf                 mov ecx, edi
// 0044472b  ffd0                 call eax
// 0044472d  891e                 mov dword ptr [esi], ebx
// 0044472f  83c510               add ebp, 0x10
// 00444732  83c610               add esi, 0x10
// 00444735  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 00444739  7596                 jne 0x4446d1
// 0044473b  5f                   pop edi
// 0044473c  5e                   pop esi
// 0044473d  5b                   pop ebx
// 0044473e  5d                   pop ebp
// 0044473f  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Fill@PAUIDREFItem@MergeBinder@RBX@@U123@@std@@YAXPAUIDREFItem@MergeBinder@RBX@@0ABU123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
