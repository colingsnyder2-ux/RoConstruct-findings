// from server: 100% by auto
// roc 2011-06 0094fd20  unit: Ogre::RbxMeshPartAdapter  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0094fd20
//
// 0094fd20  53                   push ebx
// 0094fd21  56                   push esi
// 0094fd22  8bf1                 mov esi, ecx
// 0094fd24  57                   push edi
// 0094fd25  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0094fd29  8d5e04               lea ebx, [esi + 4]
// 0094fd2c  57                   push edi
// 0094fd2d  8bcb                 mov ecx, ebx
// 0094fd2f  893e                 mov dword ptr [esi], edi
// 0094fd31  e86af6ffff           call 0x94f3a0
// 0094fd36  57                   push edi
// 0094fd37  57                   push edi
// 0094fd38  53                   push ebx
// 0094fd39  e802b9f1ff           call 0x86b640
// 0094fd3e  83c40c               add esp, 0xc
// 0094fd41  5f                   pop edi
// 0094fd42  8bc6                 mov eax, esi
// 0094fd44  5e                   pop esi
// 0094fd45  5b                   pop ebx
// 0094fd46  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
