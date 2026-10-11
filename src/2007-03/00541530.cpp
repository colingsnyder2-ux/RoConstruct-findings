// roc 2007-03 00541530  unit: seg_00540000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00541530
//
// 00541530  8b442408             mov eax, dword ptr [esp + 8]
// 00541534  85c0                 test eax, eax
// 00541536  56                   push esi
// 00541537  8bf1                 mov esi, ecx
// 00541539  740b                 je 0x541546
// 0054153b  50                   push eax
// 0054153c  e89fffffff           call 0x5414e0
// 00541541  83c404               add esp, 4
// 00541544  eb02                 jmp 0x541548
// 00541546  33c0                 xor eax, eax
// 00541548  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0054154b  8d54240c             lea edx, [esp + 0xc]
// 0054154f  8944240c             mov dword ptr [esp + 0xc], eax
// 00541553  8b01                 mov eax, dword ptr [ecx]
// 00541555  8b4008               mov eax, dword ptr [eax + 8]
// 00541558  52                   push edx
// 00541559  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0054155d  52                   push edx
// 0054155e  ffd0                 call eax
// 00541560  5e                   pop esi
// 00541561  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?setRefValue@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@UBEXPAVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
