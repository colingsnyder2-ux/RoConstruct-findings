// roc 2009-12 004096b0  unit: VAuthoringSettings::?$FactoryProduct  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004096b0
//
// 004096b0  8b442404             mov eax, dword ptr [esp + 4]
// 004096b4  56                   push esi
// 004096b5  8bf1                 mov esi, ecx
// 004096b7  8b08                 mov ecx, dword ptr [eax]
// 004096b9  85c9                 test ecx, ecx
// 004096bb  740f                 je 0x4096cc
// 004096bd  8b11                 mov edx, dword ptr [ecx]
// 004096bf  8b4208               mov eax, dword ptr [edx + 8]
// 004096c2  ffd0                 call eax
// 004096c4  8906                 mov dword ptr [esi], eax
// 004096c6  8bc6                 mov eax, esi
// 004096c8  5e                   pop esi
// 004096c9  c20400               ret 4
// 004096cc  33c0                 xor eax, eax
// 004096ce  8906                 mov dword ptr [esi], eax
// 004096d0  8bc6                 mov eax, esi
// 004096d2  5e                   pop esi
// 004096d3  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??0any@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
