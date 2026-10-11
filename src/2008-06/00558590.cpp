// roc 2008-06 00558590  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00558590
//
// 00558590  83ec10               sub esp, 0x10
// 00558593  53                   push ebx
// 00558594  56                   push esi
// 00558595  8bf1                 mov esi, ecx
// 00558597  8b4614               mov eax, dword ptr [esi + 0x14]
// 0055859a  2b4610               sub eax, dword ptr [esi + 0x10]
// 0055859d  8b561c               mov edx, dword ptr [esi + 0x1c]
// 005585a0  c1f802               sar eax, 2
// 005585a3  33c9                 xor ecx, ecx
// 005585a5  89542414             mov dword ptr [esp + 0x14], edx
// 005585a9  8d54240c             lea edx, [esp + 0xc]
// 005585ad  57                   push edi
// 005585ae  894c2410             mov dword ptr [esp + 0x10], ecx
// 005585b2  89442414             mov dword ptr [esp + 0x14], eax
// 005585b6  89561c               mov dword ptr [esi + 0x1c], edx
// 005585b9  85c0                 test eax, eax
// 005585bb  765e                 jbe 0x55861b
// 005585bd  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005585c3  8b4614               mov eax, dword ptr [esi + 0x14]
// 005585c6  2b4610               sub eax, dword ptr [esi + 0x10]
// 005585c9  8bf9                 mov edi, ecx
// 005585cb  c1f802               sar eax, 2
// 005585ce  3bc8                 cmp ecx, eax
// 005585d0  7202                 jb 0x5585d4
// 005585d2  ffd3                 call ebx
// 005585d4  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005585d7  8b04b9               mov eax, dword ptr [ecx + edi*4]
// 005585da  8b542420             mov edx, dword ptr [esp + 0x20]
// 005585de  50                   push eax
// 005585df  83ec08               sub esp, 8
// 005585e2  8bc4                 mov eax, esp
// 005585e4  8910                 mov dword ptr [eax], edx
// 005585e6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005585ea  894804               mov dword ptr [eax + 4], ecx
// 005585ed  8b442430             mov eax, dword ptr [esp + 0x30]
// 005585f1  89642418             mov dword ptr [esp + 0x18], esp
// 005585f5  85c0                 test eax, eax
// 005585f7  740c                 je 0x558605
// 005585f9  83c004               add eax, 4
// 005585fc  ba01000000           mov edx, 1
// 00558601  f00fc110             lock xadd dword ptr [eax], edx
// 00558605  8bce                 mov ecx, esi
// 00558607  e814f5ffff           call 0x557b20
// 0055860c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00558610  41                   inc ecx
// 00558611  894c2410             mov dword ptr [esp + 0x10], ecx
// 00558615  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 00558619  72a8                 jb 0x5585c3
// 0055861b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0055861f  89461c               mov dword ptr [esi + 0x1c], eax
// 00558622  8b742424             mov esi, dword ptr [esp + 0x24]
// 00558626  85f6                 test esi, esi
// 00558628  742a                 je 0x558654
// 0055862a  8d4e04               lea ecx, [esi + 4]
// 0055862d  83caff               or edx, 0xffffffff
// 00558630  f00fc111             lock xadd dword ptr [ecx], edx
// 00558634  751e                 jne 0x558654
// 00558636  8b06                 mov eax, dword ptr [esi]
// 00558638  8b5004               mov edx, dword ptr [eax + 4]
// 0055863b  8bce                 mov ecx, esi
// 0055863d  ffd2                 call edx
// 0055863f  8d4608               lea eax, [esi + 8]
// 00558642  83c9ff               or ecx, 0xffffffff
// 00558645  f00fc108             lock xadd dword ptr [eax], ecx
// 00558649  7509                 jne 0x558654
// 0055864b  8b16                 mov edx, dword ptr [esi]
// 0055864d  8b4208               mov eax, dword ptr [edx + 8]
// 00558650  8bce                 mov ecx, esi
// 00558652  ffd0                 call eax
// 00558654  5f                   pop edi
// 00558655  5e                   pop esi
// 00558656  5b                   pop ebx
// 00558657  83c410               add esp, 0x10
// 0055865a  c20800               ret 8
// library openrbx-client/App\v8tree\Service.cpp (function ?raise@?$Notifier@VServiceProvider@RBX@@UServiceAdded@2@@RBX@@IBEXUServiceAdded@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Service.cpp
