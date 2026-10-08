// roc 2009-06 0043eb90  unit: RBX::MergeBinder  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043eb90
//
// 0043eb90  55                   push ebp
// 0043eb91  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0043eb95  3b6c240c             cmp ebp, dword ptr [esp + 0xc]
// 0043eb99  7473                 je 0x43ec0e
// 0043eb9b  53                   push ebx
// 0043eb9c  56                   push esi
// 0043eb9d  57                   push edi
// 0043eb9e  8d750c               lea esi, [ebp + 0xc]
// 0043eba1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0043eba5  8b08                 mov ecx, dword ptr [eax]
// 0043eba7  894d00               mov dword ptr [ebp], ecx
// 0043ebaa  8b5004               mov edx, dword ptr [eax + 4]
// 0043ebad  8956f8               mov dword ptr [esi - 8], edx
// 0043ebb0  8b4808               mov ecx, dword ptr [eax + 8]
// 0043ebb3  894efc               mov dword ptr [esi - 4], ecx
// 0043ebb6  8b580c               mov ebx, dword ptr [eax + 0xc]
// 0043ebb9  3b1e                 cmp ebx, dword ptr [esi]
// 0043ebbb  7442                 je 0x43ebff
// 0043ebbd  85db                 test ebx, ebx
// 0043ebbf  740c                 je 0x43ebcd
// 0043ebc1  8d5304               lea edx, [ebx + 4]
// 0043ebc4  b801000000           mov eax, 1
// 0043ebc9  f00fc102             lock xadd dword ptr [edx], eax
// 0043ebcd  8b3e                 mov edi, dword ptr [esi]
// 0043ebcf  85ff                 test edi, edi
// 0043ebd1  742a                 je 0x43ebfd
// 0043ebd3  8d4f04               lea ecx, [edi + 4]
// 0043ebd6  83caff               or edx, 0xffffffff
// 0043ebd9  f00fc111             lock xadd dword ptr [ecx], edx
// 0043ebdd  751e                 jne 0x43ebfd
// 0043ebdf  8b07                 mov eax, dword ptr [edi]
// 0043ebe1  8b5004               mov edx, dword ptr [eax + 4]
// 0043ebe4  8bcf                 mov ecx, edi
// 0043ebe6  ffd2                 call edx
// 0043ebe8  8d4708               lea eax, [edi + 8]
// 0043ebeb  83c9ff               or ecx, 0xffffffff
// 0043ebee  f00fc108             lock xadd dword ptr [eax], ecx
// 0043ebf2  7509                 jne 0x43ebfd
// 0043ebf4  8b17                 mov edx, dword ptr [edi]
// 0043ebf6  8b4208               mov eax, dword ptr [edx + 8]
// 0043ebf9  8bcf                 mov ecx, edi
// 0043ebfb  ffd0                 call eax
// 0043ebfd  891e                 mov dword ptr [esi], ebx
// 0043ebff  83c510               add ebp, 0x10
// 0043ec02  83c610               add esi, 0x10
// 0043ec05  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 0043ec09  7596                 jne 0x43eba1
// 0043ec0b  5f                   pop edi
// 0043ec0c  5e                   pop esi
// 0043ec0d  5b                   pop ebx
// 0043ec0e  5d                   pop ebp
// 0043ec0f  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Fill@PAUIDREFItem@MergeBinder@RBX@@U123@@std@@YAXPAUIDREFItem@MergeBinder@RBX@@0ABU123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
