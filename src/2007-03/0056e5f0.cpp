// roc 2007-03 0056e5f0  unit: seg_00560000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056e5f0
//
// 0056e5f0  56                   push esi
// 0056e5f1  57                   push edi
// 0056e5f2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0056e5f6  8bf1                 mov esi, ecx
// 0056e5f8  8bcf                 mov ecx, edi
// 0056e5fa  e8710dffff           call 0x55f370
// 0056e5ff  84c0                 test al, al
// 0056e601  7525                 jne 0x56e628
// 0056e603  8d442410             lea eax, [esp + 0x10]
// 0056e607  50                   push eax
// 0056e608  8d4f0c               lea ecx, [edi + 0xc]
// 0056e60b  e8d00bffff           call 0x55f1e0
// 0056e610  84c0                 test al, al
// 0056e612  7414                 je 0x56e628
// 0056e614  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0056e617  8b11                 mov edx, dword ptr [ecx]
// 0056e619  8b5208               mov edx, dword ptr [edx + 8]
// 0056e61c  8d442410             lea eax, [esp + 0x10]
// 0056e620  50                   push eax
// 0056e621  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056e625  50                   push eax
// 0056e626  ffd2                 call edx
// 0056e628  5f                   pop edi
// 0056e629  5e                   pop esi
// 0056e62a  c20c00               ret 0xc
// library rbxgs/v8tree\EnumProperty.cpp (function ?readValue@?$TypedPropertyDescriptor@M@Reflection@RBX@@EBEXPAVDescribedBase@23@PBVXmlElement@@AAVIReferenceBinder@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
