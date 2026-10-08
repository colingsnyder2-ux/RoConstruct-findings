// roc 2007-08 00544ac0  unit: RBX::VDebugSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544ac0
//
// 00544ac0  8b442404             mov eax, dword ptr [esp + 4]
// 00544ac4  3b05a0df8900         cmp eax, dword ptr [0x89dfa0]
// 00544aca  7412                 je 0x544ade
// 00544acc  a3a0df8900           mov dword ptr [0x89dfa0], eax
// 00544ad1  c7442404c8178c00     mov dword ptr [esp + 4], 0x8c17c8
// 00544ad9  e932fcefff           jmp 0x444710
// 00544ade  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setAssertAction@DebugSettings@RBX@@QAEXW4AssertAction@Debugable@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
