// roc 2008-06 00594ac0  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594ac0
//
// 00594ac0  56                   push esi
// 00594ac1  8bf1                 mov esi, ecx
// 00594ac3  e888ffffff           call 0x594a50
// 00594ac8  8906                 mov dword ptr [esi], eax
// 00594aca  c7460400000000       mov dword ptr [esi + 4], 0
// 00594ad1  8bc6                 mov eax, esi
// 00594ad3  5e                   pop esi
// 00594ad4  c3                   ret 
// library rbxgs/reflection\type.cpp (function ??0Value@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
