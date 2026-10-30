// from server: 100% by auto
// roc 2012-06 0099e6c0  unit: CXTPImageManager  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0099e6c0
//
// 0099e6c0  8b442418             mov eax, dword ptr [esp + 0x18]
// 0099e6c4  8b542414             mov edx, dword ptr [esp + 0x14]
// 0099e6c8  50                   push eax
// 0099e6c9  8b442414             mov eax, dword ptr [esp + 0x14]
// 0099e6cd  52                   push edx
// 0099e6ce  8b542414             mov edx, dword ptr [esp + 0x14]
// 0099e6d2  50                   push eax
// 0099e6d3  8b442414             mov eax, dword ptr [esp + 0x14]
// 0099e6d7  52                   push edx
// 0099e6d8  0fb7542414           movzx edx, word ptr [esp + 0x14]
// 0099e6dd  50                   push eax
// 0099e6de  52                   push edx
// 0099e6df  e82cf8ffff           call 0x99df10
// 0099e6e4  c21800               ret 0x18
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?SetIcons@CXTPImageManager@@QAEHIPAIHVCSize@@W4XTPImageState@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
