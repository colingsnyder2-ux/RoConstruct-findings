// roc 2011-06 004c3010  unit: RBX::Network::VPlayer::?$EventDesc  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c3010
//
// 004c3010  83ec08               sub esp, 8
// 004c3013  56                   push esi
// 004c3014  8b742410             mov esi, dword ptr [esp + 0x10]
// 004c3018  57                   push edi
// 004c3019  8bf9                 mov edi, ecx
// 004c301b  56                   push esi
// 004c301c  8d4c2410             lea ecx, [esp + 0x10]
// 004c3020  8974240c             mov dword ptr [esp + 0xc], esi
// 004c3024  e877d2ffff           call 0x4c02a0
// 004c3029  56                   push esi
// 004c302a  8d442410             lea eax, [esp + 0x10]
// 004c302e  56                   push esi
// 004c302f  50                   push eax
// 004c3030  e80b863a00           call 0x86b640
// 004c3035  8d4c2414             lea ecx, [esp + 0x14]
// 004c3039  83c40c               add esp, 0xc
// 004c303c  3bcf                 cmp ecx, edi
// 004c303e  7406                 je 0x4c3046
// 004c3040  8b542408             mov edx, dword ptr [esp + 8]
// 004c3044  8917                 mov dword ptr [edi], edx
// 004c3046  8b7704               mov esi, dword ptr [edi + 4]
// 004c3049  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004c304d  894704               mov dword ptr [edi + 4], eax
// 004c3050  85f6                 test esi, esi
// 004c3052  742a                 je 0x4c307e
// 004c3054  8d4e04               lea ecx, [esi + 4]
// 004c3057  83caff               or edx, 0xffffffff
// 004c305a  f00fc111             lock xadd dword ptr [ecx], edx
// 004c305e  751e                 jne 0x4c307e
// 004c3060  8b06                 mov eax, dword ptr [esi]
// 004c3062  8b5004               mov edx, dword ptr [eax + 4]
// 004c3065  8bce                 mov ecx, esi
// 004c3067  ffd2                 call edx
// 004c3069  8d4608               lea eax, [esi + 8]
// 004c306c  83c9ff               or ecx, 0xffffffff
// 004c306f  f00fc108             lock xadd dword ptr [eax], ecx
// 004c3073  7509                 jne 0x4c307e
// 004c3075  8b16                 mov edx, dword ptr [esi]
// 004c3077  8b4208               mov eax, dword ptr [edx + 8]
// 004c307a  8bce                 mov ecx, esi
// 004c307c  ffd0                 call eax
// 004c307e  5f                   pop edi
// 004c307f  5e                   pop esi
// 004c3080  83c408               add esp, 8
// 004c3083  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
