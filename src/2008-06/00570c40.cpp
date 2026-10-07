// roc 2008-06 00570c40  unit: RBX::Reflection::ClassDescriptor  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00570c40
//
// 00570c40  8b442404             mov eax, dword ptr [esp + 4]
// 00570c44  8b4008               mov eax, dword ptr [eax + 8]
// 00570c47  89442404             mov dword ptr [esp + 4], eax
// 00570c4b  e950ffffff           jmp 0x570ba0
// library rbxgs/reflection\reflection_object.cpp (function ?isMemberOf@MemberDescriptor@Reflection@RBX@@QBE_NPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_object.cpp
