// roc 2009-12 00449640  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00449640
//
// 00449640  8b442404             mov eax, dword ptr [esp + 4]
// 00449644  3b057025b100         cmp eax, dword ptr [0xb12570]
// 0044964a  7412                 je 0x44965e
// 0044964c  a37025b100           mov dword ptr [0xb12570], eax
// 00449651  c744240450afb700     mov dword ptr [esp + 4], 0xb7af50
// 00449659  e9222afcff           jmp 0x40c080
// 0044965e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setAssertAction@DebugSettings@RBX@@QAEXW4AssertAction@Debugable@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
