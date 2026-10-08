// from server: 100% by auto
// roc 2012-06 00af0710  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af0710
//
// 00af0710  b9805fe200           mov ecx, 0xe25f80
// 00af0715  e81672adff           call 0x5c7930
// 00af071a  68e04ab100           push 0xb14ae0
// 00af071f  e8d12ae9ff           call 0x9831f5
// 00af0724  59                   pop ecx
// 00af0725  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
