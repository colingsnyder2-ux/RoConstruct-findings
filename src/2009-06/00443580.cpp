// roc 2009-06 00443580  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00443580
//
// 00443580  8b442404             mov eax, dword ptr [esp + 4]
// 00443584  3b0560cb9f00         cmp eax, dword ptr [0x9fcb60]
// 0044358a  7412                 je 0x44359e
// 0044358c  a360cb9f00           mov dword ptr [0x9fcb60], eax
// 00443591  c744240440aea300     mov dword ptr [esp + 4], 0xa3ae40
// 00443599  e9328dfcff           jmp 0x40c2d0
// 0044359e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setAssertAction@DebugSettings@RBX@@QAEXW4AssertAction@Debugable@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
