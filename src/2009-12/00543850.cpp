// roc 2009-12 00543850  unit: RBX::VMotor::?$FactoryProduct::Creator  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00543850
//
// 00543850  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00543854  85c9                 test ecx, ecx
// 00543856  7408                 je 0x543860
// 00543858  8b01                 mov eax, dword ptr [ecx]
// 0054385a  8b10                 mov edx, dword ptr [eax]
// 0054385c  6a01                 push 1
// 0054385e  ffd2                 call edx
// 00543860  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$checked_delete@Voption_description@program_options@boost@@@boost@@YAXPAVoption_description@program_options@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
