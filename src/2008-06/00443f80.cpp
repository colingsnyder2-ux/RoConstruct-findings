// roc 2008-06 00443f80  unit: RBX::MergeBinder  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443f80
//
// 00443f80  55                   push ebp
// 00443f81  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00443f85  3b6c240c             cmp ebp, dword ptr [esp + 0xc]
// 00443f89  7473                 je 0x443ffe
// 00443f8b  53                   push ebx
// 00443f8c  56                   push esi
// 00443f8d  57                   push edi
// 00443f8e  8d750c               lea esi, [ebp + 0xc]
// 00443f91  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00443f95  8b08                 mov ecx, dword ptr [eax]
// 00443f97  894d00               mov dword ptr [ebp], ecx
// 00443f9a  8b5004               mov edx, dword ptr [eax + 4]
// 00443f9d  8956f8               mov dword ptr [esi - 8], edx
// 00443fa0  8b4808               mov ecx, dword ptr [eax + 8]
// 00443fa3  894efc               mov dword ptr [esi - 4], ecx
// 00443fa6  8b580c               mov ebx, dword ptr [eax + 0xc]
// 00443fa9  3b1e                 cmp ebx, dword ptr [esi]
// 00443fab  7442                 je 0x443fef
// 00443fad  85db                 test ebx, ebx
// 00443faf  740c                 je 0x443fbd
// 00443fb1  8d5304               lea edx, [ebx + 4]
// 00443fb4  b801000000           mov eax, 1
// 00443fb9  f00fc102             lock xadd dword ptr [edx], eax
// 00443fbd  8b3e                 mov edi, dword ptr [esi]
// 00443fbf  85ff                 test edi, edi
// 00443fc1  742a                 je 0x443fed
// 00443fc3  8d4f04               lea ecx, [edi + 4]
// 00443fc6  83caff               or edx, 0xffffffff
// 00443fc9  f00fc111             lock xadd dword ptr [ecx], edx
// 00443fcd  751e                 jne 0x443fed
// 00443fcf  8b07                 mov eax, dword ptr [edi]
// 00443fd1  8b5004               mov edx, dword ptr [eax + 4]
// 00443fd4  8bcf                 mov ecx, edi
// 00443fd6  ffd2                 call edx
// 00443fd8  8d4708               lea eax, [edi + 8]
// 00443fdb  83c9ff               or ecx, 0xffffffff
// 00443fde  f00fc108             lock xadd dword ptr [eax], ecx
// 00443fe2  7509                 jne 0x443fed
// 00443fe4  8b17                 mov edx, dword ptr [edi]
// 00443fe6  8b4208               mov eax, dword ptr [edx + 8]
// 00443fe9  8bcf                 mov ecx, edi
// 00443feb  ffd0                 call eax
// 00443fed  891e                 mov dword ptr [esi], ebx
// 00443fef  83c510               add ebp, 0x10
// 00443ff2  83c610               add esi, 0x10
// 00443ff5  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 00443ff9  7596                 jne 0x443f91
// 00443ffb  5f                   pop edi
// 00443ffc  5e                   pop esi
// 00443ffd  5b                   pop ebx
// 00443ffe  5d                   pop ebp
// 00443fff  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Fill@PAUIDREFItem@MergeBinder@RBX@@U123@@std@@YAXPAUIDREFItem@MergeBinder@RBX@@0ABU123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
