// roc 2007-08 00570da0  unit: RBX::Reflection::ClassDescriptor  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00570da0
//
// 00570da0  8b442404             mov eax, dword ptr [esp + 4]
// 00570da4  8b4008               mov eax, dword ptr [eax + 8]
// 00570da7  89442404             mov dword ptr [esp + 4], eax
// 00570dab  e950ffffff           jmp 0x570d00
// library rbxgs/reflection\reflection_object.cpp (function ?isMemberOf@MemberDescriptor@Reflection@RBX@@QBE_NPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_object.cpp
