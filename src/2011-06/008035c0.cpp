// roc 2011-06 008035c0  unit: W4_D3DFORMAT::?$EnumDesc  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008035c0
//
// 008035c0  6aff                 push -1
// 008035c2  68fe1ba000           push 0xa01bfe
// 008035c7  64a100000000         mov eax, dword ptr fs:[0]
// 008035cd  50                   push eax
// 008035ce  a12058c900           mov eax, dword ptr [0xc95820]
// 008035d3  33c4                 xor eax, esp
// 008035d5  50                   push eax
// 008035d6  8d442404             lea eax, [esp + 4]
// 008035da  64a300000000         mov dword ptr fs:[0], eax
// 008035e0  b801000000           mov eax, 1
// 008035e5  8405a471d100         test byte ptr [0xd171a4], al
// 008035eb  7525                 jne 0x803612
// 008035ed  0905a471d100         or dword ptr [0xd171a4], eax
// 008035f3  b90071d100           mov ecx, 0xd17100
// 008035f8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00803600  e88b140000           call 0x804a90
// 00803605  6810faa300           push 0xa3fa10
// 0080360a  e84e7b0000           call 0x80b15d
// 0080360f  83c404               add esp, 4
// 00803612  b80071d100           mov eax, 0xd17100
// 00803617  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0080361b  64890d00000000       mov dword ptr fs:[0], ecx
// 00803622  59                   pop ecx
// 00803623  83c40c               add esp, 0xc
// 00803626  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
