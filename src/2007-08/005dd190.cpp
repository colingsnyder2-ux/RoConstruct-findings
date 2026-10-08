// roc 2007-08 005dd190  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dd190
//
// 005dd190  8b442404             mov eax, dword ptr [esp + 4]
// 005dd194  398104010000         cmp dword ptr [ecx + 0x104], eax
// 005dd19a  7413                 je 0x5dd1af
// 005dd19c  898104010000         mov dword ptr [ecx + 0x104], eax
// 005dd1a2  c7442404846d8c00     mov dword ptr [esp + 4], 0x8c6d84
// 005dd1aa  e96175e6ff           jmp 0x444710
// 005dd1af  c20400               ret 4
// library rbxgs/v8datamodel\Feature.cpp (function ?setTopBottom@Feature@RBX@@QAEXW4TopBottom@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Feature.cpp
