// from server: 100% by auto
// roc 2011-06 00820a60  unit: CXTPImageManagerResource::CBitmapDC  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00820a60
//
// 00820a60  e8cbffffff           call 0x820a30
// 00820a65  8bc1                 mov eax, ecx
// 00820a67  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ??0CXTPImageManagerIconHandle@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
