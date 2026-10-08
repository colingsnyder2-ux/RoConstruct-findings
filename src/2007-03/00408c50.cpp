// roc 2007-03 00408c50  unit: seg_00400000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00408c50
//
// 00408c50  83ec10               sub esp, 0x10
// 00408c53  56                   push esi
// 00408c54  8bf1                 mov esi, ecx
// 00408c56  807e0400             cmp byte ptr [esi + 4], 0
// 00408c5a  7518                 jne 0x408c74
// 00408c5c  8d4c2404             lea ecx, [esp + 4]
// 00408c60  e8dbde3100           call 0x726b40
// 00408c65  685cfd8300           push 0x83fd5c
// 00408c6a  8d442408             lea eax, [esp + 8]
// 00408c6e  50                   push eax
// 00408c6f  e8ba632100           call 0x61f02e
// 00408c74  8b0e                 mov ecx, dword ptr [esi]
// 00408c76  e825de3100           call 0x726aa0
// 00408c7b  c6460400             mov byte ptr [esi + 4], 0
// 00408c7f  5e                   pop esi
// 00408c80  83c410               add esp, 0x10
// 00408c83  c3                   ret 
// library rbxgs/reflection\reflection_function.cpp (function ?unlock@?$scoped_lock@Vrecursive_mutex@boost@@@thread@detail@boost@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
