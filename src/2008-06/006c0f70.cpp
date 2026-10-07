// roc 2008-06 006c0f70  unit: CXTPImageManager  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c0f70
//
// 006c0f70  8b442408             mov eax, dword ptr [esp + 8]
// 006c0f74  50                   push eax
// 006c0f75  8b442408             mov eax, dword ptr [esp + 8]
// 006c0f79  50                   push eax
// 006c0f7a  50                   push eax
// 006c0f7b  e870ffffff           call 0x6c0ef0
// 006c0f80  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?SetIcons@CXTPImageManager@@QAEHIW4XTPImageState@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
