// roc 2007-08 005dcf80  unit: RBX::VVelocityMotor::?$RefPropDescriptor  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dcf80
//
// 005dcf80  8b442408             mov eax, dword ptr [esp + 8]
// 005dcf84  85c0                 test eax, eax
// 005dcf86  56                   push esi
// 005dcf87  8bf1                 mov esi, ecx
// 005dcf89  740b                 je 0x5dcf96
// 005dcf8b  50                   push eax
// 005dcf8c  e85fffffff           call 0x5dcef0
// 005dcf91  83c404               add esp, 4
// 005dcf94  eb02                 jmp 0x5dcf98
// 005dcf96  33c0                 xor eax, eax
// 005dcf98  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005dcf9b  8d54240c             lea edx, [esp + 0xc]
// 005dcf9f  8944240c             mov dword ptr [esp + 0xc], eax
// 005dcfa3  8b01                 mov eax, dword ptr [ecx]
// 005dcfa5  8b4008               mov eax, dword ptr [eax + 8]
// 005dcfa8  52                   push edx
// 005dcfa9  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005dcfad  52                   push edx
// 005dcfae  ffd0                 call eax
// 005dcfb0  5e                   pop esi
// 005dcfb1  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?setRefValue@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@UBEXPAVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
