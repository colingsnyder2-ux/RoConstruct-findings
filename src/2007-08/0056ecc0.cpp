// roc 2007-08 0056ecc0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056ecc0
//
// 0056ecc0  56                   push esi
// 0056ecc1  57                   push edi
// 0056ecc2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0056ecc6  8bf1                 mov esi, ecx
// 0056ecc8  8bcf                 mov ecx, edi
// 0056ecca  e8d1ebfeff           call 0x55d8a0
// 0056eccf  84c0                 test al, al
// 0056ecd1  7525                 jne 0x56ecf8
// 0056ecd3  8d442410             lea eax, [esp + 0x10]
// 0056ecd7  50                   push eax
// 0056ecd8  8d4f0c               lea ecx, [edi + 0xc]
// 0056ecdb  e8d0e9feff           call 0x55d6b0
// 0056ece0  84c0                 test al, al
// 0056ece2  7414                 je 0x56ecf8
// 0056ece4  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0056ece7  8b11                 mov edx, dword ptr [ecx]
// 0056ece9  8b5208               mov edx, dword ptr [edx + 8]
// 0056ecec  8d442410             lea eax, [esp + 0x10]
// 0056ecf0  50                   push eax
// 0056ecf1  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056ecf5  50                   push eax
// 0056ecf6  ffd2                 call edx
// 0056ecf8  5f                   pop edi
// 0056ecf9  5e                   pop esi
// 0056ecfa  c20c00               ret 0xc
// library rbxgs/v8tree\EnumProperty.cpp (function ?readValue@?$TypedPropertyDescriptor@M@Reflection@RBX@@EBEXPAVDescribedBase@23@PBVXmlElement@@AAVIReferenceBinder@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
