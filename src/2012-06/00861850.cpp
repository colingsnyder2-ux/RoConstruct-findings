// from server: 100% by auto
// roc 2012-06 00861850  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00861850
//
// 00861850  8b01                 mov eax, dword ptr [ecx]
// 00861852  50                   push eax
// 00861853  ff15a03db200         call dword ptr [0xb23da0]
// 00861859  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??1CComBSTR@ATL@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
