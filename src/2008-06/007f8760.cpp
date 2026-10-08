// from server: 100% by auto
// roc 2008-06 007f8760  unit: seg_007f0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f8760
//
// 007f8760  b9a0d39700           mov ecx, 0x97d3a0
// 007f8765  e866fbc7ff           call 0x4782d0
// 007f876a  68700a8000           push 0x800a70
// 007f876f  e83b90eaff           call 0x6a17af
// 007f8774  59                   pop ecx
// 007f8775  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
