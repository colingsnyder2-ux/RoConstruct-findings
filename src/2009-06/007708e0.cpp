// roc 2009-06 007708e0  unit: CXTPBitmapDC  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007708e0
//
// 007708e0  56                   push esi
// 007708e1  8bf1                 mov esi, ecx
// 007708e3  c70608b78f00         mov dword ptr [esi], 0x8fb708
// 007708e9  e862ebffff           call 0x76f450
// 007708ee  8bce                 mov ecx, esi
// 007708f0  5e                   pop esi
// 007708f1  e98aebffff           jmp 0x76f480
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??1?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
