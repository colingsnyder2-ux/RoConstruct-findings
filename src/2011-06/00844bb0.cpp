// roc 2011-06 00844bb0  unit: CXTPReportSelectedRows  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00844bb0
//
// 00844bb0  8b442404             mov eax, dword ptr [esp + 4]
// 00844bb4  83f83e               cmp eax, 0x3e
// 00844bb7  7718                 ja 0x844bd1
// 00844bb9  8b948168020000       mov edx, dword ptr [ecx + eax*4 + 0x268]
// 00844bc0  83faff               cmp edx, -1
// 00844bc3  750a                 jne 0x844bcf
// 00844bc5  8b84816c010000       mov eax, dword ptr [ecx + eax*4 + 0x16c]
// 00844bcc  c20400               ret 4
// 00844bcf  8bc2                 mov eax, edx
// 00844bd1  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPColorManager.cpp (function ?GetColor@CXTPColorManager@@QBEKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPColorManager.cpp
