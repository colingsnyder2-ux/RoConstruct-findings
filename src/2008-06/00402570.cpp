// from server: 100% by auto
// roc 2008-06 00402570  unit: std::bad_alloc  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00402570
//
// 00402570  56                   push esi
// 00402571  8b31                 mov esi, dword ptr [ecx]
// 00402573  85f6                 test esi, esi
// 00402575  742b                 je 0x4025a2
// 00402577  8d4604               lea eax, [esi + 4]
// 0040257a  83c9ff               or ecx, 0xffffffff
// 0040257d  f00fc108             lock xadd dword ptr [eax], ecx
// 00402581  751f                 jne 0x4025a2
// 00402583  8b16                 mov edx, dword ptr [esi]
// 00402585  8b4204               mov eax, dword ptr [edx + 4]
// 00402588  8bce                 mov ecx, esi
// 0040258a  ffd0                 call eax
// 0040258c  8d4e08               lea ecx, [esi + 8]
// 0040258f  83caff               or edx, 0xffffffff
// 00402592  f00fc111             lock xadd dword ptr [ecx], edx
// 00402596  750a                 jne 0x4025a2
// 00402598  8b06                 mov eax, dword ptr [esi]
// 0040259a  8b5008               mov edx, dword ptr [eax + 8]
// 0040259d  8bce                 mov ecx, esi
// 0040259f  5e                   pop esi
// 004025a0  ffe2                 jmp edx
// 004025a2  5e                   pop esi
// 004025a3  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??1shared_count@detail@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
