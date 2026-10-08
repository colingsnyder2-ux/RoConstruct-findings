// from server: 100% by auto
// roc 2011-06 0062b8b0  unit: RBX::Lua::VWeakFunctionRef::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0062b8b0
//
// 0062b8b0  6aff                 push -1
// 0062b8b2  683b939f00           push 0x9f933b
// 0062b8b7  64a100000000         mov eax, dword ptr fs:[0]
// 0062b8bd  50                   push eax
// 0062b8be  64892500000000       mov dword ptr fs:[0], esp
// 0062b8c5  51                   push ecx
// 0062b8c6  56                   push esi
// 0062b8c7  6a20                 push 0x20
// 0062b8c9  8bf1                 mov esi, ecx
// 0062b8cb  e88ee71d00           call 0x80a05e
// 0062b8d0  83c404               add esp, 4
// 0062b8d3  89442404             mov dword ptr [esp + 4], eax
// 0062b8d7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0062b8df  85c0                 test eax, eax
// 0062b8e1  740e                 je 0x62b8f1
// 0062b8e3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0062b8e7  51                   push ecx
// 0062b8e8  8bc8                 mov ecx, eax
// 0062b8ea  e8e1feffff           call 0x62b7d0
// 0062b8ef  eb02                 jmp 0x62b8f3
// 0062b8f1  33c0                 xor eax, eax
// 0062b8f3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062b8f7  8906                 mov dword ptr [esi], eax
// 0062b8f9  8bc6                 mov eax, esi
// 0062b8fb  5e                   pop esi
// 0062b8fc  64890d00000000       mov dword ptr fs:[0], ecx
// 0062b903  83c410               add esp, 0x10
// 0062b906  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
