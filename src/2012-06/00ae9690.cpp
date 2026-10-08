// from server: 100% by auto
// roc 2012-06 00ae9690  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9690
//
// 00ae9690  b9b464e100           mov ecx, 0xe164b4
// 00ae9695  e8f6fd91ff           call 0x409490
// 00ae969a  680015b100           push 0xb11500
// 00ae969f  e8519be9ff           call 0x9831f5
// 00ae96a4  59                   pop ecx
// 00ae96a5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
