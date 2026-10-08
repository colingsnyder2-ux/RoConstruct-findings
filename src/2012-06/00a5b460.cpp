// roc 2012-06 00a5b460  unit: CXTPPropertyGridPaintManager  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5b460
//
// 00a5b460  8b442404             mov eax, dword ptr [esp + 4]
// 00a5b464  56                   push esi
// 00a5b465  50                   push eax
// 00a5b466  8bf1                 mov esi, ecx
// 00a5b468  e843e8ffff           call 0xa59cb0
// 00a5b46d  c706943bc200         mov dword ptr [esi], 0xc23b94
// 00a5b473  c7460401000000       mov dword ptr [esi + 4], 1
// 00a5b47a  8bc6                 mov eax, esi
// 00a5b47c  5e                   pop esi
// 00a5b47d  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??$?0PAVWorkspace@RBX@@@?$Named@VMouseCommand@RBX@@$1?sGroupDragTool@2@3PBDB@RBX@@QAE@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp
