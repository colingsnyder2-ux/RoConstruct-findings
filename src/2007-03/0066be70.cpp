// roc 2007-03 0066be70  unit: seg_00660000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066be70
//
// 0066be70  56                   push esi
// 0066be71  8bf1                 mov esi, ecx
// 0066be73  c706e0b07c00         mov dword ptr [esi], 0x7cb0e0
// 0066be79  e812edffff           call 0x66ab90
// 0066be7e  8bce                 mov ecx, esi
// 0066be80  5e                   pop esi
// 0066be81  e93aedffff           jmp 0x66abc0
// library rbxgs/v8xml\XmlSerializer.cpp (function ??1?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
