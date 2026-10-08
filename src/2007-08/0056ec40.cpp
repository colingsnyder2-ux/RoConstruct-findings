// roc 2007-08 0056ec40  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056ec40
//
// 0056ec40  56                   push esi
// 0056ec41  57                   push edi
// 0056ec42  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0056ec46  8bf1                 mov esi, ecx
// 0056ec48  8bcf                 mov ecx, edi
// 0056ec4a  e851ecfeff           call 0x55d8a0
// 0056ec4f  84c0                 test al, al
// 0056ec51  7525                 jne 0x56ec78
// 0056ec53  8d442410             lea eax, [esp + 0x10]
// 0056ec57  50                   push eax
// 0056ec58  8d4f0c               lea ecx, [edi + 0xc]
// 0056ec5b  e8b0eafeff           call 0x55d710
// 0056ec60  84c0                 test al, al
// 0056ec62  7414                 je 0x56ec78
// 0056ec64  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0056ec67  8b11                 mov edx, dword ptr [ecx]
// 0056ec69  8b5208               mov edx, dword ptr [edx + 8]
// 0056ec6c  8d442410             lea eax, [esp + 0x10]
// 0056ec70  50                   push eax
// 0056ec71  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056ec75  50                   push eax
// 0056ec76  ffd2                 call edx
// 0056ec78  5f                   pop edi
// 0056ec79  5e                   pop esi
// 0056ec7a  c20c00               ret 0xc
// library rbxgs/v8tree\EnumProperty.cpp (function ?readValue@?$TypedPropertyDescriptor@M@Reflection@RBX@@EBEXPAVDescribedBase@23@PBVXmlElement@@AAVIReferenceBinder@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
