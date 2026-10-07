// roc 2011-06 008ee650  unit: CXTPOffice2007Image  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ee650
//
// 008ee650  6aff                 push -1
// 008ee652  682ee7a000           push 0xa0e72e
// 008ee657  64a100000000         mov eax, dword ptr fs:[0]
// 008ee65d  50                   push eax
// 008ee65e  a12058c900           mov eax, dword ptr [0xc95820]
// 008ee663  33c4                 xor eax, esp
// 008ee665  50                   push eax
// 008ee666  8d442404             lea eax, [esp + 4]
// 008ee66a  64a300000000         mov dword ptr fs:[0], eax
// 008ee670  b801000000           mov eax, 1
// 008ee675  84058892d100         test byte ptr [0xd19288], al
// 008ee67b  7525                 jne 0x8ee6a2
// 008ee67d  09058892d100         or dword ptr [0xd19288], eax
// 008ee683  b94092d100           mov ecx, 0xd19240
// 008ee688  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 008ee690  e89bf7ffff           call 0x8ede30
// 008ee695  6840fda300           push 0xa3fd40
// 008ee69a  e8becaf1ff           call 0x80b15d
// 008ee69f  83c404               add esp, 4
// 008ee6a2  b84092d100           mov eax, 0xd19240
// 008ee6a7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008ee6ab  64890d00000000       mov dword ptr fs:[0], ecx
// 008ee6b2  59                   pop ecx
// 008ee6b3  83c40c               add esp, 0xc
// 008ee6b6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
