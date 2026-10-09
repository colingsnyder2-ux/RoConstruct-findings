// roc 2008-06 004136c0  unit: CutVerb  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004136c0
//
// 004136c0  64a100000000         mov eax, dword ptr fs:[0]
// 004136c6  6aff                 push -1
// 004136c8  685ed87b00           push 0x7bd85e
// 004136cd  50                   push eax
// 004136ce  b801000000           mov eax, 1
// 004136d3  64892500000000       mov dword ptr fs:[0], esp
// 004136da  840504cc9600         test byte ptr [0x96cc04], al
// 004136e0  7530                 jne 0x413712
// 004136e2  090504cc9600         or dword ptr [0x96cc04], eax
// 004136e8  6aff                 push -1
// 004136ea  68e0879400           push 0x9487e0
// 004136ef  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004136f7  e894081400           call 0x553f90
// 004136fc  83c408               add esp, 8
// 004136ff  a300cc9600           mov dword ptr [0x96cc00], eax
// 00413704  8b0c24               mov ecx, dword ptr [esp]
// 00413707  64890d00000000       mov dword ptr fs:[0], ecx
// 0041370e  83c40c               add esp, 0xc
// 00413711  c3                   ret 
// 00413712  8b0c24               mov ecx, dword ptr [esp]
// 00413715  a100cc9600           mov eax, dword ptr [0x96cc00]
// 0041371a  64890d00000000       mov dword ptr fs:[0], ecx
// 00413721  83c40c               add esp, 0xc
// 00413724  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
