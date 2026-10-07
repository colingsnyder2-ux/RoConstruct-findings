// roc 2009-06 006247b0  unit: RBX::StarterGear  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006247b0
//
// 006247b0  56                   push esi
// 006247b1  8b7104               mov esi, dword ptr [ecx + 4]
// 006247b4  85f6                 test esi, esi
// 006247b6  742b                 je 0x6247e3
// 006247b8  8d4604               lea eax, [esi + 4]
// 006247bb  83c9ff               or ecx, 0xffffffff
// 006247be  f00fc108             lock xadd dword ptr [eax], ecx
// 006247c2  751f                 jne 0x6247e3
// 006247c4  8b16                 mov edx, dword ptr [esi]
// 006247c6  8b4204               mov eax, dword ptr [edx + 4]
// 006247c9  8bce                 mov ecx, esi
// 006247cb  ffd0                 call eax
// 006247cd  8d4e08               lea ecx, [esi + 8]
// 006247d0  83caff               or edx, 0xffffffff
// 006247d3  f00fc111             lock xadd dword ptr [ecx], edx
// 006247d7  750a                 jne 0x6247e3
// 006247d9  8b06                 mov eax, dword ptr [esi]
// 006247db  8b5008               mov edx, dword ptr [eax + 8]
// 006247de  8bce                 mov ecx, esi
// 006247e0  5e                   pop esi
// 006247e1  ffe2                 jmp edx
// 006247e3  5e                   pop esi
// 006247e4  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??1?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
