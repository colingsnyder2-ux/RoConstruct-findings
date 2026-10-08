// from server: 100% by auto
// roc 2007-08 004a2000  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a2000
//
// 004a2000  51                   push ecx
// 004a2001  56                   push esi
// 004a2002  8bf1                 mov esi, ecx
// 004a2004  8b4604               mov eax, dword ptr [esi + 4]
// 004a2007  85c0                 test eax, eax
// 004a2009  741c                 je 0x4a2027
// 004a200b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a200f  8b5608               mov edx, dword ptr [esi + 8]
// 004a2012  51                   push ecx
// 004a2013  56                   push esi
// 004a2014  52                   push edx
// 004a2015  50                   push eax
// 004a2016  e885fbffff           call 0x4a1ba0
// 004a201b  8b4604               mov eax, dword ptr [esi + 4]
// 004a201e  50                   push eax
// 004a201f  e83edc1800           call 0x62fc62
// 004a2024  83c414               add esp, 0x14
// 004a2027  c7460400000000       mov dword ptr [esi + 4], 0
// 004a202e  c7460800000000       mov dword ptr [esi + 8], 0
// 004a2035  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004a203c  5e                   pop esi
// 004a203d  59                   pop ecx
// 004a203e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
