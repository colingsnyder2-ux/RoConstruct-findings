// roc 2007-03 006e5930  unit: seg_006e0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e5930
//
// 006e5930  8b01                 mov eax, dword ptr [ecx]
// 006e5932  8b4020               mov eax, dword ptr [eax + 0x20]
// 006e5935  ffe0                 jmp eax
// library rbxgs/reflection\reflection_property.cpp (function ?read@PropertyDescriptor@Reflection@RBX@@UBEXPAVDescribedBase@23@PBVXmlElement@@AAVIReferenceBinder@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
