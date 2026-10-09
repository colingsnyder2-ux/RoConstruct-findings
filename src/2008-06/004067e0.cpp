// roc 2008-06 004067e0  unit: VCApp::?$CComObject  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004067e0
//
// 004067e0  64a100000000         mov eax, dword ptr fs:[0]
// 004067e6  6aff                 push -1
// 004067e8  682ece7b00           push 0x7bce2e
// 004067ed  50                   push eax
// 004067ee  b801000000           mov eax, 1
// 004067f3  64892500000000       mov dword ptr fs:[0], esp
// 004067fa  8405f0c29600         test byte ptr [0x96c2f0], al
// 00406800  7530                 jne 0x406832
// 00406802  0905f0c29600         or dword ptr [0x96c2f0], eax
// 00406808  6aff                 push -1
// 0040680a  68e8e88200           push 0x82e8e8
// 0040680f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00406817  e874d71400           call 0x553f90
// 0040681c  83c408               add esp, 8
// 0040681f  a3ecc29600           mov dword ptr [0x96c2ec], eax
// 00406824  8b0c24               mov ecx, dword ptr [esp]
// 00406827  64890d00000000       mov dword ptr fs:[0], ecx
// 0040682e  83c40c               add esp, 0xc
// 00406831  c3                   ret 
// 00406832  8b0c24               mov ecx, dword ptr [esp]
// 00406835  a1ecc29600           mov eax, dword ptr [0x96c2ec]
// 0040683a  64890d00000000       mov dword ptr fs:[0], ecx
// 00406841  83c40c               add esp, 0xc
// 00406844  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
