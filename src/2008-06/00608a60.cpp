// roc 2008-06 00608a60  unit: RBX::VModelInstance::?$FactoryProduct  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00608a60
//
// 00608a60  8b442404             mov eax, dword ptr [esp + 4]
// 00608a64  56                   push esi
// 00608a65  6a00                 push 0
// 00608a67  681c7f9400           push 0x947f1c
// 00608a6c  687c909200           push 0x92907c
// 00608a71  6a00                 push 0
// 00608a73  50                   push eax
// 00608a74  e84d8d0900           call 0x6a17c6
// 00608a79  8bf0                 mov esi, eax
// 00608a7b  83c414               add esp, 0x14
// 00608a7e  85f6                 test esi, esi
// 00608a80  7412                 je 0x608a94
// 00608a82  8b16                 mov edx, dword ptr [esi]
// 00608a84  8b4248               mov eax, dword ptr [edx + 0x48]
// 00608a87  8bce                 mov ecx, esi
// 00608a89  ffd0                 call eax
// 00608a8b  8b16                 mov edx, dword ptr [esi]
// 00608a8d  8b424c               mov eax, dword ptr [edx + 0x4c]
// 00608a90  8bce                 mov ecx, esi
// 00608a92  ffd0                 call eax
// 00608a94  5e                   pop esi
// 00608a95  c20400               ret 4
// library openrbx-client/App\v8datamodel\PVInstance.cpp (function ?onChildAdded@PVInstance@RBX@@MAEXPAVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PVInstance.cpp
