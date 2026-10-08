// from server: 100% by auto
// roc 2012-06 008637d0  unit: VWiniInetRequest_source::?$stream_buffer  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008637d0
//
// 008637d0  57                   push edi
// 008637d1  8b7c2408             mov edi, dword ptr [esp + 8]
// 008637d5  3b7c240c             cmp edi, dword ptr [esp + 0xc]
// 008637d9  7464                 je 0x86383f
// 008637db  53                   push ebx
// 008637dc  55                   push ebp
// 008637dd  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 008637e1  56                   push esi
// 008637e2  8b4500               mov eax, dword ptr [ebp]
// 008637e5  8907                 mov dword ptr [edi], eax
// 008637e7  8b5d04               mov ebx, dword ptr [ebp + 4]
// 008637ea  3b5f04               cmp ebx, dword ptr [edi + 4]
// 008637ed  7444                 je 0x863833
// 008637ef  85db                 test ebx, ebx
// 008637f1  740c                 je 0x8637ff
// 008637f3  8d4b04               lea ecx, [ebx + 4]
// 008637f6  ba01000000           mov edx, 1
// 008637fb  f00fc111             lock xadd dword ptr [ecx], edx
// 008637ff  8b7704               mov esi, dword ptr [edi + 4]
// 00863802  85f6                 test esi, esi
// 00863804  742a                 je 0x863830
// 00863806  8d4604               lea eax, [esi + 4]
// 00863809  83c9ff               or ecx, 0xffffffff
// 0086380c  f00fc108             lock xadd dword ptr [eax], ecx
// 00863810  751e                 jne 0x863830
// 00863812  8b16                 mov edx, dword ptr [esi]
// 00863814  8b4204               mov eax, dword ptr [edx + 4]
// 00863817  8bce                 mov ecx, esi
// 00863819  ffd0                 call eax
// 0086381b  8d4e08               lea ecx, [esi + 8]
// 0086381e  83caff               or edx, 0xffffffff
// 00863821  f00fc111             lock xadd dword ptr [ecx], edx
// 00863825  7509                 jne 0x863830
// 00863827  8b06                 mov eax, dword ptr [esi]
// 00863829  8b5008               mov edx, dword ptr [eax + 8]
// 0086382c  8bce                 mov ecx, esi
// 0086382e  ffd2                 call edx
// 00863830  895f04               mov dword ptr [edi + 4], ebx
// 00863833  83c708               add edi, 8
// 00863836  3b7c2418             cmp edi, dword ptr [esp + 0x18]
// 0086383a  75a6                 jne 0x8637e2
// 0086383c  5e                   pop esi
// 0086383d  5d                   pop ebp
// 0086383e  5b                   pop ebx
// 0086383f  5f                   pop edi
// 00863840  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Fill@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@V12@@std@@YAXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@0ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
