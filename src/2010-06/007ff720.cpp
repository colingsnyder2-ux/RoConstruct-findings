// roc 2010-06 007ff720  unit: CXTPBitmapDC  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ff720
//
// 007ff720  56                   push esi
// 007ff721  8bf1                 mov esi, ecx
// 007ff723  c70670fea500         mov dword ptr [esi], 0xa5fe70
// 007ff729  e852ebffff           call 0x7fe280
// 007ff72e  8bce                 mov ecx, esi
// 007ff730  5e                   pop esi
// 007ff731  e97aebffff           jmp 0x7fe2b0
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??1?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
