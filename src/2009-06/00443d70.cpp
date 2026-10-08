// roc 2009-06 00443d70  unit: CRenderSettingsItem  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00443d70
//
// 00443d70  56                   push esi
// 00443d71  8b742408             mov esi, dword ptr [esp + 8]
// 00443d75  57                   push edi
// 00443d76  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00443d7a  3bf7                 cmp esi, edi
// 00443d7c  741c                 je 0x443d9a
// 00443d7e  8bff                 mov edi, edi
// 00443d80  8b442418             mov eax, dword ptr [esp + 0x18]
// 00443d84  8b0e                 mov ecx, dword ptr [esi]
// 00443d86  50                   push eax
// 00443d87  51                   push ecx
// 00443d88  ff54241c             call dword ptr [esp + 0x1c]
// 00443d8c  83c408               add esp, 8
// 00443d8f  84c0                 test al, al
// 00443d91  7507                 jne 0x443d9a
// 00443d93  83c604               add esi, 4
// 00443d96  3bf7                 cmp esi, edi
// 00443d98  75e6                 jne 0x443d80
// 00443d9a  5f                   pop edi
// 00443d9b  8bc6                 mov eax, esi
// 00443d9d  5e                   pop esi
// 00443d9e  c3                   ret 
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??$_Find_if@PBQBVItem@EnumDescriptor@Reflection@RBX@@V?$bind_t@_NP6A_NPBVItem@EnumDescriptor@Reflection@RBX@@H@ZV?$list2@V?$arg@$00@boost@@V?$value@H@_bi@2@@_bi@boost@@@_bi@boost@@@std@@YAPBQBVItem@EnumDescriptor@Reflection@RBX@@PBQBV1234@0V?$bind_t@_NP6A_NPBVItem@EnumDescriptor@Reflection@RBX@@H@ZV?$list2@V?$arg@$00@boost@@V?$value@H@_bi@2@@_bi@boost@@@_bi@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
