// from server: 100% by auto
// roc 2010-06 004439f0  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004439f0
//
// 004439f0  8b442404             mov eax, dword ptr [esp + 4]
// 004439f4  56                   push esi
// 004439f5  8bf1                 mov esi, ecx
// 004439f7  50                   push eax
// 004439f8  8d4c240c             lea ecx, [esp + 0xc]
// 004439fc  e8ff35feff           call 0x427000
// 00443a01  3bc6                 cmp eax, esi
// 00443a03  7408                 je 0x443a0d
// 00443a05  8b16                 mov edx, dword ptr [esi]
// 00443a07  8b08                 mov ecx, dword ptr [eax]
// 00443a09  8910                 mov dword ptr [eax], edx
// 00443a0b  890e                 mov dword ptr [esi], ecx
// 00443a0d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00443a11  85c9                 test ecx, ecx
// 00443a13  7408                 je 0x443a1d
// 00443a15  8b01                 mov eax, dword ptr [ecx]
// 00443a17  8b10                 mov edx, dword ptr [eax]
// 00443a19  6a01                 push 1
// 00443a1b  ffd2                 call edx
// 00443a1d  8bc6                 mov eax, esi
// 00443a1f  5e                   pop esi
// 00443a20  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
