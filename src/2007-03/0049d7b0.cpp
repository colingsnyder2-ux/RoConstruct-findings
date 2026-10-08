// roc 2007-03 0049d7b0  unit: seg_00490000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049d7b0
//
// 0049d7b0  53                   push ebx
// 0049d7b1  56                   push esi
// 0049d7b2  8bf1                 mov esi, ecx
// 0049d7b4  57                   push edi
// 0049d7b5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0049d7b9  8d5e04               lea ebx, [esi + 4]
// 0049d7bc  57                   push edi
// 0049d7bd  8bcb                 mov ecx, ebx
// 0049d7bf  893e                 mov dword ptr [esi], edi
// 0049d7c1  e89af7ffff           call 0x49cf60
// 0049d7c6  57                   push edi
// 0049d7c7  57                   push edi
// 0049d7c8  53                   push ebx
// 0049d7c9  e8f2a51f00           call 0x697dc0
// 0049d7ce  83c40c               add esp, 0xc
// 0049d7d1  5f                   pop edi
// 0049d7d2  8bc6                 mov eax, esi
// 0049d7d4  5e                   pop esi
// 0049d7d5  5b                   pop ebx
// 0049d7d6  c20400               ret 4
// library rbxgs/reflection\signal.cpp (function ??$?0VSignalInstance@Reflection@RBX@@@?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@QAE@PAVSignalInstance@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
