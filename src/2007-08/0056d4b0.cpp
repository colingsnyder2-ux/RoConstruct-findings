// roc 2007-08 0056d4b0  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056d4b0
//
// 0056d4b0  56                   push esi
// 0056d4b1  57                   push edi
// 0056d4b2  8bf1                 mov esi, ecx
// 0056d4b4  e897feffff           call 0x56d350
// 0056d4b9  8d7e04               lea edi, [esi + 4]
// 0056d4bc  8bcf                 mov ecx, edi
// 0056d4be  8906                 mov dword ptr [esi], eax
// 0056d4c0  e81bffffff           call 0x56d3e0
// 0056d4c5  894704               mov dword ptr [edi + 4], eax
// 0056d4c8  c7470800000000       mov dword ptr [edi + 8], 0
// 0056d4cf  5f                   pop edi
// 0056d4d0  8bc6                 mov eax, esi
// 0056d4d2  5e                   pop esi
// 0056d4d3  c3                   ret 
// library rbxgs/reflection\type.cpp (function ??0SignatureDescriptor@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
