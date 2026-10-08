// roc 2009-12 0083c770  unit: CXTPAccessible  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083c770
//
// 0083c770  6aff                 push -1
// 0083c772  68cec79500           push 0x95c7ce
// 0083c777  64a100000000         mov eax, dword ptr fs:[0]
// 0083c77d  50                   push eax
// 0083c77e  a10052b600           mov eax, dword ptr [0xb65200]
// 0083c783  33c4                 xor eax, esp
// 0083c785  50                   push eax
// 0083c786  8d442404             lea eax, [esp + 4]
// 0083c78a  64a300000000         mov dword ptr fs:[0], eax
// 0083c790  b801000000           mov eax, 1
// 0083c795  840544b4b900         test byte ptr [0xb9b444], al
// 0083c79b  7525                 jne 0x83c7c2
// 0083c79d  090544b4b900         or dword ptr [0xb9b444], eax
// 0083c7a3  b90cb4b900           mov ecx, 0xb9b40c
// 0083c7a8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0083c7b0  e8dbfdffff           call 0x83c590
// 0083c7b5  6880a69800           push 0x98a680
// 0083c7ba  e86a81fbff           call 0x7f4929
// 0083c7bf  83c404               add esp, 4
// 0083c7c2  b80cb4b900           mov eax, 0xb9b40c
// 0083c7c7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0083c7cb  64890d00000000       mov dword ptr fs:[0], ecx
// 0083c7d2  59                   pop ecx
// 0083c7d3  83c40c               add esp, 0xc
// 0083c7d6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
