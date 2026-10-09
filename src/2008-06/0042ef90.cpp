// roc 2008-06 0042ef90  unit: CMainFrame  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042ef90
//
// 0042ef90  64a100000000         mov eax, dword ptr fs:[0]
// 0042ef96  6aff                 push -1
// 0042ef98  68bef97b00           push 0x7bf9be
// 0042ef9d  50                   push eax
// 0042ef9e  b801000000           mov eax, 1
// 0042efa3  64892500000000       mov dword ptr fs:[0], esp
// 0042efaa  840540d19600         test byte ptr [0x96d140], al
// 0042efb0  7530                 jne 0x42efe2
// 0042efb2  090540d19600         or dword ptr [0x96d140], eax
// 0042efb8  6aff                 push -1
// 0042efba  68f8498300           push 0x8349f8
// 0042efbf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0042efc7  e8c44f1200           call 0x553f90
// 0042efcc  83c408               add esp, 8
// 0042efcf  a33cd19600           mov dword ptr [0x96d13c], eax
// 0042efd4  8b0c24               mov ecx, dword ptr [esp]
// 0042efd7  64890d00000000       mov dword ptr fs:[0], ecx
// 0042efde  83c40c               add esp, 0xc
// 0042efe1  c3                   ret 
// 0042efe2  8b0c24               mov ecx, dword ptr [esp]
// 0042efe5  a13cd19600           mov eax, dword ptr [0x96d13c]
// 0042efea  64890d00000000       mov dword ptr fs:[0], ecx
// 0042eff1  83c40c               add esp, 0xc
// 0042eff4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
