// roc 2011-06 0040b570  unit: std::Vruntime_error::?$error_info_injector  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0040b570
//
// 0040b570  8b442404             mov eax, dword ptr [esp + 4]
// 0040b574  56                   push esi
// 0040b575  8bf1                 mov esi, ecx
// 0040b577  8b08                 mov ecx, dword ptr [eax]
// 0040b579  890e                 mov dword ptr [esi], ecx
// 0040b57b  8b4804               mov ecx, dword ptr [eax + 4]
// 0040b57e  85c9                 test ecx, ecx
// 0040b580  7410                 je 0x40b592
// 0040b582  8b11                 mov edx, dword ptr [ecx]
// 0040b584  8b4208               mov eax, dword ptr [edx + 8]
// 0040b587  ffd0                 call eax
// 0040b589  894604               mov dword ptr [esi + 4], eax
// 0040b58c  8bc6                 mov eax, esi
// 0040b58e  5e                   pop esi
// 0040b58f  c20400               ret 4
// 0040b592  33c0                 xor eax, eax
// 0040b594  894604               mov dword ptr [esi + 4], eax
// 0040b597  8bc6                 mov eax, esi
// 0040b599  5e                   pop esi
// 0040b59a  c20400               ret 4
// library rbxgs/reflection\type.cpp (function ??0Value@Reflection@RBX@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
