// roc 2007-08 005ac5b0  unit: RBX::World  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ac5b0
//
// 005ac5b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ac5b4  85c9                 test ecx, ecx
// 005ac5b6  7410                 je 0x5ac5c8
// 005ac5b8  e873820000           call 0x5b4830
// 005ac5bd  85c0                 test eax, eax
// 005ac5bf  7407                 je 0x5ac5c8
// 005ac5c1  8bc8                 mov ecx, eax
// 005ac5c3  e9585c0e00           jmp 0x692220
// 005ac5c8  33c0                 xor eax, eax
// 005ac5ca  c3                   ret 
// library rbxgs/v8world\Mechanism.cpp (function ?getMechanismFromPrimitive@Mechanism@RBX@@SAPAV12@PBVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Mechanism.cpp
