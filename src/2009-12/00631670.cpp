// roc 2009-12 00631670  unit: RBX::VDebugSettings::?$GlobalSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00631670
//
// 00631670  8b442404             mov eax, dword ptr [esp + 4]
// 00631674  3b050cbfb300         cmp eax, dword ptr [0xb3bf0c]
// 0063167a  7412                 je 0x63168e
// 0063167c  a30cbfb300           mov dword ptr [0xb3bf0c], eax
// 00631681  c7442404bc4cb800     mov dword ptr [esp + 4], 0xb84cbc
// 00631689  e9f2a9ddff           jmp 0x40c080
// 0063168e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setAssertAction@DebugSettings@RBX@@QAEXW4AssertAction@Debugable@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
