// roc 2011-06 007736f0  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007736f0
//
// 007736f0  56                   push esi
// 007736f1  8b7104               mov esi, dword ptr [ecx + 4]
// 007736f4  85f6                 test esi, esi
// 007736f6  742b                 je 0x773723
// 007736f8  8d4604               lea eax, [esi + 4]
// 007736fb  83c9ff               or ecx, 0xffffffff
// 007736fe  f00fc108             lock xadd dword ptr [eax], ecx
// 00773702  751f                 jne 0x773723
// 00773704  8b16                 mov edx, dword ptr [esi]
// 00773706  8b4204               mov eax, dword ptr [edx + 4]
// 00773709  8bce                 mov ecx, esi
// 0077370b  ffd0                 call eax
// 0077370d  8d4e08               lea ecx, [esi + 8]
// 00773710  83caff               or edx, 0xffffffff
// 00773713  f00fc111             lock xadd dword ptr [ecx], edx
// 00773717  750a                 jne 0x773723
// 00773719  8b06                 mov eax, dword ptr [esi]
// 0077371b  8b5008               mov edx, dword ptr [eax + 8]
// 0077371e  8bce                 mov ecx, esi
// 00773720  5e                   pop esi
// 00773721  ffe2                 jmp edx
// 00773723  5e                   pop esi
// 00773724  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??1?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
