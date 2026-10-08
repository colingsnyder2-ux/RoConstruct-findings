// roc 2011-06 006f6900  unit: RBX::VPhysicsSettings::?$GlobalAdvancedSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f6900
//
// 006f6900  8a442404             mov al, byte ptr [esp + 4]
// 006f6904  3a05f45cc600         cmp al, byte ptr [0xc65cf4]
// 006f690a  7412                 je 0x6f691e
// 006f690c  a2f45cc600           mov byte ptr [0xc65cf4], al
// 006f6911  c7442404fc23cd00     mov dword ptr [esp + 4], 0xcd23fc
// 006f6919  e942b6d1ff           jmp 0x411f60
// 006f691e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
