// roc 2010-06 0087a8b0  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087a8b0
//
// 0087a8b0  8b442404             mov eax, dword ptr [esp + 4]
// 0087a8b4  56                   push esi
// 0087a8b5  8bf1                 mov esi, ecx
// 0087a8b7  85c0                 test eax, eax
// 0087a8b9  7c2b                 jl 0x87a8e6
// 0087a8bb  3b4628               cmp eax, dword ptr [esi + 0x28]
// 0087a8be  7d26                 jge 0x87a8e6
// 0087a8c0  3b4628               cmp eax, dword ptr [esi + 0x28]
// 0087a8c3  8d4e20               lea ecx, [esi + 0x20]
// 0087a8c6  7d22                 jge 0x87a8ea
// 0087a8c8  8b5104               mov edx, dword ptr [ecx + 4]
// 0087a8cb  57                   push edi
// 0087a8cc  8b3c82               mov edi, dword ptr [edx + eax*4]
// 0087a8cf  6a01                 push 1
// 0087a8d1  50                   push eax
// 0087a8d2  e869e1f3ff           call 0x7b8a40
// 0087a8d7  8bcf                 mov ecx, edi
// 0087a8d9  e83ed6f2ff           call 0x7a7f1c
// 0087a8de  8bce                 mov ecx, esi
// 0087a8e0  e89bffffff           call 0x87a880
// 0087a8e5  5f                   pop edi
// 0087a8e6  5e                   pop esi
// 0087a8e7  c20400               ret 4
// 0087a8ea  e85dd3f2ff           call 0x7a7c4c
// copied from an identical function in another client (function ?RemoveAt@CXTPPropertyGridInplaceButtons@@QAEXJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp