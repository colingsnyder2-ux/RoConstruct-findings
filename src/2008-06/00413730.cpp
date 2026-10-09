// roc 2008-06 00413730  unit: CutVerb  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00413730
//
// 00413730  64a100000000         mov eax, dword ptr fs:[0]
// 00413736  6aff                 push -1
// 00413738  687ed87b00           push 0x7bd87e
// 0041373d  50                   push eax
// 0041373e  b801000000           mov eax, 1
// 00413743  64892500000000       mov dword ptr fs:[0], esp
// 0041374a  84050ccc9600         test byte ptr [0x96cc0c], al
// 00413750  7530                 jne 0x413782
// 00413752  09050ccc9600         or dword ptr [0x96cc0c], eax
// 00413758  6aff                 push -1
// 0041375a  68e8879400           push 0x9487e8
// 0041375f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00413767  e824081400           call 0x553f90
// 0041376c  83c408               add esp, 8
// 0041376f  a308cc9600           mov dword ptr [0x96cc08], eax
// 00413774  8b0c24               mov ecx, dword ptr [esp]
// 00413777  64890d00000000       mov dword ptr fs:[0], ecx
// 0041377e  83c40c               add esp, 0xc
// 00413781  c3                   ret 
// 00413782  8b0c24               mov ecx, dword ptr [esp]
// 00413785  a108cc9600           mov eax, dword ptr [0x96cc08]
// 0041378a  64890d00000000       mov dword ptr fs:[0], ecx
// 00413791  83c40c               add esp, 0xc
// 00413794  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
