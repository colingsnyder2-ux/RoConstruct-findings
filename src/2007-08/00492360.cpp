// from server: 100% by auto
// roc 2007-08 00492360  unit: RBX::Network::P8Players::?$GetImpl  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00492360
//
// 00492360  56                   push esi
// 00492361  8b7104               mov esi, dword ptr [ecx + 4]
// 00492364  85f6                 test esi, esi
// 00492366  742b                 je 0x492393
// 00492368  8d4604               lea eax, [esi + 4]
// 0049236b  83c9ff               or ecx, 0xffffffff
// 0049236e  f00fc108             lock xadd dword ptr [eax], ecx
// 00492372  751f                 jne 0x492393
// 00492374  8b16                 mov edx, dword ptr [esi]
// 00492376  8b4204               mov eax, dword ptr [edx + 4]
// 00492379  8bce                 mov ecx, esi
// 0049237b  ffd0                 call eax
// 0049237d  8d4e08               lea ecx, [esi + 8]
// 00492380  83caff               or edx, 0xffffffff
// 00492383  f00fc111             lock xadd dword ptr [ecx], edx
// 00492387  750a                 jne 0x492393
// 00492389  8b06                 mov eax, dword ptr [esi]
// 0049238b  8b5008               mov edx, dword ptr [eax + 8]
// 0049238e  8bce                 mov ecx, esi
// 00492390  5e                   pop esi
// 00492391  ffe2                 jmp edx
// 00492393  5e                   pop esi
// 00492394  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??1?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
