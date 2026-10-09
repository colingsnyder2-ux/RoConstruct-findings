// roc 2008-06 00413650  unit: CutVerb  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00413650
//
// 00413650  64a100000000         mov eax, dword ptr fs:[0]
// 00413656  6aff                 push -1
// 00413658  683ed87b00           push 0x7bd83e
// 0041365d  50                   push eax
// 0041365e  b801000000           mov eax, 1
// 00413663  64892500000000       mov dword ptr fs:[0], esp
// 0041366a  8405fccb9600         test byte ptr [0x96cbfc], al
// 00413670  7530                 jne 0x4136a2
// 00413672  0905fccb9600         or dword ptr [0x96cbfc], eax
// 00413678  6aff                 push -1
// 0041367a  68e8819400           push 0x9481e8
// 0041367f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00413687  e804091400           call 0x553f90
// 0041368c  83c408               add esp, 8
// 0041368f  a3f8cb9600           mov dword ptr [0x96cbf8], eax
// 00413694  8b0c24               mov ecx, dword ptr [esp]
// 00413697  64890d00000000       mov dword ptr fs:[0], ecx
// 0041369e  83c40c               add esp, 0xc
// 004136a1  c3                   ret 
// 004136a2  8b0c24               mov ecx, dword ptr [esp]
// 004136a5  a1f8cb9600           mov eax, dword ptr [0x96cbf8]
// 004136aa  64890d00000000       mov dword ptr fs:[0], ecx
// 004136b1  83c40c               add esp, 0xc
// 004136b4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
