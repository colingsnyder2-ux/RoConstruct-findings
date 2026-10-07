// roc 2008-06 00597700  unit: RBX::VDecal::?$FactoryProduct  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00597700
//
// 00597700  8b442404             mov eax, dword ptr [esp + 4]
// 00597704  56                   push esi
// 00597705  8bf1                 mov esi, ecx
// 00597707  50                   push eax
// 00597708  8d4c240c             lea ecx, [esp + 0xc]
// 0059770c  e80fffffff           call 0x597620
// 00597711  3bc6                 cmp eax, esi
// 00597713  7408                 je 0x59771d
// 00597715  8b16                 mov edx, dword ptr [esi]
// 00597717  8b08                 mov ecx, dword ptr [eax]
// 00597719  8910                 mov dword ptr [eax], edx
// 0059771b  890e                 mov dword ptr [esi], ecx
// 0059771d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00597721  85c9                 test ecx, ecx
// 00597723  7408                 je 0x59772d
// 00597725  8b01                 mov eax, dword ptr [ecx]
// 00597727  8b10                 mov edx, dword ptr [eax]
// 00597729  6a01                 push 1
// 0059772b  ffd2                 call edx
// 0059772d  8bc6                 mov eax, esi
// 0059772f  5e                   pop esi
// 00597730  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
