// from server: 100% by auto
// roc 2008-06 006bd100  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006bd100
//
// 006bd100  837c240400           cmp dword ptr [esp + 4], 0
// 006bd105  56                   push esi
// 006bd106  8bf1                 mov esi, ecx
// 006bd108  7408                 je 0x6bd112
// 006bd10a  8d4e30               lea ecx, [esi + 0x30]
// 006bd10d  e82efbffff           call 0x6bcc40
// 006bd112  8d4e54               lea ecx, [esi + 0x54]
// 006bd115  e826fbffff           call 0x6bcc40
// 006bd11a  8d4e78               lea ecx, [esi + 0x78]
// 006bd11d  e81efbffff           call 0x6bcc40
// 006bd122  8d8e9c000000         lea ecx, [esi + 0x9c]
// 006bd128  e813fbffff           call 0x6bcc40
// 006bd12d  8d8ec0000000         lea ecx, [esi + 0xc0]
// 006bd133  e808fbffff           call 0x6bcc40
// 006bd138  8d8ee4000000         lea ecx, [esi + 0xe4]
// 006bd13e  e8fdfaffff           call 0x6bcc40
// 006bd143  8d8e08010000         lea ecx, [esi + 0x108]
// 006bd149  e8f2faffff           call 0x6bcc40
// 006bd14e  8d8e2c010000         lea ecx, [esi + 0x12c]
// 006bd154  e8e7faffff           call 0x6bcc40
// 006bd159  5e                   pop esi
// 006bd15a  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?Clear@CXTPImageManagerIcon@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
