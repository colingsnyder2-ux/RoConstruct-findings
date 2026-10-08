// roc 2011-06 0059ee70  unit: RBX::Soundscape::VSoundService::?$FactoryProduct  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0059ee70
//
// 0059ee70  51                   push ecx
// 0059ee71  6a10                 push 0x10
// 0059ee73  c744240400000000     mov dword ptr [esp + 4], 0
// 0059ee7b  e8deb12600           call 0x80a05e
// 0059ee80  83c404               add esp, 4
// 0059ee83  85c0                 test eax, eax
// 0059ee85  741e                 je 0x59eea5
// 0059ee87  c70060c6a800         mov dword ptr [eax], 0xa8c660
// 0059ee8d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059ee91  894808               mov dword ptr [eax + 8], ecx
// 0059ee94  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059ee98  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059ee9c  89500c               mov dword ptr [eax + 0xc], edx
// 0059ee9f  8901                 mov dword ptr [ecx], eax
// 0059eea1  8bc1                 mov eax, ecx
// 0059eea3  59                   pop ecx
// 0059eea4  c3                   ret 
// 0059eea5  8b442408             mov eax, dword ptr [esp + 8]
// 0059eea9  33c9                 xor ecx, ecx
// 0059eeab  8908                 mov dword ptr [eax], ecx
// 0059eead  59                   pop ecx
// 0059eeae  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
