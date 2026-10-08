// roc 2007-08 004d0480  unit: RBX::View::PartChunk  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d0480
//
// 004d0480  56                   push esi
// 004d0481  8bf1                 mov esi, ecx
// 004d0483  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 004d0489  57                   push edi
// 004d048a  e8f13a0a00           call 0x573f80
// 004d048f  8bd0                 mov edx, eax
// 004d0491  8d461c               lea eax, [esi + 0x1c]
// 004d0494  b909000000           mov ecx, 9
// 004d0499  8bf2                 mov esi, edx
// 004d049b  8bf8                 mov edi, eax
// 004d049d  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004d049f  d94224               fld dword ptr [edx + 0x24]
// 004d04a2  d95824               fstp dword ptr [eax + 0x24]
// 004d04a5  d94228               fld dword ptr [edx + 0x28]
// 004d04a8  d95828               fstp dword ptr [eax + 0x28]
// 004d04ab  d9422c               fld dword ptr [edx + 0x2c]
// 004d04ae  d9582c               fstp dword ptr [eax + 0x2c]
// 004d04b1  5f                   pop edi
// 004d04b2  5e                   pop esi
// 004d04b3  c3                   ret 
// library rbxgs-view/Part.cpp (function ?cframe@PartChunk@View@RBX@@MAEABVCoordinateFrame@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view Part.cpp
