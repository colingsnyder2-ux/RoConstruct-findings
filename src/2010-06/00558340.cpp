// from server: 100% by auto
// roc 2010-06 00558340  unit: seg_00550000  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00558340
//
// 00558340  8b442404             mov eax, dword ptr [esp + 4]
// 00558344  83781400             cmp dword ptr [eax + 0x14], 0
// 00558348  56                   push esi
// 00558349  57                   push edi
// 0055834a  8bf1                 mov esi, ecx
// 0055834c  bf10000000           mov edi, 0x10
// 00558351  761c                 jbe 0x55836f
// 00558353  397818               cmp dword ptr [eax + 0x18], edi
// 00558356  7205                 jb 0x55835d
// 00558358  8b4004               mov eax, dword ptr [eax + 4]
// 0055835b  eb03                 jmp 0x558360
// 0055835d  83c004               add eax, 4
// 00558360  50                   push eax
// 00558361  68c008a200           push 0xa208c0
// 00558366  56                   push esi
// 00558367  e814ffffff           call 0x558280
// 0055836c  83c40c               add esp, 0xc
// 0055836f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00558373  83781400             cmp dword ptr [eax + 0x14], 0
// 00558377  761c                 jbe 0x558395
// 00558379  397818               cmp dword ptr [eax + 0x18], edi
// 0055837c  7205                 jb 0x558383
// 0055837e  8b4004               mov eax, dword ptr [eax + 4]
// 00558381  eb03                 jmp 0x558386
// 00558383  83c004               add eax, 4
// 00558386  50                   push eax
// 00558387  68c008a200           push 0xa208c0
// 0055838c  56                   push esi
// 0055838d  e8eefeffff           call 0x558280
// 00558392  83c40c               add esp, 0xc
// 00558395  8b442414             mov eax, dword ptr [esp + 0x14]
// 00558399  83781400             cmp dword ptr [eax + 0x14], 0
// 0055839d  761c                 jbe 0x5583bb
// 0055839f  397818               cmp dword ptr [eax + 0x18], edi
// 005583a2  7205                 jb 0x5583a9
// 005583a4  8b4004               mov eax, dword ptr [eax + 4]
// 005583a7  eb03                 jmp 0x5583ac
// 005583a9  83c004               add eax, 4
// 005583ac  50                   push eax
// 005583ad  68c008a200           push 0xa208c0
// 005583b2  56                   push esi
// 005583b3  e8c8feffff           call 0x558280
// 005583b8  83c40c               add esp, 0xc
// 005583bb  8b442418             mov eax, dword ptr [esp + 0x18]
// 005583bf  83781400             cmp dword ptr [eax + 0x14], 0
// 005583c3  761c                 jbe 0x5583e1
// 005583c5  397818               cmp dword ptr [eax + 0x18], edi
// 005583c8  7205                 jb 0x5583cf
// 005583ca  8b4004               mov eax, dword ptr [eax + 4]
// 005583cd  eb03                 jmp 0x5583d2
// 005583cf  83c004               add eax, 4
// 005583d2  50                   push eax
// 005583d3  68c008a200           push 0xa208c0
// 005583d8  56                   push esi
// 005583d9  e8a2feffff           call 0x558280
// 005583de  83c40c               add esp, 0xc
// 005583e1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005583e5  83781400             cmp dword ptr [eax + 0x14], 0
// 005583e9  761c                 jbe 0x558407
// 005583eb  397818               cmp dword ptr [eax + 0x18], edi
// 005583ee  7205                 jb 0x5583f5
// 005583f0  8b4004               mov eax, dword ptr [eax + 4]
// 005583f3  eb03                 jmp 0x5583f8
// 005583f5  83c004               add eax, 4
// 005583f8  50                   push eax
// 005583f9  68c008a200           push 0xa208c0
// 005583fe  56                   push esi
// 005583ff  e87cfeffff           call 0x558280
// 00558404  83c40c               add esp, 0xc
// 00558407  8b442420             mov eax, dword ptr [esp + 0x20]
// 0055840b  83781400             cmp dword ptr [eax + 0x14], 0
// 0055840f  762e                 jbe 0x55843f
// 00558411  397818               cmp dword ptr [eax + 0x18], edi
// 00558414  7217                 jb 0x55842d
// 00558416  8b4004               mov eax, dword ptr [eax + 4]
// 00558419  50                   push eax
// 0055841a  68c008a200           push 0xa208c0
// 0055841f  56                   push esi
// 00558420  e85bfeffff           call 0x558280
// 00558425  83c40c               add esp, 0xc
// 00558428  5f                   pop edi
// 00558429  5e                   pop esi
// 0055842a  c21800               ret 0x18
// 0055842d  83c004               add eax, 4
// 00558430  50                   push eax
// 00558431  68c008a200           push 0xa208c0
// 00558436  56                   push esi
// 00558437  e844feffff           call 0x558280
// 0055843c  83c40c               add esp, 0xc
// 0055843f  5f                   pop edi
// 00558440  5e                   pop esi
// 00558441  c21800               ret 0x18
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?writeSymbols@TextOutput@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
