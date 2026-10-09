// roc 2009-12 0044a070  unit: CRenderSettingsItem  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044a070
//
// 0044a070  56                   push esi
// 0044a071  8b742408             mov esi, dword ptr [esp + 8]
// 0044a075  57                   push edi
// 0044a076  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0044a07a  3bf7                 cmp esi, edi
// 0044a07c  741c                 je 0x44a09a
// 0044a07e  8bff                 mov edi, edi
// 0044a080  8b442418             mov eax, dword ptr [esp + 0x18]
// 0044a084  8b0e                 mov ecx, dword ptr [esi]
// 0044a086  50                   push eax
// 0044a087  51                   push ecx
// 0044a088  ff54241c             call dword ptr [esp + 0x1c]
// 0044a08c  83c408               add esp, 8
// 0044a08f  84c0                 test al, al
// 0044a091  7507                 jne 0x44a09a
// 0044a093  83c604               add esi, 4
// 0044a096  3bf7                 cmp esi, edi
// 0044a098  75e6                 jne 0x44a080
// 0044a09a  5f                   pop edi
// 0044a09b  8bc6                 mov eax, esi
// 0044a09d  5e                   pop esi
// 0044a09e  c3                   ret 
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??$_Find_if@PBQBVItem@EnumDescriptor@Reflection@RBX@@V?$bind_t@_NP6A_NPBVItem@EnumDescriptor@Reflection@RBX@@H@ZV?$list2@V?$arg@$00@boost@@V?$value@H@_bi@2@@_bi@boost@@@_bi@boost@@@std@@YAPBQBVItem@EnumDescriptor@Reflection@RBX@@PBQBV1234@0V?$bind_t@_NP6A_NPBVItem@EnumDescriptor@Reflection@RBX@@H@ZV?$list2@V?$arg@$00@boost@@V?$value@H@_bi@2@@_bi@boost@@@_bi@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
