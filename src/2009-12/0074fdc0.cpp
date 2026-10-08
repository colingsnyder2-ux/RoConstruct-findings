// roc 2009-12 0074fdc0  unit: RBX::LocalBackpackTool  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0074fdc0
//
// 0074fdc0  57                   push edi
// 0074fdc1  8b7c2408             mov edi, dword ptr [esp + 8]
// 0074fdc5  3b7c240c             cmp edi, dword ptr [esp + 0xc]
// 0074fdc9  7464                 je 0x74fe2f
// 0074fdcb  53                   push ebx
// 0074fdcc  55                   push ebp
// 0074fdcd  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0074fdd1  56                   push esi
// 0074fdd2  8b4500               mov eax, dword ptr [ebp]
// 0074fdd5  8907                 mov dword ptr [edi], eax
// 0074fdd7  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0074fdda  3b5f04               cmp ebx, dword ptr [edi + 4]
// 0074fddd  7444                 je 0x74fe23
// 0074fddf  85db                 test ebx, ebx
// 0074fde1  740c                 je 0x74fdef
// 0074fde3  8d4b04               lea ecx, [ebx + 4]
// 0074fde6  ba01000000           mov edx, 1
// 0074fdeb  f00fc111             lock xadd dword ptr [ecx], edx
// 0074fdef  8b7704               mov esi, dword ptr [edi + 4]
// 0074fdf2  85f6                 test esi, esi
// 0074fdf4  742a                 je 0x74fe20
// 0074fdf6  8d4604               lea eax, [esi + 4]
// 0074fdf9  83c9ff               or ecx, 0xffffffff
// 0074fdfc  f00fc108             lock xadd dword ptr [eax], ecx
// 0074fe00  751e                 jne 0x74fe20
// 0074fe02  8b16                 mov edx, dword ptr [esi]
// 0074fe04  8b4204               mov eax, dword ptr [edx + 4]
// 0074fe07  8bce                 mov ecx, esi
// 0074fe09  ffd0                 call eax
// 0074fe0b  8d4e08               lea ecx, [esi + 8]
// 0074fe0e  83caff               or edx, 0xffffffff
// 0074fe11  f00fc111             lock xadd dword ptr [ecx], edx
// 0074fe15  7509                 jne 0x74fe20
// 0074fe17  8b06                 mov eax, dword ptr [esi]
// 0074fe19  8b5008               mov edx, dword ptr [eax + 8]
// 0074fe1c  8bce                 mov ecx, esi
// 0074fe1e  ffd2                 call edx
// 0074fe20  895f04               mov dword ptr [edi + 4], ebx
// 0074fe23  83c708               add edi, 8
// 0074fe26  3b7c2418             cmp edi, dword ptr [esp + 0x18]
// 0074fe2a  75a6                 jne 0x74fdd2
// 0074fe2c  5e                   pop esi
// 0074fe2d  5d                   pop ebp
// 0074fe2e  5b                   pop ebx
// 0074fe2f  5f                   pop edi
// 0074fe30  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Fill@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@V12@@std@@YAXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@0ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
