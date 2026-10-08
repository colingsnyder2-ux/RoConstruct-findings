// roc 2007-08 0049fe30  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049fe30
//
// 0049fe30  56                   push esi
// 0049fe31  6a01                 push 1
// 0049fe33  8bf1                 mov esi, ecx
// 0049fe35  e806fdffff           call 0x49fb40
// 0049fe3a  807c240800           cmp byte ptr [esp + 8], 0
// 0049fe3f  8b06                 mov eax, dword ptr [esi]
// 0049fe41  742d                 je 0x49fe70
// 0049fe43  8bc8                 mov ecx, eax
// 0049fe45  c1f803               sar eax, 3
// 0049fe48  83e107               and ecx, 7
// 0049fe4b  750e                 jne 0x49fe5b
// 0049fe4d  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0049fe50  c6040880             mov byte ptr [eax + ecx], 0x80
// 0049fe54  830601               add dword ptr [esi], 1
// 0049fe57  5e                   pop esi
// 0049fe58  c20400               ret 4
// 0049fe5b  8b560c               mov edx, dword ptr [esi + 0xc]
// 0049fe5e  03c2                 add eax, edx
// 0049fe60  ba80000000           mov edx, 0x80
// 0049fe65  d3fa                 sar edx, cl
// 0049fe67  0810                 or byte ptr [eax], dl
// 0049fe69  830601               add dword ptr [esi], 1
// 0049fe6c  5e                   pop esi
// 0049fe6d  c20400               ret 4
// 0049fe70  a807                 test al, 7
// 0049fe72  750a                 jne 0x49fe7e
// 0049fe74  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0049fe77  c1f803               sar eax, 3
// 0049fe7a  c6040800             mov byte ptr [eax + ecx], 0
// 0049fe7e  830601               add dword ptr [esi], 1
// 0049fe81  5e                   pop esi
// 0049fe82  c20400               ret 4
// library rbxgs-raknet/BitStream.cpp (function ??$Write@_N@BitStream@RakNet@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
