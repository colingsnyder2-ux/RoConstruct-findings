// roc 2008-06 00406700  unit: VCApp::?$CComObject  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00406700
//
// 00406700  64a100000000         mov eax, dword ptr fs:[0]
// 00406706  6aff                 push -1
// 00406708  68eecd7b00           push 0x7bcdee
// 0040670d  50                   push eax
// 0040670e  b801000000           mov eax, 1
// 00406713  64892500000000       mov dword ptr fs:[0], esp
// 0040671a  8405e0c29600         test byte ptr [0x96c2e0], al
// 00406720  7530                 jne 0x406752
// 00406722  0905e0c29600         or dword ptr [0x96c2e0], eax
// 00406728  6aff                 push -1
// 0040672a  68b8df8200           push 0x82dfb8
// 0040672f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00406737  e854d81400           call 0x553f90
// 0040673c  83c408               add esp, 8
// 0040673f  a3dcc29600           mov dword ptr [0x96c2dc], eax
// 00406744  8b0c24               mov ecx, dword ptr [esp]
// 00406747  64890d00000000       mov dword ptr fs:[0], ecx
// 0040674e  83c40c               add esp, 0xc
// 00406751  c3                   ret 
// 00406752  8b0c24               mov ecx, dword ptr [esp]
// 00406755  a1dcc29600           mov eax, dword ptr [0x96c2dc]
// 0040675a  64890d00000000       mov dword ptr fs:[0], ecx
// 00406761  83c40c               add esp, 0xc
// 00406764  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
