// roc 2009-12 006c61a0  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006c61a0
//
// 006c61a0  8a442404             mov al, byte ptr [esp + 4]
// 006c61a4  3a05a887b900         cmp al, byte ptr [0xb987a8]
// 006c61aa  7412                 je 0x6c61be
// 006c61ac  a2a887b900           mov byte ptr [0xb987a8], al
// 006c61b1  c74424043823b900     mov dword ptr [esp + 4], 0xb92338
// 006c61b9  e9c25ed4ff           jmp 0x40c080
// 006c61be  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
