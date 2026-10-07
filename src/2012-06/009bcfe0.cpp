// roc 2012-06 009bcfe0  unit: CXTPReportSelectedRows  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bcfe0
//
// 009bcfe0  8b442404             mov eax, dword ptr [esp + 4]
// 009bcfe4  83f83e               cmp eax, 0x3e
// 009bcfe7  7718                 ja 0x9bd001
// 009bcfe9  8b948168020000       mov edx, dword ptr [ecx + eax*4 + 0x268]
// 009bcff0  83faff               cmp edx, -1
// 009bcff3  750a                 jne 0x9bcfff
// 009bcff5  8b84816c010000       mov eax, dword ptr [ecx + eax*4 + 0x16c]
// 009bcffc  c20400               ret 4
// 009bcfff  8bc2                 mov eax, edx
// 009bd001  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPColorManager.cpp (function ?GetColor@CXTPColorManager@@QBEKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPColorManager.cpp
