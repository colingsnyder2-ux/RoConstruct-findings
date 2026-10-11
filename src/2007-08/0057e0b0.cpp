// roc 2007-08 0057e0b0  unit: RBX::VWorkspace::?$RefPropDescriptor  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057e0b0
//
// 0057e0b0  8b442408             mov eax, dword ptr [esp + 8]
// 0057e0b4  85c0                 test eax, eax
// 0057e0b6  56                   push esi
// 0057e0b7  8bf1                 mov esi, ecx
// 0057e0b9  740b                 je 0x57e0c6
// 0057e0bb  50                   push eax
// 0057e0bc  e89fffffff           call 0x57e060
// 0057e0c1  83c404               add esp, 4
// 0057e0c4  eb02                 jmp 0x57e0c8
// 0057e0c6  33c0                 xor eax, eax
// 0057e0c8  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0057e0cb  8d54240c             lea edx, [esp + 0xc]
// 0057e0cf  8944240c             mov dword ptr [esp + 0xc], eax
// 0057e0d3  8b01                 mov eax, dword ptr [ecx]
// 0057e0d5  8b4008               mov eax, dword ptr [eax + 8]
// 0057e0d8  52                   push edx
// 0057e0d9  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0057e0dd  52                   push edx
// 0057e0de  ffd0                 call eax
// 0057e0e0  5e                   pop esi
// 0057e0e1  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?setRefValue@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@UBEXPAVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
