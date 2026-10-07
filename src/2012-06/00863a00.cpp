// roc 2012-06 00863a00  unit: VWiniInetRequest_source::?$stream_buffer  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00863a00
//
// 00863a00  83ec08               sub esp, 8
// 00863a03  56                   push esi
// 00863a04  8b742410             mov esi, dword ptr [esp + 0x10]
// 00863a08  57                   push edi
// 00863a09  8bf9                 mov edi, ecx
// 00863a0b  56                   push esi
// 00863a0c  8d4c2410             lea ecx, [esp + 0x10]
// 00863a10  8974240c             mov dword ptr [esp + 0xc], esi
// 00863a14  e8c7fbffff           call 0x8635e0
// 00863a19  56                   push esi
// 00863a1a  8d442410             lea eax, [esp + 0x10]
// 00863a1e  56                   push esi
// 00863a1f  50                   push eax
// 00863a20  e86b6dd3ff           call 0x59a790
// 00863a25  8d4c2414             lea ecx, [esp + 0x14]
// 00863a29  83c40c               add esp, 0xc
// 00863a2c  3bcf                 cmp ecx, edi
// 00863a2e  7406                 je 0x863a36
// 00863a30  8b542408             mov edx, dword ptr [esp + 8]
// 00863a34  8917                 mov dword ptr [edi], edx
// 00863a36  8b7704               mov esi, dword ptr [edi + 4]
// 00863a39  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00863a3d  894704               mov dword ptr [edi + 4], eax
// 00863a40  85f6                 test esi, esi
// 00863a42  742a                 je 0x863a6e
// 00863a44  8d4e04               lea ecx, [esi + 4]
// 00863a47  83caff               or edx, 0xffffffff
// 00863a4a  f00fc111             lock xadd dword ptr [ecx], edx
// 00863a4e  751e                 jne 0x863a6e
// 00863a50  8b06                 mov eax, dword ptr [esi]
// 00863a52  8b5004               mov edx, dword ptr [eax + 4]
// 00863a55  8bce                 mov ecx, esi
// 00863a57  ffd2                 call edx
// 00863a59  8d4608               lea eax, [esi + 8]
// 00863a5c  83c9ff               or ecx, 0xffffffff
// 00863a5f  f00fc108             lock xadd dword ptr [eax], ecx
// 00863a63  7509                 jne 0x863a6e
// 00863a65  8b16                 mov edx, dword ptr [esi]
// 00863a67  8b4208               mov eax, dword ptr [edx + 8]
// 00863a6a  8bce                 mov ecx, esi
// 00863a6c  ffd0                 call eax
// 00863a6e  5f                   pop edi
// 00863a6f  5e                   pop esi
// 00863a70  83c408               add esp, 8
// 00863a73  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
