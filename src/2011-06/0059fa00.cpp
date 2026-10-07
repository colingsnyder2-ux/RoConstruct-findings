// roc 2011-06 0059fa00  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0059fa00
//
// 0059fa00  8b442404             mov eax, dword ptr [esp + 4]
// 0059fa04  56                   push esi
// 0059fa05  8bf1                 mov esi, ecx
// 0059fa07  50                   push eax
// 0059fa08  8d4c240c             lea ecx, [esp + 0xc]
// 0059fa0c  e8affcffff           call 0x59f6c0
// 0059fa11  3bc6                 cmp eax, esi
// 0059fa13  7408                 je 0x59fa1d
// 0059fa15  8b16                 mov edx, dword ptr [esi]
// 0059fa17  8b08                 mov ecx, dword ptr [eax]
// 0059fa19  8910                 mov dword ptr [eax], edx
// 0059fa1b  890e                 mov dword ptr [esi], ecx
// 0059fa1d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059fa21  85c9                 test ecx, ecx
// 0059fa23  7408                 je 0x59fa2d
// 0059fa25  8b01                 mov eax, dword ptr [ecx]
// 0059fa27  8b10                 mov edx, dword ptr [eax]
// 0059fa29  6a01                 push 1
// 0059fa2b  ffd2                 call edx
// 0059fa2d  8bc6                 mov eax, esi
// 0059fa2f  5e                   pop esi
// 0059fa30  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
