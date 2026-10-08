// roc 2007-08 0049fcf0  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049fcf0
//
// 0049fcf0  56                   push esi
// 0049fcf1  6a01                 push 1
// 0049fcf3  8bf1                 mov esi, ecx
// 0049fcf5  e846feffff           call 0x49fb40
// 0049fcfa  8b06                 mov eax, dword ptr [esi]
// 0049fcfc  8bc8                 mov ecx, eax
// 0049fcfe  c1f803               sar eax, 3
// 0049fd01  83e107               and ecx, 7
// 0049fd04  750c                 jne 0x49fd12
// 0049fd06  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0049fd09  c6040880             mov byte ptr [eax + ecx], 0x80
// 0049fd0d  830601               add dword ptr [esi], 1
// 0049fd10  5e                   pop esi
// 0049fd11  c3                   ret 
// 0049fd12  8b560c               mov edx, dword ptr [esi + 0xc]
// 0049fd15  03c2                 add eax, edx
// 0049fd17  ba80000000           mov edx, 0x80
// 0049fd1c  d3fa                 sar edx, cl
// 0049fd1e  0810                 or byte ptr [eax], dl
// 0049fd20  830601               add dword ptr [esi], 1
// 0049fd23  5e                   pop esi
// 0049fd24  c3                   ret 
// library rbxgs-raknet/BitStream.cpp (function ?Write1@BitStream@RakNet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
