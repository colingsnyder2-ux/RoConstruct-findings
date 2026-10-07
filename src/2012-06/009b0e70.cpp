// roc 2012-06 009b0e70  unit: CXTPReportControl  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b0e70
//
// 009b0e70  83ec1c               sub esp, 0x1c
// 009b0e73  8b542424             mov edx, dword ptr [esp + 0x24]
// 009b0e77  33c0                 xor eax, eax
// 009b0e79  56                   push esi
// 009b0e7a  8b742424             mov esi, dword ptr [esp + 0x24]
// 009b0e7e  89442414             mov dword ptr [esp + 0x14], eax
// 009b0e82  89442410             mov dword ptr [esp + 0x10], eax
// 009b0e86  89442418             mov dword ptr [esp + 0x18], eax
// 009b0e8a  8944241c             mov dword ptr [esp + 0x1c], eax
// 009b0e8e  89442404             mov dword ptr [esp + 4], eax
// 009b0e92  89442408             mov dword ptr [esp + 8], eax
// 009b0e96  8944240c             mov dword ptr [esp + 0xc], eax
// 009b0e9a  8b06                 mov eax, dword ptr [esi]
// 009b0e9c  89542414             mov dword ptr [esp + 0x14], edx
// 009b0ea0  8d542404             lea edx, [esp + 4]
// 009b0ea4  89442410             mov dword ptr [esp + 0x10], eax
// 009b0ea8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 009b0eac  52                   push edx
// 009b0ead  6abb                 push -0x45
// 009b0eaf  89442420             mov dword ptr [esp + 0x20], eax
// 009b0eb3  c744242400000000     mov dword ptr [esp + 0x24], 0
// 009b0ebb  e8b0ebffff           call 0x9afa70
// 009b0ec0  8b442410             mov eax, dword ptr [esp + 0x10]
// 009b0ec4  8906                 mov dword ptr [esi], eax
// 009b0ec6  33c0                 xor eax, eax
// 009b0ec8  3944241c             cmp dword ptr [esp + 0x1c], eax
// 009b0ecc  5e                   pop esi
// 009b0ecd  0f94c0               sete al
// 009b0ed0  83c41c               add esp, 0x1c
// 009b0ed3  c20c00               ret 0xc
// library xtp-15.2.1/Source\ReportControl\XTPReportControl.cpp (function ?OnPreviewKeyDown@CXTPReportControl@@MAEHAAIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportControl.cpp
