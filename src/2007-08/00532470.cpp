// roc 2007-08 00532470  unit: RBX::VSelection::?$FactoryProduct  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00532470
//
// 00532470  83ec10               sub esp, 0x10
// 00532473  53                   push ebx
// 00532474  56                   push esi
// 00532475  8bf1                 mov esi, ecx
// 00532477  8b5608               mov edx, dword ptr [esi + 8]
// 0053247a  33c9                 xor ecx, ecx
// 0053247c  85d2                 test edx, edx
// 0053247e  57                   push edi
// 0053247f  894c2410             mov dword ptr [esp + 0x10], ecx
// 00532483  7504                 jne 0x532489
// 00532485  33c0                 xor eax, eax
// 00532487  eb08                 jmp 0x532491
// 00532489  8b460c               mov eax, dword ptr [esi + 0xc]
// 0053248c  2bc2                 sub eax, edx
// 0053248e  c1f802               sar eax, 2
// 00532491  85c0                 test eax, eax
// 00532493  8b5614               mov edx, dword ptr [esi + 0x14]
// 00532496  89542418             mov dword ptr [esp + 0x18], edx
// 0053249a  8d542410             lea edx, [esp + 0x10]
// 0053249e  89442414             mov dword ptr [esp + 0x14], eax
// 005324a2  895614               mov dword ptr [esi + 0x14], edx
// 005324a5  0f868c000000         jbe 0x532537
// 005324ab  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 005324b1  8b5608               mov edx, dword ptr [esi + 8]
// 005324b4  85d2                 test edx, edx
// 005324b6  8bf9                 mov edi, ecx
// 005324b8  740c                 je 0x5324c6
// 005324ba  8b460c               mov eax, dword ptr [esi + 0xc]
// 005324bd  2bc2                 sub eax, edx
// 005324bf  c1f802               sar eax, 2
// 005324c2  3bc8                 cmp ecx, eax
// 005324c4  7202                 jb 0x5324c8
// 005324c6  ffd3                 call ebx
// 005324c8  8b4608               mov eax, dword ptr [esi + 8]
// 005324cb  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005324ce  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005324d2  50                   push eax
// 005324d3  83ec10               sub esp, 0x10
// 005324d6  8bc4                 mov eax, esp
// 005324d8  8908                 mov dword ptr [eax], ecx
// 005324da  8b542438             mov edx, dword ptr [esp + 0x38]
// 005324de  895004               mov dword ptr [eax + 4], edx
// 005324e1  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005324e5  85c9                 test ecx, ecx
// 005324e7  89642420             mov dword ptr [esp + 0x20], esp
// 005324eb  740c                 je 0x5324f9
// 005324ed  83c104               add ecx, 4
// 005324f0  ba01000000           mov edx, 1
// 005324f5  f00fc111             lock xadd dword ptr [ecx], edx
// 005324f9  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005324fd  894808               mov dword ptr [eax + 8], ecx
// 00532500  8b542440             mov edx, dword ptr [esp + 0x40]
// 00532504  89500c               mov dword ptr [eax + 0xc], edx
// 00532507  8b442440             mov eax, dword ptr [esp + 0x40]
// 0053250b  85c0                 test eax, eax
// 0053250d  740c                 je 0x53251b
// 0053250f  83c004               add eax, 4
// 00532512  b901000000           mov ecx, 1
// 00532517  f00fc108             lock xadd dword ptr [eax], ecx
// 0053251b  8bce                 mov ecx, esi
// 0053251d  e8fefdffff           call 0x532320
// 00532522  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00532526  83c101               add ecx, 1
// 00532529  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0053252d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00532531  0f827affffff         jb 0x5324b1
// 00532537  8b542418             mov edx, dword ptr [esp + 0x18]
// 0053253b  8d4c2420             lea ecx, [esp + 0x20]
// 0053253f  895614               mov dword ptr [esi + 0x14], edx
// 00532542  e8b9b4eeff           call 0x41da00
// 00532547  5f                   pop edi
// 00532548  5e                   pop esi
// 00532549  5b                   pop ebx
// 0053254a  83c410               add esp, 0x10
// 0053254d  c21000               ret 0x10
// library openrbx-client/App\v8datamodel\Selection.cpp (function ?raise@?$Notifier@VSelection@RBX@@VSelectionChanged@2@@RBX@@IBEXVSelectionChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Selection.cpp
