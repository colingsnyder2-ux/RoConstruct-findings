// roc 2008-06 004a34e0  unit: RBX::Network::Server::ClientProxy  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a34e0
//
// 004a34e0  6aff                 push -1
// 004a34e2  68802b7d00           push 0x7d2b80
// 004a34e7  64a100000000         mov eax, dword ptr fs:[0]
// 004a34ed  50                   push eax
// 004a34ee  64892500000000       mov dword ptr fs:[0], esp
// 004a34f5  51                   push ecx
// 004a34f6  56                   push esi
// 004a34f7  8bf1                 mov esi, ecx
// 004a34f9  89742404             mov dword ptr [esp + 4], esi
// 004a34fd  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 004a3500  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004a3508  85c9                 test ecx, ecx
// 004a350a  7408                 je 0x4a3514
// 004a350c  8b01                 mov eax, dword ptr [ecx]
// 004a350e  8b10                 mov edx, dword ptr [eax]
// 004a3510  6a01                 push 1
// 004a3512  ffd2                 call edx
// 004a3514  8d4e18               lea ecx, [esi + 0x18]
// 004a3517  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004a351f  e8bc64f7ff           call 0x4199e0
// 004a3524  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a3528  c70630b78000         mov dword ptr [esi], 0x80b730
// 004a352e  5e                   pop esi
// 004a352f  64890d00000000       mov dword ptr fs:[0], ecx
// 004a3536  83c410               add esp, 0x10
// 004a3539  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??1?$BoundFuncDesc@VLighting@RBX@@$$A6AXN@Z$00@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
