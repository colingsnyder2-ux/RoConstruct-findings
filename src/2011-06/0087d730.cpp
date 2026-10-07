// roc 2011-06 0087d730  unit: CXTPPropertyGridItemEnum  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087d730
//
// 0087d730  b801000000           mov eax, 1
// 0087d735  8405dc8ed100         test byte ptr [0xd18edc], al
// 0087d73b  7510                 jne 0x87d74d
// 0087d73d  0905dc8ed100         or dword ptr [0xd18edc], eax
// 0087d743  b9cc8ed100           mov ecx, 0xd18ecc
// 0087d748  e8c3ffffff           call 0x87d710
// 0087d74d  b8cc8ed100           mov eax, 0xd18ecc
// 0087d752  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?box@Shape@G3D@@UAEAAVBox@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
