// roc 2008-06 005e50c0  unit: RBX::VMotor::?$FactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e50c0
//
// 005e50c0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005e50c4  85c9                 test ecx, ecx
// 005e50c6  7410                 je 0x5e50d8
// 005e50c8  e8a3240000           call 0x5e7570
// 005e50cd  85c0                 test eax, eax
// 005e50cf  7407                 je 0x5e50d8
// 005e50d1  8bc8                 mov ecx, eax
// 005e50d3  e938100000           jmp 0x5e6110
// 005e50d8  33c0                 xor eax, eax
// 005e50da  c3                   ret 
// library rbxgs/v8world\Mechanism.cpp (function ?getMechanismFromPrimitive@Mechanism@RBX@@SAPAV12@PBVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Mechanism.cpp
