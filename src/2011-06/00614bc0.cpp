// roc 2011-06 00614bc0  unit: RBX::MergeBinder  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00614bc0
//
// 00614bc0  55                   push ebp
// 00614bc1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00614bc5  3b6c240c             cmp ebp, dword ptr [esp + 0xc]
// 00614bc9  7473                 je 0x614c3e
// 00614bcb  53                   push ebx
// 00614bcc  56                   push esi
// 00614bcd  57                   push edi
// 00614bce  8d750c               lea esi, [ebp + 0xc]
// 00614bd1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00614bd5  8b08                 mov ecx, dword ptr [eax]
// 00614bd7  894d00               mov dword ptr [ebp], ecx
// 00614bda  8b5004               mov edx, dword ptr [eax + 4]
// 00614bdd  8956f8               mov dword ptr [esi - 8], edx
// 00614be0  8b4808               mov ecx, dword ptr [eax + 8]
// 00614be3  894efc               mov dword ptr [esi - 4], ecx
// 00614be6  8b580c               mov ebx, dword ptr [eax + 0xc]
// 00614be9  3b1e                 cmp ebx, dword ptr [esi]
// 00614beb  7442                 je 0x614c2f
// 00614bed  85db                 test ebx, ebx
// 00614bef  740c                 je 0x614bfd
// 00614bf1  8d5304               lea edx, [ebx + 4]
// 00614bf4  b801000000           mov eax, 1
// 00614bf9  f00fc102             lock xadd dword ptr [edx], eax
// 00614bfd  8b3e                 mov edi, dword ptr [esi]
// 00614bff  85ff                 test edi, edi
// 00614c01  742a                 je 0x614c2d
// 00614c03  8d4f04               lea ecx, [edi + 4]
// 00614c06  83caff               or edx, 0xffffffff
// 00614c09  f00fc111             lock xadd dword ptr [ecx], edx
// 00614c0d  751e                 jne 0x614c2d
// 00614c0f  8b07                 mov eax, dword ptr [edi]
// 00614c11  8b5004               mov edx, dword ptr [eax + 4]
// 00614c14  8bcf                 mov ecx, edi
// 00614c16  ffd2                 call edx
// 00614c18  8d4708               lea eax, [edi + 8]
// 00614c1b  83c9ff               or ecx, 0xffffffff
// 00614c1e  f00fc108             lock xadd dword ptr [eax], ecx
// 00614c22  7509                 jne 0x614c2d
// 00614c24  8b17                 mov edx, dword ptr [edi]
// 00614c26  8b4208               mov eax, dword ptr [edx + 8]
// 00614c29  8bcf                 mov ecx, edi
// 00614c2b  ffd0                 call eax
// 00614c2d  891e                 mov dword ptr [esi], ebx
// 00614c2f  83c510               add ebp, 0x10
// 00614c32  83c610               add esi, 0x10
// 00614c35  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 00614c39  7596                 jne 0x614bd1
// 00614c3b  5f                   pop edi
// 00614c3c  5e                   pop esi
// 00614c3d  5b                   pop ebx
// 00614c3e  5d                   pop ebp
// 00614c3f  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Fill@PAUIDREFItem@MergeBinder@RBX@@U123@@std@@YAXPAUIDREFItem@MergeBinder@RBX@@0ABU123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
