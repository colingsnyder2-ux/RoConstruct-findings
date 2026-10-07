// roc 2008-06 006c0bd0  unit: CXTPImageManager  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c0bd0
//
// 006c0bd0  8b442418             mov eax, dword ptr [esp + 0x18]
// 006c0bd4  8b542414             mov edx, dword ptr [esp + 0x14]
// 006c0bd8  50                   push eax
// 006c0bd9  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c0bdd  52                   push edx
// 006c0bde  8b542414             mov edx, dword ptr [esp + 0x14]
// 006c0be2  50                   push eax
// 006c0be3  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c0be7  52                   push edx
// 006c0be8  0fb7542414           movzx edx, word ptr [esp + 0x14]
// 006c0bed  50                   push eax
// 006c0bee  52                   push edx
// 006c0bef  e8acf7ffff           call 0x6c03a0
// 006c0bf4  c21800               ret 0x18
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?SetIcons@CXTPImageManager@@QAEHIPAIHVCSize@@W4XTPImageState@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
