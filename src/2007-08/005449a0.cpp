// roc 2007-08 005449a0  unit: RBX::VDebugSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005449a0
//
// 005449a0  8a442404             mov al, byte ptr [esp + 4]
// 005449a4  3a05090e8c00         cmp al, byte ptr [0x8c0e09]
// 005449aa  7412                 je 0x5449be
// 005449ac  a2090e8c00           mov byte ptr [0x8c0e09], al
// 005449b1  c744240494168c00     mov dword ptr [esp + 4], 0x8c1694
// 005449b9  e952fdefff           jmp 0x444710
// 005449be  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
