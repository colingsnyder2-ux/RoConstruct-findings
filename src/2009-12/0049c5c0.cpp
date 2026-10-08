// roc 2009-12 0049c5c0  unit: Ogre::RbxMeshPartAdapter  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0049c5c0
//
// 0049c5c0  53                   push ebx
// 0049c5c1  56                   push esi
// 0049c5c2  8bf1                 mov esi, ecx
// 0049c5c4  57                   push edi
// 0049c5c5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0049c5c9  8d5e04               lea ebx, [esi + 4]
// 0049c5cc  57                   push edi
// 0049c5cd  8bcb                 mov ecx, ebx
// 0049c5cf  893e                 mov dword ptr [esi], edi
// 0049c5d1  e8aaf5ffff           call 0x49bb80
// 0049c5d6  57                   push edi
// 0049c5d7  57                   push edi
// 0049c5d8  53                   push ebx
// 0049c5d9  e8b2843b00           call 0x854a90
// 0049c5de  83c40c               add esp, 0xc
// 0049c5e1  5f                   pop edi
// 0049c5e2  8bc6                 mov eax, esi
// 0049c5e4  5e                   pop esi
// 0049c5e5  5b                   pop ebx
// 0049c5e6  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
