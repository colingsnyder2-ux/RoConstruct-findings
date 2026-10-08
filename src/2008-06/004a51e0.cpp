// roc 2008-06 004a51e0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a51e0
//
// 004a51e0  53                   push ebx
// 004a51e1  56                   push esi
// 004a51e2  8bd1                 mov edx, ecx
// 004a51e4  8b7208               mov esi, dword ptr [edx + 8]
// 004a51e7  8bce                 mov ecx, esi
// 004a51e9  83e107               and ecx, 7
// 004a51ec  bb80000000           mov ebx, 0x80
// 004a51f1  57                   push edi
// 004a51f2  8b7a0c               mov edi, dword ptr [edx + 0xc]
// 004a51f5  8bc6                 mov eax, esi
// 004a51f7  d3fb                 sar ebx, cl
// 004a51f9  c1f803               sar eax, 3
// 004a51fc  841c38               test byte ptr [eax + edi], bl
// 004a51ff  5f                   pop edi
// 004a5200  0f95c0               setne al
// 004a5203  46                   inc esi
// 004a5204  897208               mov dword ptr [edx + 8], esi
// 004a5207  5e                   pop esi
// 004a5208  5b                   pop ebx
// 004a5209  c3                   ret 
// library rbxgs-raknet/BitStream.cpp (function ?ReadBit@BitStream@RakNet@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
