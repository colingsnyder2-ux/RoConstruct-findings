// roc 2007-08 0064e040  unit: CXTPImageManager  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064e040
//
// 0064e040  8b442418             mov eax, dword ptr [esp + 0x18]
// 0064e044  8b542414             mov edx, dword ptr [esp + 0x14]
// 0064e048  50                   push eax
// 0064e049  8b442414             mov eax, dword ptr [esp + 0x14]
// 0064e04d  52                   push edx
// 0064e04e  8b542414             mov edx, dword ptr [esp + 0x14]
// 0064e052  50                   push eax
// 0064e053  8b442414             mov eax, dword ptr [esp + 0x14]
// 0064e057  52                   push edx
// 0064e058  0fb7542414           movzx edx, word ptr [esp + 0x14]
// 0064e05d  50                   push eax
// 0064e05e  52                   push edx
// 0064e05f  e89cf7ffff           call 0x64d800
// 0064e064  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\Common\XTPImageManager.cpp (function ?SetIcons@CXTPImageManager@@QAEHIPAIHVCSize@@W4XTPImageState@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPImageManager.cpp
