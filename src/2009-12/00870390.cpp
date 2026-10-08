// roc 2009-12 00870390  unit: CXTPNewToolbarDlg  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00870390
//
// 00870390  b801000000           mov eax, 1
// 00870395  8405ecbab900         test byte ptr [0xb9baec], al
// 0087039b  751d                 jne 0x8703ba
// 0087039d  0905ecbab900         or dword ptr [0xb9baec], eax
// 008703a3  b9dcbab900           mov ecx, 0xb9badc
// 008703a8  e833ffffff           call 0x8702e0
// 008703ad  6830a79800           push 0x98a730
// 008703b2  e87245f8ff           call 0x7f4929
// 008703b7  83c404               add esp, 4
// 008703ba  b8dcbab900           mov eax, 0xb9badc
// 008703bf  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
