// roc 2009-12 006c6050  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006c6050
//
// 006c6050  8a442404             mov al, byte ptr [esp + 4]
// 006c6054  3a05a80cb900         cmp al, byte ptr [0xb90ca8]
// 006c605a  7412                 je 0x6c606e
// 006c605c  a2a80cb900           mov byte ptr [0xb90ca8], al
// 006c6061  c74424047823b900     mov dword ptr [esp + 4], 0xb92378
// 006c6069  e91260d4ff           jmp 0x40c080
// 006c606e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
