// roc 2007-08 005378e0  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005378e0
//
// 005378e0  a188be8a00           mov eax, dword ptr [0x8abe88]
// 005378e5  56                   push esi
// 005378e6  8b742408             mov esi, dword ptr [esp + 8]
// 005378ea  50                   push eax
// 005378eb  56                   push esi
// 005378ec  e81f700800           call 0x5be910
// 005378f1  6874567a00           push 0x7a5674
// 005378f6  56                   push esi
// 005378f7  e8f4620800           call 0x5bdbf0
// 005378fc  6a00                 push 0
// 005378fe  68f0575300           push 0x5357f0
// 00537903  56                   push esi
// 00537904  e8b7630800           call 0x5bdcc0
// 00537909  6afd                 push -3
// 0053790b  56                   push esi
// 0053790c  e8df660800           call 0x5bdff0
// 00537911  6844587a00           push 0x7a5844
// 00537916  56                   push esi
// 00537917  e8d4620800           call 0x5bdbf0
// 0053791c  6a00                 push 0
// 0053791e  68c0575300           push 0x5357c0
// 00537923  56                   push esi
// 00537924  e897630800           call 0x5bdcc0
// 00537929  6afd                 push -3
// 0053792b  56                   push esi
// 0053792c  e8bf660800           call 0x5bdff0
// 00537931  83c440               add esp, 0x40
// 00537934  683c587a00           push 0x7a583c
// 00537939  56                   push esi
// 0053793a  e8b1620800           call 0x5bdbf0
// 0053793f  6a00                 push 0
// 00537941  68206c5300           push 0x536c20
// 00537946  56                   push esi
// 00537947  e874630800           call 0x5bdcc0
// 0053794c  6afd                 push -3
// 0053794e  56                   push esi
// 0053794f  e89c660800           call 0x5bdff0
// 00537954  6828587a00           push 0x7a5828
// 00537959  56                   push esi
// 0053795a  e891620800           call 0x5bdbf0
// 0053795f  6a00                 push 0
// 00537961  68a0575300           push 0x5357a0
// 00537966  56                   push esi
// 00537967  e854630800           call 0x5bdcc0
// 0053796c  6afd                 push -3
// 0053796e  56                   push esi
// 0053796f  e87c660800           call 0x5bdff0
// 00537974  6afe                 push -2
// 00537976  56                   push esi
// 00537977  e8145c0800           call 0x5bd590
// 0053797c  83c440               add esp, 0x40
// 0053797f  5e                   pop esi
// 00537980  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?registerClass@?$Bridge@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@SAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
