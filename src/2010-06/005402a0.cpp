// roc 2010-06 005402a0  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005402a0
//
// 005402a0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005402a4  8b442414             mov eax, dword ptr [esp + 0x14]
// 005402a8  3bc8                 cmp ecx, eax
// 005402aa  7411                 je 0x5402bd
// 005402ac  8b542418             mov edx, dword ptr [esp + 0x18]
// 005402b0  8b12                 mov edx, dword ptr [edx]
// 005402b2  3911                 cmp dword ptr [ecx], edx
// 005402b4  7407                 je 0x5402bd
// 005402b6  83c104               add ecx, 4
// 005402b9  3bc8                 cmp ecx, eax
// 005402bb  75f5                 jne 0x5402b2
// 005402bd  8b442404             mov eax, dword ptr [esp + 4]
// 005402c1  8b542408             mov edx, dword ptr [esp + 8]
// 005402c5  8910                 mov dword ptr [eax], edx
// 005402c7  894804               mov dword ptr [eax + 4], ecx
// 005402ca  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??$find@V?$_Vector_iterator@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@PAVEnumDescriptor@Reflection@RBX@@@std@@YA?AV?$_Vector_iterator@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@0@V10@0ABQAVEnumDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
