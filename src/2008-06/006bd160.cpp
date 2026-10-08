// from server: 100% by auto
// roc 2008-06 006bd160  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006bd160
//
// 006bd160  56                   push esi
// 006bd161  8bf1                 mov esi, ecx
// 006bd163  8d4e54               lea ecx, [esi + 0x54]
// 006bd166  e8d5faffff           call 0x6bcc40
// 006bd16b  8d4e78               lea ecx, [esi + 0x78]
// 006bd16e  e8cdfaffff           call 0x6bcc40
// 006bd173  8d8e2c010000         lea ecx, [esi + 0x12c]
// 006bd179  5e                   pop esi
// 006bd17a  e9c1faffff           jmp 0x6bcc40
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?Refresh@CXTPImageManagerIcon@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
