// roc 2012-06 008a3520  unit: RBX::VPhysicsSettings::?$GlobalAdvancedSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a3520
//
// 008a3520  8b442404             mov eax, dword ptr [esp + 4]
// 008a3524  3b050c08e500         cmp eax, dword ptr [0xe5080c]
// 008a352a  7412                 je 0x8a353e
// 008a352c  a30c08e500           mov dword ptr [0xe5080c], eax
// 008a3531  c7442404142ce500     mov dword ptr [esp + 4], 0xe52c14
// 008a3539  e96218b7ff           jmp 0x414da0
// 008a353e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setAssertAction@DebugSettings@RBX@@QAEXW4AssertAction@Debugable@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
