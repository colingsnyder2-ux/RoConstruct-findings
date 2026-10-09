// roc 2009-12 006c5ff0  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006c5ff0
//
// 006c5ff0  8a442404             mov al, byte ptr [esp + 4]
// 006c5ff4  3a053c26b900         cmp al, byte ptr [0xb9263c]
// 006c5ffa  7412                 je 0x6c600e
// 006c5ffc  a23c26b900           mov byte ptr [0xb9263c], al
// 006c6001  c74424043c24b900     mov dword ptr [esp + 4], 0xb9243c
// 006c6009  e97260d4ff           jmp 0x40c080
// 006c600e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
