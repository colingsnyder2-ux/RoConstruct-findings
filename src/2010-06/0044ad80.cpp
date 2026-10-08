// roc 2010-06 0044ad80  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044ad80
//
// 0044ad80  8b442404             mov eax, dword ptr [esp + 4]
// 0044ad84  3b057073b800         cmp eax, dword ptr [0xb87370]
// 0044ad8a  7412                 je 0x44ad9e
// 0044ad8c  a37073b800           mov dword ptr [0xb87370], eax
// 0044ad91  c74424041015c000     mov dword ptr [esp + 4], 0xc01510
// 0044ad99  e9d216fcff           jmp 0x40c470
// 0044ad9e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setAssertAction@DebugSettings@RBX@@QAEXW4AssertAction@Debugable@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
