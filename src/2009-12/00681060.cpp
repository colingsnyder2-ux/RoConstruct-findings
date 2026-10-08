// roc 2009-12 00681060  unit: RBX::VProtectedString::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00681060
//
// 00681060  6aff                 push -1
// 00681062  68eba59400           push 0x94a5eb
// 00681067  64a100000000         mov eax, dword ptr fs:[0]
// 0068106d  50                   push eax
// 0068106e  64892500000000       mov dword ptr fs:[0], esp
// 00681075  51                   push ecx
// 00681076  56                   push esi
// 00681077  6a20                 push 0x20
// 00681079  8bf1                 mov esi, ecx
// 0068107b  e8e0271700           call 0x7f3860
// 00681080  83c404               add esp, 4
// 00681083  89442404             mov dword ptr [esp + 4], eax
// 00681087  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0068108f  85c0                 test eax, eax
// 00681091  740e                 je 0x6810a1
// 00681093  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00681097  51                   push ecx
// 00681098  8bc8                 mov ecx, eax
// 0068109a  e801ffffff           call 0x680fa0
// 0068109f  eb02                 jmp 0x6810a3
// 006810a1  33c0                 xor eax, eax
// 006810a3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006810a7  8906                 mov dword ptr [esi], eax
// 006810a9  8bc6                 mov eax, esi
// 006810ab  5e                   pop esi
// 006810ac  64890d00000000       mov dword ptr fs:[0], ecx
// 006810b3  83c410               add esp, 0x10
// 006810b6  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
