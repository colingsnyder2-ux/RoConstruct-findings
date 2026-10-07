// roc 2012-06 00561d10  unit: RBX::VHint::?$FactoryProduct::Creator  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00561d10
//
// 00561d10  8b11                 mov edx, dword ptr [ecx]
// 00561d12  8b442404             mov eax, dword ptr [esp + 4]
// 00561d16  3b10                 cmp edx, dword ptr [eax]
// 00561d18  7510                 jne 0x561d2a
// 00561d1a  8b4904               mov ecx, dword ptr [ecx + 4]
// 00561d1d  3b4804               cmp ecx, dword ptr [eax + 4]
// 00561d20  7508                 jne 0x561d2a
// 00561d22  b801000000           mov eax, 1
// 00561d27  c20400               ret 4
// 00561d2a  33c0                 xor eax, eax
// 00561d2c  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportRecordItemRange.cpp (function ??8CXTPReportRecordItemId@@QBE_NABV0@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRecordItemRange.cpp
