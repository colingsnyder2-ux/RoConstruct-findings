// from server: 100% by auto
// roc 2010-06 00409740  unit: VAuthoringSettings::?$FactoryProduct  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00409740
//
// 00409740  8b442404             mov eax, dword ptr [esp + 4]
// 00409744  56                   push esi
// 00409745  8bf1                 mov esi, ecx
// 00409747  8b08                 mov ecx, dword ptr [eax]
// 00409749  85c9                 test ecx, ecx
// 0040974b  740f                 je 0x40975c
// 0040974d  8b11                 mov edx, dword ptr [ecx]
// 0040974f  8b4208               mov eax, dword ptr [edx + 8]
// 00409752  ffd0                 call eax
// 00409754  8906                 mov dword ptr [esi], eax
// 00409756  8bc6                 mov eax, esi
// 00409758  5e                   pop esi
// 00409759  c20400               ret 4
// 0040975c  33c0                 xor eax, eax
// 0040975e  8906                 mov dword ptr [esi], eax
// 00409760  8bc6                 mov eax, esi
// 00409762  5e                   pop esi
// 00409763  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??0any@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
