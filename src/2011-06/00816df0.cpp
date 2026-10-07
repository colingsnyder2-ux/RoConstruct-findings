// roc 2011-06 00816df0  unit: CXTPControlComboBoxList  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00816df0
//
// 00816df0  6aff                 push -1
// 00816df2  680e29a000           push 0xa0290e
// 00816df7  64a100000000         mov eax, dword ptr fs:[0]
// 00816dfd  50                   push eax
// 00816dfe  a12058c900           mov eax, dword ptr [0xc95820]
// 00816e03  33c4                 xor eax, esp
// 00816e05  50                   push eax
// 00816e06  8d442404             lea eax, [esp + 4]
// 00816e0a  64a300000000         mov dword ptr fs:[0], eax
// 00816e10  b801000000           mov eax, 1
// 00816e15  8405b881d100         test byte ptr [0xd181b8], al
// 00816e1b  7525                 jne 0x816e42
// 00816e1d  0905b881d100         or dword ptr [0xd181b8], eax
// 00816e23  b9ac81d100           mov ecx, 0xd181ac
// 00816e28  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00816e30  e82bf2ffff           call 0x816060
// 00816e35  68b0faa300           push 0xa3fab0
// 00816e3a  e81e43ffff           call 0x80b15d
// 00816e3f  83c404               add esp, 4
// 00816e42  b8ac81d100           mov eax, 0xd181ac
// 00816e47  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00816e4b  64890d00000000       mov dword ptr fs:[0], ecx
// 00816e52  59                   pop ecx
// 00816e53  83c40c               add esp, 0xc
// 00816e56  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
