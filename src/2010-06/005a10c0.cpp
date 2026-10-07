// roc 2010-06 005a10c0  unit: std::runtime_error  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005a10c0
//
// 005a10c0  56                   push esi
// 005a10c1  8b7104               mov esi, dword ptr [ecx + 4]
// 005a10c4  85f6                 test esi, esi
// 005a10c6  742b                 je 0x5a10f3
// 005a10c8  8d4604               lea eax, [esi + 4]
// 005a10cb  83c9ff               or ecx, 0xffffffff
// 005a10ce  f00fc108             lock xadd dword ptr [eax], ecx
// 005a10d2  751f                 jne 0x5a10f3
// 005a10d4  8b16                 mov edx, dword ptr [esi]
// 005a10d6  8b4204               mov eax, dword ptr [edx + 4]
// 005a10d9  8bce                 mov ecx, esi
// 005a10db  ffd0                 call eax
// 005a10dd  8d4e08               lea ecx, [esi + 8]
// 005a10e0  83caff               or edx, 0xffffffff
// 005a10e3  f00fc111             lock xadd dword ptr [ecx], edx
// 005a10e7  750a                 jne 0x5a10f3
// 005a10e9  8b06                 mov eax, dword ptr [esi]
// 005a10eb  8b5008               mov edx, dword ptr [eax + 8]
// 005a10ee  8bce                 mov ecx, esi
// 005a10f0  5e                   pop esi
// 005a10f1  ffe2                 jmp edx
// 005a10f3  5e                   pop esi
// 005a10f4  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??1?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
