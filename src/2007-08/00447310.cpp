// roc 2007-08 00447310  unit: VCRenderSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00447310
//
// 00447310  8a442404             mov al, byte ptr [esp + 4]
// 00447314  3a05d4ba8b00         cmp al, byte ptr [0x8bbad4]
// 0044731a  7412                 je 0x44732e
// 0044731c  a2d4ba8b00           mov byte ptr [0x8bbad4], al
// 00447321  c7442404dcbc8b00     mov dword ptr [esp + 4], 0x8bbcdc
// 00447329  e9e2d3ffff           jmp 0x444710
// 0044732e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
