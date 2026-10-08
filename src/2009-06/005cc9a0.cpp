// roc 2009-06 005cc9a0  unit: RBX::VDebugSettings::?$GlobalSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cc9a0
//
// 005cc9a0  8b442404             mov eax, dword ptr [esp + 4]
// 005cc9a4  3b05884ca200         cmp eax, dword ptr [0xa24c88]
// 005cc9aa  7412                 je 0x5cc9be
// 005cc9ac  a3884ca200           mov dword ptr [0xa24c88], eax
// 005cc9b1  c7442404f439a400     mov dword ptr [esp + 4], 0xa439f4
// 005cc9b9  e912f9e3ff           jmp 0x40c2d0
// 005cc9be  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setAssertAction@DebugSettings@RBX@@QAEXW4AssertAction@Debugable@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
