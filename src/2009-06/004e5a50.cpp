// roc 2009-06 004e5a50  unit: CRobloxWnd::UserInputJob  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e5a50
//
// 004e5a50  83ec08               sub esp, 8
// 004e5a53  56                   push esi
// 004e5a54  8b742410             mov esi, dword ptr [esp + 0x10]
// 004e5a58  57                   push edi
// 004e5a59  8bf9                 mov edi, ecx
// 004e5a5b  56                   push esi
// 004e5a5c  8d4c2410             lea ecx, [esp + 0x10]
// 004e5a60  8974240c             mov dword ptr [esp + 0xc], esi
// 004e5a64  e8f7fafdff           call 0x4c5560
// 004e5a69  56                   push esi
// 004e5a6a  8d442410             lea eax, [esp + 0x10]
// 004e5a6e  56                   push esi
// 004e5a6f  50                   push eax
// 004e5a70  e86bef1800           call 0x6749e0
// 004e5a75  8d4c2414             lea ecx, [esp + 0x14]
// 004e5a79  83c40c               add esp, 0xc
// 004e5a7c  3bcf                 cmp ecx, edi
// 004e5a7e  7406                 je 0x4e5a86
// 004e5a80  8b542408             mov edx, dword ptr [esp + 8]
// 004e5a84  8917                 mov dword ptr [edi], edx
// 004e5a86  8b7704               mov esi, dword ptr [edi + 4]
// 004e5a89  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e5a8d  894704               mov dword ptr [edi + 4], eax
// 004e5a90  85f6                 test esi, esi
// 004e5a92  742a                 je 0x4e5abe
// 004e5a94  8d4e04               lea ecx, [esi + 4]
// 004e5a97  83caff               or edx, 0xffffffff
// 004e5a9a  f00fc111             lock xadd dword ptr [ecx], edx
// 004e5a9e  751e                 jne 0x4e5abe
// 004e5aa0  8b06                 mov eax, dword ptr [esi]
// 004e5aa2  8b5004               mov edx, dword ptr [eax + 4]
// 004e5aa5  8bce                 mov ecx, esi
// 004e5aa7  ffd2                 call edx
// 004e5aa9  8d4608               lea eax, [esi + 8]
// 004e5aac  83c9ff               or ecx, 0xffffffff
// 004e5aaf  f00fc108             lock xadd dword ptr [eax], ecx
// 004e5ab3  7509                 jne 0x4e5abe
// 004e5ab5  8b16                 mov edx, dword ptr [esi]
// 004e5ab7  8b4208               mov eax, dword ptr [edx + 8]
// 004e5aba  8bce                 mov ecx, esi
// 004e5abc  ffd0                 call eax
// 004e5abe  5f                   pop edi
// 004e5abf  5e                   pop esi
// 004e5ac0  83c408               add esp, 8
// 004e5ac3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
