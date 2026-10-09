// roc 2007-03 005b5cd0  unit: seg_005b0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b5cd0
//
// 005b5cd0  8b442404             mov eax, dword ptr [esp + 4]
// 005b5cd4  56                   push esi
// 005b5cd5  6a00                 push 0
// 005b5cd7  68a0778900           push 0x8977a0
// 005b5cdc  6864108800           push 0x881064
// 005b5ce1  6a00                 push 0
// 005b5ce3  50                   push eax
// 005b5ce4  e8dd940600           call 0x61f1c6
// 005b5ce9  8bf0                 mov esi, eax
// 005b5ceb  83c414               add esp, 0x14
// 005b5cee  85f6                 test esi, esi
// 005b5cf0  7412                 je 0x5b5d04
// 005b5cf2  8b16                 mov edx, dword ptr [esi]
// 005b5cf4  8b4248               mov eax, dword ptr [edx + 0x48]
// 005b5cf7  8bce                 mov ecx, esi
// 005b5cf9  ffd0                 call eax
// 005b5cfb  8b16                 mov edx, dword ptr [esi]
// 005b5cfd  8b424c               mov eax, dword ptr [edx + 0x4c]
// 005b5d00  8bce                 mov ecx, esi
// 005b5d02  ffd0                 call eax
// 005b5d04  5e                   pop esi
// 005b5d05  c20400               ret 4
// library openrbx-client/App\v8datamodel\PVInstance.cpp (function ?onChildAdded@PVInstance@RBX@@MAEXPAVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PVInstance.cpp
