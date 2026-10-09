// roc 2009-12 006c60e0  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006c60e0
//
// 006c60e0  8a442404             mov al, byte ptr [esp + 4]
// 006c60e4  3a056314b900         cmp al, byte ptr [0xb91463]
// 006c60ea  7412                 je 0x6c60fe
// 006c60ec  a26314b900           mov byte ptr [0xb91463], al
// 006c60f1  c74424045c24b900     mov dword ptr [esp + 4], 0xb9245c
// 006c60f9  e9825fd4ff           jmp 0x40c080
// 006c60fe  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
