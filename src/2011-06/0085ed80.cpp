// roc 2011-06 0085ed80  unit: CXTPCompatibleDC  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085ed80
//
// 0085ed80  b801000000           mov eax, 1
// 0085ed85  8405788ad100         test byte ptr [0xd18a78], al
// 0085ed8b  751d                 jne 0x85edaa
// 0085ed8d  0905788ad100         or dword ptr [0xd18a78], eax
// 0085ed93  b9648ad100           mov ecx, 0xd18a64
// 0085ed98  e853cfffff           call 0x85bcf0
// 0085ed9d  6860fca300           push 0xa3fc60
// 0085eda2  e8b6c3faff           call 0x80b15d
// 0085eda7  83c404               add esp, 4
// 0085edaa  b8648ad100           mov eax, 0xd18a64
// 0085edaf  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
