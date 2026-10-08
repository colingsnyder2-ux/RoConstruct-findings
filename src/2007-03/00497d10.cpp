// roc 2007-03 00497d10  unit: seg_00490000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00497d10
//
// 00497d10  56                   push esi
// 00497d11  6a01                 push 1
// 00497d13  8bf1                 mov esi, ecx
// 00497d15  e816feffff           call 0x497b30
// 00497d1a  8b06                 mov eax, dword ptr [esi]
// 00497d1c  8bc8                 mov ecx, eax
// 00497d1e  c1f803               sar eax, 3
// 00497d21  83e107               and ecx, 7
// 00497d24  750c                 jne 0x497d32
// 00497d26  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00497d29  c6040880             mov byte ptr [eax + ecx], 0x80
// 00497d2d  830601               add dword ptr [esi], 1
// 00497d30  5e                   pop esi
// 00497d31  c3                   ret 
// 00497d32  8b560c               mov edx, dword ptr [esi + 0xc]
// 00497d35  03c2                 add eax, edx
// 00497d37  ba80000000           mov edx, 0x80
// 00497d3c  d3fa                 sar edx, cl
// 00497d3e  0810                 or byte ptr [eax], dl
// 00497d40  830601               add dword ptr [esi], 1
// 00497d43  5e                   pop esi
// 00497d44  c3                   ret 
// library rbxgs-raknet/BitStream.cpp (function ?Write1@BitStream@RakNet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
