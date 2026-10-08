// from server: 100% by auto
// roc 2008-06 00718890  unit: CXTPPropertyGridItemEnum  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00718890
//
// 00718890  b801000000           mov eax, 1
// 00718895  840574ed9700         test byte ptr [0x97ed74], al
// 0071889b  7510                 jne 0x7188ad
// 0071889d  090574ed9700         or dword ptr [0x97ed74], eax
// 007188a3  b964ed9700           mov ecx, 0x97ed64
// 007188a8  e8c3ffffff           call 0x718870
// 007188ad  b864ed9700           mov eax, 0x97ed64
// 007188b2  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?box@Shape@G3D@@UAEAAVBox@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
