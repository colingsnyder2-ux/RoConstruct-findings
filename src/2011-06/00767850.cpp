// roc 2011-06 00767850  unit: VYieldFunctionStateObject::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00767850
//
// 00767850  83ec08               sub esp, 8
// 00767853  56                   push esi
// 00767854  8b742410             mov esi, dword ptr [esp + 0x10]
// 00767858  57                   push edi
// 00767859  8bf9                 mov edi, ecx
// 0076785b  56                   push esi
// 0076785c  8d4c2410             lea ecx, [esp + 0x10]
// 00767860  8974240c             mov dword ptr [esp + 0xc], esi
// 00767864  e84786e8ff           call 0x5efeb0
// 00767869  56                   push esi
// 0076786a  8d442410             lea eax, [esp + 0x10]
// 0076786e  56                   push esi
// 0076786f  50                   push eax
// 00767870  e8cb3d1000           call 0x86b640
// 00767875  8d4c2414             lea ecx, [esp + 0x14]
// 00767879  83c40c               add esp, 0xc
// 0076787c  3bcf                 cmp ecx, edi
// 0076787e  7406                 je 0x767886
// 00767880  8b542408             mov edx, dword ptr [esp + 8]
// 00767884  8917                 mov dword ptr [edi], edx
// 00767886  8b7704               mov esi, dword ptr [edi + 4]
// 00767889  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0076788d  894704               mov dword ptr [edi + 4], eax
// 00767890  85f6                 test esi, esi
// 00767892  742a                 je 0x7678be
// 00767894  8d4e04               lea ecx, [esi + 4]
// 00767897  83caff               or edx, 0xffffffff
// 0076789a  f00fc111             lock xadd dword ptr [ecx], edx
// 0076789e  751e                 jne 0x7678be
// 007678a0  8b06                 mov eax, dword ptr [esi]
// 007678a2  8b5004               mov edx, dword ptr [eax + 4]
// 007678a5  8bce                 mov ecx, esi
// 007678a7  ffd2                 call edx
// 007678a9  8d4608               lea eax, [esi + 8]
// 007678ac  83c9ff               or ecx, 0xffffffff
// 007678af  f00fc108             lock xadd dword ptr [eax], ecx
// 007678b3  7509                 jne 0x7678be
// 007678b5  8b16                 mov edx, dword ptr [esi]
// 007678b7  8b4208               mov eax, dword ptr [edx + 8]
// 007678ba  8bce                 mov ecx, esi
// 007678bc  ffd0                 call eax
// 007678be  5f                   pop edi
// 007678bf  5e                   pop esi
// 007678c0  83c408               add esp, 8
// 007678c3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
