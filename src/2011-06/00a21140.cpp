// roc 2011-06 00a21140  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a21140
//
// 00a21140  b9e4a7cc00           mov ecx, 0xcca7e4
// 00a21145  e8268fbbff           call 0x5da070
// 00a2114a  685084a300           push 0xa38450
// 00a2114f  e809a0deff           call 0x80b15d
// 00a21154  59                   pop ecx
// 00a21155  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
