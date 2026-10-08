// from server: 100% by auto
// roc 2012-06 004040e0  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct::Creator  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004040e0
//
// 004040e0  8b442408             mov eax, dword ptr [esp + 8]
// 004040e4  f764240c             mul dword ptr [esp + 0xc]
// 004040e8  85d2                 test edx, edx
// 004040ea  7705                 ja 0x4040f1
// 004040ec  83f8ff               cmp eax, -1
// 004040ef  7606                 jbe 0x4040f7
// 004040f1  b857000780           mov eax, 0x80070057
// 004040f6  c3                   ret 
// 004040f7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004040fb  8901                 mov dword ptr [ecx], eax
// 004040fd  33c0                 xor eax, eax
// 004040ff  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarThemeOffice2007.cpp (function ??$AtlMultiply@I@ATL@@YAJPAIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarThemeOffice2007.cpp
