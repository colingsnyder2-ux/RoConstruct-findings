// from server: 100% by auto
// roc 2009-06 0084b130  unit: G3D::VMeshDirectedEdgeKey::?$Table  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0084b130
//
// 0084b130  6890ae4900           push 0x49ae90
// 0084b135  6800800000           push 0x8000
// 0084b13a  6a0c                 push 0xc
// 0084b13c  51                   push ecx
// 0084b13d  e834eaecff           call 0x719b76
// 0084b142  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??1Welder@_internal@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
