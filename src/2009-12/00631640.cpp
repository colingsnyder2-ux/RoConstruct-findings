// roc 2009-12 00631640  unit: RBX::VDebugSettings::?$GlobalSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00631640
//
// 00631640  8b442404             mov eax, dword ptr [esp + 4]
// 00631644  3b05a44db600         cmp eax, dword ptr [0xb64da4]
// 0063164a  7412                 je 0x63165e
// 0063164c  a3a44db600           mov dword ptr [0xb64da4], eax
// 00631651  c7442404884eb800     mov dword ptr [esp + 4], 0xb84e88
// 00631659  e922aaddff           jmp 0x40c080
// 0063165e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setAssertAction@DebugSettings@RBX@@QAEXW4AssertAction@Debugable@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
