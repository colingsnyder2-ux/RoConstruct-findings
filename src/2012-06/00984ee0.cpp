// from server: 100% by auto
// roc 2012-06 00984ee0  unit: CXTPPropertyGridItem  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00984ee0
//
// 00984ee0  8b01                 mov eax, dword ptr [ecx]
// 00984ee2  3b442404             cmp eax, dword ptr [esp + 4]
// 00984ee6  750e                 jne 0x984ef6
// 00984ee8  8b4904               mov ecx, dword ptr [ecx + 4]
// 00984eeb  3b4c2408             cmp ecx, dword ptr [esp + 8]
// 00984eef  7505                 jne 0x984ef6
// 00984ef1  33c0                 xor eax, eax
// 00984ef3  c20800               ret 8
// 00984ef6  b801000000           mov eax, 1
// 00984efb  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarControlView.cpp (function ??9CSize@@QBEHUtagSIZE@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarControlView.cpp
