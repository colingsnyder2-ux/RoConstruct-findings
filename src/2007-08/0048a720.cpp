// roc 2007-08 0048a720  unit: std::X::ZV?$allocator::$$A6AXM::V?$function::?$holder  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048a720
//
// 0048a720  51                   push ecx
// 0048a721  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048a725  56                   push esi
// 0048a726  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0048a72a  56                   push esi
// 0048a72b  c744240800000000     mov dword ptr [esp + 8], 0
// 0048a733  e8d8f7ffff           call 0x489f10
// 0048a738  8bc6                 mov eax, esi
// 0048a73a  5e                   pop esi
// 0048a73b  59                   pop ecx
// 0048a73c  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??6program_options@boost@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AAV23@ABVoptions_description@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
