// from server: 100% by auto
// roc 2010-06 004e8640  unit: G3D::VRay::?$holder  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e8640
//
// 004e8640  8b442404             mov eax, dword ptr [esp + 4]
// 004e8644  56                   push esi
// 004e8645  8bf1                 mov esi, ecx
// 004e8647  50                   push eax
// 004e8648  8d4c240c             lea ecx, [esp + 0xc]
// 004e864c  e89fecffff           call 0x4e72f0
// 004e8651  3bc6                 cmp eax, esi
// 004e8653  7408                 je 0x4e865d
// 004e8655  8b16                 mov edx, dword ptr [esi]
// 004e8657  8b08                 mov ecx, dword ptr [eax]
// 004e8659  8910                 mov dword ptr [eax], edx
// 004e865b  890e                 mov dword ptr [esi], ecx
// 004e865d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e8661  85c9                 test ecx, ecx
// 004e8663  7408                 je 0x4e866d
// 004e8665  8b01                 mov eax, dword ptr [ecx]
// 004e8667  8b10                 mov edx, dword ptr [eax]
// 004e8669  6a01                 push 1
// 004e866b  ffd2                 call edx
// 004e866d  8bc6                 mov eax, esi
// 004e866f  5e                   pop esi
// 004e8670  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
