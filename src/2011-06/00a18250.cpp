// roc 2011-06 00a18250  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a18250
//
// 00a18250  b94c64cb00           mov ecx, 0xcb644c
// 00a18255  e8566ba9ff           call 0x4aedb0
// 00a1825a  68402ba300           push 0xa32b40
// 00a1825f  e8f92edfff           call 0x80b15d
// 00a18264  59                   pop ecx
// 00a18265  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
