// from server: 100% by auto
// roc 2008-06 006d1110  unit: CXTPReportControl  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d1110
//
// 006d1110  83ec1c               sub esp, 0x1c
// 006d1113  8b542424             mov edx, dword ptr [esp + 0x24]
// 006d1117  33c0                 xor eax, eax
// 006d1119  56                   push esi
// 006d111a  8b742424             mov esi, dword ptr [esp + 0x24]
// 006d111e  89442414             mov dword ptr [esp + 0x14], eax
// 006d1122  89442410             mov dword ptr [esp + 0x10], eax
// 006d1126  89442418             mov dword ptr [esp + 0x18], eax
// 006d112a  8944241c             mov dword ptr [esp + 0x1c], eax
// 006d112e  89442404             mov dword ptr [esp + 4], eax
// 006d1132  89442408             mov dword ptr [esp + 8], eax
// 006d1136  8944240c             mov dword ptr [esp + 0xc], eax
// 006d113a  8b06                 mov eax, dword ptr [esi]
// 006d113c  89542414             mov dword ptr [esp + 0x14], edx
// 006d1140  8d542404             lea edx, [esp + 4]
// 006d1144  89442410             mov dword ptr [esp + 0x10], eax
// 006d1148  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006d114c  52                   push edx
// 006d114d  6abb                 push -0x45
// 006d114f  89442420             mov dword ptr [esp + 0x20], eax
// 006d1153  c744242400000000     mov dword ptr [esp + 0x24], 0
// 006d115b  e8c0ebffff           call 0x6cfd20
// 006d1160  8b442410             mov eax, dword ptr [esp + 0x10]
// 006d1164  8906                 mov dword ptr [esi], eax
// 006d1166  33c0                 xor eax, eax
// 006d1168  3944241c             cmp dword ptr [esp + 0x1c], eax
// 006d116c  5e                   pop esi
// 006d116d  0f94c0               sete al
// 006d1170  83c41c               add esp, 0x1c
// 006d1173  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnPreviewKeyDown@CXTPReportControl@@MAEHAAIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
