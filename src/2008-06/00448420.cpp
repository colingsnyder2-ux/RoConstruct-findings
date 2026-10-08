// roc 2008-06 00448420  unit: VCRenderSettings::?$EnumPropDescriptor  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00448420
//
// 00448420  56                   push esi
// 00448421  8b742408             mov esi, dword ptr [esp + 8]
// 00448425  57                   push edi
// 00448426  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0044842a  3bf7                 cmp esi, edi
// 0044842c  741c                 je 0x44844a
// 0044842e  8bff                 mov edi, edi
// 00448430  8b442418             mov eax, dword ptr [esp + 0x18]
// 00448434  8b0e                 mov ecx, dword ptr [esi]
// 00448436  50                   push eax
// 00448437  51                   push ecx
// 00448438  ff54241c             call dword ptr [esp + 0x1c]
// 0044843c  83c408               add esp, 8
// 0044843f  84c0                 test al, al
// 00448441  7507                 jne 0x44844a
// 00448443  83c604               add esi, 4
// 00448446  3bf7                 cmp esi, edi
// 00448448  75e6                 jne 0x448430
// 0044844a  5f                   pop edi
// 0044844b  8bc6                 mov eax, esi
// 0044844d  5e                   pop esi
// 0044844e  c3                   ret 
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??$_Find_if@PBQBVItem@EnumDescriptor@Reflection@RBX@@V?$bind_t@_NP6A_NPBVItem@EnumDescriptor@Reflection@RBX@@H@ZV?$list2@V?$arg@$00@boost@@V?$value@H@_bi@2@@_bi@boost@@@_bi@boost@@@std@@YAPBQBVItem@EnumDescriptor@Reflection@RBX@@PBQBV1234@0V?$bind_t@_NP6A_NPBVItem@EnumDescriptor@Reflection@RBX@@H@ZV?$list2@V?$arg@$00@boost@@V?$value@H@_bi@2@@_bi@boost@@@_bi@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
