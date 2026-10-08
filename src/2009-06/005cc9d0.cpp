// roc 2009-06 005cc9d0  unit: RBX::VDebugSettings::?$GlobalSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cc9d0
//
// 005cc9d0  8b442404             mov eax, dword ptr [esp + 4]
// 005cc9d4  3b05c0efa000         cmp eax, dword ptr [0xa0efc0]
// 005cc9da  7412                 je 0x5cc9ee
// 005cc9dc  a3c0efa000           mov dword ptr [0xa0efc0], eax
// 005cc9e1  c74424049c38a400     mov dword ptr [esp + 4], 0xa4389c
// 005cc9e9  e9e2f8e3ff           jmp 0x40c2d0
// 005cc9ee  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setAssertAction@DebugSettings@RBX@@QAEXW4AssertAction@Debugable@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
