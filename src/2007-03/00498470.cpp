// roc 2007-03 00498470  unit: seg_00490000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00498470
//
// 00498470  8b442408             mov eax, dword ptr [esp + 8]
// 00498474  56                   push esi
// 00498475  8b742408             mov esi, dword ptr [esp + 8]
// 00498479  6a01                 push 1
// 0049847b  6a20                 push 0x20
// 0049847d  50                   push eax
// 0049847e  8bce                 mov ecx, esi
// 00498480  e8ebf4ffff           call 0x497970
// 00498485  8bc6                 mov eax, esi
// 00498487  5e                   pop esi
// 00498488  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??5Network@RBX@@YAAAVBitStream@RakNet@@AAV23@AAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
