// roc 2009-06 006ba000  unit: RBX::UniversalTool  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ba000
//
// 006ba000  83ec08               sub esp, 8
// 006ba003  56                   push esi
// 006ba004  8b742410             mov esi, dword ptr [esp + 0x10]
// 006ba008  57                   push edi
// 006ba009  8bf9                 mov edi, ecx
// 006ba00b  56                   push esi
// 006ba00c  8d4c2410             lea ecx, [esp + 0x10]
// 006ba010  8974240c             mov dword ptr [esp + 0xc], esi
// 006ba014  e857ffffff           call 0x6b9f70
// 006ba019  56                   push esi
// 006ba01a  8d442410             lea eax, [esp + 0x10]
// 006ba01e  56                   push esi
// 006ba01f  50                   push eax
// 006ba020  e8bba9fbff           call 0x6749e0
// 006ba025  8d4c2414             lea ecx, [esp + 0x14]
// 006ba029  83c40c               add esp, 0xc
// 006ba02c  3bcf                 cmp ecx, edi
// 006ba02e  7406                 je 0x6ba036
// 006ba030  8b542408             mov edx, dword ptr [esp + 8]
// 006ba034  8917                 mov dword ptr [edi], edx
// 006ba036  8b7704               mov esi, dword ptr [edi + 4]
// 006ba039  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006ba03d  894704               mov dword ptr [edi + 4], eax
// 006ba040  85f6                 test esi, esi
// 006ba042  742a                 je 0x6ba06e
// 006ba044  8d4e04               lea ecx, [esi + 4]
// 006ba047  83caff               or edx, 0xffffffff
// 006ba04a  f00fc111             lock xadd dword ptr [ecx], edx
// 006ba04e  751e                 jne 0x6ba06e
// 006ba050  8b06                 mov eax, dword ptr [esi]
// 006ba052  8b5004               mov edx, dword ptr [eax + 4]
// 006ba055  8bce                 mov ecx, esi
// 006ba057  ffd2                 call edx
// 006ba059  8d4608               lea eax, [esi + 8]
// 006ba05c  83c9ff               or ecx, 0xffffffff
// 006ba05f  f00fc108             lock xadd dword ptr [eax], ecx
// 006ba063  7509                 jne 0x6ba06e
// 006ba065  8b16                 mov edx, dword ptr [esi]
// 006ba067  8b4208               mov eax, dword ptr [edx + 8]
// 006ba06a  8bce                 mov ecx, esi
// 006ba06c  ffd0                 call eax
// 006ba06e  5f                   pop edi
// 006ba06f  5e                   pop esi
// 006ba070  83c408               add esp, 8
// 006ba073  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
