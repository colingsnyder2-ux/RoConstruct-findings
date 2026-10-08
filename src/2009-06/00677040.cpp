// from server: 100% by auto
// roc 2009-06 00677040  unit: RBX::Assembly  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00677040
//
// 00677040  8b442408             mov eax, dword ptr [esp + 8]
// 00677044  56                   push esi
// 00677045  8b742408             mov esi, dword ptr [esp + 8]
// 00677049  50                   push eax
// 0067704a  56                   push esi
// 0067704b  e830ffffff           call 0x676f80
// 00677050  83c408               add esp, 8
// 00677053  8bc6                 mov eax, esi
// 00677055  5e                   pop esi
// 00677056  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?file_size_api@detail@filesystem@boost@@YA?AU?$pair@I_K@std@@ABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
