// roc 2007-03 00605500  unit: seg_00600000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00605500
//
// 00605500  8b442408             mov eax, dword ptr [esp + 8]
// 00605504  85c0                 test eax, eax
// 00605506  56                   push esi
// 00605507  8bf1                 mov esi, ecx
// 00605509  740b                 je 0x605516
// 0060550b  50                   push eax
// 0060550c  e81f04f3ff           call 0x535930
// 00605511  83c404               add esp, 4
// 00605514  eb02                 jmp 0x605518
// 00605516  33c0                 xor eax, eax
// 00605518  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0060551b  8d54240c             lea edx, [esp + 0xc]
// 0060551f  8944240c             mov dword ptr [esp + 0xc], eax
// 00605523  8b01                 mov eax, dword ptr [ecx]
// 00605525  8b4008               mov eax, dword ptr [eax + 8]
// 00605528  52                   push edx
// 00605529  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0060552d  52                   push edx
// 0060552e  ffd0                 call eax
// 00605530  5e                   pop esi
// 00605531  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?setRefValue@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@UBEXPAVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
