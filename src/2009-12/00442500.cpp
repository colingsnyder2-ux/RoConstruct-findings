// roc 2009-12 00442500  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00442500
//
// 00442500  8b442404             mov eax, dword ptr [esp + 4]
// 00442504  56                   push esi
// 00442505  8bf1                 mov esi, ecx
// 00442507  50                   push eax
// 00442508  8d4c240c             lea ecx, [esp + 0xc]
// 0044250c  e88f46feff           call 0x426ba0
// 00442511  3bc6                 cmp eax, esi
// 00442513  7408                 je 0x44251d
// 00442515  8b16                 mov edx, dword ptr [esi]
// 00442517  8b08                 mov ecx, dword ptr [eax]
// 00442519  8910                 mov dword ptr [eax], edx
// 0044251b  890e                 mov dword ptr [esi], ecx
// 0044251d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00442521  85c9                 test ecx, ecx
// 00442523  7408                 je 0x44252d
// 00442525  8b01                 mov eax, dword ptr [ecx]
// 00442527  8b10                 mov edx, dword ptr [eax]
// 00442529  6a01                 push 1
// 0044252b  ffd2                 call edx
// 0044252d  8bc6                 mov eax, esi
// 0044252f  5e                   pop esi
// 00442530  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
