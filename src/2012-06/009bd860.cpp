// roc 2012-06 009bd860  unit: CXTPColorManager  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bd860
//
// 009bd860  6aff                 push -1
// 009bd862  689ef1ad00           push 0xadf19e
// 009bd867  64a100000000         mov eax, dword ptr fs:[0]
// 009bd86d  50                   push eax
// 009bd86e  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009bd873  33c4                 xor eax, esp
// 009bd875  50                   push eax
// 009bd876  8d442404             lea eax, [esp + 4]
// 009bd87a  64a300000000         mov dword ptr fs:[0], eax
// 009bd880  b801000000           mov eax, 1
// 009bd885  8405ec98e500         test byte ptr [0xe598ec], al
// 009bd88b  7525                 jne 0x9bd8b2
// 009bd88d  0905ec98e500         or dword ptr [0xe598ec], eax
// 009bd893  b98094e500           mov ecx, 0xe59480
// 009bd898  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 009bd8a0  e8ebf4ffff           call 0x9bcd90
// 009bd8a5  680017b200           push 0xb21700
// 009bd8aa  e84659fcff           call 0x9831f5
// 009bd8af  83c404               add esp, 4
// 009bd8b2  b88094e500           mov eax, 0xe59480
// 009bd8b7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009bd8bb  64890d00000000       mov dword ptr fs:[0], ecx
// 009bd8c2  59                   pop ecx
// 009bd8c3  83c40c               add esp, 0xc
// 009bd8c6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
