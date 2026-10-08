// from server: 100% by auto
// roc 2011-06 0063a1c0  unit: RBX::VProtectedString::?$TypedPropertyDescriptor  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063a1c0
//
// 0063a1c0  8b442404             mov eax, dword ptr [esp + 4]
// 0063a1c4  56                   push esi
// 0063a1c5  8bf1                 mov esi, ecx
// 0063a1c7  50                   push eax
// 0063a1c8  8d4c240c             lea ecx, [esp + 0xc]
// 0063a1cc  e88ff8ffff           call 0x639a60
// 0063a1d1  3bc6                 cmp eax, esi
// 0063a1d3  7408                 je 0x63a1dd
// 0063a1d5  8b16                 mov edx, dword ptr [esi]
// 0063a1d7  8b08                 mov ecx, dword ptr [eax]
// 0063a1d9  8910                 mov dword ptr [eax], edx
// 0063a1db  890e                 mov dword ptr [esi], ecx
// 0063a1dd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063a1e1  85c9                 test ecx, ecx
// 0063a1e3  7408                 je 0x63a1ed
// 0063a1e5  8b01                 mov eax, dword ptr [ecx]
// 0063a1e7  8b10                 mov edx, dword ptr [eax]
// 0063a1e9  6a01                 push 1
// 0063a1eb  ffd2                 call edx
// 0063a1ed  8bc6                 mov eax, esi
// 0063a1ef  5e                   pop esi
// 0063a1f0  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
