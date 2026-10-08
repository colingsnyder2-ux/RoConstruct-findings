// roc 2012-06 0067ebc0  unit: RBX::VTaskSchedulerSettings::?$GlobalAdvancedSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0067ebc0
//
// 0067ebc0  8b442404             mov eax, dword ptr [esp + 4]
// 0067ebc4  3b05f450db00         cmp eax, dword ptr [0xdb50f4]
// 0067ebca  7412                 je 0x67ebde
// 0067ebcc  a3f450db00           mov dword ptr [0xdb50f4], eax
// 0067ebd1  c7442404649be200     mov dword ptr [esp + 4], 0xe29b64
// 0067ebd9  e9c261d9ff           jmp 0x414da0
// 0067ebde  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setAssertAction@DebugSettings@RBX@@QAEXW4AssertAction@Debugable@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
