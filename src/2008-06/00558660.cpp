// roc 2008-06 00558660  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00558660
//
// 00558660  83ec10               sub esp, 0x10
// 00558663  53                   push ebx
// 00558664  56                   push esi
// 00558665  8bf1                 mov esi, ecx
// 00558667  8b4614               mov eax, dword ptr [esi + 0x14]
// 0055866a  2b4610               sub eax, dword ptr [esi + 0x10]
// 0055866d  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00558670  c1f802               sar eax, 2
// 00558673  33c9                 xor ecx, ecx
// 00558675  89542414             mov dword ptr [esp + 0x14], edx
// 00558679  8d54240c             lea edx, [esp + 0xc]
// 0055867d  57                   push edi
// 0055867e  894c2410             mov dword ptr [esp + 0x10], ecx
// 00558682  89442414             mov dword ptr [esp + 0x14], eax
// 00558686  89561c               mov dword ptr [esi + 0x1c], edx
// 00558689  85c0                 test eax, eax
// 0055868b  0f8680000000         jbe 0x558711
// 00558691  8b1d90288000         mov ebx, dword ptr [0x802890]
// 00558697  8b4614               mov eax, dword ptr [esi + 0x14]
// 0055869a  2b4610               sub eax, dword ptr [esi + 0x10]
// 0055869d  8bf9                 mov edi, ecx
// 0055869f  c1f802               sar eax, 2
// 005586a2  3bc8                 cmp ecx, eax
// 005586a4  7202                 jb 0x5586a8
// 005586a6  ffd3                 call ebx
// 005586a8  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005586ab  8b04b9               mov eax, dword ptr [ecx + edi*4]
// 005586ae  8b542420             mov edx, dword ptr [esp + 0x20]
// 005586b2  50                   push eax
// 005586b3  83ec10               sub esp, 0x10
// 005586b6  8bc4                 mov eax, esp
// 005586b8  8910                 mov dword ptr [eax], edx
// 005586ba  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005586be  894804               mov dword ptr [eax + 4], ecx
// 005586c1  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005586c5  89642420             mov dword ptr [esp + 0x20], esp
// 005586c9  85c9                 test ecx, ecx
// 005586cb  740c                 je 0x5586d9
// 005586cd  83c104               add ecx, 4
// 005586d0  ba01000000           mov edx, 1
// 005586d5  f00fc111             lock xadd dword ptr [ecx], edx
// 005586d9  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005586dd  894808               mov dword ptr [eax + 8], ecx
// 005586e0  8b542440             mov edx, dword ptr [esp + 0x40]
// 005586e4  89500c               mov dword ptr [eax + 0xc], edx
// 005586e7  8b442440             mov eax, dword ptr [esp + 0x40]
// 005586eb  85c0                 test eax, eax
// 005586ed  740c                 je 0x5586fb
// 005586ef  83c004               add eax, 4
// 005586f2  b901000000           mov ecx, 1
// 005586f7  f00fc108             lock xadd dword ptr [eax], ecx
// 005586fb  8bce                 mov ecx, esi
// 005586fd  e83ef5ffff           call 0x557c40
// 00558702  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00558706  41                   inc ecx
// 00558707  894c2410             mov dword ptr [esp + 0x10], ecx
// 0055870b  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0055870f  7286                 jb 0x558697
// 00558711  8b542418             mov edx, dword ptr [esp + 0x18]
// 00558715  8d4c2420             lea ecx, [esp + 0x20]
// 00558719  89561c               mov dword ptr [esi + 0x1c], edx
// 0055871c  e83fa5ecff           call 0x422c60
// 00558721  5f                   pop edi
// 00558722  5e                   pop esi
// 00558723  5b                   pop ebx
// 00558724  83c410               add esp, 0x10
// 00558727  c21000               ret 0x10
// library openrbx-client/App\v8datamodel\Selection.cpp (function ?raise@?$Notifier@VSelection@RBX@@VSelectionChanged@2@@RBX@@IBEXVSelectionChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Selection.cpp
