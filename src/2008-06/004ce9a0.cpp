// roc 2008-06 004ce9a0  unit: RBX::Network::PhysicsSender  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ce9a0
//
// 004ce9a0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ce9a4  8b442404             mov eax, dword ptr [esp + 4]
// 004ce9a8  8b11                 mov edx, dword ptr [ecx]
// 004ce9aa  8b00                 mov eax, dword ptr [eax]
// 004ce9ac  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 004ce9af  3bc1                 cmp eax, ecx
// 004ce9b1  7304                 jae 0x4ce9b7
// 004ce9b3  83c8ff               or eax, 0xffffffff
// 004ce9b6  c3                   ret 
// 004ce9b7  33d2                 xor edx, edx
// 004ce9b9  3bc1                 cmp eax, ecx
// 004ce9bb  0f95c2               setne dl
// 004ce9be  8bc2                 mov eax, edx
// 004ce9c0  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?SplitPacketIndexComp@@YAHABIABQAUInternalPacket@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
