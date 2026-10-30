// roc 2009-06 007ebb70  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ebb70
//
// 007ebb70  8b442404             mov eax, dword ptr [esp + 4]
// 007ebb74  56                   push esi
// 007ebb75  8bf1                 mov esi, ecx
// 007ebb77  85c0                 test eax, eax
// 007ebb79  7c2b                 jl 0x7ebba6
// 007ebb7b  3b4628               cmp eax, dword ptr [esi + 0x28]
// 007ebb7e  7d26                 jge 0x7ebba6
// 007ebb80  3b4628               cmp eax, dword ptr [esi + 0x28]
// 007ebb83  8d4e20               lea ecx, [esi + 0x20]
// 007ebb86  7d22                 jge 0x7ebbaa
// 007ebb88  8b5104               mov edx, dword ptr [ecx + 4]
// 007ebb8b  57                   push edi
// 007ebb8c  8b3c82               mov edi, dword ptr [edx + eax*4]
// 007ebb8f  6a01                 push 1
// 007ebb91  50                   push eax
// 007ebb92  e8c96af6ff           call 0x752660
// 007ebb97  8bcf                 mov ecx, edi
// 007ebb99  e80ad4f2ff           call 0x718fa8
// 007ebb9e  8bce                 mov ecx, esi
// 007ebba0  e89bffffff           call 0x7ebb40
// 007ebba5  5f                   pop edi
// 007ebba6  5e                   pop esi
// 007ebba7  c20400               ret 4
// 007ebbaa  e835d1f2ff           call 0x718ce4
// copied from an identical function in another client (function ?RemoveAt@CXTPPropertyGridInplaceButtons@@QAEXJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp