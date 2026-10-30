// roc 2012-06 00a56880  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a56880
//
// 00a56880  8b442404             mov eax, dword ptr [esp + 4]
// 00a56884  56                   push esi
// 00a56885  8bf1                 mov esi, ecx
// 00a56887  85c0                 test eax, eax
// 00a56889  7c2b                 jl 0xa568b6
// 00a5688b  3b4628               cmp eax, dword ptr [esi + 0x28]
// 00a5688e  7d26                 jge 0xa568b6
// 00a56890  3b4628               cmp eax, dword ptr [esi + 0x28]
// 00a56893  8d4e20               lea ecx, [esi + 0x20]
// 00a56896  7d22                 jge 0xa568ba
// 00a56898  8b5104               mov edx, dword ptr [ecx + 4]
// 00a5689b  57                   push edi
// 00a5689c  8b3c82               mov edi, dword ptr [edx + eax*4]
// 00a5689f  6a01                 push 1
// 00a568a1  50                   push eax
// 00a568a2  e8c9c8f3ff           call 0x993170
// 00a568a7  8bcf                 mov ecx, edi
// 00a568a9  e8dcbdf2ff           call 0x98268a
// 00a568ae  8bce                 mov ecx, esi
// 00a568b0  e89bffffff           call 0xa56850
// 00a568b5  5f                   pop edi
// 00a568b6  5e                   pop esi
// 00a568b7  c20400               ret 4
// 00a568ba  e801bbf2ff           call 0x9823c0
// copied from an identical function in another client (function ?RemoveAt@CXTPPropertyGridInplaceButtons@@QAEXJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp