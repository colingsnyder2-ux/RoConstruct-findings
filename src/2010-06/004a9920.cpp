// roc 2010-06 004a9920  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a9920
//
// 004a9920  56                   push esi
// 004a9921  8b742408             mov esi, dword ptr [esp + 8]
// 004a9925  57                   push edi
// 004a9926  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004a992a  3bf7                 cmp esi, edi
// 004a992c  7417                 je 0x4a9945
// 004a992e  8bff                 mov edi, edi
// 004a9930  8b0e                 mov ecx, dword ptr [esi]
// 004a9932  85c9                 test ecx, ecx
// 004a9934  7408                 je 0x4a993e
// 004a9936  8b01                 mov eax, dword ptr [ecx]
// 004a9938  8b10                 mov edx, dword ptr [eax]
// 004a993a  6a01                 push 1
// 004a993c  ffd2                 call edx
// 004a993e  83c604               add esi, 4
// 004a9941  3bf7                 cmp esi, edi
// 004a9943  75eb                 jne 0x4a9930
// 004a9945  5f                   pop edi
// 004a9946  5e                   pop esi
// 004a9947  c20800               ret 8
// library openrbx-client/App\util\RunStateOwner.cpp (function ?_Destroy@?$vector@Vany@boost@@V?$allocator@Vany@boost@@@std@@@std@@IAEXPAVany@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
