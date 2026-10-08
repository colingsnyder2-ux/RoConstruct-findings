// from server: 100% by auto
// roc 2007-08 0040d3d0  unit: ChatEnter  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040d3d0
//
// 0040d3d0  57                   push edi
// 0040d3d1  8b7c2408             mov edi, dword ptr [esp + 8]
// 0040d3d5  3b7c240c             cmp edi, dword ptr [esp + 0xc]
// 0040d3d9  7464                 je 0x40d43f
// 0040d3db  53                   push ebx
// 0040d3dc  55                   push ebp
// 0040d3dd  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0040d3e1  56                   push esi
// 0040d3e2  8b4500               mov eax, dword ptr [ebp]
// 0040d3e5  8907                 mov dword ptr [edi], eax
// 0040d3e7  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0040d3ea  3b5f04               cmp ebx, dword ptr [edi + 4]
// 0040d3ed  7444                 je 0x40d433
// 0040d3ef  85db                 test ebx, ebx
// 0040d3f1  740c                 je 0x40d3ff
// 0040d3f3  8d4b04               lea ecx, [ebx + 4]
// 0040d3f6  ba01000000           mov edx, 1
// 0040d3fb  f00fc111             lock xadd dword ptr [ecx], edx
// 0040d3ff  8b7704               mov esi, dword ptr [edi + 4]
// 0040d402  85f6                 test esi, esi
// 0040d404  742a                 je 0x40d430
// 0040d406  8d4604               lea eax, [esi + 4]
// 0040d409  83c9ff               or ecx, 0xffffffff
// 0040d40c  f00fc108             lock xadd dword ptr [eax], ecx
// 0040d410  751e                 jne 0x40d430
// 0040d412  8b16                 mov edx, dword ptr [esi]
// 0040d414  8b4204               mov eax, dword ptr [edx + 4]
// 0040d417  8bce                 mov ecx, esi
// 0040d419  ffd0                 call eax
// 0040d41b  8d4e08               lea ecx, [esi + 8]
// 0040d41e  83caff               or edx, 0xffffffff
// 0040d421  f00fc111             lock xadd dword ptr [ecx], edx
// 0040d425  7509                 jne 0x40d430
// 0040d427  8b06                 mov eax, dword ptr [esi]
// 0040d429  8b5008               mov edx, dword ptr [eax + 8]
// 0040d42c  8bce                 mov ecx, esi
// 0040d42e  ffd2                 call edx
// 0040d430  895f04               mov dword ptr [edi + 4], ebx
// 0040d433  83c708               add edi, 8
// 0040d436  3b7c2418             cmp edi, dword ptr [esp + 0x18]
// 0040d43a  75a6                 jne 0x40d3e2
// 0040d43c  5e                   pop esi
// 0040d43d  5d                   pop ebp
// 0040d43e  5b                   pop ebx
// 0040d43f  5f                   pop edi
// 0040d440  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Fill@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@V12@@std@@YAXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@0ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
