// from server: 100% by auto
// roc 2011-06 0085d1a0  unit: CXTPBitmapDC  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085d1a0
//
// 0085d1a0  56                   push esi
// 0085d1a1  8bf1                 mov esi, ecx
// 0085d1a3  c70658a7ac00         mov dword ptr [esi], 0xaca758
// 0085d1a9  e8e2eaffff           call 0x85bc90
// 0085d1ae  8bce                 mov ecx, esi
// 0085d1b0  5e                   pop esi
// 0085d1b1  e90aebffff           jmp 0x85bcc0
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??1?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
