// roc 2009-12 00532300  unit: G3D::Ray  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00532300
//
// 00532300  807c240800           cmp byte ptr [esp + 8], 0
// 00532305  56                   push esi
// 00532306  8b742408             mov esi, dword ptr [esp + 8]
// 0053230a  8bce                 mov ecx, esi
// 0053230c  7409                 je 0x532317
// 0053230e  e88dccffff           call 0x52efa0
// 00532313  8bc6                 mov eax, esi
// 00532315  5e                   pop esi
// 00532316  c3                   ret 
// 00532317  e864ccffff           call 0x52ef80
// 0053231c  8bc6                 mov eax, esi
// 0053231e  5e                   pop esi
// 0053231f  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??6Network@RBX@@YAAAVBitStream@RakNet@@AAV23@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
