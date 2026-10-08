// roc 2007-03 0049d750  unit: seg_00490000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049d750
//
// 0049d750  53                   push ebx
// 0049d751  56                   push esi
// 0049d752  8bf1                 mov esi, ecx
// 0049d754  57                   push edi
// 0049d755  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0049d759  8d5e04               lea ebx, [esi + 4]
// 0049d75c  57                   push edi
// 0049d75d  8bcb                 mov ecx, ebx
// 0049d75f  893e                 mov dword ptr [esi], edi
// 0049d761  e8daf6ffff           call 0x49ce40
// 0049d766  57                   push edi
// 0049d767  57                   push edi
// 0049d768  53                   push ebx
// 0049d769  e852a61f00           call 0x697dc0
// 0049d76e  83c40c               add esp, 0xc
// 0049d771  5f                   pop edi
// 0049d772  8bc6                 mov eax, esi
// 0049d774  5e                   pop esi
// 0049d775  5b                   pop ebx
// 0049d776  c20400               ret 4
// library rbxgs/reflection\signal.cpp (function ??$?0VSignalInstance@Reflection@RBX@@@?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@QAE@PAVSignalInstance@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
