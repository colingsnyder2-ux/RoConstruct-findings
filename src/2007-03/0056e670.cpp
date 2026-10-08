// roc 2007-03 0056e670  unit: seg_00560000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056e670
//
// 0056e670  56                   push esi
// 0056e671  57                   push edi
// 0056e672  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0056e676  8bf1                 mov esi, ecx
// 0056e678  8bcf                 mov ecx, edi
// 0056e67a  e8f10cffff           call 0x55f370
// 0056e67f  84c0                 test al, al
// 0056e681  7525                 jne 0x56e6a8
// 0056e683  8d442410             lea eax, [esp + 0x10]
// 0056e687  50                   push eax
// 0056e688  8d4f0c               lea ecx, [edi + 0xc]
// 0056e68b  e8f00affff           call 0x55f180
// 0056e690  84c0                 test al, al
// 0056e692  7414                 je 0x56e6a8
// 0056e694  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0056e697  8b11                 mov edx, dword ptr [ecx]
// 0056e699  8b5208               mov edx, dword ptr [edx + 8]
// 0056e69c  8d442410             lea eax, [esp + 0x10]
// 0056e6a0  50                   push eax
// 0056e6a1  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056e6a5  50                   push eax
// 0056e6a6  ffd2                 call edx
// 0056e6a8  5f                   pop edi
// 0056e6a9  5e                   pop esi
// 0056e6aa  c20c00               ret 0xc
// library rbxgs/v8tree\EnumProperty.cpp (function ?readValue@?$TypedPropertyDescriptor@M@Reflection@RBX@@EBEXPAVDescribedBase@23@PBVXmlElement@@AAVIReferenceBinder@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
