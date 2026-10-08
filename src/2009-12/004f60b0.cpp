// roc 2009-12 004f60b0  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f60b0
//
// 004f60b0  56                   push esi
// 004f60b1  8b7104               mov esi, dword ptr [ecx + 4]
// 004f60b4  85f6                 test esi, esi
// 004f60b6  742b                 je 0x4f60e3
// 004f60b8  8d4604               lea eax, [esi + 4]
// 004f60bb  83c9ff               or ecx, 0xffffffff
// 004f60be  f00fc108             lock xadd dword ptr [eax], ecx
// 004f60c2  751f                 jne 0x4f60e3
// 004f60c4  8b16                 mov edx, dword ptr [esi]
// 004f60c6  8b4204               mov eax, dword ptr [edx + 4]
// 004f60c9  8bce                 mov ecx, esi
// 004f60cb  ffd0                 call eax
// 004f60cd  8d4e08               lea ecx, [esi + 8]
// 004f60d0  83caff               or edx, 0xffffffff
// 004f60d3  f00fc111             lock xadd dword ptr [ecx], edx
// 004f60d7  750a                 jne 0x4f60e3
// 004f60d9  8b06                 mov eax, dword ptr [esi]
// 004f60db  8b5008               mov edx, dword ptr [eax + 8]
// 004f60de  8bce                 mov ecx, esi
// 004f60e0  5e                   pop esi
// 004f60e1  ffe2                 jmp edx
// 004f60e3  5e                   pop esi
// 004f60e4  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??1?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
