// roc 2009-06 005cc970  unit: RBX::VDebugSettings::?$GlobalSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cc970
//
// 005cc970  8b442404             mov eax, dword ptr [esp + 4]
// 005cc974  3b05d849a200         cmp eax, dword ptr [0xa249d8]
// 005cc97a  7412                 je 0x5cc98e
// 005cc97c  a3d849a200           mov dword ptr [0xa249d8], eax
// 005cc981  c74424041837a400     mov dword ptr [esp + 4], 0xa43718
// 005cc989  e942f9e3ff           jmp 0x40c2d0
// 005cc98e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setAssertAction@DebugSettings@RBX@@QAEXW4AssertAction@Debugable@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
