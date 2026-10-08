// roc 2011-06 004f0390  unit: RBX::RbxRay  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f0390
//
// 004f0390  807c240800           cmp byte ptr [esp + 8], 0
// 004f0395  56                   push esi
// 004f0396  8b742408             mov esi, dword ptr [esp + 8]
// 004f039a  8bce                 mov ecx, esi
// 004f039c  7409                 je 0x4f03a7
// 004f039e  e8edcbffff           call 0x4ecf90
// 004f03a3  8bc6                 mov eax, esi
// 004f03a5  5e                   pop esi
// 004f03a6  c3                   ret 
// 004f03a7  e8c4cbffff           call 0x4ecf70
// 004f03ac  8bc6                 mov eax, esi
// 004f03ae  5e                   pop esi
// 004f03af  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??6Network@RBX@@YAAAVBitStream@RakNet@@AAV23@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
