// roc 2012-06 004f4c80  unit: Ogre::RbxMeshPartAdapter  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004f4c80
//
// 004f4c80  53                   push ebx
// 004f4c81  56                   push esi
// 004f4c82  8bf1                 mov esi, ecx
// 004f4c84  57                   push edi
// 004f4c85  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004f4c89  8d5e04               lea ebx, [esi + 4]
// 004f4c8c  57                   push edi
// 004f4c8d  8bcb                 mov ecx, ebx
// 004f4c8f  893e                 mov dword ptr [esi], edi
// 004f4c91  e83af6ffff           call 0x4f42d0
// 004f4c96  57                   push edi
// 004f4c97  57                   push edi
// 004f4c98  53                   push ebx
// 004f4c99  e8f25a0a00           call 0x59a790
// 004f4c9e  83c40c               add esp, 0xc
// 004f4ca1  5f                   pop edi
// 004f4ca2  8bc6                 mov eax, esi
// 004f4ca4  5e                   pop esi
// 004f4ca5  5b                   pop ebx
// 004f4ca6  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
