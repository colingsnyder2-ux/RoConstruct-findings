// roc 2007-03 004981c0  unit: seg_00490000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004981c0
//
// 004981c0  807c240800           cmp byte ptr [esp + 8], 0
// 004981c5  56                   push esi
// 004981c6  8b742408             mov esi, dword ptr [esp + 8]
// 004981ca  8bce                 mov ecx, esi
// 004981cc  7409                 je 0x4981d7
// 004981ce  e83dfbffff           call 0x497d10
// 004981d3  8bc6                 mov eax, esi
// 004981d5  5e                   pop esi
// 004981d6  c3                   ret 
// 004981d7  e814fbffff           call 0x497cf0
// 004981dc  8bc6                 mov eax, esi
// 004981de  5e                   pop esi
// 004981df  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??6Network@RBX@@YAAAVBitStream@RakNet@@AAV23@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
