// roc 2011-06 004a9690  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a9690
//
// 004a9690  56                   push esi
// 004a9691  8b742408             mov esi, dword ptr [esp + 8]
// 004a9695  57                   push edi
// 004a9696  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004a969a  3bf7                 cmp esi, edi
// 004a969c  7417                 je 0x4a96b5
// 004a969e  8bff                 mov edi, edi
// 004a96a0  8b0e                 mov ecx, dword ptr [esi]
// 004a96a2  85c9                 test ecx, ecx
// 004a96a4  7408                 je 0x4a96ae
// 004a96a6  8b01                 mov eax, dword ptr [ecx]
// 004a96a8  8b10                 mov edx, dword ptr [eax]
// 004a96aa  6a01                 push 1
// 004a96ac  ffd2                 call edx
// 004a96ae  83c604               add esi, 4
// 004a96b1  3bf7                 cmp esi, edi
// 004a96b3  75eb                 jne 0x4a96a0
// 004a96b5  5f                   pop edi
// 004a96b6  5e                   pop esi
// 004a96b7  c20800               ret 8
// library openrbx-client/App\util\RunStateOwner.cpp (function ?_Destroy@?$vector@Vany@boost@@V?$allocator@Vany@boost@@@std@@@std@@IAEXPAVany@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
