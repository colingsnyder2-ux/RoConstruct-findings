// roc 2011-06 00822860  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00822860
//
// 00822860  56                   push esi
// 00822861  8bf1                 mov esi, ecx
// 00822863  8d4e54               lea ecx, [esi + 0x54]
// 00822866  e8d5faffff           call 0x822340
// 0082286b  8d4e78               lea ecx, [esi + 0x78]
// 0082286e  e8cdfaffff           call 0x822340
// 00822873  8d8e2c010000         lea ecx, [esi + 0x12c]
// 00822879  5e                   pop esi
// 0082287a  e9c1faffff           jmp 0x822340
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?Refresh@CXTPImageManagerIcon@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
