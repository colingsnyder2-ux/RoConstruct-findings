// from server: 100% by auto
// roc 2011-06 0040b530  unit: std::Vruntime_error::?$error_info_injector  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0040b530
//
// 0040b530  8b442404             mov eax, dword ptr [esp + 4]
// 0040b534  56                   push esi
// 0040b535  8bf1                 mov esi, ecx
// 0040b537  8b08                 mov ecx, dword ptr [eax]
// 0040b539  85c9                 test ecx, ecx
// 0040b53b  740f                 je 0x40b54c
// 0040b53d  8b11                 mov edx, dword ptr [ecx]
// 0040b53f  8b4208               mov eax, dword ptr [edx + 8]
// 0040b542  ffd0                 call eax
// 0040b544  8906                 mov dword ptr [esi], eax
// 0040b546  8bc6                 mov eax, esi
// 0040b548  5e                   pop esi
// 0040b549  c20400               ret 4
// 0040b54c  33c0                 xor eax, eax
// 0040b54e  8906                 mov dword ptr [esi], eax
// 0040b550  8bc6                 mov eax, esi
// 0040b552  5e                   pop esi
// 0040b553  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??0any@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
