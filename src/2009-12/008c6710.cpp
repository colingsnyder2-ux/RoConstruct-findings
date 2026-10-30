// roc 2009-12 008c6710  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c6710
//
// 008c6710  8b442404             mov eax, dword ptr [esp + 4]
// 008c6714  56                   push esi
// 008c6715  8bf1                 mov esi, ecx
// 008c6717  85c0                 test eax, eax
// 008c6719  7c2b                 jl 0x8c6746
// 008c671b  3b4628               cmp eax, dword ptr [esi + 0x28]
// 008c671e  7d26                 jge 0x8c6746
// 008c6720  3b4628               cmp eax, dword ptr [esi + 0x28]
// 008c6723  8d4e20               lea ecx, [esi + 0x20]
// 008c6726  7d22                 jge 0x8c674a
// 008c6728  8b5104               mov edx, dword ptr [ecx + 4]
// 008c672b  57                   push edi
// 008c672c  8b3c82               mov edi, dword ptr [edx + eax*4]
// 008c672f  6a01                 push 1
// 008c6731  50                   push eax
// 008c6732  e8496bf6ff           call 0x82d280
// 008c6737  8bcf                 mov ecx, edi
// 008c6739  e89ed6f2ff           call 0x7f3ddc
// 008c673e  8bce                 mov ecx, esi
// 008c6740  e89bffffff           call 0x8c66e0
// 008c6745  5f                   pop edi
// 008c6746  5e                   pop esi
// 008c6747  c20400               ret 4
// 008c674a  e8bdd3f2ff           call 0x7f3b0c
// copied from an identical function in another client (function ?RemoveAt@CXTPPropertyGridInplaceButtons@@QAEXJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp