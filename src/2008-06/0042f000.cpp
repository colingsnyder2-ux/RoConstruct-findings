// roc 2008-06 0042f000  unit: CMainFrame  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042f000
//
// 0042f000  64a100000000         mov eax, dword ptr fs:[0]
// 0042f006  6aff                 push -1
// 0042f008  68def97b00           push 0x7bf9de
// 0042f00d  50                   push eax
// 0042f00e  b801000000           mov eax, 1
// 0042f013  64892500000000       mov dword ptr fs:[0], esp
// 0042f01a  840548d19600         test byte ptr [0x96d148], al
// 0042f020  7530                 jne 0x42f052
// 0042f022  090548d19600         or dword ptr [0x96d148], eax
// 0042f028  6aff                 push -1
// 0042f02a  68084a8300           push 0x834a08
// 0042f02f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0042f037  e8544f1200           call 0x553f90
// 0042f03c  83c408               add esp, 8
// 0042f03f  a344d19600           mov dword ptr [0x96d144], eax
// 0042f044  8b0c24               mov ecx, dword ptr [esp]
// 0042f047  64890d00000000       mov dword ptr fs:[0], ecx
// 0042f04e  83c40c               add esp, 0xc
// 0042f051  c3                   ret 
// 0042f052  8b0c24               mov ecx, dword ptr [esp]
// 0042f055  a144d19600           mov eax, dword ptr [0x96d144]
// 0042f05a  64890d00000000       mov dword ptr fs:[0], ecx
// 0042f061  83c40c               add esp, 0xc
// 0042f064  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
