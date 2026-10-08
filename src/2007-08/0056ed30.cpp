// roc 2007-08 0056ed30  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056ed30
//
// 0056ed30  56                   push esi
// 0056ed31  57                   push edi
// 0056ed32  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0056ed36  8bf1                 mov esi, ecx
// 0056ed38  8bcf                 mov ecx, edi
// 0056ed3a  e861ebfeff           call 0x55d8a0
// 0056ed3f  84c0                 test al, al
// 0056ed41  7525                 jne 0x56ed68
// 0056ed43  8d442410             lea eax, [esp + 0x10]
// 0056ed47  50                   push eax
// 0056ed48  8d4f0c               lea ecx, [edi + 0xc]
// 0056ed4b  e8a0e8feff           call 0x55d5f0
// 0056ed50  84c0                 test al, al
// 0056ed52  7414                 je 0x56ed68
// 0056ed54  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0056ed57  8b11                 mov edx, dword ptr [ecx]
// 0056ed59  8b5208               mov edx, dword ptr [edx + 8]
// 0056ed5c  8d442410             lea eax, [esp + 0x10]
// 0056ed60  50                   push eax
// 0056ed61  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056ed65  50                   push eax
// 0056ed66  ffd2                 call edx
// 0056ed68  5f                   pop edi
// 0056ed69  5e                   pop esi
// 0056ed6a  c20c00               ret 0xc
// library rbxgs/v8tree\EnumProperty.cpp (function ?readValue@?$TypedPropertyDescriptor@M@Reflection@RBX@@EBEXPAVDescribedBase@23@PBVXmlElement@@AAVIReferenceBinder@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
