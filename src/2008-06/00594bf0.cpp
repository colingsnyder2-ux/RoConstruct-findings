// roc 2008-06 00594bf0  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594bf0
//
// 00594bf0  56                   push esi
// 00594bf1  8bf1                 mov esi, ecx
// 00594bf3  e858feffff           call 0x594a50
// 00594bf8  8d4e04               lea ecx, [esi + 4]
// 00594bfb  8906                 mov dword ptr [esi], eax
// 00594bfd  e8defeffff           call 0x594ae0
// 00594c02  8bc6                 mov eax, esi
// 00594c04  5e                   pop esi
// 00594c05  c3                   ret 
// library rbxgs/reflection\type.cpp (function ??0SignatureDescriptor@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
