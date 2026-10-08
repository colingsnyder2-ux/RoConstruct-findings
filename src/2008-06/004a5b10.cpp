// roc 2008-06 004a5b10  unit: RBX::VHint::?$FactoryProduct::Creator  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a5b10
//
// 004a5b10  807c240800           cmp byte ptr [esp + 8], 0
// 004a5b15  56                   push esi
// 004a5b16  8b742408             mov esi, dword ptr [esp + 8]
// 004a5b1a  8bce                 mov ecx, esi
// 004a5b1c  7409                 je 0x4a5b27
// 004a5b1e  e83dfaffff           call 0x4a5560
// 004a5b23  8bc6                 mov eax, esi
// 004a5b25  5e                   pop esi
// 004a5b26  c3                   ret 
// 004a5b27  e814faffff           call 0x4a5540
// 004a5b2c  8bc6                 mov eax, esi
// 004a5b2e  5e                   pop esi
// 004a5b2f  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??6Network@RBX@@YAAAVBitStream@RakNet@@AAV23@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
