// roc 2008-06 00565d40  unit: RBX::VDebugSettings::?$GlobalSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565d40
//
// 00565d40  8b442404             mov eax, dword ptr [esp + 4]
// 00565d44  3b0554ac9700         cmp eax, dword ptr [0x97ac54]
// 00565d4a  7412                 je 0x565d5e
// 00565d4c  a354ac9700           mov dword ptr [0x97ac54], eax
// 00565d51  c7442404f4449700     mov dword ptr [esp + 4], 0x9744f4
// 00565d59  e9a27deaff           jmp 0x40db00
// 00565d5e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setAssertAction@DebugSettings@RBX@@QAEXW4AssertAction@Debugable@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
