// roc 2007-08 0056f8f0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056f8f0
//
// 0056f8f0  51                   push ecx
// 0056f8f1  56                   push esi
// 0056f8f2  57                   push edi
// 0056f8f3  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0056f8f7  8bf1                 mov esi, ecx
// 0056f8f9  8bcf                 mov ecx, edi
// 0056f8fb  e8a0dffeff           call 0x55d8a0
// 0056f900  84c0                 test al, al
// 0056f902  752f                 jne 0x56f933
// 0056f904  8d442414             lea eax, [esp + 0x14]
// 0056f908  50                   push eax
// 0056f909  8d4f0c               lea ecx, [edi + 0xc]
// 0056f90c  e8dfdcfeff           call 0x55d5f0
// 0056f911  84c0                 test al, al
// 0056f913  741e                 je 0x56f933
// 0056f915  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056f919  51                   push ecx
// 0056f91a  8d4c240c             lea ecx, [esp + 0xc]
// 0056f91e  e86d700100           call 0x586990
// 0056f923  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0056f926  8b11                 mov edx, dword ptr [ecx]
// 0056f928  8b5208               mov edx, dword ptr [edx + 8]
// 0056f92b  50                   push eax
// 0056f92c  8b442414             mov eax, dword ptr [esp + 0x14]
// 0056f930  50                   push eax
// 0056f931  ffd2                 call edx
// 0056f933  5f                   pop edi
// 0056f934  5e                   pop esi
// 0056f935  59                   pop ecx
// 0056f936  c20c00               ret 0xc
// library rbxgs/v8tree\EnumProperty.cpp (function ?readValue@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@EBEXPAVDescribedBase@23@PBVXmlElement@@AAVIReferenceBinder@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
