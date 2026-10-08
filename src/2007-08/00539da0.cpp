// roc 2007-08 00539da0  unit: RBX::Reflection::VValue::V?$vector::?$holder  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00539da0
//
// 00539da0  a12cbc8a00           mov eax, dword ptr [0x8abc2c]
// 00539da5  56                   push esi
// 00539da6  8b742408             mov esi, dword ptr [esp + 8]
// 00539daa  50                   push eax
// 00539dab  56                   push esi
// 00539dac  e85f4b0800           call 0x5be910
// 00539db1  6874567a00           push 0x7a5674
// 00539db6  56                   push esi
// 00539db7  e8343e0800           call 0x5bdbf0
// 00539dbc  6a00                 push 0
// 00539dbe  6860445300           push 0x534460
// 00539dc3  56                   push esi
// 00539dc4  e8f73e0800           call 0x5bdcc0
// 00539dc9  6afd                 push -3
// 00539dcb  56                   push esi
// 00539dcc  e81f420800           call 0x5bdff0
// 00539dd1  6844587a00           push 0x7a5844
// 00539dd6  56                   push esi
// 00539dd7  e8143e0800           call 0x5bdbf0
// 00539ddc  6a00                 push 0
// 00539dde  6830445300           push 0x534430
// 00539de3  56                   push esi
// 00539de4  e8d73e0800           call 0x5bdcc0
// 00539de9  6afd                 push -3
// 00539deb  56                   push esi
// 00539dec  e8ff410800           call 0x5bdff0
// 00539df1  83c440               add esp, 0x40
// 00539df4  683c587a00           push 0x7a583c
// 00539df9  56                   push esi
// 00539dfa  e8f13d0800           call 0x5bdbf0
// 00539dff  6a00                 push 0
// 00539e01  68d06b5300           push 0x536bd0
// 00539e06  56                   push esi
// 00539e07  e8b43e0800           call 0x5bdcc0
// 00539e0c  6afd                 push -3
// 00539e0e  56                   push esi
// 00539e0f  e8dc410800           call 0x5bdff0
// 00539e14  6828587a00           push 0x7a5828
// 00539e19  56                   push esi
// 00539e1a  e8d13d0800           call 0x5bdbf0
// 00539e1f  6a00                 push 0
// 00539e21  68f09c5300           push 0x539cf0
// 00539e26  56                   push esi
// 00539e27  e8943e0800           call 0x5bdcc0
// 00539e2c  6afd                 push -3
// 00539e2e  56                   push esi
// 00539e2f  e8bc410800           call 0x5bdff0
// 00539e34  6afe                 push -2
// 00539e36  56                   push esi
// 00539e37  e854370800           call 0x5bd590
// 00539e3c  83c440               add esp, 0x40
// 00539e3f  5e                   pop esi
// 00539e40  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?registerClass@?$Bridge@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@SAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
