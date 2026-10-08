// from server: 100% by auto
// roc 2007-08 0065ca50  unit: CXTPReportControl  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065ca50
//
// 0065ca50  83ec1c               sub esp, 0x1c
// 0065ca53  8b542424             mov edx, dword ptr [esp + 0x24]
// 0065ca57  33c0                 xor eax, eax
// 0065ca59  56                   push esi
// 0065ca5a  8b742424             mov esi, dword ptr [esp + 0x24]
// 0065ca5e  89442414             mov dword ptr [esp + 0x14], eax
// 0065ca62  89442410             mov dword ptr [esp + 0x10], eax
// 0065ca66  89442418             mov dword ptr [esp + 0x18], eax
// 0065ca6a  8944241c             mov dword ptr [esp + 0x1c], eax
// 0065ca6e  89442404             mov dword ptr [esp + 4], eax
// 0065ca72  89442408             mov dword ptr [esp + 8], eax
// 0065ca76  8944240c             mov dword ptr [esp + 0xc], eax
// 0065ca7a  8b06                 mov eax, dword ptr [esi]
// 0065ca7c  89542414             mov dword ptr [esp + 0x14], edx
// 0065ca80  8d542404             lea edx, [esp + 4]
// 0065ca84  89442410             mov dword ptr [esp + 0x10], eax
// 0065ca88  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0065ca8c  52                   push edx
// 0065ca8d  6abb                 push -0x45
// 0065ca8f  89442420             mov dword ptr [esp + 0x20], eax
// 0065ca93  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0065ca9b  e8e0e1ffff           call 0x65ac80
// 0065caa0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0065caa4  8906                 mov dword ptr [esi], eax
// 0065caa6  33c0                 xor eax, eax
// 0065caa8  3944241c             cmp dword ptr [esp + 0x1c], eax
// 0065caac  5e                   pop esi
// 0065caad  0f94c0               sete al
// 0065cab0  83c41c               add esp, 0x1c
// 0065cab3  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?OnPreviewKeyDown@CXTPReportControl@@MAEHAAIII@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
