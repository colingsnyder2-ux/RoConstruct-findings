// roc 2011-06 00826090  unit: CXTPImageManager  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00826090
//
// 00826090  8b442418             mov eax, dword ptr [esp + 0x18]
// 00826094  8b542414             mov edx, dword ptr [esp + 0x14]
// 00826098  50                   push eax
// 00826099  8b442414             mov eax, dword ptr [esp + 0x14]
// 0082609d  52                   push edx
// 0082609e  8b542414             mov edx, dword ptr [esp + 0x14]
// 008260a2  50                   push eax
// 008260a3  8b442414             mov eax, dword ptr [esp + 0x14]
// 008260a7  52                   push edx
// 008260a8  0fb7542414           movzx edx, word ptr [esp + 0x14]
// 008260ad  50                   push eax
// 008260ae  52                   push edx
// 008260af  e8ecf8ffff           call 0x8259a0
// 008260b4  c21800               ret 0x18
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?SetIcons@CXTPImageManager@@QAEHIPAIHVCSize@@W4XTPImageState@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
