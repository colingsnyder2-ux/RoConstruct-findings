// roc 2007-03 0056f170  unit: seg_00560000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056f170
//
// 0056f170  51                   push ecx
// 0056f171  56                   push esi
// 0056f172  57                   push edi
// 0056f173  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0056f177  8bf1                 mov esi, ecx
// 0056f179  8bcf                 mov ecx, edi
// 0056f17b  e8f001ffff           call 0x55f370
// 0056f180  84c0                 test al, al
// 0056f182  752f                 jne 0x56f1b3
// 0056f184  8d442414             lea eax, [esp + 0x14]
// 0056f188  50                   push eax
// 0056f189  8d4f0c               lea ecx, [edi + 0xc]
// 0056f18c  e82ffffeff           call 0x55f0c0
// 0056f191  84c0                 test al, al
// 0056f193  741e                 je 0x56f1b3
// 0056f195  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056f199  51                   push ecx
// 0056f19a  8d4c240c             lea ecx, [esp + 0xc]
// 0056f19e  e85d3f0100           call 0x583100
// 0056f1a3  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0056f1a6  8b11                 mov edx, dword ptr [ecx]
// 0056f1a8  8b5208               mov edx, dword ptr [edx + 8]
// 0056f1ab  50                   push eax
// 0056f1ac  8b442414             mov eax, dword ptr [esp + 0x14]
// 0056f1b0  50                   push eax
// 0056f1b1  ffd2                 call edx
// 0056f1b3  5f                   pop edi
// 0056f1b4  5e                   pop esi
// 0056f1b5  59                   pop ecx
// 0056f1b6  c20c00               ret 0xc
// library rbxgs/v8tree\EnumProperty.cpp (function ?readValue@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@EBEXPAVDescribedBase@23@PBVXmlElement@@AAVIReferenceBinder@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
