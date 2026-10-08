// from server: 100% by auto
// roc 2012-06 009d55b0  unit: CXTPBitmapDC  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d55b0
//
// 009d55b0  56                   push esi
// 009d55b1  8bf1                 mov esi, ecx
// 009d55b3  c706505ec100         mov dword ptr [esi], 0xc15e50
// 009d55b9  e8b2eaffff           call 0x9d4070
// 009d55be  8bce                 mov ecx, esi
// 009d55c0  5e                   pop esi
// 009d55c1  e9daeaffff           jmp 0x9d40a0
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??1?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
