// roc 2009-12 006812a0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006812a0
//
// 006812a0  8b442404             mov eax, dword ptr [esp + 4]
// 006812a4  56                   push esi
// 006812a5  8bf1                 mov esi, ecx
// 006812a7  50                   push eax
// 006812a8  8d4c240c             lea ecx, [esp + 0xc]
// 006812ac  e8affdffff           call 0x681060
// 006812b1  3bc6                 cmp eax, esi
// 006812b3  7408                 je 0x6812bd
// 006812b5  8b16                 mov edx, dword ptr [esi]
// 006812b7  8b08                 mov ecx, dword ptr [eax]
// 006812b9  8910                 mov dword ptr [eax], edx
// 006812bb  890e                 mov dword ptr [esi], ecx
// 006812bd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006812c1  85c9                 test ecx, ecx
// 006812c3  7408                 je 0x6812cd
// 006812c5  8b01                 mov eax, dword ptr [ecx]
// 006812c7  8b10                 mov edx, dword ptr [eax]
// 006812c9  6a01                 push 1
// 006812cb  ffd2                 call edx
// 006812cd  8bc6                 mov eax, esi
// 006812cf  5e                   pop esi
// 006812d0  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
