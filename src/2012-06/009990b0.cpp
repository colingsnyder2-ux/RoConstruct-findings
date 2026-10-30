// from server: 100% by auto
// roc 2012-06 009990b0  unit: CXTPImageManagerResource::CBitmapDC  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009990b0
//
// 009990b0  e8cbffffff           call 0x999080
// 009990b5  8bc1                 mov eax, ecx
// 009990b7  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ??0CXTPImageManagerIconHandle@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
