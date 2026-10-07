// roc 2011-06 00a24690  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a24690
//
// 00a24690  b98443c500           mov ecx, 0xc54384
// 00a24695  e8a67dbbff           call 0x5dc440
// 00a2469a  6820aaa300           push 0xa3aa20
// 00a2469f  e8b96adeff           call 0x80b15d
// 00a246a4  59                   pop ecx
// 00a246a5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
