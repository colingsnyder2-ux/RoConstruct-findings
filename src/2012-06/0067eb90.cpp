// roc 2012-06 0067eb90  unit: RBX::VTaskSchedulerSettings::?$GlobalAdvancedSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0067eb90
//
// 0067eb90  8b442404             mov eax, dword ptr [esp + 4]
// 0067eb94  3b050c24e000         cmp eax, dword ptr [0xe0240c]
// 0067eb9a  7412                 je 0x67ebae
// 0067eb9c  a30c24e000           mov dword ptr [0xe0240c], eax
// 0067eba1  c7442404009ee200     mov dword ptr [esp + 4], 0xe29e00
// 0067eba9  e9f261d9ff           jmp 0x414da0
// 0067ebae  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setAssertAction@DebugSettings@RBX@@QAEXW4AssertAction@Debugable@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
