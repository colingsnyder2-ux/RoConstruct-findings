// roc 2007-08 0048dba0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048dba0
//
// 0048dba0  8b442408             mov eax, dword ptr [esp + 8]
// 0048dba4  85c0                 test eax, eax
// 0048dba6  56                   push esi
// 0048dba7  8bf1                 mov esi, ecx
// 0048dba9  740b                 je 0x48dbb6
// 0048dbab  50                   push eax
// 0048dbac  e8dffeffff           call 0x48da90
// 0048dbb1  83c404               add esp, 4
// 0048dbb4  eb02                 jmp 0x48dbb8
// 0048dbb6  33c0                 xor eax, eax
// 0048dbb8  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0048dbbb  8d54240c             lea edx, [esp + 0xc]
// 0048dbbf  8944240c             mov dword ptr [esp + 0xc], eax
// 0048dbc3  8b01                 mov eax, dword ptr [ecx]
// 0048dbc5  8b4008               mov eax, dword ptr [eax + 8]
// 0048dbc8  52                   push edx
// 0048dbc9  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0048dbcd  52                   push edx
// 0048dbce  ffd0                 call eax
// 0048dbd0  5e                   pop esi
// 0048dbd1  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?setRefValue@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@UBEXPAVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
