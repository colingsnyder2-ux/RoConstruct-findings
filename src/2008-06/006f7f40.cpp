// from server: 100% by auto
// roc 2008-06 006f7f40  unit: CXTPBitmapDC  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f7f40
//
// 006f7f40  56                   push esi
// 006f7f41  8bf1                 mov esi, ecx
// 006f7f43  c706b0a68500         mov dword ptr [esi], 0x85a6b0
// 006f7f49  e862ebffff           call 0x6f6ab0
// 006f7f4e  8bce                 mov ecx, esi
// 006f7f50  5e                   pop esi
// 006f7f51  e98aebffff           jmp 0x6f6ae0
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??1?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
