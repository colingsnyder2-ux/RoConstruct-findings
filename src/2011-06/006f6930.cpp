// roc 2011-06 006f6930  unit: RBX::VPhysicsSettings::?$GlobalAdvancedSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f6930
//
// 006f6930  8a442404             mov al, byte ptr [esp + 4]
// 006f6934  3a059850cd00         cmp al, byte ptr [0xcd5098]
// 006f693a  7412                 je 0x6f694e
// 006f693c  a29850cd00           mov byte ptr [0xcd5098], al
// 006f6941  c7442404dc23cd00     mov dword ptr [esp + 4], 0xcd23dc
// 006f6949  e912b6d1ff           jmp 0x411f60
// 006f694e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
