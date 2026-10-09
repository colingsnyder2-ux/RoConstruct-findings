// roc 2009-12 0072bc70  unit: boost::Vthread::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0072bc70
//
// 0072bc70  83ec08               sub esp, 8
// 0072bc73  56                   push esi
// 0072bc74  8b742410             mov esi, dword ptr [esp + 0x10]
// 0072bc78  57                   push edi
// 0072bc79  8bf9                 mov edi, ecx
// 0072bc7b  56                   push esi
// 0072bc7c  8d4c2410             lea ecx, [esp + 0x10]
// 0072bc80  8974240c             mov dword ptr [esp + 0xc], esi
// 0072bc84  e837fdffff           call 0x72b9c0
// 0072bc89  56                   push esi
// 0072bc8a  8d442410             lea eax, [esp + 0x10]
// 0072bc8e  56                   push esi
// 0072bc8f  50                   push eax
// 0072bc90  e8fb8d1200           call 0x854a90
// 0072bc95  8d4c2414             lea ecx, [esp + 0x14]
// 0072bc99  83c40c               add esp, 0xc
// 0072bc9c  3bcf                 cmp ecx, edi
// 0072bc9e  7406                 je 0x72bca6
// 0072bca0  8b542408             mov edx, dword ptr [esp + 8]
// 0072bca4  8917                 mov dword ptr [edi], edx
// 0072bca6  8b7704               mov esi, dword ptr [edi + 4]
// 0072bca9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0072bcad  894704               mov dword ptr [edi + 4], eax
// 0072bcb0  85f6                 test esi, esi
// 0072bcb2  742a                 je 0x72bcde
// 0072bcb4  8d4e04               lea ecx, [esi + 4]
// 0072bcb7  83caff               or edx, 0xffffffff
// 0072bcba  f00fc111             lock xadd dword ptr [ecx], edx
// 0072bcbe  751e                 jne 0x72bcde
// 0072bcc0  8b06                 mov eax, dword ptr [esi]
// 0072bcc2  8b5004               mov edx, dword ptr [eax + 4]
// 0072bcc5  8bce                 mov ecx, esi
// 0072bcc7  ffd2                 call edx
// 0072bcc9  8d4608               lea eax, [esi + 8]
// 0072bccc  83c9ff               or ecx, 0xffffffff
// 0072bccf  f00fc108             lock xadd dword ptr [eax], ecx
// 0072bcd3  7509                 jne 0x72bcde
// 0072bcd5  8b16                 mov edx, dword ptr [esi]
// 0072bcd7  8b4208               mov eax, dword ptr [edx + 8]
// 0072bcda  8bce                 mov ecx, esi
// 0072bcdc  ffd0                 call eax
// 0072bcde  5f                   pop edi
// 0072bcdf  5e                   pop esi
// 0072bce0  83c408               add esp, 8
// 0072bce3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
