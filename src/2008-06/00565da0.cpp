// roc 2008-06 00565da0  unit: RBX::VDebugSettings::?$GlobalSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565da0
//
// 00565da0  8b442404             mov eax, dword ptr [esp + 4]
// 00565da4  3b057c629400         cmp eax, dword ptr [0x94627c]
// 00565daa  7412                 je 0x565dbe
// 00565dac  a37c629400           mov dword ptr [0x94627c], eax
// 00565db1  c744240430469700     mov dword ptr [esp + 4], 0x974630
// 00565db9  e9427deaff           jmp 0x40db00
// 00565dbe  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setAssertAction@DebugSettings@RBX@@QAEXW4AssertAction@Debugable@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
