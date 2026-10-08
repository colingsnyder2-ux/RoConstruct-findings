// roc 2009-06 0064c990  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064c990
//
// 0064c990  8a442404             mov al, byte ptr [esp + 4]
// 0064c994  3a05f0b0a400         cmp al, byte ptr [0xa4b0f0]
// 0064c99a  7412                 je 0x64c9ae
// 0064c99c  a2f0b0a400           mov byte ptr [0xa4b0f0], al
// 0064c9a1  c744240464c3a400     mov dword ptr [esp + 4], 0xa4c364
// 0064c9a9  e922f9dbff           jmp 0x40c2d0
// 0064c9ae  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
