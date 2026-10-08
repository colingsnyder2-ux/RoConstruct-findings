// roc 2007-08 0049fcd0  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049fcd0
//
// 0049fcd0  56                   push esi
// 0049fcd1  6a01                 push 1
// 0049fcd3  8bf1                 mov esi, ecx
// 0049fcd5  e866feffff           call 0x49fb40
// 0049fcda  8b06                 mov eax, dword ptr [esi]
// 0049fcdc  a807                 test al, 7
// 0049fcde  750a                 jne 0x49fcea
// 0049fce0  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0049fce3  c1f803               sar eax, 3
// 0049fce6  c6040800             mov byte ptr [eax + ecx], 0
// 0049fcea  830601               add dword ptr [esi], 1
// 0049fced  5e                   pop esi
// 0049fcee  c3                   ret 
// library rbxgs-raknet/BitStream.cpp (function ?Write0@BitStream@RakNet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
