// roc 2007-03 0049d780  unit: seg_00490000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049d780
//
// 0049d780  53                   push ebx
// 0049d781  56                   push esi
// 0049d782  8bf1                 mov esi, ecx
// 0049d784  57                   push edi
// 0049d785  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0049d789  8d5e04               lea ebx, [esi + 4]
// 0049d78c  57                   push edi
// 0049d78d  8bcb                 mov ecx, ebx
// 0049d78f  893e                 mov dword ptr [esi], edi
// 0049d791  e83af7ffff           call 0x49ced0
// 0049d796  57                   push edi
// 0049d797  57                   push edi
// 0049d798  53                   push ebx
// 0049d799  e822a61f00           call 0x697dc0
// 0049d79e  83c40c               add esp, 0xc
// 0049d7a1  5f                   pop edi
// 0049d7a2  8bc6                 mov eax, esi
// 0049d7a4  5e                   pop esi
// 0049d7a5  5b                   pop ebx
// 0049d7a6  c20400               ret 4
// library rbxgs/reflection\signal.cpp (function ??$?0VSignalInstance@Reflection@RBX@@@?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@QAE@PAVSignalInstance@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
