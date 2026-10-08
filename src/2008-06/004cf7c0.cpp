// roc 2008-06 004cf7c0  unit: RBX::Network::PhysicsSender  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cf7c0
//
// 004cf7c0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004cf7c4  8b11                 mov edx, dword ptr [ecx]
// 004cf7c6  8b4a08               mov ecx, dword ptr [edx + 8]
// 004cf7c9  8b442404             mov eax, dword ptr [esp + 4]
// 004cf7cd  8b11                 mov edx, dword ptr [ecx]
// 004cf7cf  0fb700               movzx eax, word ptr [eax]
// 004cf7d2  0fb74a1c             movzx ecx, word ptr [edx + 0x1c]
// 004cf7d6  663bc1               cmp ax, cx
// 004cf7d9  7304                 jae 0x4cf7df
// 004cf7db  83c8ff               or eax, 0xffffffff
// 004cf7de  c3                   ret 
// 004cf7df  33d2                 xor edx, edx
// 004cf7e1  663bc1               cmp ax, cx
// 004cf7e4  0f95c2               setne dl
// 004cf7e7  8bc2                 mov eax, edx
// 004cf7e9  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?SplitPacketChannelComp@@YAHABGABQAUSplitPacketChannel@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
