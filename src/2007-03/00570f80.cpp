// roc 2007-03 00570f80  unit: seg_00570000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00570f80
//
// 00570f80  8b442404             mov eax, dword ptr [esp + 4]
// 00570f84  8b4008               mov eax, dword ptr [eax + 8]
// 00570f87  89442404             mov dword ptr [esp + 4], eax
// 00570f8b  e950ffffff           jmp 0x570ee0
// library rbxgs/reflection\reflection_object.cpp (function ?isMemberOf@MemberDescriptor@Reflection@RBX@@QBE_NPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_object.cpp
