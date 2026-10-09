// roc 2008-06 00406770  unit: VCApp::?$CComObject  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00406770
//
// 00406770  64a100000000         mov eax, dword ptr fs:[0]
// 00406776  6aff                 push -1
// 00406778  680ece7b00           push 0x7bce0e
// 0040677d  50                   push eax
// 0040677e  b801000000           mov eax, 1
// 00406783  64892500000000       mov dword ptr fs:[0], esp
// 0040678a  8405e8c29600         test byte ptr [0x96c2e8], al
// 00406790  7530                 jne 0x4067c2
// 00406792  0905e8c29600         or dword ptr [0x96c2e8], eax
// 00406798  6aff                 push -1
// 0040679a  68d45b8100           push 0x815bd4
// 0040679f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004067a7  e8e4d71400           call 0x553f90
// 004067ac  83c408               add esp, 8
// 004067af  a3e4c29600           mov dword ptr [0x96c2e4], eax
// 004067b4  8b0c24               mov ecx, dword ptr [esp]
// 004067b7  64890d00000000       mov dword ptr fs:[0], ecx
// 004067be  83c40c               add esp, 0xc
// 004067c1  c3                   ret 
// 004067c2  8b0c24               mov ecx, dword ptr [esp]
// 004067c5  a1e4c29600           mov eax, dword ptr [0x96c2e4]
// 004067ca  64890d00000000       mov dword ptr fs:[0], ecx
// 004067d1  83c40c               add esp, 0xc
// 004067d4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
