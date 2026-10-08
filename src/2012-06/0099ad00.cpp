// from server: 100% by auto
// roc 2012-06 0099ad00  unit: IIPAVCXTPImageManagerIcon::?$CMap  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0099ad00
//
// 0099ad00  837c240400           cmp dword ptr [esp + 4], 0
// 0099ad05  56                   push esi
// 0099ad06  8bf1                 mov esi, ecx
// 0099ad08  7408                 je 0x99ad12
// 0099ad0a  8d4e30               lea ecx, [esi + 0x30]
// 0099ad0d  e82efbffff           call 0x99a840
// 0099ad12  8d4e54               lea ecx, [esi + 0x54]
// 0099ad15  e826fbffff           call 0x99a840
// 0099ad1a  8d4e78               lea ecx, [esi + 0x78]
// 0099ad1d  e81efbffff           call 0x99a840
// 0099ad22  8d8e9c000000         lea ecx, [esi + 0x9c]
// 0099ad28  e813fbffff           call 0x99a840
// 0099ad2d  8d8ec0000000         lea ecx, [esi + 0xc0]
// 0099ad33  e808fbffff           call 0x99a840
// 0099ad38  8d8ee4000000         lea ecx, [esi + 0xe4]
// 0099ad3e  e8fdfaffff           call 0x99a840
// 0099ad43  8d8e08010000         lea ecx, [esi + 0x108]
// 0099ad49  e8f2faffff           call 0x99a840
// 0099ad4e  8d8e2c010000         lea ecx, [esi + 0x12c]
// 0099ad54  e8e7faffff           call 0x99a840
// 0099ad59  5e                   pop esi
// 0099ad5a  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?Clear@CXTPImageManagerIcon@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
