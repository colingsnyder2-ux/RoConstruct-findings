// from server: 100% by auto
// roc 2012-06 0099ad60  unit: IIPAVCXTPImageManagerIcon::?$CMap  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0099ad60
//
// 0099ad60  56                   push esi
// 0099ad61  8bf1                 mov esi, ecx
// 0099ad63  8d4e54               lea ecx, [esi + 0x54]
// 0099ad66  e8d5faffff           call 0x99a840
// 0099ad6b  8d4e78               lea ecx, [esi + 0x78]
// 0099ad6e  e8cdfaffff           call 0x99a840
// 0099ad73  8d8e2c010000         lea ecx, [esi + 0x12c]
// 0099ad79  5e                   pop esi
// 0099ad7a  e9c1faffff           jmp 0x99a840
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?Refresh@CXTPImageManagerIcon@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
