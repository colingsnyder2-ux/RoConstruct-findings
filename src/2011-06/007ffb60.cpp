// from server: 100% by auto
// roc 2011-06 007ffb60  unit: RBX::Limits::VCounter::V?$shared_ptr::?$thread_specific_ptr::delete_data  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ffb60
//
// 007ffb60  57                   push edi
// 007ffb61  8b7c2408             mov edi, dword ptr [esp + 8]
// 007ffb65  3b7c240c             cmp edi, dword ptr [esp + 0xc]
// 007ffb69  7464                 je 0x7ffbcf
// 007ffb6b  53                   push ebx
// 007ffb6c  55                   push ebp
// 007ffb6d  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 007ffb71  56                   push esi
// 007ffb72  8b4500               mov eax, dword ptr [ebp]
// 007ffb75  8907                 mov dword ptr [edi], eax
// 007ffb77  8b5d04               mov ebx, dword ptr [ebp + 4]
// 007ffb7a  3b5f04               cmp ebx, dword ptr [edi + 4]
// 007ffb7d  7444                 je 0x7ffbc3
// 007ffb7f  85db                 test ebx, ebx
// 007ffb81  740c                 je 0x7ffb8f
// 007ffb83  8d4b04               lea ecx, [ebx + 4]
// 007ffb86  ba01000000           mov edx, 1
// 007ffb8b  f00fc111             lock xadd dword ptr [ecx], edx
// 007ffb8f  8b7704               mov esi, dword ptr [edi + 4]
// 007ffb92  85f6                 test esi, esi
// 007ffb94  742a                 je 0x7ffbc0
// 007ffb96  8d4604               lea eax, [esi + 4]
// 007ffb99  83c9ff               or ecx, 0xffffffff
// 007ffb9c  f00fc108             lock xadd dword ptr [eax], ecx
// 007ffba0  751e                 jne 0x7ffbc0
// 007ffba2  8b16                 mov edx, dword ptr [esi]
// 007ffba4  8b4204               mov eax, dword ptr [edx + 4]
// 007ffba7  8bce                 mov ecx, esi
// 007ffba9  ffd0                 call eax
// 007ffbab  8d4e08               lea ecx, [esi + 8]
// 007ffbae  83caff               or edx, 0xffffffff
// 007ffbb1  f00fc111             lock xadd dword ptr [ecx], edx
// 007ffbb5  7509                 jne 0x7ffbc0
// 007ffbb7  8b06                 mov eax, dword ptr [esi]
// 007ffbb9  8b5008               mov edx, dword ptr [eax + 8]
// 007ffbbc  8bce                 mov ecx, esi
// 007ffbbe  ffd2                 call edx
// 007ffbc0  895f04               mov dword ptr [edi + 4], ebx
// 007ffbc3  83c708               add edi, 8
// 007ffbc6  3b7c2418             cmp edi, dword ptr [esp + 0x18]
// 007ffbca  75a6                 jne 0x7ffb72
// 007ffbcc  5e                   pop esi
// 007ffbcd  5d                   pop ebp
// 007ffbce  5b                   pop ebx
// 007ffbcf  5f                   pop edi
// 007ffbd0  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Fill@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@V12@@std@@YAXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@0ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
