// from server: 100% by auto
// roc 2008-06 006bb250  unit: CXTPImageManagerResource::CBitmapDC  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006bb250
//
// 006bb250  e8cbffffff           call 0x6bb220
// 006bb255  8bc1                 mov eax, ecx
// 006bb257  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ??0CXTPImageManagerIconHandle@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
