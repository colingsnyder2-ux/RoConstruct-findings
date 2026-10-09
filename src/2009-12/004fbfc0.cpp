// roc 2009-12 004fbfc0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004fbfc0
//
// 004fbfc0  56                   push esi
// 004fbfc1  8b742408             mov esi, dword ptr [esp + 8]
// 004fbfc5  57                   push edi
// 004fbfc6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004fbfca  3bf7                 cmp esi, edi
// 004fbfcc  7417                 je 0x4fbfe5
// 004fbfce  8bff                 mov edi, edi
// 004fbfd0  8b0e                 mov ecx, dword ptr [esi]
// 004fbfd2  85c9                 test ecx, ecx
// 004fbfd4  7408                 je 0x4fbfde
// 004fbfd6  8b01                 mov eax, dword ptr [ecx]
// 004fbfd8  8b10                 mov edx, dword ptr [eax]
// 004fbfda  6a01                 push 1
// 004fbfdc  ffd2                 call edx
// 004fbfde  83c604               add esi, 4
// 004fbfe1  3bf7                 cmp esi, edi
// 004fbfe3  75eb                 jne 0x4fbfd0
// 004fbfe5  5f                   pop edi
// 004fbfe6  5e                   pop esi
// 004fbfe7  c20800               ret 8
// library openrbx-client/App\util\RunStateOwner.cpp (function ?_Destroy@?$vector@Vany@boost@@V?$allocator@Vany@boost@@@std@@@std@@IAEXPAVany@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
