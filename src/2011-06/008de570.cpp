// roc 2011-06 008de570  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008de570
//
// 008de570  8b442404             mov eax, dword ptr [esp + 4]
// 008de574  56                   push esi
// 008de575  8bf1                 mov esi, ecx
// 008de577  85c0                 test eax, eax
// 008de579  7c2b                 jl 0x8de5a6
// 008de57b  3b4628               cmp eax, dword ptr [esi + 0x28]
// 008de57e  7d26                 jge 0x8de5a6
// 008de580  3b4628               cmp eax, dword ptr [esi + 0x28]
// 008de583  8d4e20               lea ecx, [esi + 0x20]
// 008de586  7d22                 jge 0x8de5aa
// 008de588  8b5104               mov edx, dword ptr [ecx + 4]
// 008de58b  57                   push edi
// 008de58c  8b3c82               mov edi, dword ptr [edx + eax*4]
// 008de58f  6a01                 push 1
// 008de591  50                   push eax
// 008de592  e8e9bcf4ff           call 0x82a280
// 008de597  8bcf                 mov ecx, edi
// 008de599  e83cc0f2ff           call 0x80a5da
// 008de59e  8bce                 mov ecx, esi
// 008de5a0  e89bffffff           call 0x8de540
// 008de5a5  5f                   pop edi
// 008de5a6  5e                   pop esi
// 008de5a7  c20400               ret 4
// 008de5aa  e85bbdf2ff           call 0x80a30a
// copied from an identical function in another client (function ?RemoveAt@CXTPPropertyGridInplaceButtons@@QAEXJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp