// from server: 100% by auto
// roc 2011-06 00822800  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00822800
//
// 00822800  837c240400           cmp dword ptr [esp + 4], 0
// 00822805  56                   push esi
// 00822806  8bf1                 mov esi, ecx
// 00822808  7408                 je 0x822812
// 0082280a  8d4e30               lea ecx, [esi + 0x30]
// 0082280d  e82efbffff           call 0x822340
// 00822812  8d4e54               lea ecx, [esi + 0x54]
// 00822815  e826fbffff           call 0x822340
// 0082281a  8d4e78               lea ecx, [esi + 0x78]
// 0082281d  e81efbffff           call 0x822340
// 00822822  8d8e9c000000         lea ecx, [esi + 0x9c]
// 00822828  e813fbffff           call 0x822340
// 0082282d  8d8ec0000000         lea ecx, [esi + 0xc0]
// 00822833  e808fbffff           call 0x822340
// 00822838  8d8ee4000000         lea ecx, [esi + 0xe4]
// 0082283e  e8fdfaffff           call 0x822340
// 00822843  8d8e08010000         lea ecx, [esi + 0x108]
// 00822849  e8f2faffff           call 0x822340
// 0082284e  8d8e2c010000         lea ecx, [esi + 0x12c]
// 00822854  e8e7faffff           call 0x822340
// 00822859  5e                   pop esi
// 0082285a  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?Clear@CXTPImageManagerIcon@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
