// roc 2007-03 0057d520  unit: seg_00570000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057d520
//
// 0057d520  8b442408             mov eax, dword ptr [esp + 8]
// 0057d524  85c0                 test eax, eax
// 0057d526  56                   push esi
// 0057d527  8bf1                 mov esi, ecx
// 0057d529  740b                 je 0x57d536
// 0057d52b  50                   push eax
// 0057d52c  e89fffffff           call 0x57d4d0
// 0057d531  83c404               add esp, 4
// 0057d534  eb02                 jmp 0x57d538
// 0057d536  33c0                 xor eax, eax
// 0057d538  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0057d53b  8d54240c             lea edx, [esp + 0xc]
// 0057d53f  8944240c             mov dword ptr [esp + 0xc], eax
// 0057d543  8b01                 mov eax, dword ptr [ecx]
// 0057d545  8b4008               mov eax, dword ptr [eax + 8]
// 0057d548  52                   push edx
// 0057d549  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0057d54d  52                   push edx
// 0057d54e  ffd0                 call eax
// 0057d550  5e                   pop esi
// 0057d551  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?setRefValue@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@UBEXPAVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
