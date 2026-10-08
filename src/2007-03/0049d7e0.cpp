// roc 2007-03 0049d7e0  unit: seg_00490000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049d7e0
//
// 0049d7e0  53                   push ebx
// 0049d7e1  56                   push esi
// 0049d7e2  8bf1                 mov esi, ecx
// 0049d7e4  57                   push edi
// 0049d7e5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0049d7e9  8d5e04               lea ebx, [esi + 4]
// 0049d7ec  57                   push edi
// 0049d7ed  8bcb                 mov ecx, ebx
// 0049d7ef  893e                 mov dword ptr [esi], edi
// 0049d7f1  e8faf7ffff           call 0x49cff0
// 0049d7f6  57                   push edi
// 0049d7f7  57                   push edi
// 0049d7f8  53                   push ebx
// 0049d7f9  e8c2a51f00           call 0x697dc0
// 0049d7fe  83c40c               add esp, 0xc
// 0049d801  5f                   pop edi
// 0049d802  8bc6                 mov eax, esi
// 0049d804  5e                   pop esi
// 0049d805  5b                   pop ebx
// 0049d806  c20400               ret 4
// library rbxgs/reflection\signal.cpp (function ??$?0VSignalInstance@Reflection@RBX@@@?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@QAE@PAVSignalInstance@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
