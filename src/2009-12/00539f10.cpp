// roc 2009-12 00539f10  unit: G3D::VRay::?$holder  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00539f10
//
// 00539f10  8b442404             mov eax, dword ptr [esp + 4]
// 00539f14  56                   push esi
// 00539f15  8bf1                 mov esi, ecx
// 00539f17  50                   push eax
// 00539f18  8d4c240c             lea ecx, [esp + 0xc]
// 00539f1c  e8ffedffff           call 0x538d20
// 00539f21  3bc6                 cmp eax, esi
// 00539f23  7408                 je 0x539f2d
// 00539f25  8b16                 mov edx, dword ptr [esi]
// 00539f27  8b08                 mov ecx, dword ptr [eax]
// 00539f29  8910                 mov dword ptr [eax], edx
// 00539f2b  890e                 mov dword ptr [esi], ecx
// 00539f2d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00539f31  85c9                 test ecx, ecx
// 00539f33  7408                 je 0x539f3d
// 00539f35  8b01                 mov eax, dword ptr [ecx]
// 00539f37  8b10                 mov edx, dword ptr [eax]
// 00539f39  6a01                 push 1
// 00539f3b  ffd2                 call edx
// 00539f3d  8bc6                 mov eax, esi
// 00539f3f  5e                   pop esi
// 00539f40  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
