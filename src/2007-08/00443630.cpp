// roc 2007-08 00443630  unit: RBX::MergeBinder  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00443630
//
// 00443630  55                   push ebp
// 00443631  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00443635  3b6c240c             cmp ebp, dword ptr [esp + 0xc]
// 00443639  7473                 je 0x4436ae
// 0044363b  53                   push ebx
// 0044363c  56                   push esi
// 0044363d  57                   push edi
// 0044363e  8d750c               lea esi, [ebp + 0xc]
// 00443641  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00443645  8b08                 mov ecx, dword ptr [eax]
// 00443647  894d00               mov dword ptr [ebp], ecx
// 0044364a  8b5004               mov edx, dword ptr [eax + 4]
// 0044364d  8956f8               mov dword ptr [esi - 8], edx
// 00443650  8b4808               mov ecx, dword ptr [eax + 8]
// 00443653  894efc               mov dword ptr [esi - 4], ecx
// 00443656  8b580c               mov ebx, dword ptr [eax + 0xc]
// 00443659  3b1e                 cmp ebx, dword ptr [esi]
// 0044365b  7442                 je 0x44369f
// 0044365d  85db                 test ebx, ebx
// 0044365f  740c                 je 0x44366d
// 00443661  8d5304               lea edx, [ebx + 4]
// 00443664  b801000000           mov eax, 1
// 00443669  f00fc102             lock xadd dword ptr [edx], eax
// 0044366d  8b3e                 mov edi, dword ptr [esi]
// 0044366f  85ff                 test edi, edi
// 00443671  742a                 je 0x44369d
// 00443673  8d4f04               lea ecx, [edi + 4]
// 00443676  83caff               or edx, 0xffffffff
// 00443679  f00fc111             lock xadd dword ptr [ecx], edx
// 0044367d  751e                 jne 0x44369d
// 0044367f  8b07                 mov eax, dword ptr [edi]
// 00443681  8b5004               mov edx, dword ptr [eax + 4]
// 00443684  8bcf                 mov ecx, edi
// 00443686  ffd2                 call edx
// 00443688  8d4708               lea eax, [edi + 8]
// 0044368b  83c9ff               or ecx, 0xffffffff
// 0044368e  f00fc108             lock xadd dword ptr [eax], ecx
// 00443692  7509                 jne 0x44369d
// 00443694  8b17                 mov edx, dword ptr [edi]
// 00443696  8b4208               mov eax, dword ptr [edx + 8]
// 00443699  8bcf                 mov ecx, edi
// 0044369b  ffd0                 call eax
// 0044369d  891e                 mov dword ptr [esi], ebx
// 0044369f  83c510               add ebp, 0x10
// 004436a2  83c610               add esi, 0x10
// 004436a5  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 004436a9  7596                 jne 0x443641
// 004436ab  5f                   pop edi
// 004436ac  5e                   pop esi
// 004436ad  5b                   pop ebx
// 004436ae  5d                   pop ebp
// 004436af  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Fill@PAUIDREFItem@MergeBinder@RBX@@U123@@std@@YAXPAUIDREFItem@MergeBinder@RBX@@0ABU123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
