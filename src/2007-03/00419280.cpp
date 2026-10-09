// roc 2007-03 00419280  unit: seg_00410000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00419280
//
// 00419280  56                   push esi
// 00419281  8b742408             mov esi, dword ptr [esp + 8]
// 00419285  57                   push edi
// 00419286  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0041928a  3bf7                 cmp esi, edi
// 0041928c  7417                 je 0x4192a5
// 0041928e  8bff                 mov edi, edi
// 00419290  8b0e                 mov ecx, dword ptr [esi]
// 00419292  85c9                 test ecx, ecx
// 00419294  7408                 je 0x41929e
// 00419296  8b01                 mov eax, dword ptr [ecx]
// 00419298  8b10                 mov edx, dword ptr [eax]
// 0041929a  6a01                 push 1
// 0041929c  ffd2                 call edx
// 0041929e  83c604               add esi, 4
// 004192a1  3bf7                 cmp esi, edi
// 004192a3  75eb                 jne 0x419290
// 004192a5  5f                   pop edi
// 004192a6  5e                   pop esi
// 004192a7  c20800               ret 8
// library openrbx-client/App\util\RunStateOwner.cpp (function ?_Destroy@?$vector@Vany@boost@@V?$allocator@Vany@boost@@@std@@@std@@IAEXPAVany@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
