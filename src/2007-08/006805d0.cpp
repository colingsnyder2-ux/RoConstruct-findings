// from server: 100% by auto
// roc 2007-08 006805d0  unit: CXTPBitmapDC  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006805d0
//
// 006805d0  56                   push esi
// 006805d1  8bf1                 mov esi, ecx
// 006805d3  c706d8ec7c00         mov dword ptr [esi], 0x7cecd8
// 006805d9  e872edffff           call 0x67f350
// 006805de  8bce                 mov ecx, esi
// 006805e0  5e                   pop esi
// 006805e1  e99aedffff           jmp 0x67f380
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??1?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
