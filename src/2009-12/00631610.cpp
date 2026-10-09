// roc 2009-12 00631610  unit: RBX::VDebugSettings::?$GlobalSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00631610
//
// 00631610  8b442404             mov eax, dword ptr [esp + 4]
// 00631614  3b05f04ab600         cmp eax, dword ptr [0xb64af0]
// 0063161a  7412                 je 0x63162e
// 0063161c  a3f04ab600           mov dword ptr [0xb64af0], eax
// 00631621  c7442404ec4ab800     mov dword ptr [esp + 4], 0xb84aec
// 00631629  e952aaddff           jmp 0x40c080
// 0063162e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setAssertAction@DebugSettings@RBX@@QAEXW4AssertAction@Debugable@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
