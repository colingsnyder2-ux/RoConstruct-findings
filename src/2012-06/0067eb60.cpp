// roc 2012-06 0067eb60  unit: RBX::VTaskSchedulerSettings::?$GlobalAdvancedSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0067eb60
//
// 0067eb60  8b442404             mov eax, dword ptr [esp + 4]
// 0067eb64  3b055c21e000         cmp eax, dword ptr [0xe0215c]
// 0067eb6a  7412                 je 0x67eb7e
// 0067eb6c  a35c21e000           mov dword ptr [0xe0215c], eax
// 0067eb71  c74424041898e200     mov dword ptr [esp + 4], 0xe29818
// 0067eb79  e92262d9ff           jmp 0x414da0
// 0067eb7e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setAssertAction@DebugSettings@RBX@@QAEXW4AssertAction@Debugable@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
