// roc 2010-06 0044b7c0  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044b7c0
//
// 0044b7c0  56                   push esi
// 0044b7c1  8b742408             mov esi, dword ptr [esp + 8]
// 0044b7c5  57                   push edi
// 0044b7c6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0044b7ca  3bf7                 cmp esi, edi
// 0044b7cc  741c                 je 0x44b7ea
// 0044b7ce  8bff                 mov edi, edi
// 0044b7d0  8b442418             mov eax, dword ptr [esp + 0x18]
// 0044b7d4  8b0e                 mov ecx, dword ptr [esi]
// 0044b7d6  50                   push eax
// 0044b7d7  51                   push ecx
// 0044b7d8  ff54241c             call dword ptr [esp + 0x1c]
// 0044b7dc  83c408               add esp, 8
// 0044b7df  84c0                 test al, al
// 0044b7e1  7507                 jne 0x44b7ea
// 0044b7e3  83c604               add esi, 4
// 0044b7e6  3bf7                 cmp esi, edi
// 0044b7e8  75e6                 jne 0x44b7d0
// 0044b7ea  5f                   pop edi
// 0044b7eb  8bc6                 mov eax, esi
// 0044b7ed  5e                   pop esi
// 0044b7ee  c3                   ret 
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??$_Find_if@PBQBVItem@EnumDescriptor@Reflection@RBX@@V?$bind_t@_NP6A_NPBVItem@EnumDescriptor@Reflection@RBX@@H@ZV?$list2@V?$arg@$00@boost@@V?$value@H@_bi@2@@_bi@boost@@@_bi@boost@@@std@@YAPBQBVItem@EnumDescriptor@Reflection@RBX@@PBQBV1234@0V?$bind_t@_NP6A_NPBVItem@EnumDescriptor@Reflection@RBX@@H@ZV?$list2@V?$arg@$00@boost@@V?$value@H@_bi@2@@_bi@boost@@@_bi@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
