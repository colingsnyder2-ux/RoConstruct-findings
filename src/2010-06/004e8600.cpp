// roc 2010-06 004e8600  unit: G3D::VRay::?$holder  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e8600
//
// 004e8600  8b442404             mov eax, dword ptr [esp + 4]
// 004e8604  56                   push esi
// 004e8605  8bf1                 mov esi, ecx
// 004e8607  50                   push eax
// 004e8608  8d4c240c             lea ecx, [esp + 0xc]
// 004e860c  e87fecffff           call 0x4e7290
// 004e8611  3bc6                 cmp eax, esi
// 004e8613  7408                 je 0x4e861d
// 004e8615  8b16                 mov edx, dword ptr [esi]
// 004e8617  8b08                 mov ecx, dword ptr [eax]
// 004e8619  8910                 mov dword ptr [eax], edx
// 004e861b  890e                 mov dword ptr [esi], ecx
// 004e861d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e8621  85c9                 test ecx, ecx
// 004e8623  7408                 je 0x4e862d
// 004e8625  8b01                 mov eax, dword ptr [ecx]
// 004e8627  8b10                 mov edx, dword ptr [eax]
// 004e8629  6a01                 push 1
// 004e862b  ffd2                 call edx
// 004e862d  8bc6                 mov eax, esi
// 004e862f  5e                   pop esi
// 004e8630  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
